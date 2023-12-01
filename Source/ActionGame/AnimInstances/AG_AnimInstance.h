// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AG_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONGAME_API UAG_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UBlendSpace* GetLocomotionBlendspace()const;

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UAnimSequenceBase* GetIdleAnimation()const;

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UBlendSpace* GetCrouchLocomotionBlendspace()const;

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UAnimSequenceBase* GetCrouchIdleAnimation()const;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation")
	class UCharacterAnimDataAsset* DefaultCharacterAnimDataAsset;
};
