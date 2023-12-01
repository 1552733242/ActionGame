// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/AG_GameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAG_GameplayAbility() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_AAG_CharacterBase_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_GameplayAbility();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_GameplayAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(UAG_GameplayAbility::execGetAG_CharacterFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAG_CharacterBase**)Z_Param__Result=P_THIS->GetAG_CharacterFromActorInfo();
		P_NATIVE_END;
	}
	void UAG_GameplayAbility::StaticRegisterNativesUAG_GameplayAbility()
	{
		UClass* Class = UAG_GameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAG_CharacterFromActorInfo", &UAG_GameplayAbility::execGetAG_CharacterFromActorInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics
	{
		struct AG_GameplayAbility_eventGetAG_CharacterFromActorInfo_Parms
		{
			AAG_CharacterBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AG_GameplayAbility_eventGetAG_CharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AAG_CharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/AG_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAG_GameplayAbility, nullptr, "GetAG_CharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::AG_GameplayAbility_eventGetAG_CharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::AG_GameplayAbility_eventGetAG_CharacterFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAG_GameplayAbility);
	UClass* Z_Construct_UClass_UAG_GameplayAbility_NoRegister()
	{
		return UAG_GameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAG_GameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OngoingEffectsToRemoveOnEnd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingEffectsToRemoveOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OngoingEffectsToRemoveOnEnd;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OngoingEffectsToJustApplyOnStart_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingEffectsToJustApplyOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OngoingEffectsToJustApplyOnStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAG_GameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAG_GameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAG_GameplayAbility_GetAG_CharacterFromActorInfo, "GetAG_CharacterFromActorInfo" }, // 260161903
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_GameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/AG_GameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/AG_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_Inner = { "OngoingEffectsToRemoveOnEnd", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/AG_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd = { "OngoingEffectsToRemoveOnEnd", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAG_GameplayAbility, OngoingEffectsToRemoveOnEnd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData), Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_Inner = { "OngoingEffectsToJustApplyOnStart", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/AG_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart = { "OngoingEffectsToJustApplyOnStart", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAG_GameplayAbility, OngoingEffectsToJustApplyOnStart), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData), Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAG_GameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAG_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAG_GameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAG_GameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAG_GameplayAbility_Statics::ClassParams = {
		&UAG_GameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAG_GameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAG_GameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAG_GameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAG_GameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UAG_GameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAG_GameplayAbility.OuterSingleton, Z_Construct_UClass_UAG_GameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAG_GameplayAbility.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UAG_GameplayAbility>()
	{
		return UAG_GameplayAbility::StaticClass();
	}
	UAG_GameplayAbility::UAG_GameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAG_GameplayAbility);
	UAG_GameplayAbility::~UAG_GameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAG_GameplayAbility, UAG_GameplayAbility::StaticClass, TEXT("UAG_GameplayAbility"), &Z_Registration_Info_UClass_UAG_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAG_GameplayAbility), 3617233328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_978978631(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_AG_GameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
