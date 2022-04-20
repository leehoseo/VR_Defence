// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionDepthOfFieldFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDepthOfFieldFunction() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue;
	static UEnum* EDepthOfFieldFunctionValue_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue, Z_Construct_UPackage__Script_Engine(), TEXT("EDepthOfFieldFunctionValue"));
		}
		return Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDepthOfFieldFunctionValue>()
	{
		return EDepthOfFieldFunctionValue_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enumerators[] = {
		{ "TDOF_NearAndFarMask", (int64)TDOF_NearAndFarMask },
		{ "TDOF_NearMask", (int64)TDOF_NearMask },
		{ "TDOF_FarMask", (int64)TDOF_FarMask },
		{ "TDOF_CircleOfConfusionRadius", (int64)TDOF_CircleOfConfusionRadius },
		{ "TDOF_MAX", (int64)TDOF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Note: The index is used to map the enum to different code in the shader\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "TDOF_CircleOfConfusionRadius.Comment", "/** in pixels, only works for CircleDOF, use Abs for the actual radius as the sign of the value indicates near out of focus, positive indicates far out of focus */" },
		{ "TDOF_CircleOfConfusionRadius.Name", "TDOF_CircleOfConfusionRadius" },
		{ "TDOF_CircleOfConfusionRadius.ToolTip", "in pixels, only works for CircleDOF, use Abs for the actual radius as the sign of the value indicates near out of focus, positive indicates far out of focus" },
		{ "TDOF_FarMask.Comment", "/** 0:in Focus or Near .. 1:Far. */" },
		{ "TDOF_FarMask.Name", "TDOF_FarMask" },
		{ "TDOF_FarMask.ToolTip", "0:in Focus or Near .. 1:Far." },
		{ "TDOF_MAX.Name", "TDOF_MAX" },
		{ "TDOF_NearAndFarMask.Comment", "/** 0:in Focus .. 1:Near or Far. */" },
		{ "TDOF_NearAndFarMask.Name", "TDOF_NearAndFarMask" },
		{ "TDOF_NearAndFarMask.ToolTip", "0:in Focus .. 1:Near or Far." },
		{ "TDOF_NearMask.Comment", "/** 0:in Focus or Far .. 1:Near. */" },
		{ "TDOF_NearMask.Name", "TDOF_NearMask" },
		{ "TDOF_NearMask.ToolTip", "0:in Focus or Far .. 1:Near." },
		{ "ToolTip", "Note: The index is used to map the enum to different code in the shader" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDepthOfFieldFunctionValue",
		"EDepthOfFieldFunctionValue",
		Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue()
	{
		if (!Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.InnerSingleton, Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.InnerSingleton;
	}
	void UMaterialExpressionDepthOfFieldFunction::StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDepthOfFieldFunction);
	UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_NoRegister()
	{
		return UMaterialExpressionDepthOfFieldFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue_MetaData[] = {
		{ "Category", "MaterialExpressionDepthOfFieldFunction" },
		{ "Comment", "/** Determines the mapping place to use on the terrain. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ToolTip", "Determines the mapping place to use on the terrain." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue = { "FunctionValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionDepthOfFieldFunction, FunctionValue), Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue_MetaData)) }; // 3336451322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth_MetaData[] = {
		{ "Comment", "/** usually nothing or PixelDepth */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ToolTip", "usually nothing or PixelDepth" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionDepthOfFieldFunction, Depth), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDepthOfFieldFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::ClassParams = {
		&UMaterialExpressionDepthOfFieldFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDepthOfFieldFunction>()
	{
		return UMaterialExpressionDepthOfFieldFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDepthOfFieldFunction);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::EnumInfo[] = {
		{ EDepthOfFieldFunctionValue_StaticEnum, TEXT("EDepthOfFieldFunctionValue"), &Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3336451322U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction, UMaterialExpressionDepthOfFieldFunction::StaticClass, TEXT("UMaterialExpressionDepthOfFieldFunction"), &Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDepthOfFieldFunction), 542074282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_2165250100(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
