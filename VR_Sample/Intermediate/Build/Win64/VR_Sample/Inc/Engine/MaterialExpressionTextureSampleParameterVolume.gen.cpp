// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTextureSampleParameterVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameterVolume::StaticRegisterNativesUMaterialExpressionTextureSampleParameterVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameterVolume);
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameterVolume::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterVolume.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::ClassParams = {
		&UMaterialExpressionTextureSampleParameterVolume::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameterVolume>()
	{
		return UMaterialExpressionTextureSampleParameterVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterVolume);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume, UMaterialExpressionTextureSampleParameterVolume::StaticClass, TEXT("UMaterialExpressionTextureSampleParameterVolume"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameterVolume), 286551496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_1241570892(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
