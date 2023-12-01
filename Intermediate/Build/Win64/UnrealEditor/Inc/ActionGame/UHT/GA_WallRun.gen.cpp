// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/GA_WallRun.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_WallRun() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAbilityTask_TickWallRun_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_GameplayAbility();
	ACTIONGAME_API UClass* Z_Construct_UClass_UGA_WallRun();
	ACTIONGAME_API UClass* Z_Construct_UClass_UGA_WallRun_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(UGA_WallRun::execOnWallSideDetermened)
	{
		P_GET_UBOOL(Z_Param_bLefeSide);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWallSideDetermened(Z_Param_bLefeSide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_WallRun::execOnCapsuleComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UGA_WallRun::StaticRegisterNativesUGA_WallRun()
	{
		UClass* Class = UGA_WallRun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCapsuleComponentHit", &UGA_WallRun::execOnCapsuleComponentHit },
			{ "OnWallSideDetermened", &UGA_WallRun::execOnWallSideDetermened },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics
	{
		struct GA_WallRun_eventOnCapsuleComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_WallRun_eventOnCapsuleComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_WallRun_eventOnCapsuleComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_WallRun_eventOnCapsuleComponentHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_OtherComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_WallRun_eventOnCapsuleComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_WallRun_eventOnCapsuleComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_WallRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_WallRun, nullptr, "OnCapsuleComponentHit", nullptr, nullptr, Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::GA_WallRun_eventOnCapsuleComponentHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::GA_WallRun_eventOnCapsuleComponentHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics
	{
		struct GA_WallRun_eventOnWallSideDetermened_Parms
		{
			bool bLefeSide;
		};
		static void NewProp_bLefeSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLefeSide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::NewProp_bLefeSide_SetBit(void* Obj)
	{
		((GA_WallRun_eventOnWallSideDetermened_Parms*)Obj)->bLefeSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::NewProp_bLefeSide = { "bLefeSide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GA_WallRun_eventOnWallSideDetermened_Parms), &Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::NewProp_bLefeSide_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::NewProp_bLefeSide,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_WallRun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_WallRun, nullptr, "OnWallSideDetermened", nullptr, nullptr, Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::GA_WallRun_eventOnWallSideDetermened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::GA_WallRun_eventOnWallSideDetermened_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_WallRun);
	UClass* Z_Construct_UClass_UGA_WallRun_NoRegister()
	{
		return UGA_WallRun::StaticClass();
	}
	struct Z_Construct_UClass_UGA_WallRun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallRunTickTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WallRunTickTask;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WallRun_TraceObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallRun_TraceObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WallRun_TraceObjectTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallRunLeftSideEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WallRunLeftSideEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallRunRightSideEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WallRunRightSideEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_WallRun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAG_GameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGA_WallRun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_WallRun_OnCapsuleComponentHit, "OnCapsuleComponentHit" }, // 4136934869
		{ &Z_Construct_UFunction_UGA_WallRun_OnWallSideDetermened, "OnWallSideDetermened" }, // 1545206930
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_WallRun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/GA_WallRun.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_WallRun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunTickTask_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_WallRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunTickTask = { "WallRunTickTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_WallRun, WallRunTickTask), Z_Construct_UClass_UAbilityTask_TickWallRun_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunTickTask_MetaData), Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunTickTask_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRun_TraceObjectTypes_Inner = { "WallRun_TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRun_TraceObjectTypes_MetaData[] = {
		{ "Category", "GA_WallRun" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_WallRun.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRun_TraceObjectTypes = { "WallRun_TraceObjectTypes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_WallRun, WallRun_TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRun_TraceObjectTypes_MetaData), Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRun_TraceObjectTypes_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunLeftSideEffectClass_MetaData[] = {
		{ "Category", "GA_WallRun" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_WallRun.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunLeftSideEffectClass = { "WallRunLeftSideEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_WallRun, WallRunLeftSideEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunLeftSideEffectClass_MetaData), Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunLeftSideEffectClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunRightSideEffectClass_MetaData[] = {
		{ "Category", "GA_WallRun" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_WallRun.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunRightSideEffectClass = { "WallRunRightSideEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_WallRun, WallRunRightSideEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunRightSideEffectClass_MetaData), Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunRightSideEffectClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_WallRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunTickTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRun_TraceObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRun_TraceObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunLeftSideEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_WallRun_Statics::NewProp_WallRunRightSideEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_WallRun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_WallRun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_WallRun_Statics::ClassParams = {
		&UGA_WallRun::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGA_WallRun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_WallRun_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_WallRun_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGA_WallRun()
	{
		if (!Z_Registration_Info_UClass_UGA_WallRun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_WallRun.OuterSingleton, Z_Construct_UClass_UGA_WallRun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGA_WallRun.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UGA_WallRun>()
	{
		return UGA_WallRun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_WallRun);
	UGA_WallRun::~UGA_WallRun() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGA_WallRun, UGA_WallRun::StaticClass, TEXT("UGA_WallRun"), &Z_Registration_Info_UClass_UGA_WallRun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_WallRun), 1305190360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_1820077682(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_WallRun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
