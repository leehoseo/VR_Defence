// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraAnimInst_generated_h
#error "CameraAnimInst.generated.h already included, missing '#pragma once' in CameraAnimInst.h"
#endif
#define ENGINE_CameraAnimInst_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execSetDuration); \
	DECLARE_FUNCTION(execStop);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execSetDuration); \
	DECLARE_FUNCTION(execStop);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraAnimInst(); \
	friend struct Z_Construct_UClass_UCameraAnimInst_Statics; \
public: \
	DECLARE_CLASS(UCameraAnimInst, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraAnimInst)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCameraAnimInst(); \
	friend struct Z_Construct_UClass_UCameraAnimInst_Statics; \
public: \
	DECLARE_CLASS(UCameraAnimInst, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraAnimInst)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAnimInst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnimInst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnimInst); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraAnimInst(UCameraAnimInst&&); \
	NO_API UCameraAnimInst(const UCameraAnimInst&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAnimInst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraAnimInst(UCameraAnimInst&&); \
	NO_API UCameraAnimInst(const UCameraAnimInst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnimInst); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnimInst)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraAnimInst."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraAnimInst>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
