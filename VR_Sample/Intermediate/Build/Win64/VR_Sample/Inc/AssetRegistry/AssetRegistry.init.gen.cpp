// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistry_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AssetRegistry;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AssetRegistry()
	{
		if (!Z_Registration_Info_UPackage__Script_AssetRegistry.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AssetRegistry",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x268BE753,
				0x46BA4834,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AssetRegistry.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AssetRegistry.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AssetRegistry(Z_Construct_UPackage__Script_AssetRegistry, TEXT("/Script/AssetRegistry"), Z_Registration_Info_UPackage__Script_AssetRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x268BE753, 0x46BA4834));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
