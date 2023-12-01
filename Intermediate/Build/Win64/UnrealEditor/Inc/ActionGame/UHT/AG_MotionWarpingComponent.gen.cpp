// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AG_MotionWarpingComponent.h"
#include "RootMotionModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAG_MotionWarpingComponent() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_MotionWarpingComponent();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_MotionWarpingComponent_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent();
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(UAG_MotionWarpingComponent::execMulticastSyncWarpPoints)
	{
		P_GET_TARRAY(FMotionWarpingTarget,Z_Param_Targets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSyncWarpPoints_Implementation(Z_Param_Targets);
		P_NATIVE_END;
	}
	struct AG_MotionWarpingComponent_eventMulticastSyncWarpPoints_Parms
	{
		TArray<FMotionWarpingTarget> Targets;
	};
	static FName NAME_UAG_MotionWarpingComponent_MulticastSyncWarpPoints = FName(TEXT("MulticastSyncWarpPoints"));
	void UAG_MotionWarpingComponent::MulticastSyncWarpPoints(TArray<FMotionWarpingTarget> const& Targets)
	{
		AG_MotionWarpingComponent_eventMulticastSyncWarpPoints_Parms Parms;
		Parms.Targets=Targets;
		ProcessEvent(FindFunctionChecked(NAME_UAG_MotionWarpingComponent_MulticastSyncWarpPoints),&Parms);
	}
	void UAG_MotionWarpingComponent::StaticRegisterNativesUAG_MotionWarpingComponent()
	{
		UClass* Class = UAG_MotionWarpingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastSyncWarpPoints", &UAG_MotionWarpingComponent::execMulticastSyncWarpPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMotionWarpingTarget, METADATA_PARAMS(0, nullptr) }; // 1502123603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::NewProp_Targets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AG_MotionWarpingComponent_eventMulticastSyncWarpPoints_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::NewProp_Targets_MetaData), Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::NewProp_Targets_MetaData) }; // 1502123603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::NewProp_Targets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AG_MotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAG_MotionWarpingComponent, nullptr, "MulticastSyncWarpPoints", nullptr, nullptr, Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::PropPointers), sizeof(AG_MotionWarpingComponent_eventMulticastSyncWarpPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(AG_MotionWarpingComponent_eventMulticastSyncWarpPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAG_MotionWarpingComponent);
	UClass* Z_Construct_UClass_UAG_MotionWarpingComponent_NoRegister()
	{
		return UAG_MotionWarpingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAG_MotionWarpingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMotionWarpingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAG_MotionWarpingComponent_MulticastSyncWarpPoints, "MulticastSyncWarpPoints" }, // 1781222284
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/AG_MotionWarpingComponent.h" },
		{ "ModuleRelativePath", "Components/AG_MotionWarpingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAG_MotionWarpingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::ClassParams = {
		&UAG_MotionWarpingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAG_MotionWarpingComponent()
	{
		if (!Z_Registration_Info_UClass_UAG_MotionWarpingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAG_MotionWarpingComponent.OuterSingleton, Z_Construct_UClass_UAG_MotionWarpingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAG_MotionWarpingComponent.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UAG_MotionWarpingComponent>()
	{
		return UAG_MotionWarpingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAG_MotionWarpingComponent);
	UAG_MotionWarpingComponent::~UAG_MotionWarpingComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAG_MotionWarpingComponent, UAG_MotionWarpingComponent::StaticClass, TEXT("UAG_MotionWarpingComponent"), &Z_Registration_Info_UClass_UAG_MotionWarpingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAG_MotionWarpingComponent), 2862220539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_3313119880(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Components_AG_MotionWarpingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
