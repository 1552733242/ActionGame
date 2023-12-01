// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/GA_Crouch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Crouch() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_GameplayAbility();
	ACTIONGAME_API UClass* Z_Construct_UClass_UGA_Crouch();
	ACTIONGAME_API UClass* Z_Construct_UClass_UGA_Crouch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UGA_Crouch::StaticRegisterNativesUGA_Crouch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Crouch);
	UClass* Z_Construct_UClass_UGA_Crouch_NoRegister()
	{
		return UGA_Crouch::StaticClass();
	}
	struct Z_Construct_UClass_UGA_Crouch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_Crouch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAG_GameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Crouch_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Crouch_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/GA_Crouch.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Crouch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_Crouch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Crouch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Crouch_Statics::ClassParams = {
		&UGA_Crouch::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Crouch_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Crouch_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGA_Crouch()
	{
		if (!Z_Registration_Info_UClass_UGA_Crouch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Crouch.OuterSingleton, Z_Construct_UClass_UGA_Crouch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGA_Crouch.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UGA_Crouch>()
	{
		return UGA_Crouch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Crouch);
	UGA_Crouch::~UGA_Crouch() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Crouch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Crouch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Crouch, UGA_Crouch::StaticClass, TEXT("UGA_Crouch"), &Z_Registration_Info_UClass_UGA_Crouch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Crouch), 363465294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Crouch_h_3071730523(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Crouch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Crouch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
