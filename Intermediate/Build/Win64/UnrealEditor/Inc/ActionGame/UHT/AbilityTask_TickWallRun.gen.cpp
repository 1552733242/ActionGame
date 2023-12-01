// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_TickWallRun() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAbilityTask_TickWallRun();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAbilityTask_TickWallRun_NoRegister();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics
	{
		struct _Script_ActionGame_eventOnWallRunWallSideDeltermenedDelegate_Parms
		{
			bool bLeftSide;
		};
		static void NewProp_bLeftSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftSide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::NewProp_bLeftSide_SetBit(void* Obj)
	{
		((_Script_ActionGame_eventOnWallRunWallSideDeltermenedDelegate_Parms*)Obj)->bLeftSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::NewProp_bLeftSide = { "bLeftSide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ActionGame_eventOnWallRunWallSideDeltermenedDelegate_Parms), &Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::NewProp_bLeftSide_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::NewProp_bLeftSide,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionGame, nullptr, "OnWallRunWallSideDeltermenedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::_Script_ActionGame_eventOnWallRunWallSideDeltermenedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::_Script_ActionGame_eventOnWallRunWallSideDeltermenedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWallRunWallSideDeltermenedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWallRunWallSideDeltermenedDelegate, bool bLeftSide)
{
	struct _Script_ActionGame_eventOnWallRunWallSideDeltermenedDelegate_Parms
	{
		bool bLeftSide;
	};
	_Script_ActionGame_eventOnWallRunWallSideDeltermenedDelegate_Parms Parms;
	Parms.bLeftSide=bLeftSide ? true : false;
	OnWallRunWallSideDeltermenedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionGame, nullptr, "OnWallRunFinshedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWallRunFinshedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWallRunFinshedDelegate)
{
	OnWallRunFinshedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_TickWallRun::execCreateWallRunTask)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(ACharacter,Z_Param_InCharacterOwner);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_InCharacterMovement);
		P_GET_TARRAY(TEnumAsByte<EObjectTypeQuery>,Z_Param_TraceObjectTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_TickWallRun**)Z_Param__Result=UAbilityTask_TickWallRun::CreateWallRunTask(Z_Param_OwningAbility,Z_Param_InCharacterOwner,Z_Param_InCharacterMovement,Z_Param_TraceObjectTypes);
		P_NATIVE_END;
	}
	void UAbilityTask_TickWallRun::StaticRegisterNativesUAbilityTask_TickWallRun()
	{
		UClass* Class = UAbilityTask_TickWallRun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWallRunTask", &UAbilityTask_TickWallRun::execCreateWallRunTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics
	{
		struct AbilityTask_TickWallRun_eventCreateWallRunTask_Parms
		{
			UGameplayAbility* OwningAbility;
			ACharacter* InCharacterOwner;
			UCharacterMovementComponent* InCharacterMovement;
			TArray<TEnumAsByte<EObjectTypeQuery> > TraceObjectTypes;
			UAbilityTask_TickWallRun* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacterMovement;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TickWallRun_eventCreateWallRunTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_InCharacterOwner = { "InCharacterOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TickWallRun_eventCreateWallRunTask_Parms, InCharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_InCharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_InCharacterMovement = { "InCharacterMovement", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TickWallRun_eventCreateWallRunTask_Parms, InCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_InCharacterMovement_MetaData), Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_InCharacterMovement_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TickWallRun_eventCreateWallRunTask_Parms, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3930035403
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TickWallRun_eventCreateWallRunTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_TickWallRun_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_InCharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_InCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_TraceObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_TraceObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HiddenPin", "OwningAbility" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_TickWallRun, nullptr, "CreateWallRunTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::AbilityTask_TickWallRun_eventCreateWallRunTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::AbilityTask_TickWallRun_eventCreateWallRunTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_TickWallRun);
	UClass* Z_Construct_UClass_UAbilityTask_TickWallRun_NoRegister()
	{
		return UAbilityTask_TickWallRun::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_TickWallRun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWallSideDeltermened_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWallSideDeltermened;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_TickWallRun_CreateWallRunTask, "CreateWallRunTask" }, // 4185248131
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_TickWallRun, OnFinished), Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnFinished_MetaData), Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnFinished_MetaData) }; // 3417858803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnWallSideDeltermened_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTasks/AbilityTask_TickWallRun.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnWallSideDeltermened = { "OnWallSideDeltermened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_TickWallRun, OnWallSideDeltermened), Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnWallSideDeltermened_MetaData), Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnWallSideDeltermened_MetaData) }; // 3328828681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::NewProp_OnWallSideDeltermened,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_TickWallRun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::ClassParams = {
		&UAbilityTask_TickWallRun::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityTask_TickWallRun()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_TickWallRun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_TickWallRun.OuterSingleton, Z_Construct_UClass_UAbilityTask_TickWallRun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_TickWallRun.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UAbilityTask_TickWallRun>()
	{
		return UAbilityTask_TickWallRun::StaticClass();
	}
	UAbilityTask_TickWallRun::UAbilityTask_TickWallRun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_TickWallRun);
	UAbilityTask_TickWallRun::~UAbilityTask_TickWallRun() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_TickWallRun, UAbilityTask_TickWallRun::StaticClass, TEXT("UAbilityTask_TickWallRun"), &Z_Registration_Info_UClass_UAbilityTask_TickWallRun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_TickWallRun), 4235530949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_974767805(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_AbilityTasks_AbilityTask_TickWallRun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
