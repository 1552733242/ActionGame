// Fill out your copyright notice in the Description page of Project Settings.

#include "Actors/Components/FootstepsComponent.h"
#include "Actors/Characters/AG_CharacterBase.h"
#include "PhysicalMaterials/AG_PhysicalMaterial.h"
#include "Kismet/GameplayStatics.h"

#include "DrawDebugHelpers.h"

static TAutoConsoleVariable<int32> CVarShowFootsteps(
	TEXT("ShowDebugFootsteps"),
	0,
	TEXT("Draws Debug Info About Footsteps")
	TEXT("  0: off/n")
	TEXT("  1: on/n"),
	ECVF_Cheat
);

UFootstepsComponent::UFootstepsComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UFootstepsComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void UFootstepsComponent::HandleFootstep(EFoot Foot)
{
	if (AAG_CharacterBase* Character = Cast<AAG_CharacterBase>(GetOwner())) 
	{

		const int32 DebugShowFootsteps = CVarShowFootsteps.GetValueOnAnyThread();


		if (USkeletalMeshComponent* Mesh = Character->GetMesh()) 
		{
			FHitResult HitResult;
			const FVector SocketLocation = Mesh->GetSocketLocation(
				Foot == EFoot::Left ?
				LeftFootSocketName : 
				RightFootSocketName);
			const FVector Location = SocketLocation + FVector::UpVector * 20;

			FCollisionQueryParams QueryParams;
			QueryParams.bReturnPhysicalMaterial = true;
			QueryParams.AddIgnoredActor(Character);

			if (GetWorld()->LineTraceSingleByChannel(HitResult, Location, Location - FVector::UpVector * 50.f,
				ECollisionChannel::ECC_WorldStatic, QueryParams)) 
			{
				if (HitResult.bBlockingHit) 
				{
					if (UPhysicalMaterial*HitPhysicalMaterial =  HitResult.PhysMaterial.Get()) 
					{
						
						UAG_PhysicalMaterial* PhysicalMaterial = Cast<UAG_PhysicalMaterial>(HitPhysicalMaterial);
						
						if (PhysicalMaterial) 
						{
							UGameplayStatics::PlaySoundAtLocation(this, PhysicalMaterial->FootstepSound, Location, 1.f);
						}

						if (DebugShowFootsteps > 0) 
						{
							DrawDebugString(GetWorld(), Location, GetNameSafe(PhysicalMaterial), nullptr, FColor::White, 4.f);
						}
					}
					if (DebugShowFootsteps > 0) 
					{
						DrawDebugSphere(GetWorld(), Location, 16, 16, FColor::Red, false, 4.f);
					}
				}
				else
				{
					if (DebugShowFootsteps > 0)
					{
						DrawDebugLine(GetWorld(), Location, Location - FVector::UpVector * 50.f, FColor::Red, false, 4, 0, 1);
					}
				}
			}
		}

	}
}

