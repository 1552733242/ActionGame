// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Attribute/AG_AttributeSetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ACTIONGAME_AG_AttributeSetBase_generated_h
#error "AG_AttributeSetBase.generated.h already included, missing '#pragma once' in AG_AttributeSetBase.h"
#endif
#define ACTIONGAME_AG_AttributeSetBase_generated_h

#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_SPARSE_DATA
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxMovementSpeed); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAG_AttributeSetBase(); \
	friend struct Z_Construct_UClass_UAG_AttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UAG_AttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UAG_AttributeSetBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		MaxMovementSpeed, \
		NETFIELD_REP_END=MaxMovementSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAG_AttributeSetBase) \
public:


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAG_AttributeSetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAG_AttributeSetBase(UAG_AttributeSetBase&&); \
	NO_API UAG_AttributeSetBase(const UAG_AttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAG_AttributeSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAG_AttributeSetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAG_AttributeSetBase) \
	NO_API virtual ~UAG_AttributeSetBase();


#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_20_PROLOG
#define FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_SPARSE_DATA \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UAG_AttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Attribute_AG_AttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
