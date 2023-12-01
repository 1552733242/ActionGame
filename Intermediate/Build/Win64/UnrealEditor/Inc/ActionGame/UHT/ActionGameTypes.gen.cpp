// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionGameTypes() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister();
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_EFoot();
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterAnimationData();
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterData;
class UScriptStruct* FCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterData, (UObject*)Z_Construct_UPackage__Script_ActionGame(), TEXT("CharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton;
}
template<> ACTIONGAME_API UScriptStruct* StaticStruct<FCharacterData>()
{
	return FCharacterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAnimDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterData>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData), Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData), Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset = { "CharacterAnimDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, CharacterAnimDataAsset), Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset_MetaData), Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
		nullptr,
		&NewStructOps,
		"CharacterData",
		Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers),
		sizeof(FCharacterData),
		alignof(FCharacterData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterData()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterAnimationData;
class UScriptStruct* FCharacterAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterAnimationData, (UObject*)Z_Construct_UPackage__Script_ActionGame(), TEXT("CharacterAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterAnimationData.OuterSingleton;
}
template<> ACTIONGAME_API UScriptStruct* StaticStruct<FCharacterAnimationData>()
{
	return FCharacterAnimationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterAnimationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBlendSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimationAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchMovementBlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchMovementBlendSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchIdleAnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchIdleAnimationAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterAnimationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendSpace_MetaData[] = {
		{ "Category", "CharacterAnimationData" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendSpace = { "MovementBlendSpace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAnimationData, MovementBlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendSpace_MetaData), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset_MetaData[] = {
		{ "Category", "CharacterAnimationData" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset = { "IdleAnimationAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAnimationData, IdleAnimationAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset_MetaData), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendSpace_MetaData[] = {
		{ "Category", "CharacterAnimationData" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendSpace = { "CrouchMovementBlendSpace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAnimationData, CrouchMovementBlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendSpace_MetaData), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset_MetaData[] = {
		{ "Category", "CharacterAnimationData" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset = { "CrouchIdleAnimationAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAnimationData, CrouchIdleAnimationAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset_MetaData), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
		nullptr,
		&NewStructOps,
		"CharacterAnimationData",
		Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::PropPointers),
		sizeof(FCharacterAnimationData),
		alignof(FCharacterAnimationData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterAnimationData()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterAnimationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterAnimationData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFoot;
	static UEnum* EFoot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFoot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFoot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActionGame_EFoot, (UObject*)Z_Construct_UPackage__Script_ActionGame(), TEXT("EFoot"));
		}
		return Z_Registration_Info_UEnum_EFoot.OuterSingleton;
	}
	template<> ACTIONGAME_API UEnum* StaticEnum<EFoot>()
	{
		return EFoot_StaticEnum();
	}
	struct Z_Construct_UEnum_ActionGame_EFoot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ActionGame_EFoot_Statics::Enumerators[] = {
		{ "EFoot::Left", (int64)EFoot::Left },
		{ "EFoot::Right", (int64)EFoot::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ActionGame_EFoot_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "left" },
		{ "Left.Name", "EFoot::Left" },
		{ "ModuleRelativePath", "ActionGameTypes.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EFoot::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActionGame_EFoot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ActionGame,
		nullptr,
		"EFoot",
		"EFoot",
		Z_Construct_UEnum_ActionGame_EFoot_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ActionGame_EFoot_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ActionGame_EFoot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ActionGame_EFoot_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ActionGame_EFoot()
	{
		if (!Z_Registration_Info_UEnum_EFoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFoot.InnerSingleton, Z_Construct_UEnum_ActionGame_EFoot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFoot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_Statics::EnumInfo[] = {
		{ EFoot_StaticEnum, TEXT("EFoot"), &Z_Registration_Info_UEnum_EFoot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4276532961U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_Statics::ScriptStructInfo[] = {
		{ FCharacterData::StaticStruct, Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps, TEXT("CharacterData"), &Z_Registration_Info_UScriptStruct_CharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterData), 2207926394U) },
		{ FCharacterAnimationData::StaticStruct, Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewStructOps, TEXT("CharacterAnimationData"), &Z_Registration_Info_UScriptStruct_CharacterAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterAnimationData), 494138655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_918612893(TEXT("/Script/ActionGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_ActionGameTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
