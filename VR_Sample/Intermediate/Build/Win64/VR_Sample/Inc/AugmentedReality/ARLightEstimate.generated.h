// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef AUGMENTEDREALITY_ARLightEstimate_generated_h
#error "ARLightEstimate.generated.h already included, missing '#pragma once' in ARLightEstimate.h"
#endif
#define AUGMENTEDREALITY_ARLightEstimate_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARLightEstimate(); \
	friend struct Z_Construct_UClass_UARLightEstimate_Statics; \
public: \
	DECLARE_CLASS(UARLightEstimate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARLightEstimate)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUARLightEstimate(); \
	friend struct Z_Construct_UClass_UARLightEstimate_Statics; \
public: \
	DECLARE_CLASS(UARLightEstimate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARLightEstimate)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLightEstimate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLightEstimate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLightEstimate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLightEstimate(UARLightEstimate&&); \
	NO_API UARLightEstimate(const UARLightEstimate&); \
public:


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLightEstimate(UARLightEstimate&&); \
	NO_API UARLightEstimate(const UARLightEstimate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLightEstimate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLightEstimate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLightEstimate)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_8_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARLightEstimate>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmbientColor); \
	DECLARE_FUNCTION(execGetAmbientColorTemperatureKelvin); \
	DECLARE_FUNCTION(execGetAmbientIntensityLumens);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmbientColor); \
	DECLARE_FUNCTION(execGetAmbientColorTemperatureKelvin); \
	DECLARE_FUNCTION(execGetAmbientIntensityLumens);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARBasicLightEstimate(); \
	friend struct Z_Construct_UClass_UARBasicLightEstimate_Statics; \
public: \
	DECLARE_CLASS(UARBasicLightEstimate, UARLightEstimate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBasicLightEstimate)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUARBasicLightEstimate(); \
	friend struct Z_Construct_UClass_UARBasicLightEstimate_Statics; \
public: \
	DECLARE_CLASS(UARBasicLightEstimate, UARLightEstimate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBasicLightEstimate)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBasicLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBasicLightEstimate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBasicLightEstimate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBasicLightEstimate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBasicLightEstimate(UARBasicLightEstimate&&); \
	NO_API UARBasicLightEstimate(const UARBasicLightEstimate&); \
public:


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBasicLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBasicLightEstimate(UARBasicLightEstimate&&); \
	NO_API UARBasicLightEstimate(const UARBasicLightEstimate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBasicLightEstimate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBasicLightEstimate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBasicLightEstimate)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_14_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARBasicLightEstimate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
