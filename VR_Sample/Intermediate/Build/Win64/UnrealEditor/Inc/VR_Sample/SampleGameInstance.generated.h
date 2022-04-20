// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VR_SAMPLE_SampleGameInstance_generated_h
#error "SampleGameInstance.generated.h already included, missing '#pragma once' in SampleGameInstance.h"
#endif
#define VR_SAMPLE_SampleGameInstance_generated_h

#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_SPARSE_DATA
#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_RPC_WRAPPERS
#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSampleGameInstance(); \
	friend struct Z_Construct_UClass_USampleGameInstance_Statics; \
public: \
	DECLARE_CLASS(USampleGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VR_Sample"), NO_API) \
	DECLARE_SERIALIZER(USampleGameInstance)


#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSampleGameInstance(); \
	friend struct Z_Construct_UClass_USampleGameInstance_Statics; \
public: \
	DECLARE_CLASS(USampleGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VR_Sample"), NO_API) \
	DECLARE_SERIALIZER(USampleGameInstance)


#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USampleGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USampleGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USampleGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USampleGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USampleGameInstance(USampleGameInstance&&); \
	NO_API USampleGameInstance(const USampleGameInstance&); \
public:


#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USampleGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USampleGameInstance(USampleGameInstance&&); \
	NO_API USampleGameInstance(const USampleGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USampleGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USampleGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USampleGameInstance)


#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_12_PROLOG
#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_SPARSE_DATA \
	FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_RPC_WRAPPERS \
	FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_INCLASS \
	FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_SPARSE_DATA \
	FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VR_SAMPLE_API UClass* StaticClass<class USampleGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VR_Sample_Source_VR_Sample_SampleGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
