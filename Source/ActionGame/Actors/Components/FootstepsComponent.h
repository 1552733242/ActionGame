// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionGameTypes.h"
#include "FootstepsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONGAME_API UFootstepsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UFootstepsComponent();

	void HandleFootstep(EFoot Foot);

	UPROPERTY(EditDefaultsOnly)
	FName LeftFootSocketName = TEXT("foot_l");
	UPROPERTY(EditDefaultsOnly)
	FName RightFootSocketName = TEXT("foot_r");


protected:
	
	virtual void BeginPlay() override;

		
};
