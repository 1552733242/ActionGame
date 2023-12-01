// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Components/AG_AbilitySystemComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAG_AbilitySystemComponentBase() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_AbilitySystemComponentBase();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_AbilitySystemComponentBase_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UAG_AbilitySystemComponentBase::StaticRegisterNativesUAG_AbilitySystemComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAG_AbilitySystemComponentBase);
	UClass* Z_Construct_UClass_UAG_AbilitySystemComponentBase_NoRegister()
	{
		return UAG_AbilitySystemComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/Components/AG_AbilitySystemComponentBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Components/AG_AbilitySystemComponentBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAG_AbilitySystemComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics::ClassParams = {
		&UAG_AbilitySystemComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAG_AbilitySystemComponentBase()
	{
		if (!Z_Registration_Info_UClass_UAG_AbilitySystemComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAG_AbilitySystemComponentBase.OuterSingleton, Z_Construct_UClass_UAG_AbilitySystemComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAG_AbilitySystemComponentBase.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UAG_AbilitySystemComponentBase>()
	{
		return UAG_AbilitySystemComponentBase::StaticClass();
	}
	UAG_AbilitySystemComponentBase::UAG_AbilitySystemComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAG_AbilitySystemComponentBase);
	UAG_AbilitySystemComponentBase::~UAG_AbilitySystemComponentBase() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Components_AG_AbilitySystemComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Components_AG_AbilitySystemComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAG_AbilitySystemComponentBase, UAG_AbilitySystemComponentBase::StaticClass, TEXT("UAG_AbilitySystemComponentBase"), &Z_Registration_Info_UClass_UAG_AbilitySystemComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAG_AbilitySystemComponentBase), 292912476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Components_AG_AbilitySystemComponentBase_h_117282965(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Components_AG_AbilitySystemComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Components_AG_AbilitySystemComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
