// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpGroupCamera_generated_h
#error "InterpGroupCamera.generated.h already included, missing '#pragma once' in InterpGroupCamera.h"
#endif
#define ENGINE_InterpGroupCamera_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraPreviewInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpGroupCamera(); \
	friend struct Z_Construct_UClass_UInterpGroupCamera_Statics; \
public: \
	DECLARE_CLASS(UInterpGroupCamera, UInterpGroup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpGroupCamera)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUInterpGroupCamera(); \
	friend struct Z_Construct_UClass_UInterpGroupCamera_Statics; \
public: \
	DECLARE_CLASS(UInterpGroupCamera, UInterpGroup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpGroupCamera)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpGroupCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpGroupCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpGroupCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpGroupCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpGroupCamera(UInterpGroupCamera&&); \
	ENGINE_API UInterpGroupCamera(const UInterpGroupCamera&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpGroupCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpGroupCamera(UInterpGroupCamera&&); \
	ENGINE_API UInterpGroupCamera(const UInterpGroupCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpGroupCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpGroupCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpGroupCamera)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_54_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_57_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpGroupCamera."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpGroupCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
