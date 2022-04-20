// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData;
class UScriptStruct* FScalarParameterAtlasInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("ScalarParameterAtlasInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScalarParameterAtlasInstanceData>()
{
	return FScalarParameterAtlasInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsedAsAtlasPosition_MetaData[];
#endif
		static void NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsedAsAtlasPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Atlas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Editable scalar parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable scalar parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterAtlasInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj)
	{
		((FScalarParameterAtlasInstanceData*)Obj)->bIsUsedAsAtlasPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition = { "bIsUsedAsAtlasPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScalarParameterAtlasInstanceData), &Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterAtlasInstanceData, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterAtlasInstanceData, Atlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ScalarParameterAtlasInstanceData",
		sizeof(FScalarParameterAtlasInstanceData),
		alignof(FScalarParameterAtlasInstanceData),
		Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalarParameterValue;
class UScriptStruct* FScalarParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalarParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("ScalarParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_ScalarParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScalarParameterValue>()
{
	return FScalarParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScalarParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterValue>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData = { "AtlasData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, AtlasData), Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData_MetaData)) }; // 1071665069
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "ScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo_MetaData)) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "ScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ScalarParameterValue",
		sizeof(FScalarParameterValue),
		alignof(FScalarParameterValue),
		Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_ScalarParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalarParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FScalarParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScalarParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorParameterValue;
class UScriptStruct* FVectorParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("VectorParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_VectorParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVectorParameterValue>()
{
	return FVectorParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVectorParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable vector parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable vector parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameterValue>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData)) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VectorParameterValue",
		sizeof(FVectorParameterValue),
		alignof(FVectorParameterValue),
		Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_VectorParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FVectorParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VectorParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue;
class UScriptStruct* FDoubleVectorParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleVectorParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("DoubleVectorParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDoubleVectorParameterValue>()
{
	return FDoubleVectorParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable vector parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable vector parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleVectorParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoubleVectorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterInfo_MetaData)) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "Comment", "// LWC_TODO: Blueprint?\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "LWC_TODO: Blueprint?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoubleVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoubleVectorParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ExpressionGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DoubleVectorParameterValue",
		sizeof(FDoubleVectorParameterValue),
		alignof(FDoubleVectorParameterValue),
		Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoubleVectorParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureParameterValue;
class UScriptStruct* FTextureParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("TextureParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_TextureParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureParameterValue>()
{
	return FTextureParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable texture parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable texture parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureParameterValue>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "TextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData)) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "TextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureParameterValue",
		sizeof(FTextureParameterValue),
		alignof(FTextureParameterValue),
		Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FTextureParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue;
class UScriptStruct* FRuntimeVirtualTextureParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeVirtualTextureParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeVirtualTextureParameterValue>()
{
	return FRuntimeVirtualTextureParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable runtime virtual texture parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable runtime virtual texture parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeVirtualTextureParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "RuntimeVirtualTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo_MetaData)) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "RuntimeVirtualTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ParameterValue), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RuntimeVirtualTextureParameterValue",
		sizeof(FRuntimeVirtualTextureParameterValue),
		alignof(FRuntimeVirtualTextureParameterValue),
		Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FontParameterValue;
class UScriptStruct* FFontParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FontParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FontParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("FontParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_FontParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFontParameterValue>()
{
	return FFontParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFontParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FontValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontPage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontPage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable font parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable font parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontParameterValue>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo_MetaData)) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue = { "FontValue", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, FontValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage = { "FontPage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, FontPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FontParameterValue",
		sizeof(FFontParameterValue),
		alignof(FFontParameterValue),
		Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_FontParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FontParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FFontParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FontParameterValue.InnerSingleton;
	}
	void UMaterialInstance::StaticRegisterNativesUMaterialInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInstance);
	UClass* Z_Construct_UClass_UMaterialInstance_NoRegister()
	{
		return UMaterialInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterialMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasStaticPermutationResource_MetaData[];
#endif
		static void NewProp_bHasStaticPermutationResource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStaticPermutationResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubsurfaceProfile_MetaData[];
#endif
		static void NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubsurfaceProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleVectorParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleVectorParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleVectorParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeVirtualTextureParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextureParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextureParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FontParameterValues;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBaseProperties_MetaData[];
#endif
		static void NewProp_bOverrideBaseProperties_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBaseProperties;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePropertyOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePropertyOverrides;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedTextureGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextureGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextureGuids;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticParameters;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSavedCachedData_MetaData[];
#endif
		static void NewProp_bSavedCachedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedCachedData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Physical material to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.EPhysicalMaterialMaskColor" },
		{ "Category", "PhysicalMaterialMask" },
		{ "Comment", "/** Physical material map used with physical material mask, when it exists.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Physical material map used with physical material mask, when it exists." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap = { "PhysicalMaterialMap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(PhysicalMaterialMap, UMaterialInstance), STRUCT_OFFSET(UMaterialInstance, PhysicalMaterialMap), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Parent material." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0014010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_MetaData[] = {
		{ "Comment", "/**\n\x09 * Indicates whether the instance has static permutation resources (which are required when static parameters are present) \n\x09 * Read directly from the rendering thread, can only be modified with the use of a FMaterialUpdateContext.\n\x09 * When true, StaticPermutationMaterialResources will always be valid and non-null.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Indicates whether the instance has static permutation resources (which are required when static parameters are present)\nRead directly from the rendering thread, can only be modified with the use of a FMaterialUpdateContext.\nWhen true, StaticPermutationMaterialResources will always be valid and non-null." },
	};
#endif
	void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_SetBit(void* Obj)
	{
		((UMaterialInstance*)Obj)->bHasStaticPermutationResource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource = { "bHasStaticPermutationResource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Defines if SubsurfaceProfile from this instance is used or it uses the parent one. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Defines if SubsurfaceProfile from this instance is used or it uses the parent one." },
	};
#endif
	void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj)
	{
		((UMaterialInstance*)Obj)->bOverrideSubsurfaceProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile = { "bOverrideSubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_Inner = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScalarParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1003498232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Scalar parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Scalar parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, ScalarParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_MetaData)) }; // 1003498232
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_Inner = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 3278535249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Vector parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Vector parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, VectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_MetaData)) }; // 3278535249
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues_Inner = { "DoubleVectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDoubleVectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 339071443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** DoubleVector parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "DoubleVector parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues = { "DoubleVectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, DoubleVectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues_MetaData)) }; // 339071443
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_Inner = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureParameterValue, METADATA_PARAMS(nullptr, 0) }; // 2053668582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Texture parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Texture parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, TextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_MetaData)) }; // 2053668582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue, METADATA_PARAMS(nullptr, 0) }; // 3081771592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** RuntimeVirtualTexture parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "RuntimeVirtualTexture parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, RuntimeVirtualTextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData)) }; // 3081771592
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_Inner = { "FontParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFontParameterValue, METADATA_PARAMS(nullptr, 0) }; // 4165402801
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Font parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Font parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues = { "FontParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, FontParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_MetaData)) }; // 4165402801
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_SetBit(void* Obj)
	{
		((UMaterialInstance*)Obj)->bOverrideBaseProperties_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties = { "bOverrideBaseProperties", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides = { "BasePropertyOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, BasePropertyOverrides), Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides_MetaData)) }; // 2808432396
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_Inner = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, ReferencedTextureGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters_MetaData[] = {
		{ "Comment", "/** Static parameter values that are overridden in this instance. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Static parameter values that are overridden in this instance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters = { "StaticParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstance, StaticParameters), Z_Construct_UScriptStruct_FStaticParameterSet, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters_MetaData)) }; // 859702739
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData_SetBit(void* Obj)
	{
		((UMaterialInstance*)Obj)->bSavedCachedData_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData = { "bSavedCachedData", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstance_Statics::ClassParams = {
		&UMaterialInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::PropPointers),
		0,
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstance()
	{
		if (!Z_Registration_Info_UClass_UMaterialInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInstance.OuterSingleton, Z_Construct_UClass_UMaterialInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialInstance>()
	{
		return UMaterialInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInstance)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ScriptStructInfo[] = {
		{ FScalarParameterAtlasInstanceData::StaticStruct, Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewStructOps, TEXT("ScalarParameterAtlasInstanceData"), &Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalarParameterAtlasInstanceData), 1071665069U) },
		{ FScalarParameterValue::StaticStruct, Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewStructOps, TEXT("ScalarParameterValue"), &Z_Registration_Info_UScriptStruct_ScalarParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalarParameterValue), 1003498232U) },
		{ FVectorParameterValue::StaticStruct, Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewStructOps, TEXT("VectorParameterValue"), &Z_Registration_Info_UScriptStruct_VectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorParameterValue), 3278535249U) },
		{ FDoubleVectorParameterValue::StaticStruct, Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewStructOps, TEXT("DoubleVectorParameterValue"), &Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleVectorParameterValue), 339071443U) },
		{ FTextureParameterValue::StaticStruct, Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewStructOps, TEXT("TextureParameterValue"), &Z_Registration_Info_UScriptStruct_TextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureParameterValue), 2053668582U) },
		{ FRuntimeVirtualTextureParameterValue::StaticStruct, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewStructOps, TEXT("RuntimeVirtualTextureParameterValue"), &Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeVirtualTextureParameterValue), 3081771592U) },
		{ FFontParameterValue::StaticStruct, Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewStructOps, TEXT("FontParameterValue"), &Z_Registration_Info_UScriptStruct_FontParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFontParameterValue), 4165402801U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInstance, UMaterialInstance::StaticClass, TEXT("UMaterialInstance"), &Z_Registration_Info_UClass_UMaterialInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInstance), 3065478637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_1485998006(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
