// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVolumetricAdvancedMaterialInput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionVolumetricAdvancedMaterialInput::StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVolumetricAdvancedMaterialInput);
	UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_NoRegister()
	{
		return UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVolumetricAdvancedMaterialInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::ClassParams = {
		&UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVolumetricAdvancedMaterialInput>()
	{
		return UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVolumetricAdvancedMaterialInput);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput, UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass, TEXT("UMaterialExpressionVolumetricAdvancedMaterialInput"), &Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVolumetricAdvancedMaterialInput), 553638416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_1413113384(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
