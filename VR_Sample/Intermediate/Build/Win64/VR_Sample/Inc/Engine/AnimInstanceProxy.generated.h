// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimInstanceProxy_generated_h
#error "AnimInstanceProxy.generated.h already included, missing '#pragma once' in AnimInstanceProxy.h"
#endif
#define ENGINE_AnimInstanceProxy_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FQueuedDrawDebugItem>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimInstanceProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h


#define FOREACH_ENUM_EDRAWDEBUGITEMTYPE(op) \
	op(EDrawDebugItemType::DirectionalArrow) \
	op(EDrawDebugItemType::Sphere) \
	op(EDrawDebugItemType::Line) \
	op(EDrawDebugItemType::OnScreenMessage) \
	op(EDrawDebugItemType::CoordinateSystem) \
	op(EDrawDebugItemType::Point) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
