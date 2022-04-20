// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnvQueryInstanceBlueprintWrapper;
class AActor;
#ifdef AIMODULE_EnvQueryInstanceBlueprintWrapper_generated_h
#error "EnvQueryInstanceBlueprintWrapper.generated.h already included, missing '#pragma once' in EnvQueryInstanceBlueprintWrapper.h"
#endif
#define AIMODULE_EnvQueryInstanceBlueprintWrapper_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_24_DELEGATE \
struct EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms \
{ \
	UEnvQueryInstanceBlueprintWrapper* QueryInstance; \
	TEnumAsByte<EEnvQueryStatus::Type> QueryStatus; \
}; \
static inline void FEQSQueryDoneSignature_DelegateWrapper(const FMulticastScriptDelegate& EQSQueryDoneSignature, UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) \
{ \
	EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms Parms; \
	Parms.QueryInstance=QueryInstance; \
	Parms.QueryStatus=QueryStatus; \
	EQSQueryDoneSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNamedParam); \
	DECLARE_FUNCTION(execGetResultsAsLocations); \
	DECLARE_FUNCTION(execGetResultsAsActors); \
	DECLARE_FUNCTION(execGetQueryResultsAsLocations); \
	DECLARE_FUNCTION(execGetQueryResultsAsActors); \
	DECLARE_FUNCTION(execGetItemScore);


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNamedParam); \
	DECLARE_FUNCTION(execGetResultsAsLocations); \
	DECLARE_FUNCTION(execGetResultsAsActors); \
	DECLARE_FUNCTION(execGetQueryResultsAsLocations); \
	DECLARE_FUNCTION(execGetQueryResultsAsActors); \
	DECLARE_FUNCTION(execGetItemScore);


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper(); \
	friend struct Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryInstanceBlueprintWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryInstanceBlueprintWrapper) \
	virtual UObject* _getUObject() const override { return const_cast<UEnvQueryInstanceBlueprintWrapper*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper(); \
	friend struct Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryInstanceBlueprintWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryInstanceBlueprintWrapper) \
	virtual UObject* _getUObject() const override { return const_cast<UEnvQueryInstanceBlueprintWrapper*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryInstanceBlueprintWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryInstanceBlueprintWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryInstanceBlueprintWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryInstanceBlueprintWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryInstanceBlueprintWrapper(UEnvQueryInstanceBlueprintWrapper&&); \
	NO_API UEnvQueryInstanceBlueprintWrapper(const UEnvQueryInstanceBlueprintWrapper&); \
public:


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryInstanceBlueprintWrapper(UEnvQueryInstanceBlueprintWrapper&&); \
	NO_API UEnvQueryInstanceBlueprintWrapper(const UEnvQueryInstanceBlueprintWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryInstanceBlueprintWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryInstanceBlueprintWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryInstanceBlueprintWrapper)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_18_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryInstanceBlueprintWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
