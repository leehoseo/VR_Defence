// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMD/Private/OculusResourceHolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusResourceHolder() {}
// Cross Module References
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusResourceHolder_NoRegister();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusResourceHolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UOculusResourceHolder::StaticRegisterNativesUOculusResourceHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusResourceHolder);
	UClass* Z_Construct_UClass_UOculusResourceHolder_NoRegister()
	{
		return UOculusResourceHolder::StaticClass();
	}
	struct Z_Construct_UClass_UOculusResourceHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokeAHoleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PokeAHoleMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusResourceHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusResourceHolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OculusResourceHolder.h" },
		{ "ModuleRelativePath", "Private/OculusResourceHolder.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusResourceHolder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial = { "PokeAHoleMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusResourceHolder, PokeAHoleMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusResourceHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusResourceHolder_Statics::NewProp_PokeAHoleMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusResourceHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusResourceHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusResourceHolder_Statics::ClassParams = {
		&UOculusResourceHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusResourceHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusResourceHolder_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusResourceHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusResourceHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusResourceHolder()
	{
		if (!Z_Registration_Info_UClass_UOculusResourceHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusResourceHolder.OuterSingleton, Z_Construct_UClass_UOculusResourceHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusResourceHolder.OuterSingleton;
	}
	template<> OCULUSHMD_API UClass* StaticClass<UOculusResourceHolder>()
	{
		return UOculusResourceHolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusResourceHolder);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusResourceHolder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusResourceHolder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusResourceHolder, UOculusResourceHolder::StaticClass, TEXT("UOculusResourceHolder"), &Z_Registration_Info_UClass_UOculusResourceHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusResourceHolder), 2860383351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusResourceHolder_h_2721861119(TEXT("/Script/OculusHMD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusResourceHolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusResourceHolder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
