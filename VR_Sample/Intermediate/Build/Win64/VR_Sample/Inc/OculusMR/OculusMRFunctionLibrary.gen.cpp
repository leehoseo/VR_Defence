// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Public/OculusMRFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMRFunctionLibrary() {}
// Cross Module References
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMRFunctionLibrary_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMRFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_Settings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execIsMrcActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusMRFunctionLibrary::IsMrcActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execIsMrcEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusMRFunctionLibrary::IsMrcEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execSetMrcScalingFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScalingFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusMRFunctionLibrary::SetMrcScalingFactor(Z_Param_ScalingFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execGetMrcScalingFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusMRFunctionLibrary::GetMrcScalingFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execSetTrackingReferenceComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusMRFunctionLibrary::SetTrackingReferenceComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execGetTrackingReferenceComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=UOculusMRFunctionLibrary::GetTrackingReferenceComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMRFunctionLibrary::execGetOculusMRSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOculusMR_Settings**)Z_Param__Result=UOculusMRFunctionLibrary::GetOculusMRSettings();
		P_NATIVE_END;
	}
	void UOculusMRFunctionLibrary::StaticRegisterNativesUOculusMRFunctionLibrary()
	{
		UClass* Class = UOculusMRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMrcScalingFactor", &UOculusMRFunctionLibrary::execGetMrcScalingFactor },
			{ "GetOculusMRSettings", &UOculusMRFunctionLibrary::execGetOculusMRSettings },
			{ "GetTrackingReferenceComponent", &UOculusMRFunctionLibrary::execGetTrackingReferenceComponent },
			{ "IsMrcActive", &UOculusMRFunctionLibrary::execIsMrcActive },
			{ "IsMrcEnabled", &UOculusMRFunctionLibrary::execIsMrcEnabled },
			{ "SetMrcScalingFactor", &UOculusMRFunctionLibrary::execSetMrcScalingFactor },
			{ "SetTrackingReferenceComponent", &UOculusMRFunctionLibrary::execSetTrackingReferenceComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics
	{
		struct OculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the scaling factor for the MRC configuration. Returns 0 if not available.\n" },
		{ "DisplayName", "Get MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Get the scaling factor for the MRC configuration. Returns 0 if not available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "GetMrcScalingFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::OculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics
	{
		struct OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms
		{
			UOculusMR_Settings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms, ReturnValue), Z_Construct_UClass_UOculusMR_Settings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the OculusMR settings object\n" },
		{ "DisplayName", "Get Oculus MR Settings" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Get the OculusMR settings object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "GetOculusMRSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics
	{
		struct OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the component that the OculusMR camera is tracking. When this is null, the camera will track the player pawn.\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Get the component that the OculusMR camera is tracking. When this is null, the camera will track the player pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "GetTrackingReferenceComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics
	{
		struct OculusMRFunctionLibrary_eventIsMrcActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMRFunctionLibrary_eventIsMrcActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMRFunctionLibrary_eventIsMrcActive_Parms), &Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Check if MRC is enabled and actively capturing\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Check if MRC is enabled and actively capturing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "IsMrcActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::OculusMRFunctionLibrary_eventIsMrcActive_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics
	{
		struct OculusMRFunctionLibrary_eventIsMrcEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMRFunctionLibrary_eventIsMrcEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMRFunctionLibrary_eventIsMrcEnabled_Parms), &Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Check if MRC is enabled\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Check if MRC is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "IsMrcEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::OculusMRFunctionLibrary_eventIsMrcEnabled_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics
	{
		struct OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms
		{
			float ScalingFactor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms, ScalingFactor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms), &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Set the scaling factor for the MRC configuration. This should be a positive value set to the same scaling as the VR player pawn so that the game capture and camera video are aligned.\n" },
		{ "CPP_Default_ScalingFactor", "1.000000" },
		{ "DisplayName", "Set MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Set the scaling factor for the MRC configuration. This should be a positive value set to the same scaling as the VR player pawn so that the game capture and camera video are aligned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "SetMrcScalingFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::OculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics
	{
		struct OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms
		{
			USceneComponent* Component;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Set the component for the OculusMR camera to track. If this is set to null, the camera will track the player pawn.\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Set the component for the OculusMR camera to track. If this is set to null, the camera will track the player pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "SetTrackingReferenceComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusMRFunctionLibrary);
	UClass* Z_Construct_UClass_UOculusMRFunctionLibrary_NoRegister()
	{
		return UOculusMRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_GetMrcScalingFactor, "GetMrcScalingFactor" }, // 2456022708
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings, "GetOculusMRSettings" }, // 2774001891
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent, "GetTrackingReferenceComponent" }, // 2905183728
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcActive, "IsMrcActive" }, // 3229429137
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_IsMrcEnabled, "IsMrcEnabled" }, // 1171307096
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetMrcScalingFactor, "SetMrcScalingFactor" }, // 858660201
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent, "SetTrackingReferenceComponent" }, // 4175450668
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusMRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMRFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::ClassParams = {
		&UOculusMRFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMRFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOculusMRFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusMRFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusMRFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSMR_API UClass* StaticClass<UOculusMRFunctionLibrary>()
	{
		return UOculusMRFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMRFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusMRFunctionLibrary, UOculusMRFunctionLibrary::StaticClass, TEXT("UOculusMRFunctionLibrary"), &Z_Registration_Info_UClass_UOculusMRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusMRFunctionLibrary), 3716051635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_1153978429(TEXT("/Script/OculusMR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
