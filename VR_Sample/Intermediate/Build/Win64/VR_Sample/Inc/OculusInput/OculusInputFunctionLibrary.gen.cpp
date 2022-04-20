// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusInput/Public/OculusInputFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusInputFunctionLibrary() {}
// Cross Module References
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EOculusHandType();
	UPackage* Z_Construct_UPackage__Script_OculusInput();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_ETrackingConfidence();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EOculusFinger();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EBone();
	OCULUSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusCapsuleCollider();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	OCULUSINPUT_API UClass* Z_Construct_UClass_UOculusInputFunctionLibrary_NoRegister();
	OCULUSINPUT_API UClass* Z_Construct_UClass_UOculusInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusHandType;
	static UEnum* EOculusHandType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusHandType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusHandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_EOculusHandType, Z_Construct_UPackage__Script_OculusInput(), TEXT("EOculusHandType"));
		}
		return Z_Registration_Info_UEnum_EOculusHandType.OuterSingleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<EOculusHandType>()
	{
		return EOculusHandType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusInput_EOculusHandType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusInput_EOculusHandType_Statics::Enumerators[] = {
		{ "EOculusHandType::None", (int64)EOculusHandType::None },
		{ "EOculusHandType::HandLeft", (int64)EOculusHandType::HandLeft },
		{ "EOculusHandType::HandRight", (int64)EOculusHandType::HandRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusInput_EOculusHandType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HandLeft.Name", "EOculusHandType::HandLeft" },
		{ "HandRight.Name", "EOculusHandType::HandRight" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "None.Name", "EOculusHandType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInput_EOculusHandType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
		nullptr,
		"EOculusHandType",
		"EOculusHandType",
		Z_Construct_UEnum_OculusInput_EOculusHandType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_EOculusHandType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusInput_EOculusHandType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_EOculusHandType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusInput_EOculusHandType()
	{
		if (!Z_Registration_Info_UEnum_EOculusHandType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusHandType.InnerSingleton, Z_Construct_UEnum_OculusInput_EOculusHandType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusHandType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrackingConfidence;
	static UEnum* ETrackingConfidence_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrackingConfidence.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrackingConfidence.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_ETrackingConfidence, Z_Construct_UPackage__Script_OculusInput(), TEXT("ETrackingConfidence"));
		}
		return Z_Registration_Info_UEnum_ETrackingConfidence.OuterSingleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<ETrackingConfidence>()
	{
		return ETrackingConfidence_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics::Enumerators[] = {
		{ "ETrackingConfidence::Low", (int64)ETrackingConfidence::Low },
		{ "ETrackingConfidence::High", (int64)ETrackingConfidence::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "ETrackingConfidence::High" },
		{ "Low.Name", "ETrackingConfidence::Low" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
		nullptr,
		"ETrackingConfidence",
		"ETrackingConfidence",
		Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusInput_ETrackingConfidence()
	{
		if (!Z_Registration_Info_UEnum_ETrackingConfidence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrackingConfidence.InnerSingleton, Z_Construct_UEnum_OculusInput_ETrackingConfidence_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrackingConfidence.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusFinger;
	static UEnum* EOculusFinger_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusFinger.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusFinger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_EOculusFinger, Z_Construct_UPackage__Script_OculusInput(), TEXT("EOculusFinger"));
		}
		return Z_Registration_Info_UEnum_EOculusFinger.OuterSingleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<EOculusFinger>()
	{
		return EOculusFinger_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusInput_EOculusFinger_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusInput_EOculusFinger_Statics::Enumerators[] = {
		{ "EOculusFinger::Thumb", (int64)EOculusFinger::Thumb },
		{ "EOculusFinger::Index", (int64)EOculusFinger::Index },
		{ "EOculusFinger::Middle", (int64)EOculusFinger::Middle },
		{ "EOculusFinger::Ring", (int64)EOculusFinger::Ring },
		{ "EOculusFinger::Pinky", (int64)EOculusFinger::Pinky },
		{ "EOculusFinger::Invalid", (int64)EOculusFinger::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusInput_EOculusFinger_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Index.Name", "EOculusFinger::Index" },
		{ "Invalid.Name", "EOculusFinger::Invalid" },
		{ "Middle.Name", "EOculusFinger::Middle" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "Pinky.Name", "EOculusFinger::Pinky" },
		{ "Ring.Name", "EOculusFinger::Ring" },
		{ "Thumb.Name", "EOculusFinger::Thumb" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInput_EOculusFinger_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
		nullptr,
		"EOculusFinger",
		"EOculusFinger",
		Z_Construct_UEnum_OculusInput_EOculusFinger_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_EOculusFinger_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusInput_EOculusFinger_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_EOculusFinger_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusInput_EOculusFinger()
	{
		if (!Z_Registration_Info_UEnum_EOculusFinger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusFinger.InnerSingleton, Z_Construct_UEnum_OculusInput_EOculusFinger_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusFinger.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBone;
	static UEnum* EBone_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBone.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInput_EBone, Z_Construct_UPackage__Script_OculusInput(), TEXT("EBone"));
		}
		return Z_Registration_Info_UEnum_EBone.OuterSingleton;
	}
	template<> OCULUSINPUT_API UEnum* StaticEnum<EBone>()
	{
		return EBone_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusInput_EBone_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusInput_EBone_Statics::Enumerators[] = {
		{ "EBone::Wrist_Root", (int64)EBone::Wrist_Root },
		{ "EBone::Hand_Start", (int64)EBone::Hand_Start },
		{ "EBone::Forearm_Stub", (int64)EBone::Forearm_Stub },
		{ "EBone::Thumb_0", (int64)EBone::Thumb_0 },
		{ "EBone::Thumb_1", (int64)EBone::Thumb_1 },
		{ "EBone::Thumb_2", (int64)EBone::Thumb_2 },
		{ "EBone::Thumb_3", (int64)EBone::Thumb_3 },
		{ "EBone::Index_1", (int64)EBone::Index_1 },
		{ "EBone::Index_2", (int64)EBone::Index_2 },
		{ "EBone::Index_3", (int64)EBone::Index_3 },
		{ "EBone::Middle_1", (int64)EBone::Middle_1 },
		{ "EBone::Middle_2", (int64)EBone::Middle_2 },
		{ "EBone::Middle_3", (int64)EBone::Middle_3 },
		{ "EBone::Ring_1", (int64)EBone::Ring_1 },
		{ "EBone::Ring_2", (int64)EBone::Ring_2 },
		{ "EBone::Ring_3", (int64)EBone::Ring_3 },
		{ "EBone::Pinky_0", (int64)EBone::Pinky_0 },
		{ "EBone::Pinky_1", (int64)EBone::Pinky_1 },
		{ "EBone::Pinky_2", (int64)EBone::Pinky_2 },
		{ "EBone::Pinky_3", (int64)EBone::Pinky_3 },
		{ "EBone::Thumb_Tip", (int64)EBone::Thumb_Tip },
		{ "EBone::Max_Skinnable", (int64)EBone::Max_Skinnable },
		{ "EBone::Index_Tip", (int64)EBone::Index_Tip },
		{ "EBone::Middle_Tip", (int64)EBone::Middle_Tip },
		{ "EBone::Ring_Tip", (int64)EBone::Ring_Tip },
		{ "EBone::Pinky_Tip", (int64)EBone::Pinky_Tip },
		{ "EBone::Hand_End", (int64)EBone::Hand_End },
		{ "EBone::Bone_Max", (int64)EBone::Bone_Max },
		{ "EBone::Invalid", (int64)EBone::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusInput_EBone_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bone_Max.DisplayName", "Hand Max" },
		{ "Bone_Max.Name", "EBone::Bone_Max" },
		{ "Comment", "/**\n* EBone is enum representing the Bone Ids that come from the Oculus Runtime. \n*/" },
		{ "Forearm_Stub.DisplayName", "Forearm Stub" },
		{ "Forearm_Stub.Name", "EBone::Forearm_Stub" },
		{ "Hand_End.DisplayName", "Hand End" },
		{ "Hand_End.Name", "EBone::Hand_End" },
		{ "Hand_Start.DisplayName", "Hand Start" },
		{ "Hand_Start.Name", "EBone::Hand_Start" },
		{ "Index_1.DisplayName", "Index1" },
		{ "Index_1.Name", "EBone::Index_1" },
		{ "Index_2.DisplayName", "Index2" },
		{ "Index_2.Name", "EBone::Index_2" },
		{ "Index_3.DisplayName", "Index3" },
		{ "Index_3.Name", "EBone::Index_3" },
		{ "Index_Tip.DisplayName", "Index Tip" },
		{ "Index_Tip.Name", "EBone::Index_Tip" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EBone::Invalid" },
		{ "Max_Skinnable.DisplayName", "Max Skinnable" },
		{ "Max_Skinnable.Name", "EBone::Max_Skinnable" },
		{ "Middle_1.DisplayName", "Middle1" },
		{ "Middle_1.Name", "EBone::Middle_1" },
		{ "Middle_2.DisplayName", "Middle2" },
		{ "Middle_2.Name", "EBone::Middle_2" },
		{ "Middle_3.DisplayName", "Middle3" },
		{ "Middle_3.Name", "EBone::Middle_3" },
		{ "Middle_Tip.DisplayName", "Middle Tip" },
		{ "Middle_Tip.Name", "EBone::Middle_Tip" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "Pinky_0.DisplayName", "Pinky0" },
		{ "Pinky_0.Name", "EBone::Pinky_0" },
		{ "Pinky_1.DisplayName", "Pinky1" },
		{ "Pinky_1.Name", "EBone::Pinky_1" },
		{ "Pinky_2.DisplayName", "Pinky2" },
		{ "Pinky_2.Name", "EBone::Pinky_2" },
		{ "Pinky_3.DisplayName", "Pinky3" },
		{ "Pinky_3.Name", "EBone::Pinky_3" },
		{ "Pinky_Tip.DisplayName", "Pinky Tip" },
		{ "Pinky_Tip.Name", "EBone::Pinky_Tip" },
		{ "Ring_1.DisplayName", "Ring1" },
		{ "Ring_1.Name", "EBone::Ring_1" },
		{ "Ring_2.DisplayName", "Ring2" },
		{ "Ring_2.Name", "EBone::Ring_2" },
		{ "Ring_3.DisplayName", "Ring3" },
		{ "Ring_3.Name", "EBone::Ring_3" },
		{ "Ring_Tip.DisplayName", "Ring Tip" },
		{ "Ring_Tip.Name", "EBone::Ring_Tip" },
		{ "Thumb_0.DisplayName", "Thumb0" },
		{ "Thumb_0.Name", "EBone::Thumb_0" },
		{ "Thumb_1.DisplayName", "Thumb1" },
		{ "Thumb_1.Name", "EBone::Thumb_1" },
		{ "Thumb_2.DisplayName", "Thumb2" },
		{ "Thumb_2.Name", "EBone::Thumb_2" },
		{ "Thumb_3.DisplayName", "Thumb3" },
		{ "Thumb_3.Name", "EBone::Thumb_3" },
		{ "Thumb_Tip.DisplayName", "Thumb Tip" },
		{ "Thumb_Tip.Name", "EBone::Thumb_Tip" },
		{ "ToolTip", "EBone is enum representing the Bone Ids that come from the Oculus Runtime." },
		{ "Wrist_Root.DisplayName", "Wrist Root" },
		{ "Wrist_Root.Name", "EBone::Wrist_Root" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInput_EBone_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusInput,
		nullptr,
		"EBone",
		"EBone",
		Z_Construct_UEnum_OculusInput_EBone_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_EBone_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusInput_EBone_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInput_EBone_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusInput_EBone()
	{
		if (!Z_Registration_Info_UEnum_EBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBone.InnerSingleton, Z_Construct_UEnum_OculusInput_EBone_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBone.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusCapsuleCollider;
class UScriptStruct* FOculusCapsuleCollider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusCapsuleCollider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusCapsuleCollider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusCapsuleCollider, Z_Construct_UPackage__Script_OculusInput(), TEXT("OculusCapsuleCollider"));
	}
	return Z_Registration_Info_UScriptStruct_OculusCapsuleCollider.OuterSingleton;
}
template<> OCULUSINPUT_API UScriptStruct* StaticStruct<FOculusCapsuleCollider>()
{
	return FOculusCapsuleCollider::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Capsule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* FOculusCapsuleCollider is a struct that contains information on the physics/collider capsules created by the runtime for hands.\n*\n* @var Capsule\x09\x09The UCapsuleComponent that is the collision capsule on the bone. Use this to register for overlap/collision events\n* @var BoneIndex\x09The Bone that this collision capsule is parented to. Corresponds to the EBone enum.\n*\n*/" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "FOculusCapsuleCollider is a struct that contains information on the physics/collider capsules created by the runtime for hands.\n\n@var Capsule         The UCapsuleComponent that is the collision capsule on the bone. Use this to register for overlap/collision events\n@var BoneIndex       The Bone that this collision capsule is parented to. Corresponds to the EBone enum." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusCapsuleCollider>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusCapsuleCollider, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_MetaData[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusCapsuleCollider, BoneId), Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_MetaData)) }; // 3280092422
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewProp_BoneId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusInput,
		nullptr,
		&NewStructOps,
		"OculusCapsuleCollider",
		sizeof(FOculusCapsuleCollider),
		alignof(FOculusCapsuleCollider),
		Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusCapsuleCollider()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusCapsuleCollider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusCapsuleCollider.InnerSingleton, Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusCapsuleCollider.InnerSingleton;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetBoneName)
	{
		P_GET_ENUM(EBone,Z_Param_BoneId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOculusInputFunctionLibrary::GetBoneName(EBone(Z_Param_BoneId));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execIsHandPositionValid)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusInputFunctionLibrary::IsHandPositionValid(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execIsHandTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusInputFunctionLibrary::IsHandTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetDominantHand)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusHandType*)Z_Param__Result=UOculusInputFunctionLibrary::GetDominantHand(Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetHandScale)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusInputFunctionLibrary::GetHandScale(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetFingerTrackingConfidence)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EOculusFinger,Z_Param_Finger);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETrackingConfidence*)Z_Param__Result=UOculusInputFunctionLibrary::GetFingerTrackingConfidence(EOculusHandType(Z_Param_DeviceHand),EOculusFinger(Z_Param_Finger),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetTrackingConfidence)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETrackingConfidence*)Z_Param__Result=UOculusInputFunctionLibrary::GetTrackingConfidence(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execIsPointerPoseValid)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusInputFunctionLibrary::IsPointerPoseValid(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetPointerPose)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UOculusInputFunctionLibrary::GetPointerPose(EOculusHandType(Z_Param_DeviceHand),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetBoneRotation)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EBone,Z_Param_BoneId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UOculusInputFunctionLibrary::GetBoneRotation(EOculusHandType(Z_Param_DeviceHand),EBone(Z_Param_BoneId),Z_Param_ControllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execInitializeHandPhysics)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_SkeletonType);
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_HandComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOculusCapsuleCollider>*)Z_Param__Result=UOculusInputFunctionLibrary::InitializeHandPhysics(EOculusHandType(Z_Param_SkeletonType),Z_Param_HandComponent,Z_Param_WorldToMeters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execGetHandSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_HandSkeletalMesh);
		P_GET_ENUM(EOculusHandType,Z_Param_SkeletonType);
		P_GET_ENUM(EOculusHandType,Z_Param_MeshType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusInputFunctionLibrary::GetHandSkeletalMesh(Z_Param_HandSkeletalMesh,EOculusHandType(Z_Param_SkeletonType),EOculusHandType(Z_Param_MeshType),Z_Param_WorldToMeters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusInputFunctionLibrary::execConvertBoneToFinger)
	{
		P_GET_ENUM(EBone,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusFinger*)Z_Param__Result=UOculusInputFunctionLibrary::ConvertBoneToFinger(EBone(Z_Param_Bone));
		P_NATIVE_END;
	}
	void UOculusInputFunctionLibrary::StaticRegisterNativesUOculusInputFunctionLibrary()
	{
		UClass* Class = UOculusInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertBoneToFinger", &UOculusInputFunctionLibrary::execConvertBoneToFinger },
			{ "GetBoneName", &UOculusInputFunctionLibrary::execGetBoneName },
			{ "GetBoneRotation", &UOculusInputFunctionLibrary::execGetBoneRotation },
			{ "GetDominantHand", &UOculusInputFunctionLibrary::execGetDominantHand },
			{ "GetFingerTrackingConfidence", &UOculusInputFunctionLibrary::execGetFingerTrackingConfidence },
			{ "GetHandScale", &UOculusInputFunctionLibrary::execGetHandScale },
			{ "GetHandSkeletalMesh", &UOculusInputFunctionLibrary::execGetHandSkeletalMesh },
			{ "GetPointerPose", &UOculusInputFunctionLibrary::execGetPointerPose },
			{ "GetTrackingConfidence", &UOculusInputFunctionLibrary::execGetTrackingConfidence },
			{ "InitializeHandPhysics", &UOculusInputFunctionLibrary::execInitializeHandPhysics },
			{ "IsHandPositionValid", &UOculusInputFunctionLibrary::execIsHandPositionValid },
			{ "IsHandTrackingEnabled", &UOculusInputFunctionLibrary::execIsHandTrackingEnabled },
			{ "IsPointerPoseValid", &UOculusInputFunctionLibrary::execIsPointerPoseValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics
	{
		struct OculusInputFunctionLibrary_eventConvertBoneToFinger_Parms
		{
			EBone Bone;
			EOculusFinger ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_Bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventConvertBoneToFinger_Parms, Bone), Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_Bone_MetaData)) }; // 3280092422
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventConvertBoneToFinger_Parms, ReturnValue), Z_Construct_UEnum_OculusInput_EOculusFinger, METADATA_PARAMS(nullptr, 0) }; // 2231473880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_Bone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "ConvertBoneToFinger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::OculusInputFunctionLibrary_eventConvertBoneToFinger_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics
	{
		struct OculusInputFunctionLibrary_eventGetBoneName_Parms
		{
			EBone BoneId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneName_Parms, BoneId), Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(nullptr, 0) }; // 3280092422
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the bone name from the bone index\n\x09 *\n\x09 * @param BoneIndex\x09\x09\x09\x09\x09(in) Bone index to get the name of\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the bone name from the bone index\n\n@param BoneIndex                                     (in) Bone index to get the name of" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetBoneName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::OculusInputFunctionLibrary_eventGetBoneName_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics
	{
		struct OculusInputFunctionLibrary_eventGetBoneRotation_Parms
		{
			EOculusHandType DeviceHand;
			EBone BoneId;
			int32 ControllerIndex;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneRotation_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData)) }; // 654979220
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneRotation_Parms, BoneId), Z_Construct_UEnum_OculusInput_EBone, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData)) }; // 3280092422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneRotation_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetBoneRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the rotation of a specific bone\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the rotations from\n\x09 * @param BoneId\x09\x09\x09\x09\x09(in) The specific bone to get the rotation from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the rotation of a specific bone\n\n@param DeviceHand                            (in) The hand to get the rotations from\n@param BoneId                                        (in) The specific bone to get the rotation from\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetBoneRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::OculusInputFunctionLibrary_eventGetBoneRotation_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics
	{
		struct OculusInputFunctionLibrary_eventGetDominantHand_Parms
		{
			int32 ControllerIndex;
			EOculusHandType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetDominantHand_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetDominantHand_Parms, ReturnValue), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) }; // 654979220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the user's dominant hand\n\x09 *\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the user's dominant hand\n\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetDominantHand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::OculusInputFunctionLibrary_eventGetDominantHand_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics
	{
		struct OculusInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms
		{
			EOculusHandType DeviceHand;
			EOculusFinger Finger;
			int32 ControllerIndex;
			ETrackingConfidence ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Finger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Finger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_DeviceHand_MetaData)) }; // 654979220
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_Finger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms, Finger), Z_Construct_UEnum_OculusInput_EOculusFinger, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_Finger_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_Finger_MetaData)) }; // 2231473880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_OculusInput_ETrackingConfidence, METADATA_PARAMS(nullptr, 0) }; // 3254023533
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_DeviceHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_DeviceHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_Finger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_Finger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09* Get the tracking confidence of a finger\n\x09*\n\x09* @param DeviceHand\x09\x09\x09\x09(in) The hand to get tracking confidence of\n\x09* @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09* @param Finger\x09\x09\x09(in) The finger to get tracking confidence of\n\x09*/" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the tracking confidence of a finger\n\n@param DeviceHand                             (in) The hand to get tracking confidence of\n@param ControllerIndex                        (in) Optional different controller index\n@param Finger                 (in) The finger to get tracking confidence of" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetFingerTrackingConfidence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::OculusInputFunctionLibrary_eventGetFingerTrackingConfidence_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics
	{
		struct OculusInputFunctionLibrary_eventGetHandScale_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandScale_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData)) }; // 654979220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandScale_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the scale of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get scale of\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the scale of the hand\n\n@param DeviceHand                            (in) The hand to get scale of\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetHandScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::OculusInputFunctionLibrary_eventGetHandScale_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics
	{
		struct OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms
		{
			USkeletalMesh* HandSkeletalMesh;
			EOculusHandType SkeletonType;
			EOculusHandType MeshType;
			float WorldToMeters;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandSkeletalMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_HandSkeletalMesh = { "HandSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, HandSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, SkeletonType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) }; // 654979220
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, MeshType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) }; // 654979220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms, WorldToMeters), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters_MetaData)) };
	void Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms), &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_HandSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_SkeletonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_SkeletonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_MeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_MeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_WorldToMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Creates a new runtime hand skeletal mesh.\n\x09 *\n\x09 * @param HandSkeletalMesh\x09\x09\x09(out) Skeletal Mesh object that will be used for the runtime hand mesh\n\x09 * @param SkeletonType\x09\x09\x09\x09(in) The skeleton type that will be used for generating the hand bones\n\x09 * @param MeshType\x09\x09\x09\x09\x09(in) The mesh type that will be used for generating the hand mesh\n\x09 * @param WorldTometers\x09\x09\x09\x09(in) Optional change to the world to meters conversion value\n\x09 */" },
		{ "CPP_Default_WorldToMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Creates a new runtime hand skeletal mesh.\n\n@param HandSkeletalMesh                      (out) Skeletal Mesh object that will be used for the runtime hand mesh\n@param SkeletonType                          (in) The skeleton type that will be used for generating the hand bones\n@param MeshType                                      (in) The mesh type that will be used for generating the hand mesh\n@param WorldTometers                         (in) Optional change to the world to meters conversion value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetHandSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::OculusInputFunctionLibrary_eventGetHandSkeletalMesh_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics
	{
		struct OculusInputFunctionLibrary_eventGetPointerPose_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetPointerPose_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData)) }; // 654979220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetPointerPose_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetPointerPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the pointer pose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer pose from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the pointer pose\n\n@param DeviceHand                            (in) The hand to get the pointer pose from\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetPointerPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::OculusInputFunctionLibrary_eventGetPointerPose_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics
	{
		struct OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			ETrackingConfidence ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData)) }; // 654979220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_OculusInput_ETrackingConfidence, METADATA_PARAMS(nullptr, 0) }; // 3254023533
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Get the tracking confidence of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get tracking confidence of\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Get the tracking confidence of the hand\n\n@param DeviceHand                            (in) The hand to get tracking confidence of\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "GetTrackingConfidence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::OculusInputFunctionLibrary_eventGetTrackingConfidence_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics
	{
		struct OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms
		{
			EOculusHandType SkeletonType;
			USkinnedMeshComponent* HandComponent;
			float WorldToMeters;
			TArray<FOculusCapsuleCollider> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms, SkeletonType), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(nullptr, 0) }; // 654979220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent = { "HandComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms, HandComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms, WorldToMeters), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOculusCapsuleCollider, METADATA_PARAMS(nullptr, 0) }; // 1612104205
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1612104205
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_SkeletonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_SkeletonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_HandComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_WorldToMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Initializes physics capsules for collision and physics on the runtime mesh\n\x09 *\n\x09 * @param SkeletonType\x09\x09\x09\x09(in) The skeleton type that will be used to generated the capsules\n\x09 * @param HandComponent\x09\x09\x09\x09(in) The skinned mesh component that the capsules will be attached to\n\x09 * @param WorldTometers\x09\x09\x09\x09(in) Optional change to the world to meters conversion value\n\x09 */" },
		{ "CPP_Default_WorldToMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Initializes physics capsules for collision and physics on the runtime mesh\n\n@param SkeletonType                          (in) The skeleton type that will be used to generated the capsules\n@param HandComponent                         (in) The skinned mesh component that the capsules will be attached to\n@param WorldTometers                         (in) Optional change to the world to meters conversion value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "InitializeHandPhysics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::OculusInputFunctionLibrary_eventInitializeHandPhysics_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics
	{
		struct OculusInputFunctionLibrary_eventIsHandPositionValid_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventIsHandPositionValid_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_DeviceHand_MetaData)) }; // 654979220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventIsHandPositionValid_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ControllerIndex_MetaData)) };
	void Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusInputFunctionLibrary_eventIsHandPositionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusInputFunctionLibrary_eventIsHandPositionValid_Parms), &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_DeviceHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_DeviceHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09* Check if the hand position is valid\n\x09*\n\x09* @param DeviceHand\x09\x09\x09\x09(in) The hand to get the position from\n\x09* @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09*/" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Check if the hand position is valid\n\n@param DeviceHand                             (in) The hand to get the position from\n@param ControllerIndex                        (in) Optional different controller index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "IsHandPositionValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::OculusInputFunctionLibrary_eventIsHandPositionValid_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics
	{
		struct OculusInputFunctionLibrary_eventIsHandTrackingEnabled_Parms
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
	void Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusInputFunctionLibrary_eventIsHandTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Check if hand tracking is enabled currently\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Check if hand tracking is enabled currently" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "IsHandTrackingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::OculusInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics
	{
		struct OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms
		{
			EOculusHandType DeviceHand;
			int32 ControllerIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_MetaData)) }; // 654979220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex_MetaData)) };
	void Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms), &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_DeviceHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "Comment", "/**\n\x09 * Check if the pointer pose is a valid pose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer status from\n\x09 * @param ControllerIndex\x09\x09\x09(in) Optional different controller index\n\x09 */" },
		{ "CPP_Default_ControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
		{ "ToolTip", "Check if the pointer pose is a valid pose\n\n@param DeviceHand                            (in) The hand to get the pointer status from\n@param ControllerIndex                       (in) Optional different controller index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusInputFunctionLibrary, nullptr, "IsPointerPoseValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::OculusInputFunctionLibrary_eventIsPointerPoseValid_Parms), Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusInputFunctionLibrary);
	UClass* Z_Construct_UClass_UOculusInputFunctionLibrary_NoRegister()
	{
		return UOculusInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_ConvertBoneToFinger, "ConvertBoneToFinger" }, // 2107653663
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneName, "GetBoneName" }, // 2468420952
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetBoneRotation, "GetBoneRotation" }, // 3025752783
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetDominantHand, "GetDominantHand" }, // 1400300251
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetFingerTrackingConfidence, "GetFingerTrackingConfidence" }, // 1349341557
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandScale, "GetHandScale" }, // 1208944729
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetHandSkeletalMesh, "GetHandSkeletalMesh" }, // 3951241812
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetPointerPose, "GetPointerPose" }, // 210757213
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_GetTrackingConfidence, "GetTrackingConfidence" }, // 562077625
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_InitializeHandPhysics, "InitializeHandPhysics" }, // 1312824027
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandPositionValid, "IsHandPositionValid" }, // 1184604255
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsHandTrackingEnabled, "IsHandTrackingEnabled" }, // 2208878212
		{ &Z_Construct_UFunction_UOculusInputFunctionLibrary_IsPointerPoseValid, "IsPointerPoseValid" }, // 3130155093
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusInputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusInputFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::ClassParams = {
		&UOculusInputFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusInputFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOculusInputFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusInputFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusInputFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusInputFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSINPUT_API UClass* StaticClass<UOculusInputFunctionLibrary>()
	{
		return UOculusInputFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusInputFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EOculusHandType_StaticEnum, TEXT("EOculusHandType"), &Z_Registration_Info_UEnum_EOculusHandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 654979220U) },
		{ ETrackingConfidence_StaticEnum, TEXT("ETrackingConfidence"), &Z_Registration_Info_UEnum_ETrackingConfidence, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3254023533U) },
		{ EOculusFinger_StaticEnum, TEXT("EOculusFinger"), &Z_Registration_Info_UEnum_EOculusFinger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2231473880U) },
		{ EBone_StaticEnum, TEXT("EBone"), &Z_Registration_Info_UEnum_EBone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3280092422U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FOculusCapsuleCollider::StaticStruct, Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics::NewStructOps, TEXT("OculusCapsuleCollider"), &Z_Registration_Info_UScriptStruct_OculusCapsuleCollider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusCapsuleCollider), 1612104205U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusInputFunctionLibrary, UOculusInputFunctionLibrary::StaticClass, TEXT("UOculusInputFunctionLibrary"), &Z_Registration_Info_UClass_UOculusInputFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusInputFunctionLibrary), 1057894142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_4112068798(TEXT("/Script/OculusInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
