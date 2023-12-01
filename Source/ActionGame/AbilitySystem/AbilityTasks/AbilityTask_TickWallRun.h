// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_TickWallRun.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWallRunWallSideDeltermenedDelegate, bool, bLeftSide);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWallRunFinshedDelegate);

class ACharacter;

class UCharacterMovementComponent;


UCLASS()
class ACTIONGAME_API UAbilityTask_TickWallRun : public UAbilityTask
{
	GENERATED_BODY()
	

public:
	
	UPROPERTY(BlueprintAssignable)
	FOnWallRunFinshedDelegate OnFinished;

	UPROPERTY(BlueprintAssignable)
	FOnWallRunWallSideDeltermenedDelegate OnWallSideDeltermened;

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HiddenPin = "OwningAbility",DefaultToSelf = "OwningAbility"))
	static UAbilityTask_TickWallRun* CreateWallRunTask(UGameplayAbility* OwningAbility, ACharacter* InCharacterOwner, UCharacterMovementComponent* InCharacterMovement,
		TArray<TEnumAsByte<EObjectTypeQuery>>TraceObjectTypes);

	virtual void Activate() override;

	virtual void OnDestroy(bool bInOwnerFinished) override;

	virtual void TickTask(float DeltaTime)override;

protected:

	UCharacterMovementComponent* CharacterMovement = nullptr;

	ACharacter* CharacterOwner = nullptr;

	TArray<TEnumAsByte<EObjectTypeQuery>> WallRun_TraceObjectTypes;

	bool FindRunableWall(FHitResult& OnWallHit);

	bool IsWallOnTheLeft(const FHitResult& InWallHit)const;


};
