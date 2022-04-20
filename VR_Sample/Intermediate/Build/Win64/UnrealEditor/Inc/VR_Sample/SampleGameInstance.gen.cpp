// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VR_Sample/SampleGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleGameInstance() {}
// Cross Module References
	VR_SAMPLE_API UClass* Z_Construct_UClass_USampleGameInstance_NoRegister();
	VR_SAMPLE_API UClass* Z_Construct_UClass_USampleGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_VR_Sample();
// End Cross Module References
	void USampleGameInstance::StaticRegisterNativesUSampleGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USampleGameInstance);
	UClass* Z_Construct_UClass_USampleGameInstance_NoRegister()
	{
		return USampleGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USampleGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USampleGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VR_Sample,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USampleGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SampleGameInstance.h" },
		{ "ModuleRelativePath", "SampleGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USampleGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USampleGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USampleGameInstance_Statics::ClassParams = {
		&USampleGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USampleGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USampleGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USampleGameInstance()
	{
		if (!Z_Registration_Info_UClass_USampleGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USampleGameInstance.OuterSingleton, Z_Construct_UClass_USampleGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USampleGameInstance.OuterSingleton;
	}
	template<> VR_SAMPLE_API UClass* StaticClass<USampleGameInstance>()
	{
		return USampleGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USampleGameInstance);
	struct Z_CompiledInDeferFile_FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USampleGameInstance, USampleGameInstance::StaticClass, TEXT("USampleGameInstance"), &Z_Registration_Info_UClass_USampleGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USampleGameInstance), 2688786796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_31560962(TEXT("/Script/VR_Sample"),
		Z_CompiledInDeferFile_FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
