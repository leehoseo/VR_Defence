// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FColor;
#ifdef ENGINE_VolumetricCloudComponent_generated_h
#error "VolumetricCloudComponent.generated.h already included, missing '#pragma once' in VolumetricCloudComponent.h"
#endif
#define ENGINE_VolumetricCloudComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetShadowReflectionSampleCountScale); \
	DECLARE_FUNCTION(execSetReflectionSampleCountScale); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetStopTracingTransmittanceThreshold); \
	DECLARE_FUNCTION(execSetShadowTracingDistance); \
	DECLARE_FUNCTION(execSetShadowReflectionViewSampleCountScale); \
	DECLARE_FUNCTION(execSetShadowViewSampleCountScale); \
	DECLARE_FUNCTION(execSetReflectionViewSampleCountScale); \
	DECLARE_FUNCTION(execSetViewSampleCountScale); \
	DECLARE_FUNCTION(execSetSkyLightCloudBottomOcclusion); \
	DECLARE_FUNCTION(execSetbUsePerSampleAtmosphericLightTransmittance); \
	DECLARE_FUNCTION(execSetGroundAlbedo); \
	DECLARE_FUNCTION(execSetPlanetRadius); \
	DECLARE_FUNCTION(execSetTracingMaxDistance); \
	DECLARE_FUNCTION(execSetTracingStartMaxDistance); \
	DECLARE_FUNCTION(execSetLayerHeight); \
	DECLARE_FUNCTION(execSetLayerBottomAltitude);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetShadowReflectionSampleCountScale); \
	DECLARE_FUNCTION(execSetReflectionSampleCountScale); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetStopTracingTransmittanceThreshold); \
	DECLARE_FUNCTION(execSetShadowTracingDistance); \
	DECLARE_FUNCTION(execSetShadowReflectionViewSampleCountScale); \
	DECLARE_FUNCTION(execSetShadowViewSampleCountScale); \
	DECLARE_FUNCTION(execSetReflectionViewSampleCountScale); \
	DECLARE_FUNCTION(execSetViewSampleCountScale); \
	DECLARE_FUNCTION(execSetSkyLightCloudBottomOcclusion); \
	DECLARE_FUNCTION(execSetbUsePerSampleAtmosphericLightTransmittance); \
	DECLARE_FUNCTION(execSetGroundAlbedo); \
	DECLARE_FUNCTION(execSetPlanetRadius); \
	DECLARE_FUNCTION(execSetTracingMaxDistance); \
	DECLARE_FUNCTION(execSetTracingStartMaxDistance); \
	DECLARE_FUNCTION(execSetLayerHeight); \
	DECLARE_FUNCTION(execSetLayerBottomAltitude);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumetricCloudComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVolumetricCloudComponent(); \
	friend struct Z_Construct_UClass_UVolumetricCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UVolumetricCloudComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVolumetricCloudComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVolumetricCloudComponent(); \
	friend struct Z_Construct_UClass_UVolumetricCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UVolumetricCloudComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVolumetricCloudComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumetricCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumetricCloudComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumetricCloudComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumetricCloudComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVolumetricCloudComponent(UVolumetricCloudComponent&&); \
	ENGINE_API UVolumetricCloudComponent(const UVolumetricCloudComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumetricCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVolumetricCloudComponent(UVolumetricCloudComponent&&); \
	ENGINE_API UVolumetricCloudComponent(const UVolumetricCloudComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumetricCloudComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumetricCloudComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumetricCloudComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VolumetricCloudComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVolumetricCloudComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVolumetricCloud(); \
	friend struct Z_Construct_UClass_AVolumetricCloud_Statics; \
public: \
	DECLARE_CLASS(AVolumetricCloud, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AVolumetricCloud)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_INCLASS \
private: \
	static void StaticRegisterNativesAVolumetricCloud(); \
	friend struct Z_Construct_UClass_AVolumetricCloud_Statics; \
public: \
	DECLARE_CLASS(AVolumetricCloud, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AVolumetricCloud)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVolumetricCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolumetricCloud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVolumetricCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolumetricCloud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AVolumetricCloud(AVolumetricCloud&&); \
	ENGINE_API AVolumetricCloud(const AVolumetricCloud&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVolumetricCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AVolumetricCloud(AVolumetricCloud&&); \
	ENGINE_API AVolumetricCloud(const AVolumetricCloud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVolumetricCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolumetricCloud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolumetricCloud)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_193_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_196_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VolumetricCloud."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AVolumetricCloud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
