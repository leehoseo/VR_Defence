// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AController;
#ifdef ENGINE_GameInstance_generated_h
#error "GameInstance.generated.h already included, missing '#pragma once' in GameInstance.h"
#endif
#define ENGINE_GameInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_60_DELEGATE \
struct _Script_Engine_eventOnPawnControllerChanged_Parms \
{ \
	APawn* Pawn; \
	AController* Controller; \
}; \
static inline void FOnPawnControllerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPawnControllerChanged, APawn* Pawn, AController* Controller) \
{ \
	_Script_Engine_eventOnPawnControllerChanged_Parms Parms; \
	Parms.Pawn=Pawn; \
	Parms.Controller=Controller; \
	OnPawnControllerChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugRemovePlayer); \
	DECLARE_FUNCTION(execDebugCreatePlayer);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugRemovePlayer); \
	DECLARE_FUNCTION(execDebugCreatePlayer);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_EVENT_PARMS \
	struct GameInstance_eventHandleNetworkError_Parms \
	{ \
		TEnumAsByte<ENetworkFailure::Type> FailureType; \
		bool bIsServer; \
	}; \
	struct GameInstance_eventHandleTravelError_Parms \
	{ \
		TEnumAsByte<ETravelFailure::Type> FailureType; \
	};


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstance(); \
	friend struct Z_Construct_UClass_UGameInstance_Statics; \
public: \
	DECLARE_CLASS(UGameInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_INCLASS \
private: \
	static void StaticRegisterNativesUGameInstance(); \
	friend struct Z_Construct_UClass_UGameInstance_Statics; \
public: \
	DECLARE_CLASS(UGameInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInstance(UGameInstance&&); \
	NO_API UGameInstance(const UGameInstance&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInstance(UGameInstance&&); \
	NO_API UGameInstance(const UGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_150_PROLOG \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_EVENT_PARMS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_153_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
