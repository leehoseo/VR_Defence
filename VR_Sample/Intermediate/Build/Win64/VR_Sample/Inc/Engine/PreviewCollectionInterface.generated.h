// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PreviewCollectionInterface_generated_h
#error "PreviewCollectionInterface.generated.h already included, missing '#pragma once' in PreviewCollectionInterface.h"
#endif
#define ENGINE_PreviewCollectionInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPreviewCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewCollectionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPreviewCollectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewCollectionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPreviewCollectionInterface(UPreviewCollectionInterface&&); \
	NO_API UPreviewCollectionInterface(const UPreviewCollectionInterface&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPreviewCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPreviewCollectionInterface(UPreviewCollectionInterface&&); \
	NO_API UPreviewCollectionInterface(const UPreviewCollectionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPreviewCollectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewCollectionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewCollectionInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPreviewCollectionInterface(); \
	friend struct Z_Construct_UClass_UPreviewCollectionInterface_Statics; \
public: \
	DECLARE_CLASS(UPreviewCollectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPreviewCollectionInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPreviewCollectionInterface() {} \
public: \
	typedef UPreviewCollectionInterface UClassType; \
	typedef IPreviewCollectionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IPreviewCollectionInterface() {} \
public: \
	typedef UPreviewCollectionInterface UClassType; \
	typedef IPreviewCollectionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPreviewCollectionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
