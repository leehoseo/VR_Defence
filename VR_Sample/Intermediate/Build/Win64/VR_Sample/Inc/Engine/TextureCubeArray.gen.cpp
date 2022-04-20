// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureCubeArray.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCubeArray() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureCubeArray_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCubeArray();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
// End Cross Module References
	void UTextureCubeArray::StaticRegisterNativesUTextureCubeArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureCubeArray);
	UClass* Z_Construct_UClass_UTextureCubeArray_NoRegister()
	{
		return UTextureCubeArray::StaticClass();
	}
	struct Z_Construct_UClass_UTextureCubeArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureCubeArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCubeArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/TextureCubeArray.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCubeArray.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures_Inner = { "SourceTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures_MetaData[] = {
		{ "Category", "SourceCube" },
		{ "Comment", "/** Add Textures*/" },
		{ "DisplayName", "Source Textures" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCubeArray.h" },
		{ "ToolTip", "Add Textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures = { "SourceTextures", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureCubeArray, SourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureCubeArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureCubeArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCubeArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureCubeArray_Statics::ClassParams = {
		&UTextureCubeArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UTextureCubeArray_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArray_Statics::PropPointers), 0),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureCubeArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureCubeArray()
	{
		if (!Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton, Z_Construct_UClass_UTextureCubeArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureCubeArray>()
	{
		return UTextureCubeArray::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCubeArray);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureCubeArray)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureCubeArray, UTextureCubeArray::StaticClass, TEXT("UTextureCubeArray"), &Z_Registration_Info_UClass_UTextureCubeArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureCubeArray), 2816002836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_538679731(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
