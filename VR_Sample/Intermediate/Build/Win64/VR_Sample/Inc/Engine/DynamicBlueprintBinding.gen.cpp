// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DynamicBlueprintBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicBlueprintBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDynamicBlueprintBinding::StaticRegisterNativesUDynamicBlueprintBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicBlueprintBinding);
	UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister()
	{
		return UDynamicBlueprintBinding::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicBlueprintBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicBlueprintBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicBlueprintBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DynamicBlueprintBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/DynamicBlueprintBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicBlueprintBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicBlueprintBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicBlueprintBinding_Statics::ClassParams = {
		&UDynamicBlueprintBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicBlueprintBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicBlueprintBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicBlueprintBinding()
	{
		if (!Z_Registration_Info_UClass_UDynamicBlueprintBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicBlueprintBinding.OuterSingleton, Z_Construct_UClass_UDynamicBlueprintBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicBlueprintBinding.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDynamicBlueprintBinding>()
	{
		return UDynamicBlueprintBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicBlueprintBinding);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicBlueprintBinding, UDynamicBlueprintBinding::StaticClass, TEXT("UDynamicBlueprintBinding"), &Z_Registration_Info_UClass_UDynamicBlueprintBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicBlueprintBinding), 3988169886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_3901632358(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
