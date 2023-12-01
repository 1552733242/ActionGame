// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Characters/AG_CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterData;
#ifdef ACTIONGAME_AG_CharacterBase_generated_h
#error "AG_CharacterBase.generated.h already included, missing '#pragma once' in AG_CharacterBase.h"
#endif
#define ACTIONGAME_AG_CharacterBase_generated_h

#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_SPARSE_DATA
#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CharacterData); \
	DECLARE_FUNCTION(execSetCharacterData); \
	DECLARE_FUNCTION(execGetCharacterData);


#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_ACCESSORS
#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAG_CharacterBase(); \
	friend struct Z_Construct_UClass_AAG_CharacterBase_Statics; \
public: \
	DECLARE_CLASS(AAG_CharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(AAG_CharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AAG_CharacterBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterData=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAG_CharacterBase(AAG_CharacterBase&&); \
	NO_API AAG_CharacterBase(const AAG_CharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAG_CharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAG_CharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAG_CharacterBase) \
	NO_API virtual ~AAG_CharacterBase();


#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_22_PROLOG
#define FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_SPARSE_DATA \
	FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_ACCESSORS \
	FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class AAG_CharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
