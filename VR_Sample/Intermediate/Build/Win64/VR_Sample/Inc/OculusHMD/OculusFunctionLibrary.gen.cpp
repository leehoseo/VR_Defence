// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMD/Public/OculusFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusFunctionLibrary() {}
// Cross Module References
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_ETrackedDeviceType();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfileField();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfile();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EBoundaryType();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EOculusColorSpace();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingSupport();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EOculusDeviceType();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EOculusXrApi();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FGuardianTestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusFunctionLibrary_NoRegister();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrackedDeviceType;
	static UEnum* ETrackedDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrackedDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrackedDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, Z_Construct_UPackage__Script_OculusHMD(), TEXT("ETrackedDeviceType"));
		}
		return Z_Registration_Info_UEnum_ETrackedDeviceType.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<ETrackedDeviceType>()
	{
		return ETrackedDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enumerators[] = {
		{ "ETrackedDeviceType::None", (int64)ETrackedDeviceType::None },
		{ "ETrackedDeviceType::HMD", (int64)ETrackedDeviceType::HMD },
		{ "ETrackedDeviceType::LTouch", (int64)ETrackedDeviceType::LTouch },
		{ "ETrackedDeviceType::RTouch", (int64)ETrackedDeviceType::RTouch },
		{ "ETrackedDeviceType::Touch", (int64)ETrackedDeviceType::Touch },
		{ "ETrackedDeviceType::DeviceObjectZero", (int64)ETrackedDeviceType::DeviceObjectZero },
		{ "ETrackedDeviceType::All", (int64)ETrackedDeviceType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All Devices" },
		{ "All.Name", "ETrackedDeviceType::All" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Tracked device types corresponding to ovrTrackedDeviceType enum*/" },
		{ "DeviceObjectZero.DisplayName", "DeviceObject Zero" },
		{ "DeviceObjectZero.Name", "ETrackedDeviceType::DeviceObjectZero" },
		{ "HMD.DisplayName", "HMD" },
		{ "HMD.Name", "ETrackedDeviceType::HMD" },
		{ "LTouch.DisplayName", "Left Hand" },
		{ "LTouch.Name", "ETrackedDeviceType::LTouch" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "None.DisplayName", "No Devices" },
		{ "None.Name", "ETrackedDeviceType::None" },
		{ "RTouch.DisplayName", "Right Hand" },
		{ "RTouch.Name", "ETrackedDeviceType::RTouch" },
		{ "ToolTip", "Tracked device types corresponding to ovrTrackedDeviceType enum" },
		{ "Touch.DisplayName", "All Hands" },
		{ "Touch.Name", "ETrackedDeviceType::Touch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"ETrackedDeviceType",
		"ETrackedDeviceType",
		Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_ETrackedDeviceType()
	{
		if (!Z_Registration_Info_UEnum_ETrackedDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrackedDeviceType.InnerSingleton, Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrackedDeviceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HmdUserProfileField;
class UScriptStruct* FHmdUserProfileField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HmdUserProfileField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HmdUserProfileField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHmdUserProfileField, Z_Construct_UPackage__Script_OculusHMD(), TEXT("HmdUserProfileField"));
	}
	return Z_Registration_Info_UScriptStruct_HmdUserProfileField.OuterSingleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FHmdUserProfileField>()
{
	return FHmdUserProfileField::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHmdUserProfileField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data Field" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHmdUserProfileField>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfileField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfileField, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"HmdUserProfileField",
		sizeof(FHmdUserProfileField),
		alignof(FHmdUserProfileField),
		Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfileField()
	{
		if (!Z_Registration_Info_UScriptStruct_HmdUserProfileField.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HmdUserProfileField.InnerSingleton, Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HmdUserProfileField.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HmdUserProfile;
class UScriptStruct* FHmdUserProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HmdUserProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HmdUserProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHmdUserProfile, Z_Construct_UPackage__Script_OculusHMD(), TEXT("HmdUserProfile"));
	}
	return Z_Registration_Info_UScriptStruct_HmdUserProfile.OuterSingleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FHmdUserProfile>()
{
	return FHmdUserProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHmdUserProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPD_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IPD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeckToEyeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NeckToEyeDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraFields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHmdUserProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Name of the user's profile. */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Name of the user's profile." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Gender of the user (\"male\", \"female\", etc). */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Gender of the user (\"male\", \"female\", etc)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, Gender), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Height of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Height of the player, in meters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight = { "PlayerHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, PlayerHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Height of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Height of the player, in meters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, EyeHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Interpupillary distance of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Interpupillary distance of the player, in meters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD = { "IPD", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, IPD), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Neck-to-eye distance, in meters. X - horizontal, Y - vertical. */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Neck-to-eye distance, in meters. X - horizontal, Y - vertical." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance = { "NeckToEyeDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, NeckToEyeDistance), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_Inner = { "ExtraFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHmdUserProfileField, METADATA_PARAMS(nullptr, 0) }; // 3118385205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields = { "ExtraFields", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHmdUserProfile, ExtraFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData)) }; // 3118385205
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"HmdUserProfile",
		sizeof(FHmdUserProfile),
		alignof(FHmdUserProfile),
		Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_HmdUserProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HmdUserProfile.InnerSingleton, Z_Construct_UScriptStruct_FHmdUserProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HmdUserProfile.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel;
	static UEnum* EFixedFoveatedRenderingLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EFixedFoveatedRenderingLevel"));
		}
		return Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EFixedFoveatedRenderingLevel>()
	{
		return EFixedFoveatedRenderingLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enumerators[] = {
		{ "EFixedFoveatedRenderingLevel::FFR_Off", (int64)EFixedFoveatedRenderingLevel::FFR_Off },
		{ "EFixedFoveatedRenderingLevel::FFR_Low", (int64)EFixedFoveatedRenderingLevel::FFR_Low },
		{ "EFixedFoveatedRenderingLevel::FFR_Medium", (int64)EFixedFoveatedRenderingLevel::FFR_Medium },
		{ "EFixedFoveatedRenderingLevel::FFR_High", (int64)EFixedFoveatedRenderingLevel::FFR_High },
		{ "EFixedFoveatedRenderingLevel::FFR_HighTop", (int64)EFixedFoveatedRenderingLevel::FFR_HighTop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FFR_High.Name", "EFixedFoveatedRenderingLevel::FFR_High" },
		{ "FFR_HighTop.Comment", "// High foveation setting with more detail toward the bottom of the view and more foveation near the top\n" },
		{ "FFR_HighTop.Name", "EFixedFoveatedRenderingLevel::FFR_HighTop" },
		{ "FFR_HighTop.ToolTip", "High foveation setting with more detail toward the bottom of the view and more foveation near the top" },
		{ "FFR_Low.Name", "EFixedFoveatedRenderingLevel::FFR_Low" },
		{ "FFR_Medium.Name", "EFixedFoveatedRenderingLevel::FFR_Medium" },
		{ "FFR_Off.Name", "EFixedFoveatedRenderingLevel::FFR_Off" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EFixedFoveatedRenderingLevel",
		"EFixedFoveatedRenderingLevel",
		Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel()
	{
		if (!Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.InnerSingleton, Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoundaryType;
	static UEnum* EBoundaryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoundaryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoundaryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EBoundaryType, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EBoundaryType"));
		}
		return Z_Registration_Info_UEnum_EBoundaryType.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EBoundaryType>()
	{
		return EBoundaryType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enumerators[] = {
		{ "EBoundaryType::Boundary_Outer", (int64)EBoundaryType::Boundary_Outer },
		{ "EBoundaryType::Boundary_PlayArea", (int64)EBoundaryType::Boundary_PlayArea },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boundary_Outer.DisplayName", "Outer Boundary" },
		{ "Boundary_Outer.Name", "EBoundaryType::Boundary_Outer" },
		{ "Boundary_PlayArea.DisplayName", "Play Area" },
		{ "Boundary_PlayArea.Name", "EBoundaryType::Boundary_PlayArea" },
		{ "Comment", "/* Guardian boundary types*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Guardian boundary types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EBoundaryType",
		"EBoundaryType",
		Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EBoundaryType()
	{
		if (!Z_Registration_Info_UEnum_EBoundaryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoundaryType.InnerSingleton, Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoundaryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusColorSpace;
	static UEnum* EOculusColorSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusColorSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EOculusColorSpace, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EOculusColorSpace"));
		}
		return Z_Registration_Info_UEnum_EOculusColorSpace.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EOculusColorSpace>()
	{
		return EOculusColorSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enumerators[] = {
		{ "EOculusColorSpace::Unknown", (int64)EOculusColorSpace::Unknown },
		{ "EOculusColorSpace::Unmanaged", (int64)EOculusColorSpace::Unmanaged },
		{ "EOculusColorSpace::Rec_2020", (int64)EOculusColorSpace::Rec_2020 },
		{ "EOculusColorSpace::Rec_709", (int64)EOculusColorSpace::Rec_709 },
		{ "EOculusColorSpace::Rift_CV1", (int64)EOculusColorSpace::Rift_CV1 },
		{ "EOculusColorSpace::Rift_S", (int64)EOculusColorSpace::Rift_S },
		{ "EOculusColorSpace::Quest", (int64)EOculusColorSpace::Quest },
		{ "EOculusColorSpace::P3", (int64)EOculusColorSpace::P3 },
		{ "EOculusColorSpace::Adobe_RGB", (int64)EOculusColorSpace::Adobe_RGB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enum_MetaDataParams[] = {
		{ "Adobe_RGB.Comment", "/// Similar to sRGB but with deeper greens using D65 white point\n" },
		{ "Adobe_RGB.Name", "EOculusColorSpace::Adobe_RGB" },
		{ "Adobe_RGB.ToolTip", "Similar to sRGB but with deeper greens using D65 white point" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "P3.Comment", "/// Similar to DCI-P3. See documentation for more details on P3\n" },
		{ "P3.Name", "EOculusColorSpace::P3" },
		{ "P3.ToolTip", "Similar to DCI-P3. See documentation for more details on P3" },
		{ "Quest.Comment", "/// Oculus Quest's native color space is slightly different than Rift CV1\n" },
		{ "Quest.Name", "EOculusColorSpace::Quest" },
		{ "Quest.ToolTip", "Oculus Quest's native color space is slightly different than Rift CV1" },
		{ "Rec_2020.Comment", "/// Preferred color space for standardized color across all Oculus HMDs with D65 white point\n" },
		{ "Rec_2020.Name", "EOculusColorSpace::Rec_2020" },
		{ "Rec_2020.ToolTip", "Preferred color space for standardized color across all Oculus HMDs with D65 white point" },
		{ "Rec_709.Comment", "/// Rec. 709 is used on Oculus Go and shares the same primary color coordinates as sRGB\n" },
		{ "Rec_709.Name", "EOculusColorSpace::Rec_709" },
		{ "Rec_709.ToolTip", "Rec. 709 is used on Oculus Go and shares the same primary color coordinates as sRGB" },
		{ "Rift_CV1.Comment", "/// Oculus Rift CV1 uses a unique color space, see documentation for more info\n" },
		{ "Rift_CV1.Name", "EOculusColorSpace::Rift_CV1" },
		{ "Rift_CV1.ToolTip", "Oculus Rift CV1 uses a unique color space, see documentation for more info" },
		{ "Rift_S.Comment", "/// Oculus Rift S uses a unique color space, see documentation for more info\n" },
		{ "Rift_S.Name", "EOculusColorSpace::Rift_S" },
		{ "Rift_S.ToolTip", "Oculus Rift S uses a unique color space, see documentation for more info" },
		{ "Unknown.Comment", "/// The default value from GetHmdColorSpace until SetClientColorDesc is called. Only valid on PC, and will be remapped to Quest on Mobile\n" },
		{ "Unknown.Name", "EOculusColorSpace::Unknown" },
		{ "Unknown.ToolTip", "The default value from GetHmdColorSpace until SetClientColorDesc is called. Only valid on PC, and will be remapped to Quest on Mobile" },
		{ "Unmanaged.Comment", "/// No color correction, not recommended for production use. See documentation for more info\n" },
		{ "Unmanaged.Name", "EOculusColorSpace::Unmanaged" },
		{ "Unmanaged.ToolTip", "No color correction, not recommended for production use. See documentation for more info" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EOculusColorSpace",
		"EOculusColorSpace",
		Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EOculusColorSpace()
	{
		if (!Z_Registration_Info_UEnum_EOculusColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusColorSpace.InnerSingleton, Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusColorSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandTrackingSupport;
	static UEnum* EHandTrackingSupport_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandTrackingSupport.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandTrackingSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EHandTrackingSupport, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EHandTrackingSupport"));
		}
		return Z_Registration_Info_UEnum_EHandTrackingSupport.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EHandTrackingSupport>()
	{
		return EHandTrackingSupport_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enumerators[] = {
		{ "EHandTrackingSupport::ControllersOnly", (int64)EHandTrackingSupport::ControllersOnly },
		{ "EHandTrackingSupport::ControllersAndHands", (int64)EHandTrackingSupport::ControllersAndHands },
		{ "EHandTrackingSupport::HandsOnly", (int64)EHandTrackingSupport::HandsOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ControllersAndHands.Name", "EHandTrackingSupport::ControllersAndHands" },
		{ "ControllersOnly.Name", "EHandTrackingSupport::ControllersOnly" },
		{ "HandsOnly.Name", "EHandTrackingSupport::HandsOnly" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EHandTrackingSupport",
		"EHandTrackingSupport",
		Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingSupport()
	{
		if (!Z_Registration_Info_UEnum_EHandTrackingSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandTrackingSupport.InnerSingleton, Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandTrackingSupport.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandTrackingFrequency;
	static UEnum* EHandTrackingFrequency_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandTrackingFrequency.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandTrackingFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EHandTrackingFrequency"));
		}
		return Z_Registration_Info_UEnum_EHandTrackingFrequency.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EHandTrackingFrequency>()
	{
		return EHandTrackingFrequency_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enumerators[] = {
		{ "EHandTrackingFrequency::LOW", (int64)EHandTrackingFrequency::LOW },
		{ "EHandTrackingFrequency::HIGH", (int64)EHandTrackingFrequency::HIGH },
		{ "EHandTrackingFrequency::MAX", (int64)EHandTrackingFrequency::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HIGH.Name", "EHandTrackingFrequency::HIGH" },
		{ "LOW.Name", "EHandTrackingFrequency::LOW" },
		{ "MAX.Name", "EHandTrackingFrequency::MAX" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EHandTrackingFrequency",
		"EHandTrackingFrequency",
		Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency()
	{
		if (!Z_Registration_Info_UEnum_EHandTrackingFrequency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandTrackingFrequency.InnerSingleton, Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandTrackingFrequency.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusDeviceType;
	static UEnum* EOculusDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EOculusDeviceType, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EOculusDeviceType"));
		}
		return Z_Registration_Info_UEnum_EOculusDeviceType.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EOculusDeviceType>()
	{
		return EOculusDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enumerators[] = {
		{ "EOculusDeviceType::OculusMobile_Deprecated0", (int64)EOculusDeviceType::OculusMobile_Deprecated0 },
		{ "EOculusDeviceType::OculusQuest", (int64)EOculusDeviceType::OculusQuest },
		{ "EOculusDeviceType::OculusQuest2", (int64)EOculusDeviceType::OculusQuest2 },
		{ "EOculusDeviceType::Rift", (int64)EOculusDeviceType::Rift },
		{ "EOculusDeviceType::Rift_S", (int64)EOculusDeviceType::Rift_S },
		{ "EOculusDeviceType::Quest_Link", (int64)EOculusDeviceType::Quest_Link },
		{ "EOculusDeviceType::Quest2_Link", (int64)EOculusDeviceType::Quest2_Link },
		{ "EOculusDeviceType::OculusUnknown", (int64)EOculusDeviceType::OculusUnknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "OculusMobile_Deprecated0.Comment", "//mobile HMDs \n" },
		{ "OculusMobile_Deprecated0.Name", "EOculusDeviceType::OculusMobile_Deprecated0" },
		{ "OculusMobile_Deprecated0.ToolTip", "mobile HMDs" },
		{ "OculusQuest.Name", "EOculusDeviceType::OculusQuest" },
		{ "OculusQuest2.Name", "EOculusDeviceType::OculusQuest2" },
		{ "OculusUnknown.Comment", "//default\n" },
		{ "OculusUnknown.Name", "EOculusDeviceType::OculusUnknown" },
		{ "OculusUnknown.ToolTip", "default" },
		{ "Quest2_Link.Name", "EOculusDeviceType::Quest2_Link" },
		{ "Quest_Link.Name", "EOculusDeviceType::Quest_Link" },
		{ "Rift.Comment", "//PC HMDs\n" },
		{ "Rift.Name", "EOculusDeviceType::Rift" },
		{ "Rift.ToolTip", "PC HMDs" },
		{ "Rift_S.Name", "EOculusDeviceType::Rift_S" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EOculusDeviceType",
		"EOculusDeviceType",
		Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EOculusDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EOculusDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusDeviceType.InnerSingleton, Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusDeviceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXrApi;
	static UEnum* EOculusXrApi_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXrApi.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXrApi.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EOculusXrApi, Z_Construct_UPackage__Script_OculusHMD(), TEXT("EOculusXrApi"));
		}
		return Z_Registration_Info_UEnum_EOculusXrApi.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EOculusXrApi>()
	{
		return EOculusXrApi_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enumerators[] = {
		{ "EOculusXrApi::LegacyOVRPlugin", (int64)EOculusXrApi::LegacyOVRPlugin },
		{ "EOculusXrApi::OVRPluginOpenXR", (int64)EOculusXrApi::OVRPluginOpenXR },
		{ "EOculusXrApi::NativeOpenXR", (int64)EOculusXrApi::NativeOpenXR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LegacyOVRPlugin.DisplayName", "Legacy Oculus SDK (no longer developed by Epic)" },
		{ "LegacyOVRPlugin.Name", "EOculusXrApi::LegacyOVRPlugin" },
		{ "LegacyOVRPlugin.ToolTip", "Legacy Oculus SDK. Epic is no longer developing for this SDK, and it should only be used if there are features required for a project that are not yet supported through OpenXR, but it's hard to guarantee potential bugs will be fixed as it's not in active development at Epic. Epic recommends Native OpenXR instead, as that will be the main development focus going forward." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "NativeOpenXR.DisplayName", "Native OpenXR with Oculus vendor extensions (Epic's development focus)" },
		{ "NativeOpenXR.Name", "EOculusXrApi::NativeOpenXR" },
		{ "NativeOpenXR.ToolTip", "Disable Legacy Oculus in favor of the native OpenXR implementation, with Oculus vendor extensions. Must enable the OpenXR plugin. This will be where Epic focuses XR development going forward. Oculus OpenXR extensions may be moved into a separate plugin (or plugins) in the future to improve modularity. The features supported by OpenXR are listed in the OpenXR specification on khronos.org, and the features supported by a given runtime can be verified with the \\\"OpenXR Explorer\\\" application on GitHub." },
		{ "OVRPluginOpenXR.DisplayName", "Legacy Oculus SDK + OpenXR (temporary experimental solution)" },
		{ "OVRPluginOpenXR.Name", "EOculusXrApi::OVRPluginOpenXR" },
		{ "OVRPluginOpenXR.ToolTip", "Legacy Oculus SDK using an OpenXR backend. Experimental. Epic recommends Native OpenXR instead, as that will be the main development focus going forward." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EOculusXrApi",
		"EOculusXrApi",
		Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EOculusXrApi()
	{
		if (!Z_Registration_Info_UEnum_EOculusXrApi.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXrApi.InnerSingleton, Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXrApi.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GuardianTestResult;
class UScriptStruct* FGuardianTestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GuardianTestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GuardianTestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuardianTestResult, Z_Construct_UPackage__Script_OculusHMD(), TEXT("GuardianTestResult"));
	}
	return Z_Registration_Info_UScriptStruct_GuardianTestResult.OuterSingleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FGuardianTestResult>()
{
	return FGuardianTestResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGuardianTestResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTriggering_MetaData[];
#endif
		static void NewProp_IsTriggering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTriggering;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClosestDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPointNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPointNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Information about relationships between a triggered boundary (EBoundaryType::Boundary_Outer or\n* EBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space.\n*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "* Information about relationships between a triggered boundary (EBoundaryType::Boundary_Outer or\n* EBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuardianTestResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Is there a triggering interaction between the device/point and specified boundary? */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Is there a triggering interaction between the device/point and specified boundary?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_SetBit(void* Obj)
	{
		((FGuardianTestResult*)Obj)->IsTriggering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering = { "IsTriggering", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGuardianTestResult), &Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Device type triggering boundary (ETrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device) */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Device type triggering boundary (ETrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuardianTestResult, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData)) }; // 1408524775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Distance of device/point to surface of boundary specified by BoundaryType */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Distance of device/point to surface of boundary specified by BoundaryType" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance = { "ClosestDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuardianTestResult, ClosestDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Closest point on surface corresponding to specified boundary */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Closest point on surface corresponding to specified boundary" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuardianTestResult, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Normal of closest point */" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Normal of closest point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal = { "ClosestPointNormal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuardianTestResult, ClosestPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"GuardianTestResult",
		sizeof(FGuardianTestResult),
		alignof(FGuardianTestResult),
		Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuardianTestResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GuardianTestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GuardianTestResult.InnerSingleton, Z_Construct_UScriptStruct_FGuardianTestResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GuardianTestResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetGuardianVisibility)
	{
		P_GET_UBOOL(Z_Param_GuardianVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetGuardianVisibility(Z_Param_GuardianVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetNodeGuardianIntersection)
	{
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuardianTestResult*)Z_Param__Result=UOculusFunctionLibrary::GetNodeGuardianIntersection(ETrackedDeviceType(Z_Param_DeviceType),EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetPointGuardianIntersection)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuardianTestResult*)Z_Param__Result=UOculusFunctionLibrary::GetPointGuardianIntersection(Z_Param_Point,EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetPlayAreaTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UOculusFunctionLibrary::GetPlayAreaTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetGuardianDimensions)
	{
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UOculusFunctionLibrary::GetGuardianDimensions(EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetGuardianPoints)
	{
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_GET_UBOOL(Z_Param_UsePawnSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UOculusFunctionLibrary::GetGuardianPoints(EBoundaryType(Z_Param_BoundaryType),Z_Param_UsePawnSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execIsGuardianConfigured)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsGuardianConfigured();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execIsGuardianDisplayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsGuardianDisplayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetClientColorDesc)
	{
		P_GET_ENUM(EOculusColorSpace,Z_Param_ColorSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetClientColorDesc(EOculusColorSpace(Z_Param_ColorSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetHmdColorDesc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusColorSpace*)Z_Param__Result=UOculusFunctionLibrary::GetHmdColorDesc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetSystemHmd3DofModeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::GetSystemHmd3DofModeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetColorScaleAndOffset)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorScale);
		P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset);
		P_GET_UBOOL(Z_Param_bApplyToAllLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execEnableOrientationTracking)
	{
		P_GET_UBOOL(Z_Param_bOrientationTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::EnableOrientationTracking(Z_Param_bOrientationTracking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execEnablePositionTracking)
	{
		P_GET_UBOOL(Z_Param_bPositionTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::EnablePositionTracking(Z_Param_bPositionTracking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetDisplayFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RequestedFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetDisplayFrequency(Z_Param_RequestedFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetCurrentDisplayFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusFunctionLibrary::GetCurrentDisplayFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetAvailableDisplayFrequencies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UOculusFunctionLibrary::GetAvailableDisplayFrequencies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetDeviceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusDeviceType*)Z_Param__Result=UOculusFunctionLibrary::GetDeviceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOculusFunctionLibrary::GetDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetFixedFoveatedRenderingLevel)
	{
		P_GET_ENUM(EFixedFoveatedRenderingLevel,Z_Param_level);
		P_GET_UBOOL(Z_Param_isDynamic);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel(Z_Param_level),Z_Param_isDynamic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetFixedFoveatedRenderingLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFixedFoveatedRenderingLevel*)Z_Param__Result=UOculusFunctionLibrary::GetFixedFoveatedRenderingLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetGPUFrameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusFunctionLibrary::GetGPUFrameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetGPUUtilization)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsGPUAvailable);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GPUUtilization);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetGPUUtilization(Z_Param_Out_IsGPUAvailable,Z_Param_Out_GPUUtilization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execHasSystemOverlayPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::HasSystemOverlayPresent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execHasInputFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::HasInputFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execClearLoadingSplashScreens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::ClearLoadingSplashScreens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execAddLoadingSplashScreen)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_STRUCT(FVector,Z_Param_TranslationInMeters);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters);
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bClearBeforeAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::AddLoadingSplashScreen(Z_Param_Texture,Z_Param_TranslationInMeters,Z_Param_Rotation,Z_Param_SizeInMeters,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetBaseRotationAndPositionOffset)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRot);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(Z_Param_Out_OutRot,Z_Param_Out_OutPosOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetBaseRotationAndPositionOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_BaseRot);
		P_GET_STRUCT(FVector,Z_Param_PosOffset);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(Z_Param_BaseRot,Z_Param_PosOffset,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetPositionScale3D)
	{
		P_GET_STRUCT(FVector,Z_Param_PosScale3D);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetPositionScale3D(Z_Param_PosScale3D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBaseOffsetInMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(Z_Param_Out_OutRotation,Z_Param_Out_OutBaseOffsetInMeters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_BaseOffsetInMeters);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(Z_Param_Rotation,Z_Param_BaseOffsetInMeters,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetUserProfile)
	{
		P_GET_STRUCT_REF(FHmdUserProfile,Z_Param_Out_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::GetUserProfile(Z_Param_Out_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execSetCPUAndGPULevels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CPULevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_GPULevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execIsDeviceTracked)
	{
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsDeviceTracked(ETrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetRawSensorData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TimeInSeconds);
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetRawSensorData(Z_Param_Out_AngularAcceleration,Z_Param_Out_LinearAcceleration,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity,Z_Param_Out_TimeInSeconds,ETrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFunctionLibrary::execGetPose)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NeckPosition);
		P_GET_UBOOL(Z_Param_bUseOrienationForPlayerCamera);
		P_GET_UBOOL(Z_Param_bUsePositionForPlayerCamera);
		P_GET_STRUCT(FVector,Z_Param_PositionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusFunctionLibrary::GetPose(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition,Z_Param_Out_NeckPosition,Z_Param_bUseOrienationForPlayerCamera,Z_Param_bUsePositionForPlayerCamera,Z_Param_PositionScale);
		P_NATIVE_END;
	}
	void UOculusFunctionLibrary::StaticRegisterNativesUOculusFunctionLibrary()
	{
		UClass* Class = UOculusFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLoadingSplashScreen", &UOculusFunctionLibrary::execAddLoadingSplashScreen },
			{ "ClearLoadingSplashScreens", &UOculusFunctionLibrary::execClearLoadingSplashScreens },
			{ "EnableOrientationTracking", &UOculusFunctionLibrary::execEnableOrientationTracking },
			{ "EnablePositionTracking", &UOculusFunctionLibrary::execEnablePositionTracking },
			{ "GetAvailableDisplayFrequencies", &UOculusFunctionLibrary::execGetAvailableDisplayFrequencies },
			{ "GetBaseRotationAndBaseOffsetInMeters", &UOculusFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters },
			{ "GetBaseRotationAndPositionOffset", &UOculusFunctionLibrary::execGetBaseRotationAndPositionOffset },
			{ "GetCurrentDisplayFrequency", &UOculusFunctionLibrary::execGetCurrentDisplayFrequency },
			{ "GetDeviceName", &UOculusFunctionLibrary::execGetDeviceName },
			{ "GetDeviceType", &UOculusFunctionLibrary::execGetDeviceType },
			{ "GetFixedFoveatedRenderingLevel", &UOculusFunctionLibrary::execGetFixedFoveatedRenderingLevel },
			{ "GetGPUFrameTime", &UOculusFunctionLibrary::execGetGPUFrameTime },
			{ "GetGPUUtilization", &UOculusFunctionLibrary::execGetGPUUtilization },
			{ "GetGuardianDimensions", &UOculusFunctionLibrary::execGetGuardianDimensions },
			{ "GetGuardianPoints", &UOculusFunctionLibrary::execGetGuardianPoints },
			{ "GetHmdColorDesc", &UOculusFunctionLibrary::execGetHmdColorDesc },
			{ "GetNodeGuardianIntersection", &UOculusFunctionLibrary::execGetNodeGuardianIntersection },
			{ "GetPlayAreaTransform", &UOculusFunctionLibrary::execGetPlayAreaTransform },
			{ "GetPointGuardianIntersection", &UOculusFunctionLibrary::execGetPointGuardianIntersection },
			{ "GetPose", &UOculusFunctionLibrary::execGetPose },
			{ "GetRawSensorData", &UOculusFunctionLibrary::execGetRawSensorData },
			{ "GetSystemHmd3DofModeEnabled", &UOculusFunctionLibrary::execGetSystemHmd3DofModeEnabled },
			{ "GetUserProfile", &UOculusFunctionLibrary::execGetUserProfile },
			{ "HasInputFocus", &UOculusFunctionLibrary::execHasInputFocus },
			{ "HasSystemOverlayPresent", &UOculusFunctionLibrary::execHasSystemOverlayPresent },
			{ "IsDeviceTracked", &UOculusFunctionLibrary::execIsDeviceTracked },
			{ "IsGuardianConfigured", &UOculusFunctionLibrary::execIsGuardianConfigured },
			{ "IsGuardianDisplayed", &UOculusFunctionLibrary::execIsGuardianDisplayed },
			{ "SetBaseRotationAndBaseOffsetInMeters", &UOculusFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters },
			{ "SetBaseRotationAndPositionOffset", &UOculusFunctionLibrary::execSetBaseRotationAndPositionOffset },
			{ "SetClientColorDesc", &UOculusFunctionLibrary::execSetClientColorDesc },
			{ "SetColorScaleAndOffset", &UOculusFunctionLibrary::execSetColorScaleAndOffset },
			{ "SetCPUAndGPULevels", &UOculusFunctionLibrary::execSetCPUAndGPULevels },
			{ "SetDisplayFrequency", &UOculusFunctionLibrary::execSetDisplayFrequency },
			{ "SetFixedFoveatedRenderingLevel", &UOculusFunctionLibrary::execSetFixedFoveatedRenderingLevel },
			{ "SetGuardianVisibility", &UOculusFunctionLibrary::execSetGuardianVisibility },
			{ "SetPositionScale3D", &UOculusFunctionLibrary::execSetPositionScale3D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics
	{
		struct OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms
		{
			UTexture2D* Texture;
			FVector TranslationInMeters;
			FRotator Rotation;
			FVector2D SizeInMeters;
			FRotator DeltaRotation;
			bool bClearBeforeAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationInMeters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static void NewProp_bClearBeforeAdd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBeforeAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_TranslationInMeters = { "TranslationInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, TranslationInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms*)Obj)->bClearBeforeAdd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd = { "bClearBeforeAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_TranslationInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_SizeInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Adds loading splash screen with parameters\n\x09 *\n\x09 * @param Texture\x09\x09\x09(in) A texture asset to be used for the splash.\n\x09 * @param TranslationInMeters (in) Initial translation of the center of the splash screen (in meters).\n\x09 * @param Rotation\x09\x09\x09(in) Initial rotation of the splash screen, with the origin at the center of the splash screen.\n\x09 * @param SizeInMeters\x09\x09(in) Size, in meters, of the quad with the splash screen.\n\x09 * @param DeltaRotation\x09\x09(in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n\x09 * @param bClearBeforeAdd\x09(in) If true, clears splashes before adding a new one.\n\x09 */" },
		{ "CPP_Default_bClearBeforeAdd", "false" },
		{ "CPP_Default_DeltaRotation", "" },
		{ "CPP_Default_SizeInMeters", "(X=1.000,Y=1.000)" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Add Loading Screen Splash from the Head Mounted Display Loading Screen functions instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Adds loading splash screen with parameters\n\n@param Texture                       (in) A texture asset to be used for the splash.\n@param TranslationInMeters (in) Initial translation of the center of the splash screen (in meters).\n@param Rotation                      (in) Initial rotation of the splash screen, with the origin at the center of the splash screen.\n@param SizeInMeters          (in) Size, in meters, of the quad with the splash screen.\n@param DeltaRotation         (in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n@param bClearBeforeAdd       (in) If true, clears splashes before adding a new one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "AddLoadingSplashScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::OculusFunctionLibrary_eventAddLoadingSplashScreen_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Removes all the splash screens.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Clear Loading Screen Splashes from the Head Mounted Display Loading Screen functions instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Removes all the splash screens." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "ClearLoadingSplashScreens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics
	{
		struct OculusFunctionLibrary_eventEnableOrientationTracking_Parms
		{
			bool bOrientationTracking;
		};
		static void NewProp_bOrientationTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientationTracking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventEnableOrientationTracking_Parms*)Obj)->bOrientationTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking = { "bOrientationTracking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventEnableOrientationTracking_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Enables/disables orientation tracking on devices that support it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables orientation tracking on devices that support it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "EnableOrientationTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::OculusFunctionLibrary_eventEnableOrientationTracking_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics
	{
		struct OculusFunctionLibrary_eventEnablePositionTracking_Parms
		{
			bool bPositionTracking;
		};
		static void NewProp_bPositionTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositionTracking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventEnablePositionTracking_Parms*)Obj)->bPositionTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking = { "bPositionTracking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventEnablePositionTracking_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Enables/disables positional tracking on devices that support it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables positional tracking on devices that support it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "EnablePositionTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::OculusFunctionLibrary_eventEnablePositionTracking_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics
	{
		struct OculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the current available frequencies\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the current available frequencies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetAvailableDisplayFrequencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::OculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics
	{
		struct OculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms
		{
			FRotator OutRotation;
			FVector OutBaseOffsetInMeters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBaseOffsetInMeters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters = { "OutBaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutBaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns current base rotation and base offset.\n\x09* The base offset is currently used base position offset, previously set by the\n\x09* ResetPosition or SetBasePositionOffset calls. It represents a vector that translates the HMD's position\n\x09* into (0,0,0) point, in meters.\n\x09* The axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\x09*\n\x09* @param OutRotation\x09\x09\x09(out) Rotator object with base rotation\n\x09* @param OutBaseOffsetInMeters\x09(out) base position offset, vector, in meters.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns current base rotation and base offset.\nThe base offset is currently used base position offset, previously set by the\nResetPosition or SetBasePositionOffset calls. It represents a vector that translates the HMD's position\ninto (0,0,0) point, in meters.\nThe axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\n@param OutRotation                    (out) Rotator object with base rotation\n@param OutBaseOffsetInMeters  (out) base position offset, vector, in meters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::OculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics
	{
		struct OculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms
		{
			FRotator OutRot;
			FVector OutPosOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutRot = { "OutRot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutPosOffset = { "OutPosOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutPosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutPosOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Returns current base rotation and position offset.\n\x09 *\n\x09 * @param OutRot\x09\x09\x09(out) Rotator object with base rotation\n\x09 * @param OutPosOffset\x09\x09(out) the vector with previously set position offset.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns current base rotation and position offset.\n\n@param OutRot                        (out) Rotator object with base rotation\n@param OutPosOffset          (out) the vector with previously set position offset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetBaseRotationAndPositionOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::OculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics
	{
		struct OculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the current display frequency\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the current display frequency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetCurrentDisplayFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::OculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics
	{
		struct OculusFunctionLibrary_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::GetDeviceName has been deprecated and no longer functions as before. Please use the enum-based GetDeviceType instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::OculusFunctionLibrary_eventGetDeviceName_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics
	{
		struct OculusFunctionLibrary_eventGetDeviceType_Parms
		{
			EOculusDeviceType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetDeviceType_Parms, ReturnValue), Z_Construct_UEnum_OculusHMD_EOculusDeviceType, METADATA_PARAMS(nullptr, 0) }; // 239135075
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetDeviceType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::OculusFunctionLibrary_eventGetDeviceType_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics
	{
		struct OculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms
		{
			EFixedFoveatedRenderingLevel ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms, ReturnValue), Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, METADATA_PARAMS(nullptr, 0) }; // 3652770068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the current multiresolution level\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the current multiresolution level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetFixedFoveatedRenderingLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::OculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics
	{
		struct OculusFunctionLibrary_eventGetGPUFrameTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGPUFrameTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the GPU frame time on supported mobile platforms (Go for now)\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the GPU frame time on supported mobile platforms (Go for now)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetGPUFrameTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::OculusFunctionLibrary_eventGetGPUFrameTime_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics
	{
		struct OculusFunctionLibrary_eventGetGPUUtilization_Parms
		{
			bool IsGPUAvailable;
			float GPUUtilization;
		};
		static void NewProp_IsGPUAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGPUAvailable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUUtilization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetGPUUtilization_Parms*)Obj)->IsGPUAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable = { "IsGPUAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetGPUUtilization_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_GPUUtilization = { "GPUUtilization", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGPUUtilization_Parms, GPUUtilization), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_GPUUtilization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the GPU utilization availability and value\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the GPU utilization availability and value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetGPUUtilization", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::OculusFunctionLibrary_eventGetGPUUtilization_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics
	{
		struct OculusFunctionLibrary_eventGetGuardianDimensions_Parms
		{
			EBoundaryType BoundaryType;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGuardianDimensions_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) }; // 3226926158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGuardianDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the dimensions in UE world space of the requested Boundary Type\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the dimensions in UE world space of the requested Boundary Type\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetGuardianDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::OculusFunctionLibrary_eventGetGuardianDimensions_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics
	{
		struct OculusFunctionLibrary_eventGetGuardianPoints_Parms
		{
			EBoundaryType BoundaryType;
			bool UsePawnSpace;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static void NewProp_UsePawnSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePawnSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGuardianPoints_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) }; // 3226926158
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetGuardianPoints_Parms*)Obj)->UsePawnSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace = { "UsePawnSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetGuardianPoints_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetGuardianPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the list of points in UE world space of the requested Boundary Type \n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09* @param UsePawnSpace\x09\x09\x09(in) Boolean indicating to return the points in world space or pawn space\n\x09*/" },
		{ "CPP_Default_UsePawnSpace", "false" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the list of points in UE world space of the requested Boundary Type\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n@param UsePawnSpace                   (in) Boolean indicating to return the points in world space or pawn space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetGuardianPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::OculusFunctionLibrary_eventGetGuardianPoints_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics
	{
		struct OculusFunctionLibrary_eventGetHmdColorDesc_Parms
		{
			EOculusColorSpace ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetHmdColorDesc_Parms, ReturnValue), Z_Construct_UEnum_OculusHMD_EOculusColorSpace, METADATA_PARAMS(nullptr, 0) }; // 2925337178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns the color space of the target HMD\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the color space of the target HMD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetHmdColorDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::OculusFunctionLibrary_eventGetHmdColorDesc_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics
	{
		struct OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms
		{
			ETrackedDeviceType DeviceType;
			EBoundaryType BoundaryType;
			FGuardianTestResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) }; // 1408524775
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) }; // 3226926158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuardianTestResult, METADATA_PARAMS(nullptr, 0) }; // 2271687841
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Get the intersection result between a tracked device (HMD or controllers) and a guardian boundary\n\x09* @param DeviceType             (in) Tracked Device type to test against guardian boundaries\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Get the intersection result between a tracked device (HMD or controllers) and a guardian boundary\n@param DeviceType             (in) Tracked Device type to test against guardian boundaries\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetNodeGuardianIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::OculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics
	{
		struct OculusFunctionLibrary_eventGetPlayAreaTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPlayAreaTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the transform of the play area rectangle, defining its position, rotation and scale to apply to a unit cube to match it with the play area.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns the transform of the play area rectangle, defining its position, rotation and scale to apply to a unit cube to match it with the play area." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetPlayAreaTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::OculusFunctionLibrary_eventGetPlayAreaTransform_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics
	{
		struct OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms
		{
			FVector Point;
			EBoundaryType BoundaryType;
			FGuardianTestResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) }; // 3226926158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuardianTestResult, METADATA_PARAMS(nullptr, 0) }; // 2271687841
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Get the intersection result between a UE coordinate and a guardian boundary\n\x09* @param Point\x09\x09\x09\x09\x09(in) Point in UE space to test against guardian boundaries\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Get the intersection result between a UE coordinate and a guardian boundary\n@param Point                                  (in) Point in UE space to test against guardian boundaries\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetPointGuardianIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::OculusFunctionLibrary_eventGetPointGuardianIntersection_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics
	{
		struct OculusFunctionLibrary_eventGetPose_Parms
		{
			FRotator DeviceRotation;
			FVector DevicePosition;
			FVector NeckPosition;
			bool bUseOrienationForPlayerCamera;
			bool bUsePositionForPlayerCamera;
			FVector PositionScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DevicePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NeckPosition;
		static void NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrienationForPlayerCamera;
		static void NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePositionForPlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation = { "DeviceRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPose_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_DevicePosition = { "DevicePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPose_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_NeckPosition = { "NeckPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPose_Parms, NeckPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetPose_Parms*)Obj)->bUseOrienationForPlayerCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera = { "bUseOrienationForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetPose_Parms*)Obj)->bUsePositionForPlayerCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera = { "bUsePositionForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale = { "PositionScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetPose_Parms, PositionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_DevicePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_NeckPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\x09 *\n\x09 * @param DeviceRotation\x09(out) The device's current rotation\n\x09 * @param DevicePosition\x09(out) The device's current position, in its own tracking space\n\x09 * @param NeckPosition\x09\x09(out) The estimated neck position, calculated using NeckToEye vector from User Profile. Same coordinate space as DevicePosition.\n\x09 * @param bUseOrienationForPlayerCamera\x09(in) Should be set to 'true' if the orientation is going to be used to update orientation of the camera manually.\n\x09 * @param bUsePositionForPlayerCamera\x09(in) Should be set to 'true' if the position is going to be used to update position of the camera manually.\n\x09 * @param PositionScale\x09\x09(in) The 3D scale that will be applied to position.\n\x09 */" },
		{ "CPP_Default_bUseOrienationForPlayerCamera", "false" },
		{ "CPP_Default_bUsePositionForPlayerCamera", "false" },
		{ "CPP_Default_PositionScale", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\n@param DeviceRotation        (out) The device's current rotation\n@param DevicePosition        (out) The device's current position, in its own tracking space\n@param NeckPosition          (out) The estimated neck position, calculated using NeckToEye vector from User Profile. Same coordinate space as DevicePosition.\n@param bUseOrienationForPlayerCamera (in) Should be set to 'true' if the orientation is going to be used to update orientation of the camera manually.\n@param bUsePositionForPlayerCamera   (in) Should be set to 'true' if the position is going to be used to update position of the camera manually.\n@param PositionScale         (in) The 3D scale that will be applied to position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::OculusFunctionLibrary_eventGetPose_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics
	{
		struct OculusFunctionLibrary_eventGetRawSensorData_Parms
		{
			FVector AngularAcceleration;
			FVector LinearAcceleration;
			FVector AngularVelocity;
			FVector LinearVelocity;
			float TimeInSeconds;
			ETrackedDeviceType DeviceType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularAcceleration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAcceleration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularAcceleration = { "AngularAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, AngularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearAcceleration = { "LinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, LinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetRawSensorData_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) }; // 1408524775
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_TimeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Reports raw sensor data. If HMD doesn't support any of the parameters then it will be set to zero.\n\x09*\n\x09* @param AngularAcceleration\x09(out) Angular acceleration in radians per second per second.\n\x09* @param LinearAcceleration\x09\x09(out) Acceleration in meters per second per second.\n\x09* @param AngularVelocity\x09\x09(out) Angular velocity in radians per second.\n\x09* @param LinearVelocity\x09\x09\x09(out) Velocity in meters per second.\n\x09* @param TimeInSeconds\x09\x09\x09(out) Time when the reported IMU reading took place, in seconds.\n\x09*/" },
		{ "CPP_Default_DeviceType", "HMD" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Reports raw sensor data. If HMD doesn't support any of the parameters then it will be set to zero.\n\n@param AngularAcceleration    (out) Angular acceleration in radians per second per second.\n@param LinearAcceleration             (out) Acceleration in meters per second per second.\n@param AngularVelocity                (out) Angular velocity in radians per second.\n@param LinearVelocity                 (out) Velocity in meters per second.\n@param TimeInSeconds                  (out) Time when the reported IMU reading took place, in seconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetRawSensorData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::OculusFunctionLibrary_eventGetRawSensorData_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics
	{
		struct OculusFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms
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
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns true if system headset is in 3dof mode \n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true if system headset is in 3dof mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetSystemHmd3DofModeEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::OculusFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics
	{
		struct OculusFunctionLibrary_eventGetUserProfile_Parms
		{
			FHmdUserProfile Profile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventGetUserProfile_Parms, Profile), Z_Construct_UScriptStruct_FHmdUserProfile, METADATA_PARAMS(nullptr, 0) }; // 3699306174
	void Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventGetUserProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventGetUserProfile_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns current user profile.\n\x09*\n\x09* @param Profile\x09\x09(out) Structure to hold current user profile.\n\x09* @return (boolean)\x09True, if user profile was acquired.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns current user profile.\n\n@param Profile                (out) Structure to hold current user profile.\n@return (boolean)     True, if user profile was acquired." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "GetUserProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::OculusFunctionLibrary_eventGetUserProfile_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics
	{
		struct OculusFunctionLibrary_eventHasInputFocus_Parms
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
	void Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventHasInputFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventHasInputFocus_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns true, if the app has input focus.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if the app has input focus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "HasInputFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::OculusFunctionLibrary_eventHasInputFocus_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics
	{
		struct OculusFunctionLibrary_eventHasSystemOverlayPresent_Parms
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
	void Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventHasSystemOverlayPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventHasSystemOverlayPresent_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns true, if the system overlay is present.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if the system overlay is present." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "HasSystemOverlayPresent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::OculusFunctionLibrary_eventHasSystemOverlayPresent_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics
	{
		struct OculusFunctionLibrary_eventIsDeviceTracked_Parms
		{
			ETrackedDeviceType DeviceType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventIsDeviceTracked_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) }; // 1408524775
	void Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventIsDeviceTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventIsDeviceTracked_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns if the device is currently tracked by the runtime or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns if the device is currently tracked by the runtime or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "IsDeviceTracked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::OculusFunctionLibrary_eventIsDeviceTracked_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics
	{
		struct OculusFunctionLibrary_eventIsGuardianConfigured_Parms
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
	void Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventIsGuardianConfigured_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventIsGuardianConfigured_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns true if the Guardian has been set up by the user, false if the user is in \"seated\" mode and has not set up a play space.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the Guardian has been set up by the user, false if the user is in \"seated\" mode and has not set up a play space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "IsGuardianConfigured", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::OculusFunctionLibrary_eventIsGuardianConfigured_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics
	{
		struct OculusFunctionLibrary_eventIsGuardianDisplayed_Parms
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
	void Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventIsGuardianDisplayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventIsGuardianDisplayed_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns true if the Guardian Outer Boundary is being displayed\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the Guardian Outer Boundary is being displayed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "IsGuardianDisplayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::OculusFunctionLibrary_eventIsGuardianDisplayed_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics
	{
		struct OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms
		{
			FRotator Rotation;
			FVector BaseOffsetInMeters;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffsetInMeters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters = { "BaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, BaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) }; // 3931628698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Sets 'base rotation' - the rotation that will be subtracted from\n\x09* the actual HMD orientation.\n\x09* Sets base position offset (in meters). The base position offset is the distance from the physical (0, 0, 0) position\n\x09* to current HMD position (bringing the (0, 0, 0) point to the current HMD position)\n\x09* Note, this vector is set by ResetPosition call; use this method with care.\n\x09* The axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\x09*\n\x09* @param Rotation\x09\x09\x09(in) Rotator object with base rotation\n\x09* @param BaseOffsetInMeters (in) the vector to be set as base offset, in meters.\n\x09* @param Options\x09\x09\x09(in) specifies either position, orientation or both should be set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Sets 'base rotation' - the rotation that will be subtracted from\nthe actual HMD orientation.\nSets base position offset (in meters). The base position offset is the distance from the physical (0, 0, 0) position\nto current HMD position (bringing the (0, 0, 0) point to the current HMD position)\nNote, this vector is set by ResetPosition call; use this method with care.\nThe axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\n@param Rotation                       (in) Rotator object with base rotation\n@param BaseOffsetInMeters (in) the vector to be set as base offset, in meters.\n@param Options                        (in) specifies either position, orientation or both should be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::OculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics
	{
		struct OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms
		{
			FRotator BaseRot;
			FVector PosOffset;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_BaseRot = { "BaseRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, BaseRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_PosOffset = { "PosOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, PosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) }; // 3931628698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_BaseRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_PosOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Sets 'base rotation' - the rotation that will be subtracted from\n\x09 * the actual HMD orientation.\n\x09 * The position offset might be added to current HMD position,\n\x09 * effectively moving the virtual camera by the specified offset. The addition\n\x09 * occurs after the HMD orientation and position are applied.\n\x09 *\n\x09 * @param BaseRot\x09\x09\x09(in) Rotator object with base rotation\n\x09 * @param PosOffset\x09\x09\x09(in) the vector to be added to HMD position.\n\x09 * @param Options\x09\x09\x09(in) specifies either position, orientation or both should be set.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Sets 'base rotation' - the rotation that will be subtracted from\nthe actual HMD orientation.\nThe position offset might be added to current HMD position,\neffectively moving the virtual camera by the specified offset. The addition\noccurs after the HMD orientation and position are applied.\n\n@param BaseRot                       (in) Rotator object with base rotation\n@param PosOffset                     (in) the vector to be added to HMD position.\n@param Options                       (in) specifies either position, orientation or both should be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetBaseRotationAndPositionOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::OculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics
	{
		struct OculusFunctionLibrary_eventSetClientColorDesc_Parms
		{
			EOculusColorSpace ColorSpace;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetClientColorDesc_Parms, ColorSpace), Z_Construct_UEnum_OculusHMD_EOculusColorSpace, METADATA_PARAMS(nullptr, 0) }; // 2925337178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::NewProp_ColorSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::NewProp_ColorSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Sets the target HMD to do color space correction to a specific color space\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Sets the target HMD to do color space correction to a specific color space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetClientColorDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::OculusFunctionLibrary_eventSetClientColorDesc_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics
	{
		struct OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms
		{
			FLinearColor ColorScale;
			FLinearColor ColorOffset;
			bool bApplyToAllLayers;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
		static void NewProp_bApplyToAllLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms*)Obj)->bApplyToAllLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers = { "bApplyToAllLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Set the Color Scale/Offset\n\x09*/" },
		{ "CPP_Default_bApplyToAllLayers", "false" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Set the Color Scale/Offset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetColorScaleAndOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::OculusFunctionLibrary_eventSetColorScaleAndOffset_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics
	{
		struct OculusFunctionLibrary_eventSetCPUAndGPULevels_Parms
		{
			int32 CPULevel;
			int32 GPULevel;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CPULevel;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GPULevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetCPUAndGPULevels_Parms, CPULevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetCPUAndGPULevels_Parms, GPULevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Returns if the device is currently tracked by the runtime or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Returns if the device is currently tracked by the runtime or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetCPUAndGPULevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::OculusFunctionLibrary_eventSetCPUAndGPULevels_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics
	{
		struct OculusFunctionLibrary_eventSetDisplayFrequency_Parms
		{
			float RequestedFrequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestedFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency = { "RequestedFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetDisplayFrequency_Parms, RequestedFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Sets the requested display frequency\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Sets the requested display frequency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetDisplayFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::OculusFunctionLibrary_eventSetDisplayFrequency_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics
	{
		struct OculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms
		{
			EFixedFoveatedRenderingLevel level;
			bool isDynamic;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_level;
		static void NewProp_isDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDynamic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms, level), Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, METADATA_PARAMS(nullptr, 0) }; // 3652770068
	void Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_isDynamic_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms*)Obj)->isDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_isDynamic = { "isDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_isDynamic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_isDynamic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09* Set the requested multiresolution level for the next frame, and whether FFR's level is now dynamic or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Set the requested multiresolution level for the next frame, and whether FFR's level is now dynamic or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetFixedFoveatedRenderingLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::OculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics
	{
		struct OculusFunctionLibrary_eventSetGuardianVisibility_Parms
		{
			bool GuardianVisible;
		};
		static void NewProp_GuardianVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GuardianVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible_SetBit(void* Obj)
	{
		((OculusFunctionLibrary_eventSetGuardianVisibility_Parms*)Obj)->GuardianVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible = { "GuardianVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusFunctionLibrary_eventSetGuardianVisibility_Parms), &Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Forces the runtime to render guardian at all times or not\n\x09* @param GuardianVisible\x09\x09\x09(in) True will display guardian, False will hide it\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Forces the runtime to render guardian at all times or not\n@param GuardianVisible                        (in) True will display guardian, False will hide it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetGuardianVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::OculusFunctionLibrary_eventSetGuardianVisibility_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics
	{
		struct OculusFunctionLibrary_eventSetPositionScale3D_Parms
		{
			FVector PosScale3D;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosScale3D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::NewProp_PosScale3D = { "PosScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusFunctionLibrary_eventSetPositionScale3D_Parms, PosScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::NewProp_PosScale3D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "Comment", "/**\n\x09 * Scales the HMD position that gets added to the virtual camera position.\n\x09 *\n\x09 * @param PosScale3D\x09(in) the scale to apply to the HMD position.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This feature is no longer supported." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Scales the HMD position that gets added to the virtual camera position.\n\n@param PosScale3D    (in) the scale to apply to the HMD position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFunctionLibrary, nullptr, "SetPositionScale3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::OculusFunctionLibrary_eventSetPositionScale3D_Parms), Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusFunctionLibrary);
	UClass* Z_Construct_UClass_UOculusFunctionLibrary_NoRegister()
	{
		return UOculusFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_AddLoadingSplashScreen, "AddLoadingSplashScreen" }, // 101716594
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_ClearLoadingSplashScreens, "ClearLoadingSplashScreens" }, // 534031827
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_EnableOrientationTracking, "EnableOrientationTracking" }, // 2960497394
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_EnablePositionTracking, "EnablePositionTracking" }, // 1713582914
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetAvailableDisplayFrequencies, "GetAvailableDisplayFrequencies" }, // 1227843414
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters, "GetBaseRotationAndBaseOffsetInMeters" }, // 1410949039
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset, "GetBaseRotationAndPositionOffset" }, // 1146963953
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetCurrentDisplayFrequency, "GetCurrentDisplayFrequency" }, // 2447425693
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceName, "GetDeviceName" }, // 1196843795
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetDeviceType, "GetDeviceType" }, // 1374664318
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel, "GetFixedFoveatedRenderingLevel" }, // 804912885
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUFrameTime, "GetGPUFrameTime" }, // 1558051869
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetGPUUtilization, "GetGPUUtilization" }, // 3398479546
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianDimensions, "GetGuardianDimensions" }, // 132436837
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetGuardianPoints, "GetGuardianPoints" }, // 3340801982
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetHmdColorDesc, "GetHmdColorDesc" }, // 1808125840
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetNodeGuardianIntersection, "GetNodeGuardianIntersection" }, // 2981777993
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetPlayAreaTransform, "GetPlayAreaTransform" }, // 2657200152
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetPointGuardianIntersection, "GetPointGuardianIntersection" }, // 2442852329
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetPose, "GetPose" }, // 3613622234
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetRawSensorData, "GetRawSensorData" }, // 3186047395
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled, "GetSystemHmd3DofModeEnabled" }, // 3113295004
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_GetUserProfile, "GetUserProfile" }, // 2140926154
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_HasInputFocus, "HasInputFocus" }, // 2024564611
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_HasSystemOverlayPresent, "HasSystemOverlayPresent" }, // 1114808410
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_IsDeviceTracked, "IsDeviceTracked" }, // 385293261
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianConfigured, "IsGuardianConfigured" }, // 2762706128
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_IsGuardianDisplayed, "IsGuardianDisplayed" }, // 1698583208
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters, "SetBaseRotationAndBaseOffsetInMeters" }, // 412555211
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset, "SetBaseRotationAndPositionOffset" }, // 4008739888
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetClientColorDesc, "SetClientColorDesc" }, // 1546963460
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetColorScaleAndOffset, "SetColorScaleAndOffset" }, // 3093360504
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetCPUAndGPULevels, "SetCPUAndGPULevels" }, // 2141932859
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetDisplayFrequency, "SetDisplayFrequency" }, // 1522373478
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel, "SetFixedFoveatedRenderingLevel" }, // 953305845
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetGuardianVisibility, "SetGuardianVisibility" }, // 3423055487
		{ &Z_Construct_UFunction_UOculusFunctionLibrary_SetPositionScale3D, "SetPositionScale3D" }, // 2241564416
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusFunctionLibrary_Statics::ClassParams = {
		&UOculusFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOculusFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOculusFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSHMD_API UClass* StaticClass<UOculusFunctionLibrary>()
	{
		return UOculusFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::EnumInfo[] = {
		{ ETrackedDeviceType_StaticEnum, TEXT("ETrackedDeviceType"), &Z_Registration_Info_UEnum_ETrackedDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1408524775U) },
		{ EFixedFoveatedRenderingLevel_StaticEnum, TEXT("EFixedFoveatedRenderingLevel"), &Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3652770068U) },
		{ EBoundaryType_StaticEnum, TEXT("EBoundaryType"), &Z_Registration_Info_UEnum_EBoundaryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3226926158U) },
		{ EOculusColorSpace_StaticEnum, TEXT("EOculusColorSpace"), &Z_Registration_Info_UEnum_EOculusColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2925337178U) },
		{ EHandTrackingSupport_StaticEnum, TEXT("EHandTrackingSupport"), &Z_Registration_Info_UEnum_EHandTrackingSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1347597193U) },
		{ EHandTrackingFrequency_StaticEnum, TEXT("EHandTrackingFrequency"), &Z_Registration_Info_UEnum_EHandTrackingFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 918203714U) },
		{ EOculusDeviceType_StaticEnum, TEXT("EOculusDeviceType"), &Z_Registration_Info_UEnum_EOculusDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 239135075U) },
		{ EOculusXrApi_StaticEnum, TEXT("EOculusXrApi"), &Z_Registration_Info_UEnum_EOculusXrApi, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3668051155U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FHmdUserProfileField::StaticStruct, Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewStructOps, TEXT("HmdUserProfileField"), &Z_Registration_Info_UScriptStruct_HmdUserProfileField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHmdUserProfileField), 3118385205U) },
		{ FHmdUserProfile::StaticStruct, Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewStructOps, TEXT("HmdUserProfile"), &Z_Registration_Info_UScriptStruct_HmdUserProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHmdUserProfile), 3699306174U) },
		{ FGuardianTestResult::StaticStruct, Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewStructOps, TEXT("GuardianTestResult"), &Z_Registration_Info_UScriptStruct_GuardianTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGuardianTestResult), 2271687841U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusFunctionLibrary, UOculusFunctionLibrary::StaticClass, TEXT("UOculusFunctionLibrary"), &Z_Registration_Info_UClass_UOculusFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusFunctionLibrary), 2494889600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_455444943(TEXT("/Script/OculusHMD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
