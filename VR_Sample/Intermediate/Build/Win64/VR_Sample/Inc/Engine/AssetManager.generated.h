// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetManager_generated_h
#error "AssetManager.generated.h already included, missing '#pragma once' in AssetManager.h"
#endif
#define ENGINE_AssetManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetManager(); \
	friend struct Z_Construct_UClass_UAssetManager_Statics; \
public: \
	DECLARE_CLASS(UAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUAssetManager(); \
	friend struct Z_Construct_UClass_UAssetManager_Statics; \
public: \
	DECLARE_CLASS(UAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetManager(UAssetManager&&); \
	NO_API UAssetManager(const UAssetManager&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetManager(UAssetManager&&); \
	NO_API UAssetManager(const UAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
