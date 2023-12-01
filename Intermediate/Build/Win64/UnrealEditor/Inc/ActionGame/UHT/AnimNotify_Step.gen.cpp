// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotifies/AnimNotify_Step.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Step() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAnimNotify_Step();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAnimNotify_Step_NoRegister();
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_EFoot();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UAnimNotify_Step::StaticRegisterNativesUAnimNotify_Step()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Step);
	UClass* Z_Construct_UClass_UAnimNotify_Step_NoRegister()
	{
		return UAnimNotify_Step::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_Step_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Foot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Foot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_Step_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Step_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_Step_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/AnimNotify_Step.h" },
		{ "ModuleRelativePath", "AnimNotifies/AnimNotify_Step.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_Step_Statics::NewProp_Foot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_Step_Statics::NewProp_Foot_MetaData[] = {
		{ "Category", "AnimNotify_Step" },
		{ "ModuleRelativePath", "AnimNotifies/AnimNotify_Step.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_Step_Statics::NewProp_Foot = { "Foot", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Step, Foot), Z_Construct_UEnum_ActionGame_EFoot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Step_Statics::NewProp_Foot_MetaData), Z_Construct_UClass_UAnimNotify_Step_Statics::NewProp_Foot_MetaData) }; // 4276532961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Step_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Step_Statics::NewProp_Foot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Step_Statics::NewProp_Foot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_Step_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Step>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Step_Statics::ClassParams = {
		&UAnimNotify_Step::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_Step_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Step_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Step_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Step_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Step_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNotify_Step()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_Step.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Step.OuterSingleton, Z_Construct_UClass_UAnimNotify_Step_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_Step.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UAnimNotify_Step>()
	{
		return UAnimNotify_Step::StaticClass();
	}
	UAnimNotify_Step::UAnimNotify_Step(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Step);
	UAnimNotify_Step::~UAnimNotify_Step() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimNotifies_AnimNotify_Step_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimNotifies_AnimNotify_Step_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Step, UAnimNotify_Step::StaticClass, TEXT("UAnimNotify_Step"), &Z_Registration_Info_UClass_UAnimNotify_Step, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Step), 774943274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimNotifies_AnimNotify_Step_h_2112926840(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimNotifies_AnimNotify_Step_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimNotifies_AnimNotify_Step_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
