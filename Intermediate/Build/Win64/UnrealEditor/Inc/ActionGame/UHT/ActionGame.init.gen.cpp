// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionGame_init() {}
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ActionGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ActionGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ActionGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_OnWallRunFinshedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_OnWallRunWallSideDeltermenedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ActionGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x06CE3412,
				0x64D77FDF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ActionGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ActionGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ActionGame(Z_Construct_UPackage__Script_ActionGame, TEXT("/Script/ActionGame"), Z_Registration_Info_UPackage__Script_ActionGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x06CE3412, 0x64D77FDF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
