// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/MultiLineEditableText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiLineEditableText() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics
	{
		struct MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "OnMultiLineEditableTextChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics
	{
		struct MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) }; // 1116915171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "OnMultiLineEditableTextCommittedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMultiLineEditableText::execSetWidgetStyle)
	{
		P_GET_STRUCT_REF(FTextBlockStyle,Z_Param_Out_InWidgetStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetStyle(Z_Param_Out_InWidgetStyle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableText::execSetIsReadOnly)
	{
		P_GET_UBOOL(Z_Param_bReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsReadOnly(Z_Param_bReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableText::execSetHintText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InHintText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHintText(Z_Param_InHintText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableText::execGetHintText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHintText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableText::execSetText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiLineEditableText::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	void UMultiLineEditableText::StaticRegisterNativesUMultiLineEditableText()
	{
		UClass* Class = UMultiLineEditableText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHintText", &UMultiLineEditableText::execGetHintText },
			{ "GetText", &UMultiLineEditableText::execGetText },
			{ "SetHintText", &UMultiLineEditableText::execSetHintText },
			{ "SetIsReadOnly", &UMultiLineEditableText::execSetIsReadOnly },
			{ "SetText", &UMultiLineEditableText::execSetText },
			{ "SetWidgetStyle", &UMultiLineEditableText::execSetWidgetStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics
	{
		struct MultiLineEditableText_eventGetHintText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventGetHintText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "GetHintText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "GetHintText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::MultiLineEditableText_eventGetHintText_Parms), Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetHintText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_GetHintText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics
	{
		struct MultiLineEditableText_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "GetText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "GetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::MultiLineEditableText_eventGetText_Parms), Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics
	{
		struct MultiLineEditableText_eventSetHintText_Parms
		{
			FText InHintText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InHintText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::NewProp_InHintText = { "InHintText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetHintText_Parms, InHintText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::NewProp_InHintText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "SetHintText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetHintText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::MultiLineEditableText_eventSetHintText_Parms), Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetHintText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetHintText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics
	{
		struct MultiLineEditableText_eventSetIsReadOnly_Parms
		{
			bool bReadOnly;
		};
		static void NewProp_bReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit(void* Obj)
	{
		((MultiLineEditableText_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultiLineEditableText_eventSetIsReadOnly_Parms), &Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::NewProp_bReadOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "SetIsReadOnly (Multi-Line Editable Text" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetIsReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::MultiLineEditableText_eventSetIsReadOnly_Parms), Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics
	{
		struct MultiLineEditableText_eventSetText_Parms
		{
			FText InText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "SetText (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::MultiLineEditableText_eventSetText_Parms), Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics
	{
		struct MultiLineEditableText_eventSetWidgetStyle_Parms
		{
			FTextBlockStyle InWidgetStyle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWidgetStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::NewProp_InWidgetStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::NewProp_InWidgetStyle = { "InWidgetStyle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiLineEditableText_eventSetWidgetStyle_Parms, InWidgetStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::NewProp_InWidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::NewProp_InWidgetStyle_MetaData)) }; // 2453068466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::NewProp_InWidgetStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, nullptr, "SetWidgetStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::MultiLineEditableText_eventSetWidgetStyle_Parms), Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiLineEditableText);
	UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister()
	{
		return UMultiLineEditableText::StaticClass();
	}
	struct Z_Construct_UClass_UMultiLineEditableText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_HintText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextWhenFocused_MetaData[];
#endif
		static void NewProp_SelectAllTextWhenFocused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextWhenFocused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearTextSelectionOnFocusLoss_MetaData[];
#endif
		static void NewProp_ClearTextSelectionOnFocusLoss_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearTextSelectionOnFocusLoss;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevertTextOnEscape_MetaData[];
#endif
		static void NewProp_RevertTextOnEscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RevertTextOnEscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[];
#endif
		static void NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[];
#endif
		static void NewProp_AllowContextMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualKeyboardOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualKeyboardDismissAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualKeyboardDismissAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualKeyboardDismissAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiLineEditableText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiLineEditableText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiLineEditableText_GetHintText, "GetHintText" }, // 2747151220
		{ &Z_Construct_UFunction_UMultiLineEditableText_GetText, "GetText" }, // 2215949751
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature, "OnMultiLineEditableTextChangedEvent__DelegateSignature" }, // 3166931778
		{ &Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature, "OnMultiLineEditableTextCommittedEvent__DelegateSignature" }, // 2264311299
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetHintText, "SetHintText" }, // 2534402459
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly, "SetIsReadOnly" }, // 3796890217
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetText, "SetText" }, // 115187903
		{ &Z_Construct_UFunction_UMultiLineEditableText_SetWidgetStyle, "SetWidgetStyle" }, // 1729687472
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editable text box widget\n */" },
		{ "DisplayName", "Editable Text (Multi-Line)" },
		{ "IncludePath", "Components/MultiLineEditableText.h" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Editable text box widget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The text content for this editable text box widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text content for this editable text box widget" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, Text), METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Hint text that appears when there is no text in the text box */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Hint text that appears when there is no text in the text box" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText = { "HintText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, HintText), METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the hint text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate = { "HintTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate_MetaData)) }; // 2253336823
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "BlueprintSetter", "SetWidgetStyle" },
		{ "Category", "Style" },
		{ "Comment", "/** The style */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, WidgetStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle_MetaData)) }; // 2453068466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether this text block can be modified interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Sets whether this text block can be modified interactively by the user" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font_MetaData[] = {
		{ "Comment", "/** Font color and opacity (overrides Style) */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Font color and opacity (overrides Style)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font_MetaData)) }; // 346448296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to select all text when the user clicks to give focus on the widget */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to select all text when the user clicks to give focus on the widget" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->SelectAllTextWhenFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused = { "SelectAllTextWhenFocused", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to clear text selection when focus is lost */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to clear text selection when focus is lost" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->ClearTextSelectionOnFocusLoss = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss = { "ClearTextSelectionOnFocusLoss", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to allow the user to back out of changes when they press the escape key */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to allow the user to back out of changes when they press the escape key" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->RevertTextOnEscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape = { "RevertTextOnEscape", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether to clear keyboard focus when pressing enter to commit changes */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether to clear keyboard focus when pressing enter to commit changes" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->ClearKeyboardFocusOnCommit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether the context menu can be opened */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Whether the context menu can be opened" },
	};
#endif
	void Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_SetBit(void* Obj)
	{
		((UMultiLineEditableText*)Obj)->AllowContextMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu = { "AllowContextMenu", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiLineEditableText), &Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Additional options for the virtual keyboard */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Additional options for the virtual keyboard" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions = { "VirtualKeyboardOptions", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, VirtualKeyboardOptions), Z_Construct_UScriptStruct_FVirtualKeyboardOptions, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions_MetaData)) }; // 568627260
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** What action should be taken when the virtual keyboard is dismissed? */" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "What action should be taken when the virtual keyboard is dismissed?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction = { "VirtualKeyboardDismissAction", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, VirtualKeyboardDismissAction), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_MetaData)) }; // 3172622149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is changed programmatically or interactively by the user */" },
		{ "DisplayName", "OnTextChanged (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Called whenever the text is changed programmatically or interactively by the user" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, OnTextChanged), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged_MetaData)) }; // 3166931778
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus. */" },
		{ "DisplayName", "OnTextCommitted (Multi-Line Editable Text)" },
		{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
		{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted = { "OnTextCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiLineEditableText, OnTextCommitted), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted_MetaData)) }; // 2264311299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_HintTextDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_SelectAllTextWhenFocused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearTextSelectionOnFocusLoss,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_RevertTextOnEscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_ClearKeyboardFocusOnCommit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_AllowContextMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_VirtualKeyboardDismissAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiLineEditableText_Statics::NewProp_OnTextCommitted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiLineEditableText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiLineEditableText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiLineEditableText_Statics::ClassParams = {
		&UMultiLineEditableText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiLineEditableText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiLineEditableText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiLineEditableText()
	{
		if (!Z_Registration_Info_UClass_UMultiLineEditableText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiLineEditableText.OuterSingleton, Z_Construct_UClass_UMultiLineEditableText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiLineEditableText.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMultiLineEditableText>()
	{
		return UMultiLineEditableText::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiLineEditableText);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiLineEditableText, UMultiLineEditableText::StaticClass, TEXT("UMultiLineEditableText"), &Z_Registration_Info_UClass_UMultiLineEditableText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiLineEditableText), 608468347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_548950012(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
