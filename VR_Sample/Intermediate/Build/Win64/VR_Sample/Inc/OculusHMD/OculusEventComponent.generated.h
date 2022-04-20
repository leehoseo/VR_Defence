// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCULUSHMD_OculusEventComponent_generated_h
#error "OculusEventComponent.generated.h already included, missing '#pragma once' in OculusEventComponent.h"
#endif
#define OCULUSHMD_OculusEventComponent_generated_h

#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_18_DELEGATE \
struct OculusEventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms \
{ \
	float fromRefreshRate; \
	float toRefreshRate; \
}; \
static inline void FOculusDisplayRefreshRateChangedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OculusDisplayRefreshRateChangedEventDelegate, float fromRefreshRate, float toRefreshRate) \
{ \
	OculusEventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms Parms; \
	Parms.fromRefreshRate=fromRefreshRate; \
	Parms.toRefreshRate=toRefreshRate; \
	OculusDisplayRefreshRateChangedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusEventComponent(); \
	friend struct Z_Construct_UClass_UOculusEventComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusHMD"), NO_API) \
	DECLARE_SERIALIZER(UOculusEventComponent)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUOculusEventComponent(); \
	friend struct Z_Construct_UClass_UOculusEventComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusHMD"), NO_API) \
	DECLARE_SERIALIZER(UOculusEventComponent)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusEventComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusEventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusEventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusEventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusEventComponent(UOculusEventComponent&&); \
	NO_API UOculusEventComponent(const UOculusEventComponent&); \
public:


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusEventComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusEventComponent(UOculusEventComponent&&); \
	NO_API UOculusEventComponent(const UOculusEventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusEventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusEventComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusEventComponent)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSHMD_API UClass* StaticClass<class UOculusEventComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
