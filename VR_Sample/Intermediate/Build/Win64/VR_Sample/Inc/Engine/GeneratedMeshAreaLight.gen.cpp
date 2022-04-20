// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/GeneratedMeshAreaLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedMeshAreaLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight();
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AGeneratedMeshAreaLight::StaticRegisterNativesAGeneratedMeshAreaLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeneratedMeshAreaLight);
	UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister()
	{
		return AGeneratedMeshAreaLight::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratedMeshAreaLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpotLight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a light that is created after a lighting build with Lightmass and handles mesh area light influence on dynamic objects.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "Engine/GeneratedMeshAreaLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/GeneratedMeshAreaLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Implements a light that is created after a lighting build with Lightmass and handles mesh area light influence on dynamic objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratedMeshAreaLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::ClassParams = {
		&AGeneratedMeshAreaLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratedMeshAreaLight()
	{
		if (!Z_Registration_Info_UClass_AGeneratedMeshAreaLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeneratedMeshAreaLight.OuterSingleton, Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeneratedMeshAreaLight.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AGeneratedMeshAreaLight>()
	{
		return AGeneratedMeshAreaLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratedMeshAreaLight);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeneratedMeshAreaLight, AGeneratedMeshAreaLight::StaticClass, TEXT("AGeneratedMeshAreaLight"), &Z_Registration_Info_UClass_AGeneratedMeshAreaLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeneratedMeshAreaLight), 1456424483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_3547709905(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
