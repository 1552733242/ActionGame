// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAbilityTask_TickWallRun;
class UCharacterMovementComponent;
class UGameplayAbility;
#ifdef ACTIONGAME_AbilityTask_TickWallRun_generated_h
#error "AbilityTask_TickWallRun.generated.h already included, missing '#pragma once' in AbilityTask_TickWallRun.h"
#endif
#define ACTIONGAME_AbilityTask_TickWallRun_generated_h

#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_9_DELEGATE \
ACTIONGAME_API void FOnWallRunWallSideDeltermenedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWallRunWallSideDeltermenedDelegate, bool bLeftSide);


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_11_DELEGATE \
ACTIONGAME_API void FOnWallRunFinshedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWallRunFinshedDelegate);


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_SPARSE_DATA
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateWallRunTask);


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_TickWallRun(); \
	friend struct Z_Construct_UClass_UAbilityTask_TickWallRun_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_TickWallRun, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_TickWallRun)


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_TickWallRun(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_TickWallRun(UAbilityTask_TickWallRun&&); \
	NO_API UAbilityTask_TickWallRun(const UAbilityTask_TickWallRun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_TickWallRun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_TickWallRun); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_TickWallRun) \
	NO_API virtual ~UAbilityTask_TickWallRun();


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_18_PROLOG
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_SPARSE_DATA \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_INCLASS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UAbilityTask_TickWallRun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
