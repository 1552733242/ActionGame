// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemInterface.h"
#include "ActionGameTypes.h"
#include "AG_CharacterBase.generated.h"

class UGameplayEffect;
class UGameplayAbility;

class UAG_AbilitySystemComponentBase;
class UAG_AttributeSetBase;

class UCharacterDataAsset;
class UAG_MotionWarpingComponent;
class UFootstepsComponent;

UCLASS()
class ACTIONGAME_API AAG_CharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
public:

	AAG_CharacterBase(const FObjectInitializer& ObjectInitializer);

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PostInitializeComponents()override;

	virtual void PawnClientRestart()override;
	
	bool ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect>Effect, FGameplayEffectContextHandle InEffectContext);

	virtual UAbilitySystemComponent* GetAbilitySystemComponent()const  override;

	UFootstepsComponent* GetFootstepsComponent()const;

	UAG_MotionWarpingComponent* GetMotionWarpingComponent()const;

	virtual void Landed(const FHitResult& Hit) override;

	virtual void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;

	virtual void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;

protected:

	void GiveDefaultAbilities();

	void ApplyStartupEffects();

	virtual void PossessedBy(AController* NewController)override;

	virtual void OnRep_PlayerState()override;


	UPROPERTY(EditDefaultsOnly)
	UAG_AbilitySystemComponentBase* AbilitySystemComponent;

	UPROPERTY(Transient)//属性是临时的不会被保存到硬盘，加载时用0替换
	UAG_AttributeSetBase* AttributeSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = MotionWarp)
	UAG_MotionWarpingComponent* MotionWarpingComponent;

	class UAG_CharacterMovementComponent* AGCharacterMovment;
public:
	UFUNCTION(BlueprintCallable)
	FCharacterData GetCharacterData()const;

	UFUNCTION(BlueprintCallable)
	void SetCharacterData(const FCharacterData& Data);

	void OnMaxMovementSpeedChanged(const FOnAttributeChangeData& Data);
protected:

	UPROPERTY(ReplicatedUsing = OnRep_CharacterData)
	FCharacterData CharacterData;

	UFUNCTION()
	void OnRep_CharacterData();

	virtual void InitFromCharacterData(const FCharacterData& Data, bool bFromReplication = false);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const override;

	UPROPERTY(EditDefaultsOnly)
	UCharacterDataAsset* CharacterDataAsset;

	UPROPERTY(BlueprintReadOnly)
	class UFootstepsComponent* FootstepsComponent;

	//Enhanced Input
	UPROPERTY(EditdefaultsOnly)
	class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditdefaultsOnly)
	class UInputAction* IAMoveAction;

	UPROPERTY(EditdefaultsOnly)
	class UInputAction* IALookAction;

	UPROPERTY(EditdefaultsOnly)
	class UInputAction* IAJumpAction;

	UPROPERTY(EditdefaultsOnly)
	class UInputAction* IACrouchAction;

	UPROPERTY(EditdefaultsOnly)
	class UInputAction* IASprintAction;

	void OnMoveAction(const struct FInputActionValue& Value);

	void OnLookAction(const struct FInputActionValue& Value);

	void OnJumpActionStart(const struct FInputActionValue& Value);

	void OnJumpActionEnded(const struct FInputActionValue& Value);

	void OnCrouchActionStart(const struct FInputActionValue& Value);

	void OnCrouchActionEnded(const struct FInputActionValue& Value);

	void OnSprintActionStart(const struct FInputActionValue& Value);

	void OnSprintActionEnded(const struct FInputActionValue& Value);
protected:
	//GamplayEvent

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag JumpEventTag;

	//GameplayTags
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer InAirTags;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer CrouchTags;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer SprintTags;

protected:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> CrouchStartEffect;

protected:
	//Delegates
	FDelegateHandle MaxMovementSpeedChangeDelegateHandle;
};
