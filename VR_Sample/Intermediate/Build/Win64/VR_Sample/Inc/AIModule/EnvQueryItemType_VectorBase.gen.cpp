// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_VectorBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryItemType_VectorBase::StaticRegisterNativesUEnvQueryItemType_VectorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryItemType_VectorBase);
	UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase_NoRegister()
	{
		return UEnvQueryItemType_VectorBase::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryItemType_VectorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics::ClassParams = {
		&UEnvQueryItemType_VectorBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.OuterSingleton, Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryItemType_VectorBase>()
	{
		return UEnvQueryItemType_VectorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_VectorBase);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryItemType_VectorBase, UEnvQueryItemType_VectorBase::StaticClass, TEXT("UEnvQueryItemType_VectorBase"), &Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryItemType_VectorBase), 2578368124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_3549103201(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
