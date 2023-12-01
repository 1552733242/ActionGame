// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/GA_WallRun.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ACTIONGAME_GA_WallRun_generated_h
#error "GA_WallRun.generated.h already included, missing '#pragma once' in GA_WallRun.h"
#endif
#define ACTIONGAME_GA_WallRun_generated_h

#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_SPARSE_DATA
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWallSideDetermened); \
	DECLARE_FUNCTION(execOnCapsuleComponentHit);


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_WallRun(); \
	friend struct Z_Construct_UClass_UGA_WallRun_Statics; \
public: \
	DECLARE_CLASS(UGA_WallRun, UAG_GameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UGA_WallRun)


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGA_WallRun(UGA_WallRun&&); \
	NO_API UGA_WallRun(const UGA_WallRun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_WallRun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_WallRun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_WallRun) \
	NO_API virtual ~UGA_WallRun();


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_13_PROLOG
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_SPARSE_DATA \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UGA_WallRun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
