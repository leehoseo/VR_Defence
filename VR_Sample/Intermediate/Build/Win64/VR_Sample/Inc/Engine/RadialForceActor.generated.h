// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RadialForceActor_generated_h
#error "RadialForceActor.generated.h already included, missing '#pragma once' in RadialForceActor.h"
#endif
#define ENGINE_RadialForceActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleForce); \
	DECLARE_FUNCTION(execDisableForce); \
	DECLARE_FUNCTION(execEnableForce); \
	DECLARE_FUNCTION(execFireImpulse);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleForce); \
	DECLARE_FUNCTION(execDisableForce); \
	DECLARE_FUNCTION(execEnableForce); \
	DECLARE_FUNCTION(execFireImpulse);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARadialForceActor(); \
	friend struct Z_Construct_UClass_ARadialForceActor_Statics; \
public: \
	DECLARE_CLASS(ARadialForceActor, ARigidBodyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ARadialForceActor)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARadialForceActor(); \
	friend struct Z_Construct_UClass_ARadialForceActor_Statics; \
public: \
	DECLARE_CLASS(ARadialForceActor, ARigidBodyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ARadialForceActor)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARadialForceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadialForceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARadialForceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadialForceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ARadialForceActor(ARadialForceActor&&); \
	ENGINE_API ARadialForceActor(const ARadialForceActor&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARadialForceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ARadialForceActor(ARadialForceActor&&); \
	ENGINE_API ARadialForceActor(const ARadialForceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARadialForceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadialForceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadialForceActor)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RadialForceActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ARadialForceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
