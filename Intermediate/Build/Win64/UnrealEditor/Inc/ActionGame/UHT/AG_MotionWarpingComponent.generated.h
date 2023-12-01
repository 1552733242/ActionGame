// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AG_MotionWarpingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMotionWarpingTarget;
#ifdef ACTIONGAME_AG_MotionWarpingComponent_generated_h
#error "AG_MotionWarpingComponent.generated.h already included, missing '#pragma once' in AG_MotionWarpingComponent.h"
#endif
#define ACTIONGAME_AG_MotionWarpingComponent_generated_h

#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_SPARSE_DATA
#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSyncWarpPoints_Implementation(TArray<FMotionWarpingTarget> const& Targets); \
 \
	DECLARE_FUNCTION(execMulticastSyncWarpPoints);


#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_CALLBACK_WRAPPERS
#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAG_MotionWarpingComponent(); \
	friend struct Z_Construct_UClass_UAG_MotionWarpingComponent_Statics; \
public: \
	DECLARE_CLASS(UAG_MotionWarpingComponent, UMotionWarpingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UAG_MotionWarpingComponent)


#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAG_MotionWarpingComponent(UAG_MotionWarpingComponent&&); \
	NO_API UAG_MotionWarpingComponent(const UAG_MotionWarpingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAG_MotionWarpingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAG_MotionWarpingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAG_MotionWarpingComponent) \
	NO_API virtual ~UAG_MotionWarpingComponent();


#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_12_PROLOG
#define FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_SPARSE_DATA \
	FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_CALLBACK_WRAPPERS \
	FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UAG_MotionWarpingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
