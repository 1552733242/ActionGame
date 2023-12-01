// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionGameTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_ActionGameTypes_generated_h
#error "ActionGameTypes.generated.h already included, missing '#pragma once' in ActionGameTypes.h"
#endif
#define ACTIONGAME_ActionGameTypes_generated_h

#define FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterData_Statics; \
	ACTIONGAME_API static class UScriptStruct* StaticStruct();


template<> ACTIONGAME_API UScriptStruct* StaticStruct<struct FCharacterData>();

#define FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterAnimationData_Statics; \
	ACTIONGAME_API static class UScriptStruct* StaticStruct();


template<> ACTIONGAME_API UScriptStruct* StaticStruct<struct FCharacterAnimationData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h


#define FOREACH_ENUM_EFOOT(op) \
	op(EFoot::Left) \
	op(EFoot::Right) 

enum class EFoot : uint8;
template<> struct TIsUEnumClass<EFoot> { enum { Value = true }; };
template<> ACTIONGAME_API UEnum* StaticEnum<EFoot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
