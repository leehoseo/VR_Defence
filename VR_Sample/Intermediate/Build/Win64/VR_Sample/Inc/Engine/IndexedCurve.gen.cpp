// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/IndexedCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndexedCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IndexedCurve;
class UScriptStruct* FIndexedCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IndexedCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IndexedCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedCurve, Z_Construct_UPackage__Script_Engine(), TEXT("IndexedCurve"));
	}
	return Z_Registration_Info_UScriptStruct_IndexedCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIndexedCurve>()
{
	return FIndexedCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIndexedCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandlesToIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandlesToIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A curve base class which enables key handles to index lookups.\n *\n * @todo sequencer: Some heavy refactoring can be done here. Much more stuff can go in this base class.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/IndexedCurve.h" },
		{ "ToolTip", "A curve base class which enables key handles to index lookups.\n\n@todo sequencer: Some heavy refactoring can be done here. Much more stuff can go in this base class." },
	};
#endif
	void* Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices_MetaData[] = {
		{ "Comment", "/** Map of which key handles go to which indices. */" },
		{ "ModuleRelativePath", "Classes/Curves/IndexedCurve.h" },
		{ "ToolTip", "Map of which key handles go to which indices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices = { "KeyHandlesToIndices", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIndexedCurve, KeyHandlesToIndices), Z_Construct_UScriptStruct_FKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices_MetaData)) }; // 3184147471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIndexedCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"IndexedCurve",
		sizeof(FIndexedCurve),
		alignof(FIndexedCurve),
		Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_IndexedCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IndexedCurve.InnerSingleton, Z_Construct_UScriptStruct_FIndexedCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IndexedCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_Statics::ScriptStructInfo[] = {
		{ FIndexedCurve::StaticStruct, Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewStructOps, TEXT("IndexedCurve"), &Z_Registration_Info_UScriptStruct_IndexedCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIndexedCurve), 1745683850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_3902687920(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
