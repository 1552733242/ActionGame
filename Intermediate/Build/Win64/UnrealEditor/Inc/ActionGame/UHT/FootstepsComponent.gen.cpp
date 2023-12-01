// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Components/FootstepsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepsComponent() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UFootstepsComponent();
	ACTIONGAME_API UClass* Z_Construct_UClass_UFootstepsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UFootstepsComponent::StaticRegisterNativesUFootstepsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFootstepsComponent);
	UClass* Z_Construct_UClass_UFootstepsComponent_NoRegister()
	{
		return UFootstepsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeftFootSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFootSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RightFootSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actors/Components/FootstepsComponent.h" },
		{ "ModuleRelativePath", "Actors/Components/FootstepsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_LeftFootSocketName_MetaData[] = {
		{ "Category", "FootstepsComponent" },
		{ "ModuleRelativePath", "Actors/Components/FootstepsComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_LeftFootSocketName = { "LeftFootSocketName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepsComponent, LeftFootSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_LeftFootSocketName_MetaData), Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_LeftFootSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_RightFootSocketName_MetaData[] = {
		{ "Category", "FootstepsComponent" },
		{ "ModuleRelativePath", "Actors/Components/FootstepsComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_RightFootSocketName = { "RightFootSocketName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepsComponent, RightFootSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_RightFootSocketName_MetaData), Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_RightFootSocketName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_LeftFootSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_RightFootSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFootstepsComponent_Statics::ClassParams = {
		&UFootstepsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFootstepsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFootstepsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFootstepsComponent()
	{
		if (!Z_Registration_Info_UClass_UFootstepsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFootstepsComponent.OuterSingleton, Z_Construct_UClass_UFootstepsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFootstepsComponent.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UFootstepsComponent>()
	{
		return UFootstepsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepsComponent);
	UFootstepsComponent::~UFootstepsComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Components_FootstepsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Components_FootstepsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFootstepsComponent, UFootstepsComponent::StaticClass, TEXT("UFootstepsComponent"), &Z_Registration_Info_UClass_UFootstepsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFootstepsComponent), 4135094453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Components_FootstepsComponent_h_1809718321(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Components_FootstepsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Components_FootstepsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
