// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PlaneReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlaneReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlaneReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APlaneReflectionCapture::StaticRegisterNativesAPlaneReflectionCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaneReflectionCapture);
	UClass* Z_Construct_UClass_APlaneReflectionCapture_NoRegister()
	{
		return APlaneReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_APlaneReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaneReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaneReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/PlaneReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlaneReflectionCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaneReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaneReflectionCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaneReflectionCapture_Statics::ClassParams = {
		&APlaneReflectionCapture::StaticClass,
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
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_APlaneReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaneReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaneReflectionCapture()
	{
		if (!Z_Registration_Info_UClass_APlaneReflectionCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaneReflectionCapture.OuterSingleton, Z_Construct_UClass_APlaneReflectionCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlaneReflectionCapture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APlaneReflectionCapture>()
	{
		return APlaneReflectionCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaneReflectionCapture);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlaneReflectionCapture, APlaneReflectionCapture::StaticClass, TEXT("APlaneReflectionCapture"), &Z_Registration_Info_UClass_APlaneReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaneReflectionCapture), 3329603292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_182558555(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlaneReflectionCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
