// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCurveTypes_generated_h
#error "AnimCurveTypes.generated.h already included, missing '#pragma once' in AnimCurveTypes.h"
#endif
#define ENGINE_AnimCurveTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimCurveParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimCurveParam>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimCurveBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimCurveBase>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFloatCurve>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVectorCurve>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTransformCurve>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedFloatCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCachedFloatCurve>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_800_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawCurveTracks_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawCurveTracks>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h


#define FOREACH_ENUM_EANIMASSETCURVEFLAGS(op) \
	op(AACF_NONE) \
	op(AACF_DriveMorphTarget_DEPRECATED) \
	op(AACF_DriveAttribute_DEPRECATED) \
	op(AACF_Editable) \
	op(AACF_DriveMaterial_DEPRECATED) \
	op(AACF_Metadata) \
	op(AACF_DriveTrack) \
	op(AACF_Disabled) 
#define FOREACH_ENUM_ERAWCURVETRACKTYPES(op) \
	op(ERawCurveTrackTypes::RCT_Float) \
	op(ERawCurveTrackTypes::RCT_Vector) \
	op(ERawCurveTrackTypes::RCT_Transform) 

enum class ERawCurveTrackTypes : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERawCurveTrackTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
