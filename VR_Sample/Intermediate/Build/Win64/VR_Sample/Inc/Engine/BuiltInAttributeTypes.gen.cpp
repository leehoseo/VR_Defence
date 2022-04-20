// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/BuiltInAttributeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuiltInAttributeTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatAnimationAttribute();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegerAnimationAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringAnimationAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformAnimationAttribute();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute();
	ENGINE_API UClass* Z_Construct_UClass_UBuiltInAttributesExtensions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBuiltInAttributesExtensions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatAnimationAttribute;
class UScriptStruct* FFloatAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatAnimationAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("FloatAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFloatAnimationAttribute>()
{
	return FFloatAnimationAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Attribute type supporting the legacy TVariant<float> atttributes */" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ToolTip", "Attribute type supporting the legacy TVariant<float> atttributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatAnimationAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatAnimationAttribute, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FloatAnimationAttribute",
		sizeof(FFloatAnimationAttribute),
		alignof(FFloatAnimationAttribute),
		Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatAnimationAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute;
class UScriptStruct* FIntegerAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegerAnimationAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("IntegerAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIntegerAnimationAttribute>()
{
	return FIntegerAnimationAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Attribute type supporting the legacy TVariant<int32> atttributes */" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ToolTip", "Attribute type supporting the legacy TVariant<int32> atttributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegerAnimationAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntegerAnimationAttribute, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"IntegerAnimationAttribute",
		sizeof(FIntegerAnimationAttribute),
		alignof(FIntegerAnimationAttribute),
		Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntegerAnimationAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringAnimationAttribute;
class UScriptStruct* FStringAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringAnimationAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("StringAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_StringAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStringAnimationAttribute>()
{
	return FStringAnimationAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Attribute type supporting the legacy TVariant<FString> atttributes */" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ToolTip", "Attribute type supporting the legacy TVariant<FString> atttributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringAnimationAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStringAnimationAttribute, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StringAnimationAttribute",
		sizeof(FStringAnimationAttribute),
		alignof(FStringAnimationAttribute),
		Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStringAnimationAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_StringAnimationAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StringAnimationAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformAnimationAttribute;
class UScriptStruct* FTransformAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformAnimationAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("TransformAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTransformAnimationAttribute>()
{
	return FTransformAnimationAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Attribute type supporting the legacy TVariant<FString> atttributes */" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ToolTip", "Attribute type supporting the legacy TVariant<FString> atttributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformAnimationAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformAnimationAttribute, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TransformAnimationAttribute",
		sizeof(FTransformAnimationAttribute),
		alignof(FTransformAnimationAttribute),
		Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformAnimationAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNonBlendableTransformAnimationAttribute>() == std::is_polymorphic<FTransformAnimationAttribute>(), "USTRUCT FNonBlendableTransformAnimationAttribute cannot be polymorphic unless super FTransformAnimationAttribute is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute;
class UScriptStruct* FNonBlendableTransformAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("NonBlendableTransformAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNonBlendableTransformAnimationAttribute>()
{
	return FNonBlendableTransformAnimationAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonBlendableTransformAnimationAttribute>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTransformAnimationAttribute,
		&NewStructOps,
		"NonBlendableTransformAnimationAttribute",
		sizeof(FNonBlendableTransformAnimationAttribute),
		alignof(FNonBlendableTransformAnimationAttribute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNonBlendableFloatAnimationAttribute>() == std::is_polymorphic<FFloatAnimationAttribute>(), "USTRUCT FNonBlendableFloatAnimationAttribute cannot be polymorphic unless super FFloatAnimationAttribute is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute;
class UScriptStruct* FNonBlendableFloatAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("NonBlendableFloatAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNonBlendableFloatAnimationAttribute>()
{
	return FNonBlendableFloatAnimationAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonBlendableFloatAnimationAttribute>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FFloatAnimationAttribute,
		&NewStructOps,
		"NonBlendableFloatAnimationAttribute",
		sizeof(FNonBlendableFloatAnimationAttribute),
		alignof(FNonBlendableFloatAnimationAttribute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNonBlendableIntegerAnimationAttribute>() == std::is_polymorphic<FIntegerAnimationAttribute>(), "USTRUCT FNonBlendableIntegerAnimationAttribute cannot be polymorphic unless super FIntegerAnimationAttribute is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute;
class UScriptStruct* FNonBlendableIntegerAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("NonBlendableIntegerAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNonBlendableIntegerAnimationAttribute>()
{
	return FNonBlendableIntegerAnimationAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonBlendableIntegerAnimationAttribute>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FIntegerAnimationAttribute,
		&NewStructOps,
		"NonBlendableIntegerAnimationAttribute",
		sizeof(FNonBlendableIntegerAnimationAttribute),
		alignof(FNonBlendableIntegerAnimationAttribute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UBuiltInAttributesExtensions::execAddTransformAttribute)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequenceBase);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Keys);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBuiltInAttributesExtensions::AddTransformAttribute(Z_Param_AnimSequenceBase,Z_Param_Out_AttributeName,Z_Param_Out_BoneName,Z_Param_Out_Keys,Z_Param_Out_Values);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UBuiltInAttributesExtensions::StaticRegisterNativesUBuiltInAttributesExtensions()
	{
#if WITH_EDITOR
		UClass* Class = UBuiltInAttributesExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTransformAttribute", &UBuiltInAttributesExtensions::execAddTransformAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics
	{
		struct BuiltInAttributesExtensions_eventAddTransformAttribute_Parms
		{
			UAnimSequenceBase* AnimSequenceBase;
			FName AttributeName;
			FName BoneName;
			TArray<float> Keys;
			TArray<FTransform> Values;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AnimSequenceBase = { "AnimSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, AnimSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values_MetaData)) };
	void Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BuiltInAttributesExtensions_eventAddTransformAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms), &Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AnimSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuiltInAttributesExtensions, nullptr, "AddTransformAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::BuiltInAttributesExtensions_eventAddTransformAttribute_Parms), Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuiltInAttributesExtensions);
	UClass* Z_Construct_UClass_UBuiltInAttributesExtensions_NoRegister()
	{
		return UBuiltInAttributesExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UBuiltInAttributesExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute, "AddTransformAttribute" }, // 3360569041
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/BuiltInAttributeTypes.h" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuiltInAttributesExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::ClassParams = {
		&UBuiltInAttributesExtensions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuiltInAttributesExtensions()
	{
		if (!Z_Registration_Info_UClass_UBuiltInAttributesExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuiltInAttributesExtensions.OuterSingleton, Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuiltInAttributesExtensions.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBuiltInAttributesExtensions>()
	{
		return UBuiltInAttributesExtensions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuiltInAttributesExtensions);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ScriptStructInfo[] = {
		{ FFloatAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewStructOps, TEXT("FloatAnimationAttribute"), &Z_Registration_Info_UScriptStruct_FloatAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatAnimationAttribute), 3301263876U) },
		{ FIntegerAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewStructOps, TEXT("IntegerAnimationAttribute"), &Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegerAnimationAttribute), 3219939911U) },
		{ FStringAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewStructOps, TEXT("StringAnimationAttribute"), &Z_Registration_Info_UScriptStruct_StringAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringAnimationAttribute), 190155891U) },
		{ FTransformAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewStructOps, TEXT("TransformAnimationAttribute"), &Z_Registration_Info_UScriptStruct_TransformAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformAnimationAttribute), 2713747298U) },
		{ FNonBlendableTransformAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::NewStructOps, TEXT("NonBlendableTransformAnimationAttribute"), &Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonBlendableTransformAnimationAttribute), 1898921142U) },
		{ FNonBlendableFloatAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::NewStructOps, TEXT("NonBlendableFloatAnimationAttribute"), &Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonBlendableFloatAnimationAttribute), 2221096170U) },
		{ FNonBlendableIntegerAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::NewStructOps, TEXT("NonBlendableIntegerAnimationAttribute"), &Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonBlendableIntegerAnimationAttribute), 772991572U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuiltInAttributesExtensions, UBuiltInAttributesExtensions::StaticClass, TEXT("UBuiltInAttributesExtensions"), &Z_Registration_Info_UClass_UBuiltInAttributesExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuiltInAttributesExtensions), 779022934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_3220223370(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
