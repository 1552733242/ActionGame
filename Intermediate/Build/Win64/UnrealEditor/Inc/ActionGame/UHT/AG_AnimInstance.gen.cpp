// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstances/AG_AnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAG_AnimInstance() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_AnimInstance();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_AnimInstance_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(UAG_AnimInstance::execGetCrouchIdleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequenceBase**)Z_Param__Result=P_THIS->GetCrouchIdleAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAG_AnimInstance::execGetCrouchLocomotionBlendspace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetCrouchLocomotionBlendspace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAG_AnimInstance::execGetIdleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequenceBase**)Z_Param__Result=P_THIS->GetIdleAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAG_AnimInstance::execGetLocomotionBlendspace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetLocomotionBlendspace();
		P_NATIVE_END;
	}
	void UAG_AnimInstance::StaticRegisterNativesUAG_AnimInstance()
	{
		UClass* Class = UAG_AnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCrouchIdleAnimation", &UAG_AnimInstance::execGetCrouchIdleAnimation },
			{ "GetCrouchLocomotionBlendspace", &UAG_AnimInstance::execGetCrouchLocomotionBlendspace },
			{ "GetIdleAnimation", &UAG_AnimInstance::execGetIdleAnimation },
			{ "GetLocomotionBlendspace", &UAG_AnimInstance::execGetLocomotionBlendspace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics
	{
		struct AG_AnimInstance_eventGetCrouchIdleAnimation_Parms
		{
			UAnimSequenceBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AG_AnimInstance_eventGetCrouchIdleAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/AG_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAG_AnimInstance, nullptr, "GetCrouchIdleAnimation", nullptr, nullptr, Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::AG_AnimInstance_eventGetCrouchIdleAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::AG_AnimInstance_eventGetCrouchIdleAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics
	{
		struct AG_AnimInstance_eventGetCrouchLocomotionBlendspace_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AG_AnimInstance_eventGetCrouchLocomotionBlendspace_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/AG_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAG_AnimInstance, nullptr, "GetCrouchLocomotionBlendspace", nullptr, nullptr, Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::AG_AnimInstance_eventGetCrouchLocomotionBlendspace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::AG_AnimInstance_eventGetCrouchLocomotionBlendspace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics
	{
		struct AG_AnimInstance_eventGetIdleAnimation_Parms
		{
			UAnimSequenceBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AG_AnimInstance_eventGetIdleAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/AG_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAG_AnimInstance, nullptr, "GetIdleAnimation", nullptr, nullptr, Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::AG_AnimInstance_eventGetIdleAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::AG_AnimInstance_eventGetIdleAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics
	{
		struct AG_AnimInstance_eventGetLocomotionBlendspace_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AG_AnimInstance_eventGetLocomotionBlendspace_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/AG_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAG_AnimInstance, nullptr, "GetLocomotionBlendspace", nullptr, nullptr, Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::AG_AnimInstance_eventGetLocomotionBlendspace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::AG_AnimInstance_eventGetLocomotionBlendspace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAG_AnimInstance);
	UClass* Z_Construct_UClass_UAG_AnimInstance_NoRegister()
	{
		return UAG_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAG_AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterAnimDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultCharacterAnimDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAG_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_AnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAG_AnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAG_AnimInstance_GetCrouchIdleAnimation, "GetCrouchIdleAnimation" }, // 1264633147
		{ &Z_Construct_UFunction_UAG_AnimInstance_GetCrouchLocomotionBlendspace, "GetCrouchLocomotionBlendspace" }, // 1095888565
		{ &Z_Construct_UFunction_UAG_AnimInstance_GetIdleAnimation, "GetIdleAnimation" }, // 3764021169
		{ &Z_Construct_UFunction_UAG_AnimInstance_GetLocomotionBlendspace, "GetLocomotionBlendspace" }, // 1605872517
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_AnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_AnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/AG_AnimInstance.h" },
		{ "ModuleRelativePath", "AnimInstances/AG_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "AnimInstances/AG_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAG_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset = { "DefaultCharacterAnimDataAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAG_AnimInstance, DefaultCharacterAnimDataAsset), Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData), Z_Construct_UClass_UAG_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAG_AnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAG_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAG_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAG_AnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAG_AnimInstance_Statics::ClassParams = {
		&UAG_AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAG_AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAG_AnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_AnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAG_AnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_AnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAG_AnimInstance()
	{
		if (!Z_Registration_Info_UClass_UAG_AnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAG_AnimInstance.OuterSingleton, Z_Construct_UClass_UAG_AnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAG_AnimInstance.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UAG_AnimInstance>()
	{
		return UAG_AnimInstance::StaticClass();
	}
	UAG_AnimInstance::UAG_AnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAG_AnimInstance);
	UAG_AnimInstance::~UAG_AnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimInstances_AG_AnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimInstances_AG_AnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAG_AnimInstance, UAG_AnimInstance::StaticClass, TEXT("UAG_AnimInstance"), &Z_Registration_Info_UClass_UAG_AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAG_AnimInstance), 3215904715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimInstances_AG_AnimInstance_h_3381773736(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimInstances_AG_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AnimInstances_AG_AnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
