// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ActiveSoundUpdateInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveSoundUpdateInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActiveSoundUpdateInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActiveSoundUpdateInterface::StaticRegisterNativesUActiveSoundUpdateInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActiveSoundUpdateInterface);
	UClass* Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister()
	{
		return UActiveSoundUpdateInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActiveSoundUpdateInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/ActiveSoundUpdateInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActiveSoundUpdateInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::ClassParams = {
		&UActiveSoundUpdateInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActiveSoundUpdateInterface()
	{
		if (!Z_Registration_Info_UClass_UActiveSoundUpdateInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActiveSoundUpdateInterface.OuterSingleton, Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActiveSoundUpdateInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActiveSoundUpdateInterface>()
	{
		return UActiveSoundUpdateInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveSoundUpdateInterface);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActiveSoundUpdateInterface, UActiveSoundUpdateInterface::StaticClass, TEXT("UActiveSoundUpdateInterface"), &Z_Registration_Info_UClass_UActiveSoundUpdateInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveSoundUpdateInterface), 1417036131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_2421112097(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
