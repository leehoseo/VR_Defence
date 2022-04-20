// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlueprintFunctionLibrary_generated_h
#error "BlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in BlueprintFunctionLibrary.h"
#endif
#define ENGINE_BlueprintFunctionLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFunctionLibrary, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprintFunctionLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFunctionLibrary, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprintFunctionLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlueprintFunctionLibrary(UBlueprintFunctionLibrary&&); \
	ENGINE_API UBlueprintFunctionLibrary(const UBlueprintFunctionLibrary&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlueprintFunctionLibrary(UBlueprintFunctionLibrary&&); \
	ENGINE_API UBlueprintFunctionLibrary(const UBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFunctionLibrary); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFunctionLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
