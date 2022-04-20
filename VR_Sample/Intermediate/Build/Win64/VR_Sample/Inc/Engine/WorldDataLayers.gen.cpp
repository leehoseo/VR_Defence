// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/DataLayer/WorldDataLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldDataLayers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AWorldDataLayers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldDataLayers();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayer_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
// End Cross Module References
	DEFINE_FUNCTION(AWorldDataLayers::execOnRep_EffectiveLoadedDataLayerNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EffectiveLoadedDataLayerNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDataLayers::execOnRep_EffectiveActiveDataLayerNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EffectiveActiveDataLayerNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDataLayers::execOnRep_LoadedDataLayerNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LoadedDataLayerNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDataLayers::execOnRep_ActiveDataLayerNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ActiveDataLayerNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDataLayers::execOnDataLayerRuntimeStateChanged)
	{
		P_GET_OBJECT(UDataLayer,Z_Param_InDataLayer);
		P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDataLayerRuntimeStateChanged_Implementation(Z_Param_InDataLayer,EDataLayerRuntimeState(Z_Param_InState));
		P_NATIVE_END;
	}
	static FName NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged = FName(TEXT("OnDataLayerRuntimeStateChanged"));
	void AWorldDataLayers::OnDataLayerRuntimeStateChanged(const UDataLayer* InDataLayer, EDataLayerRuntimeState InState)
	{
		WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms Parms;
		Parms.InDataLayer=InDataLayer;
		Parms.InState=InState;
		ProcessEvent(FindFunctionChecked(NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged),&Parms);
	}
	void AWorldDataLayers::StaticRegisterNativesAWorldDataLayers()
	{
		UClass* Class = AWorldDataLayers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDataLayerRuntimeStateChanged", &AWorldDataLayers::execOnDataLayerRuntimeStateChanged },
			{ "OnRep_ActiveDataLayerNames", &AWorldDataLayers::execOnRep_ActiveDataLayerNames },
			{ "OnRep_EffectiveActiveDataLayerNames", &AWorldDataLayers::execOnRep_EffectiveActiveDataLayerNames },
			{ "OnRep_EffectiveLoadedDataLayerNames", &AWorldDataLayers::execOnRep_EffectiveLoadedDataLayerNames },
			{ "OnRep_LoadedDataLayerNames", &AWorldDataLayers::execOnRep_LoadedDataLayerNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms, InDataLayer), Z_Construct_UClass_UDataLayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InDataLayer_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnDataLayerRuntimeStateChanged", nullptr, nullptr, sizeof(WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms), Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnRep_ActiveDataLayerNames", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnRep_EffectiveActiveDataLayerNames", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnRep_EffectiveLoadedDataLayerNames", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnRep_LoadedDataLayerNames", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldDataLayers);
	UClass* Z_Construct_UClass_AWorldDataLayers_NoRegister()
	{
		return AWorldDataLayers::StaticClass();
	}
	struct Z_Construct_UClass_AWorldDataLayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRuntimeDataLayerEditing_MetaData[];
#endif
		static void NewProp_bAllowRuntimeDataLayerEditing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRuntimeDataLayerEditing;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldDataLayers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_WorldDataLayers;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RepActiveDataLayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepActiveDataLayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RepActiveDataLayerNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RepLoadedDataLayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepLoadedDataLayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RepLoadedDataLayerNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RepEffectiveActiveDataLayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepEffectiveActiveDataLayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RepEffectiveActiveDataLayerNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RepEffectiveLoadedDataLayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepEffectiveLoadedDataLayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RepEffectiveLoadedDataLayerNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldDataLayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorldDataLayers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged, "OnDataLayerRuntimeStateChanged" }, // 535977622
		{ &Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames, "OnRep_ActiveDataLayerNames" }, // 710952183
		{ &Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames, "OnRep_EffectiveActiveDataLayerNames" }, // 2289084443
		{ &Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames, "OnRep_EffectiveLoadedDataLayerNames" }, // 187662405
		{ &Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames, "OnRep_LoadedDataLayerNames" }, // 2533361595
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDataLayers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor containing all data layers for a world\n */" },
		{ "HideCategories", "Actor HLOD Cooking Transform Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorldPartition/DataLayer/WorldDataLayers.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor containing all data layers for a world" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing_MetaData[] = {
		{ "Comment", "// True when Runtime Data Layer editing is allowed.\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
		{ "ToolTip", "True when Runtime Data Layer editing is allowed." },
	};
#endif
	void Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing_SetBit(void* Obj)
	{
		((AWorldDataLayers*)Obj)->bAllowRuntimeDataLayerEditing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing = { "bAllowRuntimeDataLayerEditing", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWorldDataLayers), &Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers_ElementProp = { "WorldDataLayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers = { "WorldDataLayers", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldDataLayers, WorldDataLayers), METADATA_PARAMS(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames_Inner = { "RepActiveDataLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames = { "RepActiveDataLayerNames", "OnRep_ActiveDataLayerNames", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldDataLayers, RepActiveDataLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames_Inner = { "RepLoadedDataLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames = { "RepLoadedDataLayerNames", "OnRep_LoadedDataLayerNames", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldDataLayers, RepLoadedDataLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames_Inner = { "RepEffectiveActiveDataLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames = { "RepEffectiveActiveDataLayerNames", "OnRep_EffectiveActiveDataLayerNames", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldDataLayers, RepEffectiveActiveDataLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames_Inner = { "RepEffectiveLoadedDataLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames = { "RepEffectiveLoadedDataLayerNames", "OnRep_EffectiveLoadedDataLayerNames", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldDataLayers, RepEffectiveLoadedDataLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldDataLayers_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldDataLayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldDataLayers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldDataLayers_Statics::ClassParams = {
		&AWorldDataLayers::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorldDataLayers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldDataLayers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldDataLayers()
	{
		if (!Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton, Z_Construct_UClass_AWorldDataLayers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AWorldDataLayers>()
	{
		return AWorldDataLayers::StaticClass();
	}

	void AWorldDataLayers::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RepActiveDataLayerNames(TEXT("RepActiveDataLayerNames"));
		static const FName Name_RepLoadedDataLayerNames(TEXT("RepLoadedDataLayerNames"));
		static const FName Name_RepEffectiveActiveDataLayerNames(TEXT("RepEffectiveActiveDataLayerNames"));
		static const FName Name_RepEffectiveLoadedDataLayerNames(TEXT("RepEffectiveLoadedDataLayerNames"));

		const bool bIsValid = true
			&& Name_RepActiveDataLayerNames == ClassReps[(int32)ENetFields_Private::RepActiveDataLayerNames].Property->GetFName()
			&& Name_RepLoadedDataLayerNames == ClassReps[(int32)ENetFields_Private::RepLoadedDataLayerNames].Property->GetFName()
			&& Name_RepEffectiveActiveDataLayerNames == ClassReps[(int32)ENetFields_Private::RepEffectiveActiveDataLayerNames].Property->GetFName()
			&& Name_RepEffectiveLoadedDataLayerNames == ClassReps[(int32)ENetFields_Private::RepEffectiveLoadedDataLayerNames].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWorldDataLayers"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldDataLayers);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldDataLayers, AWorldDataLayers::StaticClass, TEXT("AWorldDataLayers"), &Z_Registration_Info_UClass_AWorldDataLayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldDataLayers), 1193124765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_1160575085(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
