// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/CharacterAnimDataAsset.h"
#include "ActionGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimDataAsset() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCharacterAnimDataAsset();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister();
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterAnimationData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCharacterAnimDataAsset::StaticRegisterNativesUCharacterAnimDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAnimDataAsset);
	UClass* Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister()
	{
		return UCharacterAnimDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAnimDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterAnimationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAnimDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimDataAsset_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/CharacterAnimDataAsset.h" },
		{ "ModuleRelativePath", "DataAssets/CharacterAnimDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimDataAsset_Statics::NewProp_CharacterAnimationData_MetaData[] = {
		{ "Category", "CharacterAnimDataAsset" },
		{ "ModuleRelativePath", "DataAssets/CharacterAnimDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAnimDataAsset_Statics::NewProp_CharacterAnimationData = { "CharacterAnimationData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimDataAsset, CharacterAnimationData), Z_Construct_UScriptStruct_FCharacterAnimationData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimDataAsset_Statics::NewProp_CharacterAnimationData_MetaData), Z_Construct_UClass_UCharacterAnimDataAsset_Statics::NewProp_CharacterAnimationData_MetaData) }; // 494138655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimDataAsset_Statics::NewProp_CharacterAnimationData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAnimDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimDataAsset_Statics::ClassParams = {
		&UCharacterAnimDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterAnimDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAnimDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterAnimDataAsset()
	{
		if (!Z_Registration_Info_UClass_UCharacterAnimDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimDataAsset.OuterSingleton, Z_Construct_UClass_UCharacterAnimDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterAnimDataAsset.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UCharacterAnimDataAsset>()
	{
		return UCharacterAnimDataAsset::StaticClass();
	}
	UCharacterAnimDataAsset::UCharacterAnimDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimDataAsset);
	UCharacterAnimDataAsset::~UCharacterAnimDataAsset() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_DataAssets_CharacterAnimDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_DataAssets_CharacterAnimDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimDataAsset, UCharacterAnimDataAsset::StaticClass, TEXT("UCharacterAnimDataAsset"), &Z_Registration_Info_UClass_UCharacterAnimDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimDataAsset), 3437181499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_DataAssets_CharacterAnimDataAsset_h_619763055(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_DataAssets_CharacterAnimDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_DataAssets_CharacterAnimDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
