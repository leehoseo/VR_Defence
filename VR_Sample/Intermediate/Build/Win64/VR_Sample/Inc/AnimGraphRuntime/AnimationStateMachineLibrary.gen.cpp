// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimationStateMachineLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationStateMachineLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateResultReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimationStateMachineLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimationStateMachineLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimationStateResultReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FAnimationStateResultReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationStateResultReference;
class UScriptStruct* FAnimationStateResultReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStateResultReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationStateResultReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateResultReference, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimationStateResultReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationStateResultReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimationStateResultReference>()
{
	return FAnimationStateResultReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Animation State Reference" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStateResultReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNodeReference,
		&NewStructOps,
		"AnimationStateResultReference",
		sizeof(FAnimationStateResultReference),
		alignof(FAnimationStateResultReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateResultReference()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationStateResultReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationStateResultReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationStateResultReference.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimationStateMachineLibrary::execIsStateBlendingOut)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationStateMachineLibrary::IsStateBlendingOut(Z_Param_Out_UpdateContext,Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationStateMachineLibrary::execIsStateBlendingIn)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationStateMachineLibrary::IsStateBlendingIn(Z_Param_Out_UpdateContext,Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationStateMachineLibrary::execConvertToAnimationStateResultPure)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_AnimationState);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(Z_Param_Out_Node,Z_Param_Out_AnimationState,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationStateMachineLibrary::execConvertToAnimationStateResult)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_AnimationState);
		P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationStateMachineLibrary::ConvertToAnimationStateResult(Z_Param_Out_Node,Z_Param_Out_AnimationState,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void UAnimationStateMachineLibrary::StaticRegisterNativesUAnimationStateMachineLibrary()
	{
		UClass* Class = UAnimationStateMachineLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToAnimationStateResult", &UAnimationStateMachineLibrary::execConvertToAnimationStateResult },
			{ "ConvertToAnimationStateResultPure", &UAnimationStateMachineLibrary::execConvertToAnimationStateResultPure },
			{ "IsStateBlendingIn", &UAnimationStateMachineLibrary::execIsStateBlendingIn },
			{ "IsStateBlendingOut", &UAnimationStateMachineLibrary::execIsStateBlendingOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics
	{
		struct AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms
		{
			FAnimNodeReference Node;
			FAnimationStateResultReference AnimationState;
			EAnimNodeReferenceConversionResult Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_AnimationState = { "AnimationState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms, AnimationState), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(nullptr, 0) }; // 2133824190
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(nullptr, 0) }; // 2316672980
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_AnimationState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Get an anim state reference from an anim node reference */" },
		{ "DisplayName", "Convert to Animation State" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Get an anim state reference from an anim node reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "ConvertToAnimationStateResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms), Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics
	{
		struct AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms
		{
			FAnimNodeReference Node;
			FAnimationStateResultReference AnimationState;
			bool Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationState;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_AnimationState = { "AnimationState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms, AnimationState), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(nullptr, 0) }; // 2133824190
	void Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms), &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_AnimationState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Get an anim state reference from an anim node reference (pure) */" },
		{ "DisplayName", "Convert to Animation State" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Get an anim state reference from an anim node reference (pure)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "ConvertToAnimationStateResultPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms), Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics
	{
		struct AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms
		{
			FAnimUpdateContext UpdateContext;
			FAnimationStateResultReference Node;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms, Node), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_Node_MetaData)) }; // 2133824190
	void Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms), &Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Returns whether the state the node belongs to is blending in */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Returns whether the state the node belongs to is blending in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "IsStateBlendingIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms), Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics
	{
		struct AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms
		{
			FAnimUpdateContext UpdateContext;
			FAnimationStateResultReference Node;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms, Node), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_Node_MetaData)) }; // 2133824190
	void Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms), &Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Returns whether the state the node belongs to is blending out */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Returns whether the state the node belongs to is blending out" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "IsStateBlendingOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms), Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationStateMachineLibrary);
	UClass* Z_Construct_UClass_UAnimationStateMachineLibrary_NoRegister()
	{
		return UAnimationStateMachineLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationStateMachineLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult, "ConvertToAnimationStateResult" }, // 3216501749
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure, "ConvertToAnimationStateResultPure" }, // 2180124572
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn, "IsStateBlendingIn" }, // 4126665336
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut, "IsStateBlendingOut" }, // 4108674645
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on anim state machine node contexts\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimationStateMachineLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on anim state machine node contexts" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationStateMachineLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::ClassParams = {
		&UAnimationStateMachineLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationStateMachineLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimationStateMachineLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationStateMachineLibrary.OuterSingleton, Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationStateMachineLibrary.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimationStateMachineLibrary>()
	{
		return UAnimationStateMachineLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationStateMachineLibrary);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ScriptStructInfo[] = {
		{ FAnimationStateResultReference::StaticStruct, Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::NewStructOps, TEXT("AnimationStateResultReference"), &Z_Registration_Info_UScriptStruct_AnimationStateResultReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationStateResultReference), 2133824190U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationStateMachineLibrary, UAnimationStateMachineLibrary::StaticClass, TEXT("UAnimationStateMachineLibrary"), &Z_Registration_Info_UClass_UAnimationStateMachineLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationStateMachineLibrary), 3893381977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_4272727141(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
