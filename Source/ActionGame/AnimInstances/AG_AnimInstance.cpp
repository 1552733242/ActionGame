// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/AG_AnimInstance.h"
#include "Actors/Characters/AG_CharacterBase.h"
#include "DataAssets/CharacterAnimDataAsset.h"

UBlendSpace* UAG_AnimInstance::GetLocomotionBlendspace() const
{
    if (AAG_CharacterBase* AG_Character = Cast<AAG_CharacterBase>(GetOwningActor())) {
        
        FCharacterData Data = AG_Character->GetCharacterData();
        if (Data.CharacterAnimDataAsset) {
            return Data.CharacterAnimDataAsset->CharacterAnimationData.MovementBlendSpace;
        }
    }

    return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharacterAnimationData.MovementBlendSpace : nullptr;
}

UAnimSequenceBase* UAG_AnimInstance::GetIdleAnimation() const
{
    if (AAG_CharacterBase* AG_Character = Cast<AAG_CharacterBase>(GetOwningActor())) {

        FCharacterData Data = AG_Character->GetCharacterData();
        if (Data.CharacterAnimDataAsset) {
            return Data.CharacterAnimDataAsset->CharacterAnimationData.IdleAnimationAsset;
        }
    }

    return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharacterAnimationData.IdleAnimationAsset : nullptr;

}

UBlendSpace* UAG_AnimInstance::GetCrouchLocomotionBlendspace() const
{
    if (AAG_CharacterBase* AG_Character = Cast<AAG_CharacterBase>(GetOwningActor())) {

        FCharacterData Data = AG_Character->GetCharacterData();
        if (Data.CharacterAnimDataAsset) {
            return Data.CharacterAnimDataAsset->CharacterAnimationData.CrouchMovementBlendSpace;
        }
    }

    return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharacterAnimationData.CrouchMovementBlendSpace : nullptr;

}

UAnimSequenceBase* UAG_AnimInstance::GetCrouchIdleAnimation() const
{
    if (AAG_CharacterBase* AG_Character = Cast<AAG_CharacterBase>(GetOwningActor())) {

        FCharacterData Data = AG_Character->GetCharacterData();
        if (Data.CharacterAnimDataAsset) {
            return Data.CharacterAnimDataAsset->CharacterAnimationData.CrouchIdleAnimationAsset;
        }
    }

    return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharacterAnimationData.CrouchIdleAnimationAsset : nullptr;
}
