// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FieldSystemEngine/Public/Field/FieldSystemActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemActor() {}
// Cross Module References
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FieldSystemEngine();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
// End Cross Module References
	void AFieldSystemActor::StaticRegisterNativesAFieldSystemActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFieldSystemActor);
	UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister()
	{
		return AFieldSystemActor::StaticClass();
	}
	struct Z_Construct_UClass_AFieldSystemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FieldSystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFieldSystemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFieldSystemActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "IncludePath", "Field/FieldSystemActor.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Field" },
		{ "Comment", "/* FieldSystemComponent */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|FieldSystem" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemActor.h" },
		{ "ToolTip", "FieldSystemComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent = { "FieldSystemComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFieldSystemActor, FieldSystemComponent), Z_Construct_UClass_UFieldSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFieldSystemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFieldSystemActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFieldSystemActor_Statics::ClassParams = {
		&AFieldSystemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFieldSystemActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFieldSystemActor()
	{
		if (!Z_Registration_Info_UClass_AFieldSystemActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFieldSystemActor.OuterSingleton, Z_Construct_UClass_AFieldSystemActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFieldSystemActor.OuterSingleton;
	}
	template<> FIELDSYSTEMENGINE_API UClass* StaticClass<AFieldSystemActor>()
	{
		return AFieldSystemActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFieldSystemActor);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFieldSystemActor, AFieldSystemActor::StaticClass, TEXT("AFieldSystemActor"), &Z_Registration_Info_UClass_AFieldSystemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFieldSystemActor), 564121678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_4021410058(TEXT("/Script/FieldSystemEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
