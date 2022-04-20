// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataLayerState : uint8;
struct FColor;
enum class EDataLayerRuntimeState : uint8;
struct FActorDataLayer;
#ifdef ENGINE_DataLayer_generated_h
#error "DataLayer.generated.h already included, missing '#pragma once' in DataLayer.h"
#endif
#define ENGINE_DataLayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInitialState); \
	DECLARE_FUNCTION(execIsInitiallyActive); \
	DECLARE_FUNCTION(execIsDynamicallyLoaded); \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execGetInitialRuntimeState); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execIsEffectiveVisible); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsInitiallyVisible); \
	DECLARE_FUNCTION(execGetDataLayerLabel); \
	DECLARE_FUNCTION(execEquals);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInitialState); \
	DECLARE_FUNCTION(execIsInitiallyActive); \
	DECLARE_FUNCTION(execIsDynamicallyLoaded); \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execGetInitialRuntimeState); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execIsEffectiveVisible); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsInitiallyVisible); \
	DECLARE_FUNCTION(execGetDataLayerLabel); \
	DECLARE_FUNCTION(execEquals);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayer(); \
	friend struct Z_Construct_UClass_UDataLayer_Statics; \
public: \
	DECLARE_CLASS(UDataLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayer) \
	DECLARE_WITHIN(AWorldDataLayers) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayer(); \
	friend struct Z_Construct_UClass_UDataLayer_Statics; \
public: \
	DECLARE_CLASS(UDataLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayer) \
	DECLARE_WITHIN(AWorldDataLayers) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataLayer(UDataLayer&&); \
	NO_API UDataLayer(const UDataLayer&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataLayer(UDataLayer&&); \
	NO_API UDataLayer(const UDataLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayer)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_65_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataLayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h


#define FOREACH_ENUM_EDATALAYERSTATE(op) \
	op(EDataLayerState::Unloaded) \
	op(EDataLayerState::Loaded) \
	op(EDataLayerState::Activated) 

enum class EDataLayerState : uint8;
template<> ENGINE_API UEnum* StaticEnum<EDataLayerState>();

#define FOREACH_ENUM_EDATALAYERRUNTIMESTATE(op) \
	op(EDataLayerRuntimeState::Unloaded) \
	op(EDataLayerRuntimeState::Loaded) \
	op(EDataLayerRuntimeState::Activated) 

enum class EDataLayerRuntimeState : uint8;
template<> ENGINE_API UEnum* StaticEnum<EDataLayerRuntimeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
