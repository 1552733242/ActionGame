// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInstances/AG_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAG_GameInstance() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_GameInstance();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_GameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UAG_GameInstance::StaticRegisterNativesUAG_GameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAG_GameInstance);
	UClass* Z_Construct_UClass_UAG_GameInstance_NoRegister()
	{
		return UAG_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAG_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAG_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_GameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameInstances/AG_GameInstance.h" },
		{ "ModuleRelativePath", "GameInstances/AG_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAG_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAG_GameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAG_GameInstance_Statics::ClassParams = {
		&UAG_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAG_GameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAG_GameInstance()
	{
		if (!Z_Registration_Info_UClass_UAG_GameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAG_GameInstance.OuterSingleton, Z_Construct_UClass_UAG_GameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAG_GameInstance.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UAG_GameInstance>()
	{
		return UAG_GameInstance::StaticClass();
	}
	UAG_GameInstance::UAG_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAG_GameInstance);
	UAG_GameInstance::~UAG_GameInstance() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_GameInstances_AG_GameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_GameInstances_AG_GameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAG_GameInstance, UAG_GameInstance::StaticClass, TEXT("UAG_GameInstance"), &Z_Registration_Info_UClass_UAG_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAG_GameInstance), 2183702471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_GameInstances_AG_GameInstance_h_1613450716(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_GameInstances_AG_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_GameInstances_AG_GameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
