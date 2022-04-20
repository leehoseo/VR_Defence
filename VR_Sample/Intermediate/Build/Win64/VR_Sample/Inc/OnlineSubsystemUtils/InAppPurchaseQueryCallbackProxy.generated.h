// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInAppPurchaseProductInfo;
class APlayerController;
class UInAppPurchaseQueryCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseQueryCallbackProxy_generated_h
#error "InAppPurchaseQueryCallbackProxy.generated.h already included, missing '#pragma once' in InAppPurchaseQueryCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseQueryCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_11_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventInAppPurchaseQueryResult_Parms \
{ \
	TArray<FInAppPurchaseProductInfo> InAppPurchaseInformation; \
}; \
static inline void FInAppPurchaseQueryResult_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseQueryResult, TArray<FInAppPurchaseProductInfo> const& InAppPurchaseInformation) \
{ \
	_Script_OnlineSubsystemUtils_eventInAppPurchaseQueryResult_Parms Parms; \
	Parms.InAppPurchaseInformation=InAppPurchaseInformation; \
	InAppPurchaseQueryResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQuery);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQuery);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseQueryCallbackProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseQueryCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseQueryCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseQueryCallbackProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseQueryCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseQueryCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseQueryCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseQueryCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseQueryCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(UInAppPurchaseQueryCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(const UInAppPurchaseQueryCallbackProxy&); \
public:


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(UInAppPurchaseQueryCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(const UInAppPurchaseQueryCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseQueryCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseQueryCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseQueryCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseQueryCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseQueryCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
