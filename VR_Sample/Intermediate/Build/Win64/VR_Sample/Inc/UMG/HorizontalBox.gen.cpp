// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/HorizontalBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizontalBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBoxSlot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHorizontalBox::execAddChildToHorizontalBox)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHorizontalBoxSlot**)Z_Param__Result=P_THIS->AddChildToHorizontalBox(Z_Param_Content);
		P_NATIVE_END;
	}
	void UHorizontalBox::StaticRegisterNativesUHorizontalBox()
	{
		UClass* Class = UHorizontalBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToHorizontalBox", &UHorizontalBox::execAddChildToHorizontalBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics
	{
		struct HorizontalBox_eventAddChildToHorizontalBox_Parms
		{
			UWidget* Content;
			UHorizontalBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizontalBox_eventAddChildToHorizontalBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizontalBox_eventAddChildToHorizontalBox_Parms, ReturnValue), Z_Construct_UClass_UHorizontalBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizontalBox, nullptr, "AddChildToHorizontalBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::HorizontalBox_eventAddChildToHorizontalBox_Parms), Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHorizontalBox);
	UClass* Z_Construct_UClass_UHorizontalBox_NoRegister()
	{
		return UHorizontalBox::StaticClass();
	}
	struct Z_Construct_UClass_UHorizontalBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizontalBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizontalBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizontalBox_AddChildToHorizontalBox, "AddChildToHorizontalBox" }, // 4086976312
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizontalBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows widgets to be laid out in a flow horizontally.\n *\n * * Many Children\n * * Flow Horizontal\n */" },
		{ "IncludePath", "Components/HorizontalBox.h" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBox.h" },
		{ "ShortTooltip", "A layout panel for automatically laying child widgets out horizontally" },
		{ "ToolTip", "Allows widgets to be laid out in a flow horizontally.\n\n* Many Children\n* Flow Horizontal" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizontalBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizontalBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorizontalBox_Statics::ClassParams = {
		&UHorizontalBox::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizontalBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizontalBox()
	{
		if (!Z_Registration_Info_UClass_UHorizontalBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorizontalBox.OuterSingleton, Z_Construct_UClass_UHorizontalBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHorizontalBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UHorizontalBox>()
	{
		return UHorizontalBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizontalBox);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHorizontalBox, UHorizontalBox::StaticClass, TEXT("UHorizontalBox"), &Z_Registration_Info_UClass_UHorizontalBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorizontalBox), 3190156107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_4001103748(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
