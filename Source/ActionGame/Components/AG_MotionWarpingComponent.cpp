// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/AG_MotionWarpingComponent.h"

UAG_MotionWarpingComponent::UAG_MotionWarpingComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
}


void UAG_MotionWarpingComponent::SendWarpPointsToClients()
{
	if (GetOwnerRole() == ROLE_Authority)
	{
		//TArray<FMotionWarpingTargetByLocationAndRotation> WarpTargets;

		/*for (auto WarpTarget : WarpTargets)
		{
			FMotionWarpingTargetByLocationAndRotation MotionWarpingTarget(WarpTarget.Name, WarpTarget.Location, WarpTarget.Rotation);

			WarpTargets.Add(MotionWarpingTarget);
		}*/
		MulticastSyncWarpPoints(WarpTargets);
	}
}

void UAG_MotionWarpingComponent::MulticastSyncWarpPoints_Implementation(const TArray<FMotionWarpingTarget>& Targets)
{
	for (const FMotionWarpingTarget& Target : Targets)
	{
		AddOrUpdateWarpTargetFromLocationAndRotation(Target.Name, Target.Location, Target.Rotation);
	}
}
