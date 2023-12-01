// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/AG_GameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAG_CharacterBase;
#ifdef ACTIONGAME_AG_GameplayAbility_generated_h
#error "AG_GameplayAbility.generated.h already included, missing '#pragma once' in AG_GameplayAbility.h"
#endif
#define ACTIONGAME_AG_GameplayAbility_generated_h

#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_SPARSE_DATA
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAG_CharacterFromActorInfo);


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAG_GameplayAbility(); \
	friend struct Z_Construct_UClass_UAG_GameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UAG_GameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UAG_GameplayAbility)


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAG_GameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAG_GameplayAbility(UAG_GameplayAbility&&); \
	NO_API UAG_GameplayAbility(const UAG_GameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAG_GameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAG_GameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAG_GameplayAbility) \
	NO_API virtual ~UAG_GameplayAbility();


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_12_PROLOG
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_SPARSE_DATA \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UAG_GameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
