// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdpMessaging_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UdpMessaging;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UdpMessaging()
	{
		if (!Z_Registration_Info_UPackage__Script_UdpMessaging.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UdpMessaging",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x919C387F,
				0xB11CC4D3,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UdpMessaging.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UdpMessaging.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UdpMessaging(Z_Construct_UPackage__Script_UdpMessaging, TEXT("/Script/UdpMessaging"), Z_Registration_Info_UPackage__Script_UdpMessaging, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x919C387F, 0xB11CC4D3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
