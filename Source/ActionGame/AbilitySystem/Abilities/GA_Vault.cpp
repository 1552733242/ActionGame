// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/GA_Vault.h"

#include "Actors/Characters/AG_CharacterBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/AG_MotionWarpingComponent.h"

UGA_Vault::UGA_Vault()
{
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

bool UGA_Vault::CommitCheck(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags)
{
    if (!Super::CommitCheck(Handle, ActorInfo, ActivationInfo, OptionalRelevantTags))return false;
    AAG_CharacterBase* Character = GetAG_CharacterFromActorInfo();

    if (!IsValid(Character)) 
    {
        return false;
    }
    const FVector StartLocation = Character->GetActorLocation();
    const FVector ForwardVector = Character->GetActorForwardVector();
    const FVector UpVector = Character->GetActorUpVector();

    TArray<AActor*>ActorToIgnore = { Character };

    static const auto CVar = IConsoleManager::Get().FindConsoleVariable(TEXT("ShowDebugTraversal"));

    const bool bShowTraversal = CVar ? CVar->GetInt() > 0:false;

    EDrawDebugTrace::Type DebugDrawType = bShowTraversal ? EDrawDebugTrace::Type::ForDuration : EDrawDebugTrace::Type::None;

    bool bJumpToLocation = false;

    int32 JumpToLocationIdx = INDEX_NONE;

    int32 i = 0;

    FHitResult TraceHit;

    float MaxJumpOistance = HorizontalTraceLength;

    for (; i < HorizontalTraceCount; ++i) 
    {
        const FVector TraceStart = StartLocation + i * UpVector * HorizontalTraceStep;
        const FVector TraceEnd = TraceStart + ForwardVector * HorizontalTraceLength;
        if (UKismetSystemLibrary::SphereTraceSingleForObjects(this, TraceStart, TraceEnd, HorizontalTraceRadius, TraceObjectTypes, true, ActorToIgnore,
            DebugDrawType, TraceHit, true))
        {
            if (JumpToLocationIdx == INDEX_NONE && (i < HorizontalTraceCount - 1))
            {
                JumpToLocationIdx = i;
                JumpToLocation = TraceHit.Location;
            }
            else if (JumpToLocationIdx == (i - 1))
            {
                MaxJumpOistance = FVector::Dist2D(TraceHit.Location, TraceStart);
            }
        }
        else
        {
            if (JumpToLocationIdx != INDEX_NONE)
            {
                break;
            }
        }
    }
    if (JumpToLocationIdx == INDEX_NONE) 
    {
        return false;
    }

    const float DistanceToJumpTo = FVector::Dist2D(StartLocation, JumpToLocation);

    const float MaxVerticalTraceDistance = MaxJumpOistance - DistanceToJumpTo;

    if (MaxVerticalTraceDistance < 0)
    {
        return false;
    }
    if (i == HorizontalTraceCount)
    {
        i = HorizontalTraceCount - 1;
    }
    const float VerticalTraceLength = FMath::Abs(JumpToLocation.Z - (StartLocation + i * UpVector * HorizontalTraceStep).Z);

    FVector VerticalStartLocation = JumpToLocation + UpVector * VerticalTraceLength;

    i = 0;

    const float VerticalTraceCount = MaxVerticalTraceDistance / VerticalTraceStep;

    bool bJumpOverLocationSet = false;

    for (; i <= VerticalTraceCount; ++i)
    {
        const FVector TraceStart = VerticalStartLocation + i * ForwardVector * VerticalTraceStep;
        const FVector TraceEnd = TraceStart + UpVector * VerticalTraceLength * -1;
        
        if (UKismetSystemLibrary::SphereTraceSingleForObjects(this, TraceStart, TraceEnd, HorizontalTraceRadius, TraceObjectTypes, true, ActorToIgnore,
            DebugDrawType, TraceHit, true))
        {
            JumpOverLocation = TraceHit.ImpactPoint;

            if (i == 0)
            {
                JumpToLocation = JumpOverLocation;
            }
        }
        else if (i != 0)
        {
            bJumpOverLocationSet = true;
            break;
        }
    
    }
    if (!bJumpOverLocationSet)
    {
        return false;
    }
    const FVector TraceStart = JumpOverLocation + ForwardVector * VerticalTraceStep;

    if (UKismetSystemLibrary::SphereTraceSingleForObjects(this, TraceStart, JumpOverLocation, HorizontalTraceRadius, TraceObjectTypes, true, ActorToIgnore,
        DebugDrawType, TraceHit, true))
    {
        JumpOverLocation = TraceHit.ImpactPoint;

        if (bShowTraversal)
        {
            DrawDebugSphere(GetWorld(), JumpToLocation, 15, 16, FColor::White, false, 7);
            DrawDebugSphere(GetWorld(), JumpOverLocation, 15, 16, FColor::White, false, 7);
        }

    }
    return true;
}

void UGA_Vault::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
    
    if (!CommitCheck(Handle, ActorInfo, ActivationInfo))
    {
        K2_EndAbility();
        return;
    }
    AAG_CharacterBase* Character = GetAG_CharacterFromActorInfo();

    UCharacterMovementComponent* CharacterMovement = Character ? Character->GetCharacterMovement() : nullptr;

    if (CharacterMovement)
    {
        CharacterMovement->SetMovementMode(MOVE_Flying);
    }

    UCapsuleComponent* CapsuleComponent = Character ? Character->GetCapsuleComponent() : nullptr;

    if (CapsuleComponent)
    {
        for (ECollisionChannel Channel : CollisionChannelsToIgnore)
        {
            CapsuleComponent->SetCollisionResponseToChannel(Channel, ECollisionResponse::ECR_Ignore);
        }
    }
    
    UAG_MotionWarpingComponent* MotionWarpingComponent = Character ? Character->GetMotionWarpingComponent() : nullptr;
    if (MotionWarpingComponent)
    {
        MotionWarpingComponent->AddOrUpdateWarpTargetFromLocationAndRotation(TEXT("JumpToLocation"), JumpToLocation, Character->GetActorRotation());
        MotionWarpingComponent->AddOrUpdateWarpTargetFromLocationAndRotation(TEXT("JumpOverLocation"), JumpOverLocation, Character->GetActorRotation());

        MotionWarpingComponent->SendWarpPointsToClients();
    }

    MontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, NAME_None, VaultMontage);

    MontageTask->OnBlendOut.AddDynamic(this, &UGA_Vault::K2_EndAbility);
    MontageTask->OnCompleted.AddDynamic(this, &UGA_Vault::K2_EndAbility);
    MontageTask->OnInterrupted.AddDynamic(this, &UGA_Vault::K2_EndAbility);
    MontageTask->OnCancelled.AddDynamic(this, &UGA_Vault::K2_EndAbility);
    MontageTask->ReadyForActivation();
}

void UGA_Vault::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    if (IsValid(MontageTask))
    {
        MontageTask->EndTask();
    }

    AAG_CharacterBase* Character = GetAG_CharacterFromActorInfo();

    UCapsuleComponent* CapsuleComponent = Character ? Character->GetCapsuleComponent() : nullptr;

    if (CapsuleComponent)
    {
        for (ECollisionChannel Channel : CollisionChannelsToIgnore)
        {
            CapsuleComponent->SetCollisionResponseToChannel(Channel, ECollisionResponse::ECR_Block);
        }
    }
    UCharacterMovementComponent* CharacterMovement = Character ? Character->GetCharacterMovement() : nullptr;

    if (CharacterMovement && CharacterMovement->IsFlying())
    {
        CharacterMovement->SetMovementMode(MOVE_Falling);
    }

    UAG_MotionWarpingComponent* MotionWarpingComponent = Character ? Character->GetMotionWarpingComponent() : nullptr;

    if (MotionWarpingComponent)
    {
        MotionWarpingComponent->RemoveWarpTarget(TEXT("JumpToLocation"));
        MotionWarpingComponent->RemoveWarpTarget(TEXT("JumpOverLocation"));
    }
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
