// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Polys.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPolys_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPolys();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPolys::StaticRegisterNativesUPolys()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolys);
	UClass* Z_Construct_UClass_UPolys_NoRegister()
	{
		return UPolys::StaticClass();
	}
	struct Z_Construct_UClass_UPolys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolys_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Polys.h" },
		{ "ModuleRelativePath", "Classes/Engine/Polys.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolys>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolys_Statics::ClassParams = {
		&UPolys::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPolys_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolys()
	{
		if (!Z_Registration_Info_UClass_UPolys.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolys.OuterSingleton, Z_Construct_UClass_UPolys_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolys.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPolys>()
	{
		return UPolys::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPolys)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolys, UPolys::StaticClass, TEXT("UPolys"), &Z_Registration_Info_UClass_UPolys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolys), 4241135317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_1145733511(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
