// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicalMaterials/AG_PhysicalMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAG_PhysicalMaterial() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_PhysicalMaterial();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_PhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UAG_PhysicalMaterial::StaticRegisterNativesUAG_PhysicalMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAG_PhysicalMaterial);
	UClass* Z_Construct_UClass_UAG_PhysicalMaterial_NoRegister()
	{
		return UAG_PhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UAG_PhysicalMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAG_PhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_PhysicalMaterial_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_PhysicalMaterial_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/AG_PhysicalMaterial.h" },
		{ "ModuleRelativePath", "PhysicalMaterials/AG_PhysicalMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_PhysicalMaterial_Statics::NewProp_FootstepSound_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ModuleRelativePath", "PhysicalMaterials/AG_PhysicalMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAG_PhysicalMaterial_Statics::NewProp_FootstepSound = { "FootstepSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAG_PhysicalMaterial, FootstepSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_PhysicalMaterial_Statics::NewProp_FootstepSound_MetaData), Z_Construct_UClass_UAG_PhysicalMaterial_Statics::NewProp_FootstepSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAG_PhysicalMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAG_PhysicalMaterial_Statics::NewProp_FootstepSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAG_PhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAG_PhysicalMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAG_PhysicalMaterial_Statics::ClassParams = {
		&UAG_PhysicalMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAG_PhysicalMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAG_PhysicalMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_PhysicalMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UAG_PhysicalMaterial_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_PhysicalMaterial_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAG_PhysicalMaterial()
	{
		if (!Z_Registration_Info_UClass_UAG_PhysicalMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAG_PhysicalMaterial.OuterSingleton, Z_Construct_UClass_UAG_PhysicalMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAG_PhysicalMaterial.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UAG_PhysicalMaterial>()
	{
		return UAG_PhysicalMaterial::StaticClass();
	}
	UAG_PhysicalMaterial::UAG_PhysicalMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAG_PhysicalMaterial);
	UAG_PhysicalMaterial::~UAG_PhysicalMaterial() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_PhysicalMaterials_AG_PhysicalMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_PhysicalMaterials_AG_PhysicalMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAG_PhysicalMaterial, UAG_PhysicalMaterial::StaticClass, TEXT("UAG_PhysicalMaterial"), &Z_Registration_Info_UClass_UAG_PhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAG_PhysicalMaterial), 2933995084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_PhysicalMaterials_AG_PhysicalMaterial_h_170688075(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_PhysicalMaterials_AG_PhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_PhysicalMaterials_AG_PhysicalMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
