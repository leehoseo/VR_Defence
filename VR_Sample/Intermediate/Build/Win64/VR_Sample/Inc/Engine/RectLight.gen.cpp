// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/RectLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRectLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ARectLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARectLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();
// End Cross Module References
	void ARectLight::StaticRegisterNativesARectLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARectLight);
	UClass* Z_Construct_UClass_ARectLight_NoRegister()
	{
		return ARectLight::StaticClass();
	}
	struct Z_Construct_UClass_ARectLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RectLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RectLightComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARectLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARectLight_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights RectLights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/RectLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/RectLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "RectLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/RectLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent = { "RectLightComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARectLight, RectLightComponent), Z_Construct_UClass_URectLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARectLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARectLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARectLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARectLight_Statics::ClassParams = {
		&ARectLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARectLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARectLight_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARectLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARectLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARectLight()
	{
		if (!Z_Registration_Info_UClass_ARectLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARectLight.OuterSingleton, Z_Construct_UClass_ARectLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARectLight.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ARectLight>()
	{
		return ARectLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARectLight);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARectLight, ARectLight::StaticClass, TEXT("ARectLight"), &Z_Registration_Info_UClass_ARectLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARectLight), 2253239535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_3206366373(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
