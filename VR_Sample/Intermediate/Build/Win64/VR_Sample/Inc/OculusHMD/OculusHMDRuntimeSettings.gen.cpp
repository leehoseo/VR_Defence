// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMD/Public/OculusHMDRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusHMDRuntimeSettings() {}
// Cross Module References
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusHMDRuntimeSettings_NoRegister();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusHMDRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusSplashDesc();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EOculusXrApi();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EOculusColorSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingSupport();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency();
// End Cross Module References
	void UOculusHMDRuntimeSettings::StaticRegisterNativesUOculusHMDRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusHMDRuntimeSettings);
	UClass* Z_Construct_UClass_UOculusHMDRuntimeSettings_NoRegister()
	{
		return UOculusHMDRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEnabled_MetaData[];
#endif
		static void NewProp_bAutoEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplashDescs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashDescs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplashDescs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_XrApi_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XrApi_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_XrApi;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDash_MetaData[];
#endif
		static void NewProp_bSupportsDash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompositesDepth_MetaData[];
#endif
		static void NewProp_bCompositesDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositesDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHQDistortion_MetaData[];
#endif
		static void NewProp_bHQDistortion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHQDistortion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSplashScreen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OSSplashScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPULevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CPULevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPULevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GPULevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFocusAware_MetaData[];
#endif
		static void NewProp_bFocusAware_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusAware;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLateLatching_MetaData[];
#endif
		static void NewProp_bLateLatching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLateLatching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresSystemKeyboard_MetaData[];
#endif
		static void NewProp_bRequiresSystemKeyboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresSystemKeyboard;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingSupport_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingSupport_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingSupport;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingFrequency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPhaseSync_MetaData[];
#endif
		static void NewProp_bPhaseSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPhaseSync;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the OculusVR plugin.\n*/" },
		{ "IncludePath", "OculusHMDRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the OculusVR plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData[] = {
		{ "Category", "Engine SplashScreen" },
		{ "Comment", "/** Whether the Splash screen is enabled. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether the Splash screen is enabled." },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bAutoEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled = { "bAutoEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_Inner = { "SplashDescs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOculusSplashDesc, METADATA_PARAMS(nullptr, 0) }; // 1234497890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData[] = {
		{ "Category", "Engine SplashScreen" },
		{ "Comment", "/** An array of splash screen descriptors listing textures to show and their positions. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "An array of splash screen descriptors listing textures to show and their positions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs = { "SplashDescs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, SplashDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData)) }; // 1234497890
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_XrApi_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_XrApi_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** This selects the XR API that the engine will use. If unsure, OVRPlugin OpenXR is the recommended API. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "XR API" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "This selects the XR API that the engine will use. If unsure, OVRPlugin OpenXR is the recommended API." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_XrApi = { "XrApi", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, XrApi), Z_Construct_UEnum_OculusHMD_EOculusXrApi, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_XrApi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_XrApi_MetaData)) }; // 3668051155
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The target color space */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "The target color space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, ColorSpace), Z_Construct_UEnum_OculusHMD_EOculusColorSpace, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData)) }; // 2925337178
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!)" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bSupportsDash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash = { "bSupportsDash", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more." },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bCompositesDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth = { "bCompositesDepth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Computes mipmaps for the eye buffers every frame, for a higher quality distortion */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Computes mipmaps for the eye buffers every frame, for a higher quality distortion" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bHQDistortion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion = { "bHQDistortion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Minimum allowed pixel density. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Minimum allowed pixel density." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin = { "PixelDensityMin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, PixelDensityMin), METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Maximum allowed pixel density. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Maximum allowed pixel density." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax = { "PixelDensityMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, PixelDensityMax), METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_OSSplashScreen_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** A png for Mobile-OS-driven launch splash screen. It will show up instantly at app launch and disappear upon first engine-driven frame (regardless of said frame being UE4 splashes or 3D scenes) */" },
		{ "DisplayName", "OS Splash Screen" },
		{ "FilePathFilter", "png" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "RelativeToGameDir", "" },
		{ "ToolTip", "A png for Mobile-OS-driven launch splash screen. It will show up instantly at app launch and disappear upon first engine-driven frame (regardless of said frame being UE4 splashes or 3D scenes)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_OSSplashScreen = { "OSSplashScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, OSSplashScreen), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_OSSplashScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_OSSplashScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Default CPU level controlling CPU frequency on the mobile device */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Default CPU level controlling CPU frequency on the mobile device" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, CPULevel), METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Default GPU level controlling GPU frequency on the mobile device */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Default GPU level controlling GPU frequency on the mobile device" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, GPULevel), METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** If enabled the app will be focus aware. This will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "If enabled the app will be focus aware. This will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!)" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bFocusAware = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware = { "bFocusAware", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** [Experimental]Enable Late latching for reducing HMD and controller latency, improve tracking prediction quality, multiview and vulkan must be enabled for this feature. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "[Experimental]Enable Late latching for reducing HMD and controller latency, improve tracking prediction quality, multiview and vulkan must be enabled for this feature." },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bLateLatching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching = { "bLateLatching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** If enabled the app will use the Oculus system keyboard for input fields. This requires that the app be focus aware. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "If enabled the app will use the Oculus system keyboard for input fields. This requires that the app be focus aware." },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bRequiresSystemKeyboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard = { "bRequiresSystemKeyboard", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether controllers and/or hands can be used with the app */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether controllers and/or hands can be used with the app" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport = { "HandTrackingSupport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, HandTrackingSupport), Z_Construct_UEnum_OculusHMD_EHandTrackingSupport, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData)) }; // 1347597193
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Note that a higher tracking frequency will reserve some performance headroom from the application's budget. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Note that a higher tracking frequency will reserve some performance headroom from the application's budget." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency = { "HandTrackingFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, HandTrackingFrequency), Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_MetaData)) }; // 918203714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Enable phase sync on mobile, reducing HMD and controller latency, improve tracking prediction quality */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Enable phase sync on mobile, reducing HMD and controller latency, improve tracking prediction quality" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bPhaseSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync = { "bPhaseSync", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_XrApi_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_XrApi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_OSSplashScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusHMDRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::ClassParams = {
		&UOculusHMDRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusHMDRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UOculusHMDRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusHMDRuntimeSettings.OuterSingleton, Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusHMDRuntimeSettings.OuterSingleton;
	}
	template<> OCULUSHMD_API UClass* StaticClass<UOculusHMDRuntimeSettings>()
	{
		return UOculusHMDRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusHMDRuntimeSettings);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDRuntimeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusHMDRuntimeSettings, UOculusHMDRuntimeSettings::StaticClass, TEXT("UOculusHMDRuntimeSettings"), &Z_Registration_Info_UClass_UOculusHMDRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusHMDRuntimeSettings), 393010335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDRuntimeSettings_h_3638298105(TEXT("/Script/OculusHMD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
