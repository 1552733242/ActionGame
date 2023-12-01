// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/GA_Vault.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Vault() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UAG_GameplayAbility();
	ACTIONGAME_API UClass* Z_Construct_UClass_UGA_Vault();
	ACTIONGAME_API UClass* Z_Construct_UClass_UGA_Vault_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UGA_Vault::StaticRegisterNativesUGA_Vault()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Vault);
	UClass* Z_Construct_UClass_UGA_Vault_NoRegister()
	{
		return UGA_Vault::StaticClass();
	}
	struct Z_Construct_UClass_UGA_Vault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalTraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalTraceCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalTraceCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalTraceStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalTraceStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalTraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalTraceStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalTraceStep;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VaultMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VaultMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageTask;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannelsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelsToIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_Vault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAG_GameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/GA_Vault.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceRadius_MetaData[] = {
		{ "Category", "HorizontalTrace" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceRadius = { "HorizontalTraceRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, HorizontalTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceRadius_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceLength_MetaData[] = {
		{ "Category", "HorizontalTrace" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceLength = { "HorizontalTraceLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, HorizontalTraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceLength_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceCount_MetaData[] = {
		{ "Category", "HorizontalTrace" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceCount = { "HorizontalTraceCount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, HorizontalTraceCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceCount_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceStep_MetaData[] = {
		{ "Category", "HorizontalTrace" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceStep = { "HorizontalTraceStep", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, HorizontalTraceStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceStep_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceRadius_MetaData[] = {
		{ "Category", "VerticalTrace" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceRadius = { "VerticalTraceRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, VerticalTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceRadius_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceStep_MetaData[] = {
		{ "Category", "VerticalTrace" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceStep = { "VerticalTraceStep", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, VerticalTraceStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceStep_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceStep_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_TraceObjectTypes_MetaData[] = {
		{ "Category", "GA_Vault" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_TraceObjectTypes_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_TraceObjectTypes_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_VaultMontage_MetaData[] = {
		{ "Category", "GA_Vault" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_VaultMontage = { "VaultMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, VaultMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_VaultMontage_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_VaultMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_MontageTask_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_MontageTask = { "MontageTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, MontageTask), Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_MontageTask_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_MontageTask_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_CollisionChannelsToIgnore_Inner = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Vault_Statics::NewProp_CollisionChannelsToIgnore_MetaData[] = {
		{ "Category", "GA_Vault" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GA_Vault.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_Vault_Statics::NewProp_CollisionChannelsToIgnore = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Vault, CollisionChannelsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::NewProp_CollisionChannelsToIgnore_MetaData), Z_Construct_UClass_UGA_Vault_Statics::NewProp_CollisionChannelsToIgnore_MetaData) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_Vault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_HorizontalTraceStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_VerticalTraceStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_TraceObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_TraceObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_VaultMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_MontageTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_CollisionChannelsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Vault_Statics::NewProp_CollisionChannelsToIgnore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_Vault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Vault>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Vault_Statics::ClassParams = {
		&UGA_Vault::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGA_Vault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Vault_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Vault_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGA_Vault()
	{
		if (!Z_Registration_Info_UClass_UGA_Vault.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Vault.OuterSingleton, Z_Construct_UClass_UGA_Vault_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGA_Vault.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<UGA_Vault>()
	{
		return UGA_Vault::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Vault);
	UGA_Vault::~UGA_Vault() {}
	struct Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Vault_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Vault_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Vault, UGA_Vault::StaticClass, TEXT("UGA_Vault"), &Z_Registration_Info_UClass_UGA_Vault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Vault), 2797079809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Vault_h_3188067583(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Vault_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_ActionGame_Source_ActionGame_AbilitySystem_Abilities_GA_Vault_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
