// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimMetaData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimMetaData::StaticRegisterNativesUAnimMetaData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimMetaData);
	UClass* Z_Construct_UClass_UAnimMetaData_NoRegister()
	{
		return UAnimMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMetaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimMetaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMetaData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimMetaData_Statics::ClassParams = {
		&UAnimMetaData::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimMetaData()
	{
		if (!Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton, Z_Construct_UClass_UAnimMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimMetaData>()
	{
		return UAnimMetaData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimMetaData);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimMetaData, UAnimMetaData::StaticClass, TEXT("UAnimMetaData"), &Z_Registration_Info_UClass_UAnimMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimMetaData), 1253076677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_1668700264(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
