// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/GA_WallRun.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h"
#include "Actors/Characters/AG_CharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"

UGA_WallRun::UGA_WallRun()
{
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UGA_WallRun::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
    Super::OnGiveAbility(ActorInfo, Spec);


    ACharacter* CharacterAvate = Cast<ACharacter>(ActorInfo->AvatarActor);

    UCapsuleComponent* CapsuleComponent = CharacterAvate->GetCapsuleComponent();

    CapsuleComponent->OnComponentHit.AddDynamic(this, &ThisClass::OnCapsuleComponentHit);
}

void UGA_WallRun::OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
    if (ActorInfo)
    {
        ACharacter* CharacterAvate = Cast<ACharacter>(ActorInfo->AvatarActor);
        
        UCapsuleComponent* CapsuleComponent = CharacterAvate->GetCapsuleComponent();

        CapsuleComponent->OnComponentHit.RemoveDynamic(this, &ThisClass::OnCapsuleComponentHit);
    }
    Super::OnRemoveAbility(ActorInfo, Spec);
}

bool UGA_WallRun::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
    Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);

    AAG_CharacterBase* CharacterAvatar =  GetAG_CharacterFromActorInfo();
    
    
    return CharacterAvatar&& !CharacterAvatar->GetCharacterMovement()->IsMovingOnGround();
}

void UGA_WallRun::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

    WallRunTickTask = UAbilityTask_TickWallRun::CreateWallRunTask(this,Cast<ACharacter>(GetAvatarActorFromActorInfo()),
        Cast<UCharacterMovementComponent>(ActorInfo->MovementComponent),WallRun_TraceObjectTypes);

    if (WallRunTickTask)
    {
        WallRunTickTask->OnFinished.AddDynamic(this, &ThisClass::K2_EndAbility);
        WallRunTickTask->OnWallSideDeltermened.AddDynamic(this, &ThisClass::OnWallSideDetermened);

        WallRunTickTask->ReadyForActivation();
    }
}

void UGA_WallRun::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{   
    if(IsValid(WallRunTickTask))
    { 
          WallRunTickTask->EndTask();
    }
    UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
    if(AbilitySystemComponent)
    {
        AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(WallRunLeftSideEffectClass,AbilitySystemComponent);
        AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(WallRunRightSideEffectClass,AbilitySystemComponent);
    }

    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UGA_WallRun::OnCapsuleComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
    if(AbilitySystemComponent)
    {
        AbilitySystemComponent->TryActivateAbility(GetCurrentAbilitySpec()->Handle);
    }
}

void UGA_WallRun::OnWallSideDetermened(bool bLefeSide)
{
    AAG_CharacterBase* CharacterAvatar = GetAG_CharacterFromActorInfo();

    UAbilitySystemComponent*AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();

    FGameplayEffectContextHandle EffectContextHandle =  AbilitySystemComponent->MakeEffectContext();

    if(bLefeSide)
    {
        CharacterAvatar->ApplyGameplayEffectToSelf(WallRunLeftSideEffectClass,EffectContextHandle);
    }
    else
    {
        CharacterAvatar->ApplyGameplayEffectToSelf(WallRunRightSideEffectClass,EffectContextHandle);
    }
}
