// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Characters/AG_CharacterBase.h"
#include "ActionGameTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAG_CharacterBase() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_AAG_CharacterBase();
	ACTIONGAME_API UClass* Z_Construct_UClass_AAG_CharacterBase_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_AbilitySystemComponentBase_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_AttributeSetBase_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_MotionWarpingComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCharacterDataAsset_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UFootstepsComponent_NoRegister();
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(AAG_CharacterBase::execOnRep_CharacterData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CharacterData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAG_CharacterBase::execSetCharacterData)
	{
		P_GET_STRUCT_REF(FCharacterData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAG_CharacterBase::execGetCharacterData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCharacterData*)Z_Param__Result=P_THIS->GetCharacterData();
		P_NATIVE_END;
	}
	void AAG_CharacterBase::StaticRegisterNativesAAG_CharacterBase()
	{
		UClass* Class = AAG_CharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterData", &AAG_CharacterBase::execGetCharacterData },
			{ "OnRep_CharacterData", &AAG_CharacterBase::execOnRep_CharacterData },
			{ "SetCharacterData", &AAG_CharacterBase::execSetCharacterData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics
	{
		struct AG_CharacterBase_eventGetCharacterData_Parms
		{
			FCharacterData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AG_CharacterBase_eventGetCharacterData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(0, nullptr) }; // 2207926394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAG_CharacterBase, nullptr, "GetCharacterData", nullptr, nullptr, Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::AG_CharacterBase_eventGetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::AG_CharacterBase_eventGetCharacterData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAG_CharacterBase_OnRep_CharacterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAG_CharacterBase_OnRep_CharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAG_CharacterBase_OnRep_CharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAG_CharacterBase, nullptr, "OnRep_CharacterData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAG_CharacterBase_OnRep_CharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAG_CharacterBase_OnRep_CharacterData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAG_CharacterBase_OnRep_CharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAG_CharacterBase_OnRep_CharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics
	{
		struct AG_CharacterBase_eventSetCharacterData_Parms
		{
			FCharacterData Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AG_CharacterBase_eventSetCharacterData_Parms, Data), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::NewProp_Data_MetaData) }; // 2207926394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAG_CharacterBase, nullptr, "SetCharacterData", nullptr, nullptr, Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::AG_CharacterBase_eventSetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::AG_CharacterBase_eventSetCharacterData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAG_CharacterBase);
	UClass* Z_Construct_UClass_AAG_CharacterBase_NoRegister()
	{
		return AAG_CharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AAG_CharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IAMoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IAMoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IALookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IALookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IAJumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IAJumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IACrouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IACrouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IASprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IASprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpEventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpEventTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAirTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SprintTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchStartEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CrouchStartEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAG_CharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAG_CharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAG_CharacterBase_GetCharacterData, "GetCharacterData" }, // 3748495390
		{ &Z_Construct_UFunction_AAG_CharacterBase_OnRep_CharacterData, "OnRep_CharacterData" }, // 3489943036
		{ &Z_Construct_UFunction_AAG_CharacterBase_SetCharacterData, "SetCharacterData" }, // 3257122921
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/Characters/AG_CharacterBase.h" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, AbilitySystemComponent), Z_Construct_UClass_UAG_AbilitySystemComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AttributeSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc4\xb2\xef\xbf\xbd\xef\xbf\xbd\xe1\xb1\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xb5\xbd\xd3\xb2\xef\xbf\xbd\xcc\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd""0\xef\xbf\xbd\xe6\xbb\xbb\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc4\xb2\xef\xbf\xbd\xef\xbf\xbd\xe1\xb1\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xb5\xbd\xd3\xb2\xef\xbf\xbd\xcc\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd""0\xef\xbf\xbd\xe6\xbb\xbb" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, AttributeSet), Z_Construct_UClass_UAG_AttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_MotionWarpingComponent_MetaData[] = {
		{ "Category", "MotionWarp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_MotionWarpingComponent = { "MotionWarpingComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, MotionWarpingComponent), Z_Construct_UClass_UAG_MotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_MotionWarpingComponent_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_MotionWarpingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterData = { "CharacterData", "OnRep_CharacterData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, CharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterData_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterData_MetaData) }; // 2207926394
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterDataAsset_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterDataAsset = { "CharacterDataAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, CharacterDataAsset), Z_Construct_UClass_UCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterDataAsset_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_FootstepsComponent_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_FootstepsComponent = { "FootstepsComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, FootstepsComponent), Z_Construct_UClass_UFootstepsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_FootstepsComponent_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_FootstepsComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enhanced Input\n" },
#endif
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAMoveAction_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAMoveAction = { "IAMoveAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, IAMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAMoveAction_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAMoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IALookAction_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IALookAction = { "IALookAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, IALookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IALookAction_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IALookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAJumpAction_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAJumpAction = { "IAJumpAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, IAJumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAJumpAction_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAJumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IACrouchAction_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IACrouchAction = { "IACrouchAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, IACrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IACrouchAction_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IACrouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IASprintAction_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IASprintAction = { "IASprintAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, IASprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IASprintAction_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IASprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_JumpEventTag_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GamplayEvent\n" },
#endif
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GamplayEvent" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_JumpEventTag = { "JumpEventTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, JumpEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_JumpEventTag_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_JumpEventTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_InAirTags_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GameplayTags\n" },
#endif
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayTags" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_InAirTags = { "InAirTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, InAirTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_InAirTags_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_InAirTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchTags_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchTags = { "CrouchTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, CrouchTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchTags_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_SprintTags_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_SprintTags = { "SprintTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, SprintTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_SprintTags_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_SprintTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchStartEffect_MetaData[] = {
		{ "Category", "AG_CharacterBase" },
		{ "ModuleRelativePath", "Actors/Characters/AG_CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchStartEffect = { "CrouchStartEffect", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAG_CharacterBase, CrouchStartEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchStartEffect_MetaData), Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchStartEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAG_CharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_MotionWarpingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CharacterDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_FootstepsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAMoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IALookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IAJumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IACrouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_IASprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_JumpEventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_InAirTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_SprintTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAG_CharacterBase_Statics::NewProp_CrouchStartEffect,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAG_CharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAG_CharacterBase, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAG_CharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAG_CharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAG_CharacterBase_Statics::ClassParams = {
		&AAG_CharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAG_CharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAG_CharacterBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAG_CharacterBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAG_CharacterBase()
	{
		if (!Z_Registration_Info_UClass_AAG_CharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAG_CharacterBase.OuterSingleton, Z_Construct_UClass_AAG_CharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAG_CharacterBase.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<AAG_CharacterBase>()
	{
		return AAG_CharacterBase::StaticClass();
	}

	void AAG_CharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterData(TEXT("CharacterData"));

		const bool bIsValid = true
			&& Name_CharacterData == ClassReps[(int32)ENetFields_Private::CharacterData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAG_CharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAG_CharacterBase);
	AAG_CharacterBase::~AAG_CharacterBase() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAG_CharacterBase, AAG_CharacterBase::StaticClass, TEXT("AAG_CharacterBase"), &Z_Registration_Info_UClass_AAG_CharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAG_CharacterBase), 1527732403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_1266844961(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_Actors_Characters_AG_CharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
