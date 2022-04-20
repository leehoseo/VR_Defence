// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AudioEngineSubsystem_generated_h
#error "AudioEngineSubsystem.generated.h already included, missing '#pragma once' in AudioEngineSubsystem.h"
#endif
#define ENGINE_AudioEngineSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioSubsystemCollectionRoot(); \
	friend struct Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics; \
public: \
	DECLARE_CLASS(UAudioSubsystemCollectionRoot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioSubsystemCollectionRoot)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSubsystemCollectionRoot(); \
	friend struct Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics; \
public: \
	DECLARE_CLASS(UAudioSubsystemCollectionRoot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioSubsystemCollectionRoot)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSubsystemCollectionRoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSubsystemCollectionRoot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSubsystemCollectionRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSubsystemCollectionRoot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioSubsystemCollectionRoot(UAudioSubsystemCollectionRoot&&); \
	NO_API UAudioSubsystemCollectionRoot(const UAudioSubsystemCollectionRoot&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSubsystemCollectionRoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioSubsystemCollectionRoot(UAudioSubsystemCollectionRoot&&); \
	NO_API UAudioSubsystemCollectionRoot(const UAudioSubsystemCollectionRoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSubsystemCollectionRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSubsystemCollectionRoot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSubsystemCollectionRoot)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioSubsystemCollectionRoot>();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioEngineSubsystem(); \
	friend struct Z_Construct_UClass_UAudioEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAudioEngineSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUAudioEngineSubsystem(); \
	friend struct Z_Construct_UClass_UAudioEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAudioEngineSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioEngineSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioEngineSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEngineSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioEngineSubsystem(UAudioEngineSubsystem&&); \
	NO_API UAudioEngineSubsystem(const UAudioEngineSubsystem&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioEngineSubsystem(UAudioEngineSubsystem&&); \
	NO_API UAudioEngineSubsystem(const UAudioEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEngineSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAudioEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
