// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/AG_GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "Actors/Characters/AG_CharacterBase.h"
void UAG_GameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	FGameplayEffectContextHandle EffectContext = ActorInfo->AbilitySystemComponent->MakeEffectContext();

	for (auto GameplayEffect : OngoingEffectsToJustApplyOnStart) 
	{

		if (!GameplayEffect.Get())continue;

		if (UAbilitySystemComponent* AbilitySystemComponent = ActorInfo->AbilitySystemComponent.Get()) 
		{
		
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, 1, EffectContext);

			if (SpecHandle.IsValid())
			{
				FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
				if (!ActiveGEHandle.WasSuccessfullyApplied()) {

					UE_LOG(LogTemp, Error, TEXT("Ability %s Failed to apply startup effect! %s"), *GetName(), *GetNameSafe(GameplayEffect));
				}
			}
		}
	}
	if (IsInstantiated())
	{
		for (auto GameplayEffect : OngoingEffectsToRemoveOnEnd)
		{
			if (!GameplayEffect.Get())continue;

			if (UAbilitySystemComponent* AbilitySystemComponent = ActorInfo->AbilitySystemComponent.Get()) 
			{

				FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, 1, EffectContext);

				if (SpecHandle.IsValid())
				{
					FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
					if (!ActiveGEHandle.WasSuccessfullyApplied()) {

						UE_LOG(LogTemp, Error, TEXT("Ability %s Failed to apply startup effect! %s"), *GetName(), *GetNameSafe(GameplayEffect));
					}
					else {
						RemoveOnEndEffectHandle.Add(ActiveGEHandle);
					}

				}
			}
		}
	}
}

void UAG_GameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (IsInstantiated())
	{
		for (FActiveGameplayEffectHandle ActiveEffectHandle : RemoveOnEndEffectHandle) 
		{
			if (ActiveEffectHandle.IsValid()) 
			{
				ActorInfo->AbilitySystemComponent->RemoveActiveGameplayEffect(ActiveEffectHandle);
			}
		}
		RemoveOnEndEffectHandle.Empty();
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

AAG_CharacterBase* UAG_GameplayAbility::GetAG_CharacterFromActorInfo() const
{
	return Cast<AAG_CharacterBase>(GetAvatarActorFromActorInfo());
}
