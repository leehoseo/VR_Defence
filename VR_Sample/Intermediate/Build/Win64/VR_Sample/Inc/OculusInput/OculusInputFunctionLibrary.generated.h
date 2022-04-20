// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBone : uint8;
enum class EOculusHandType : uint8;
enum class EOculusFinger : uint8;
enum class ETrackingConfidence : uint8;
class USkinnedMeshComponent;
struct FOculusCapsuleCollider;
class USkeletalMesh;
#ifdef OCULUSINPUT_OculusInputFunctionLibrary_generated_h
#error "OculusInputFunctionLibrary.generated.h already included, missing '#pragma once' in OculusInputFunctionLibrary.h"
#endif
#define OCULUSINPUT_OculusInputFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusCapsuleCollider_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCULUSINPUT_API UScriptStruct* StaticStruct<struct FOculusCapsuleCollider>();

#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execIsHandPositionValid); \
	DECLARE_FUNCTION(execIsHandTrackingEnabled); \
	DECLARE_FUNCTION(execGetDominantHand); \
	DECLARE_FUNCTION(execGetHandScale); \
	DECLARE_FUNCTION(execGetFingerTrackingConfidence); \
	DECLARE_FUNCTION(execGetTrackingConfidence); \
	DECLARE_FUNCTION(execIsPointerPoseValid); \
	DECLARE_FUNCTION(execGetPointerPose); \
	DECLARE_FUNCTION(execGetBoneRotation); \
	DECLARE_FUNCTION(execInitializeHandPhysics); \
	DECLARE_FUNCTION(execGetHandSkeletalMesh); \
	DECLARE_FUNCTION(execConvertBoneToFinger);


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execIsHandPositionValid); \
	DECLARE_FUNCTION(execIsHandTrackingEnabled); \
	DECLARE_FUNCTION(execGetDominantHand); \
	DECLARE_FUNCTION(execGetHandScale); \
	DECLARE_FUNCTION(execGetFingerTrackingConfidence); \
	DECLARE_FUNCTION(execGetTrackingConfidence); \
	DECLARE_FUNCTION(execIsPointerPoseValid); \
	DECLARE_FUNCTION(execGetPointerPose); \
	DECLARE_FUNCTION(execGetBoneRotation); \
	DECLARE_FUNCTION(execInitializeHandPhysics); \
	DECLARE_FUNCTION(execGetHandSkeletalMesh); \
	DECLARE_FUNCTION(execConvertBoneToFinger);


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInput"), NO_API) \
	DECLARE_SERIALIZER(UOculusInputFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUOculusInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInput"), NO_API) \
	DECLARE_SERIALIZER(UOculusInputFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusInputFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusInputFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusInputFunctionLibrary(UOculusInputFunctionLibrary&&); \
	NO_API UOculusInputFunctionLibrary(const UOculusInputFunctionLibrary&); \
public:


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusInputFunctionLibrary(UOculusInputFunctionLibrary&&); \
	NO_API UOculusInputFunctionLibrary(const UOculusInputFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusInputFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusInputFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_94_PROLOG
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_INCLASS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h_97_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusInputFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSINPUT_API UClass* StaticClass<class UOculusInputFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusInput_Public_OculusInputFunctionLibrary_h


#define FOREACH_ENUM_EOCULUSHANDTYPE(op) \
	op(EOculusHandType::None) \
	op(EOculusHandType::HandLeft) \
	op(EOculusHandType::HandRight) 

enum class EOculusHandType : uint8;
template<> OCULUSINPUT_API UEnum* StaticEnum<EOculusHandType>();

#define FOREACH_ENUM_ETRACKINGCONFIDENCE(op) \
	op(ETrackingConfidence::Low) \
	op(ETrackingConfidence::High) 

enum class ETrackingConfidence : uint8;
template<> OCULUSINPUT_API UEnum* StaticEnum<ETrackingConfidence>();

#define FOREACH_ENUM_EOCULUSFINGER(op) \
	op(EOculusFinger::Thumb) \
	op(EOculusFinger::Index) \
	op(EOculusFinger::Middle) \
	op(EOculusFinger::Ring) \
	op(EOculusFinger::Pinky) \
	op(EOculusFinger::Invalid) 

enum class EOculusFinger : uint8;
template<> OCULUSINPUT_API UEnum* StaticEnum<EOculusFinger>();

#define FOREACH_ENUM_EBONE(op) \
	op(EBone::Wrist_Root) \
	op(EBone::Hand_Start) \
	op(EBone::Forearm_Stub) \
	op(EBone::Thumb_0) \
	op(EBone::Thumb_1) \
	op(EBone::Thumb_2) \
	op(EBone::Thumb_3) \
	op(EBone::Index_1) \
	op(EBone::Index_2) \
	op(EBone::Index_3) \
	op(EBone::Middle_1) \
	op(EBone::Middle_2) \
	op(EBone::Middle_3) \
	op(EBone::Ring_1) \
	op(EBone::Ring_2) \
	op(EBone::Ring_3) \
	op(EBone::Pinky_0) \
	op(EBone::Pinky_1) \
	op(EBone::Pinky_2) \
	op(EBone::Pinky_3) \
	op(EBone::Thumb_Tip) \
	op(EBone::Max_Skinnable) \
	op(EBone::Index_Tip) \
	op(EBone::Middle_Tip) \
	op(EBone::Ring_Tip) \
	op(EBone::Pinky_Tip) \
	op(EBone::Hand_End) \
	op(EBone::Bone_Max) \
	op(EBone::Invalid) 

enum class EBone : uint8;
template<> OCULUSINPUT_API UEnum* StaticEnum<EBone>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
