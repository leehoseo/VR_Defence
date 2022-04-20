// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/LightmappedSurfaceCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmappedSurfaceCollection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmappedSurfaceCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
// End Cross Module References
	void ULightmappedSurfaceCollection::StaticRegisterNativesULightmappedSurfaceCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightmappedSurfaceCollection);
	UClass* Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister()
	{
		return ULightmappedSurfaceCollection::StaticClass();
	}
	struct Z_Construct_UClass_ULightmappedSurfaceCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceModel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Surfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Surfaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Lightmass/LightmappedSurfaceCollection.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel_MetaData[] = {
		{ "Category", "LightmappedSurfaceCollection" },
		{ "Comment", "/** The UModel these surfaces come from. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
		{ "ToolTip", "The UModel these surfaces come from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel = { "SourceModel", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightmappedSurfaceCollection, SourceModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_Inner = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_MetaData[] = {
		{ "Category", "LightmappedSurfaceCollection" },
		{ "Comment", "/** An array of the surface indices grouped into a single static lighting mapping. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
		{ "ToolTip", "An array of the surface indices grouped into a single static lighting mapping." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightmappedSurfaceCollection, Surfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmappedSurfaceCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::ClassParams = {
		&ULightmappedSurfaceCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightmappedSurfaceCollection()
	{
		if (!Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton, Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULightmappedSurfaceCollection>()
	{
		return ULightmappedSurfaceCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmappedSurfaceCollection);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightmappedSurfaceCollection, ULightmappedSurfaceCollection::StaticClass, TEXT("ULightmappedSurfaceCollection"), &Z_Registration_Info_UClass_ULightmappedSurfaceCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightmappedSurfaceCollection), 3558613401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_162055476(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
