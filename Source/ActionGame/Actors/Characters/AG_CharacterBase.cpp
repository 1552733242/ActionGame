
#include "Actors/Characters/AG_CharacterBase.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/Attribute/AG_AttributeSetBase.h"
#include "AbilitySystem/Components/AG_AbilitySystemComponentBase.h"
#include "DataAssets/CharacterDataAsset.h"
#include "Components/AG_CharacterMovementComponent.h"
#include "Actors/Components/FootstepsComponent.h"


#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"


void AAG_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

AAG_CharacterBase::AAG_CharacterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass<UAG_CharacterMovementComponent>(Super::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;


	AbilitySystemComponent = CreateDefaultSubobject<UAG_AbilitySystemComponentBase>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAG_AttributeSetBase>(TEXT("AttributeSet"));

	FootstepsComponent = CreateDefaultSubobject<UFootstepsComponent>(TEXT("FootstepsComponent"));

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
	(AttributeSet->GetMaxMovementSpeedAttribute()).AddUObject(this, &ThisClass::OnMaxMovementSpeedChanged);

	MotionWarpingComponent = CreateDefaultSubobject<UAG_MotionWarpingComponent>(TEXT("MotionWarpingComponent"));

	AGCharacterMovment = Cast<UAG_CharacterMovementComponent>(GetCharacterMovement());
}

void AAG_CharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAG_CharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* PlayEnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (IAMoveAction) {
			PlayEnhancedInputComponent->BindAction(IAMoveAction, ETriggerEvent::Triggered, this, &ThisClass::OnMoveAction);
		}
		if (IALookAction) {
			PlayEnhancedInputComponent->BindAction(IALookAction, ETriggerEvent::Triggered, this, &ThisClass::OnLookAction);
		}
		if (IAJumpAction) {
			PlayEnhancedInputComponent->BindAction(IAJumpAction, ETriggerEvent::Started, this, &ThisClass::OnJumpActionStart);
			PlayEnhancedInputComponent->BindAction(IAJumpAction, ETriggerEvent::Completed, this, &ThisClass::OnJumpActionEnded);
		}
		if (IACrouchAction) {
			PlayEnhancedInputComponent->BindAction(IACrouchAction, ETriggerEvent::Started, this, &ThisClass::OnCrouchActionStart);
			PlayEnhancedInputComponent->BindAction(IACrouchAction, ETriggerEvent::Completed, this, &ThisClass::OnCrouchActionEnded);
		}
		if (IASprintAction) {
			PlayEnhancedInputComponent->BindAction(IASprintAction, ETriggerEvent::Started, this, &ThisClass::OnSprintActionStart);
			PlayEnhancedInputComponent->BindAction(IASprintAction, ETriggerEvent::Completed, this, &ThisClass::OnSprintActionEnded);
		}
	}

}
void AAG_CharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (IsValid(CharacterDataAsset)) {
		SetCharacterData(CharacterDataAsset->CharacterData);
	}
}
void AAG_CharacterBase::PawnClientRestart()
{
	Super::PawnClientRestart();
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}
bool AAG_CharacterBase::ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> Effect, FGameplayEffectContextHandle InEffectContext)
{
	if(!Effect.Get())return false;
	
	FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(Effect, 1, InEffectContext);
	if (SpecHandle.IsValid()) {

		FActiveGameplayEffectHandle ActiveHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());

		return ActiveHandle.WasSuccessfullyApplied();
	}
	return false;
}

UAbilitySystemComponent* AAG_CharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UFootstepsComponent* AAG_CharacterBase::GetFootstepsComponent() const
{
	return FootstepsComponent;
}

UAG_MotionWarpingComponent* AAG_CharacterBase::GetMotionWarpingComponent() const
{
	return MotionWarpingComponent;
}

void AAG_CharacterBase::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	if(AbilitySystemComponent)
	{
		AbilitySystemComponent->RemoveActiveEffectsWithTags(InAirTags);
	}
}

void AAG_CharacterBase::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);

	if (!CrouchStartEffect.Get())return;


	if (AbilitySystemComponent)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(CrouchStartEffect, 1, EffectContext);

		if (SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			if (!ActiveGEHandle.WasSuccessfullyApplied()) {

				UE_LOG(LogTemp, Error, TEXT("Ability %s Failed to apply crouch effect! %s"), *GetName(), *GetNameSafe(CrouchStartEffect));
			}
		}
	}
}

void AAG_CharacterBase::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(CrouchStartEffect, AbilitySystemComponent);
	}
	Super::OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
}

void AAG_CharacterBase::GiveDefaultAbilities()
{
	if (HasAuthority() && AbilitySystemComponent) {
		for (TSubclassOf<UGameplayAbility>DefaultAbility : CharacterData.Abilities) {
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(DefaultAbility));
		}
	}
}

void AAG_CharacterBase::ApplyStartupEffects()
{
	if (GetLocalRole() == ROLE_Authority) {
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		for (auto DefaultEffect : CharacterData.Effects) {
			ApplyGameplayEffectToSelf(DefaultEffect, EffectContext);
		}
	}
}

void AAG_CharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	
	GiveDefaultAbilities();
	ApplyStartupEffects();
}

void AAG_CharacterBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

FCharacterData AAG_CharacterBase::GetCharacterData() const
{
	return CharacterData;
}

void AAG_CharacterBase::SetCharacterData(const FCharacterData& Data)
{
	CharacterData = Data;
	InitFromCharacterData(CharacterData);
}

void AAG_CharacterBase::OnMaxMovementSpeedChanged(const FOnAttributeChangeData& Data)
{
	GetCharacterMovement()->MaxWalkSpeed = Data.NewValue;
}

void AAG_CharacterBase::OnRep_CharacterData()
{
	InitFromCharacterData(CharacterData, true);
}

void AAG_CharacterBase::InitFromCharacterData(const FCharacterData& Data, bool bFromReplication)
{

}

void AAG_CharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAG_CharacterBase, CharacterData);
}

void AAG_CharacterBase::OnMoveAction(const FInputActionValue& Value)
{
	FVector2D  MoveMent = Value.Get<FVector2D>();
	FRotator Dir = FRotator(0, GetControlRotation().Yaw, 0);
	AddMovementInput(Dir.Quaternion().GetRightVector(), MoveMent.X);
	AddMovementInput(Dir.Quaternion().GetForwardVector(), MoveMent.Y);
}

void AAG_CharacterBase::OnLookAction(const FInputActionValue& Value)
{
	FVector2D  LookMent = Value.Get<FVector2D>();
	AddControllerYawInput(LookMent.X);
	AddControllerPitchInput(LookMent.Y);
}

void AAG_CharacterBase::OnJumpActionStart(const FInputActionValue& Value)
{
	//FGameplayEventData PayLoad;
	//PayLoad.Instigator = this;
	//PayLoad.EventTag = JumpEventTag;
	//UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(this, JumpEventTag, PayLoad);
	AGCharacterMovment->TryTraversal(AbilitySystemComponent);

}

void AAG_CharacterBase::OnJumpActionEnded(const FInputActionValue& Value)
{

}

void AAG_CharacterBase::OnCrouchActionStart(const FInputActionValue& Value)
{
	if (AbilitySystemComponent) 
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(CrouchTags, true);
	}
}

void AAG_CharacterBase::OnCrouchActionEnded(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->CancelAbilities(&CrouchTags);
	}

}

void AAG_CharacterBase::OnSprintActionStart(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(SprintTags, true);
	}
}

void AAG_CharacterBase::OnSprintActionEnded(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->CancelAbilities(&SprintTags);
	}
}


