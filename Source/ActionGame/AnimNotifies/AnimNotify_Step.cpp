// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotifies/AnimNotify_Step.h"

#include "Actors/Characters/AG_CharacterBase.h"
#include "Actors/Components/FootstepsComponent.h"

void UAnimNotify_Step::Notify(USkeletalMeshComponent* MeshComponent, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComponent, Animation);

	check(MeshComponent);

	AAG_CharacterBase* Character = MeshComponent ? Cast<AAG_CharacterBase>(MeshComponent->GetOwner()) : nullptr;

	if(Character)
	{
		if (UFootstepsComponent* FootstepsComponent = Character->GetFootstepsComponent())
		{
			FootstepsComponent->HandleFootstep(Foot);
		}
	}
}
