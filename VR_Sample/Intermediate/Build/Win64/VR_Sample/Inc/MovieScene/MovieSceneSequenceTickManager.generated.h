// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSequenceTickManager_generated_h
#error "MovieSceneSequenceTickManager.generated.h already included, missing '#pragma once' in MovieSceneSequenceTickManager.h"
#endif
#define MOVIESCENE_MovieSceneSequenceTickManager_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSequenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequenceActor(UMovieSceneSequenceActor&&); \
	NO_API UMovieSceneSequenceActor(const UMovieSceneSequenceActor&); \
public:


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSequenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequenceActor(UMovieSceneSequenceActor&&); \
	NO_API UMovieSceneSequenceActor(const UMovieSceneSequenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequenceActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequenceActor)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneSequenceActor(); \
	friend struct Z_Construct_UClass_UMovieSceneSequenceActor_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequenceActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequenceActor)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneSequenceActor() {} \
public: \
	typedef UMovieSceneSequenceActor UClassType; \
	typedef IMovieSceneSequenceActor ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneSequenceActor() {} \
public: \
	typedef UMovieSceneSequenceActor UClassType; \
	typedef IMovieSceneSequenceActor ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_38_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_43_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSequenceActor>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequenceActorPointers>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequenceTickManager(); \
	friend struct Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequenceTickManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequenceTickManager)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSequenceTickManager(); \
	friend struct Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequenceTickManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequenceTickManager)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSequenceTickManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequenceTickManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequenceTickManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequenceTickManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequenceTickManager(UMovieSceneSequenceTickManager&&); \
	NO_API UMovieSceneSequenceTickManager(const UMovieSceneSequenceTickManager&); \
public:


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequenceTickManager(UMovieSceneSequenceTickManager&&); \
	NO_API UMovieSceneSequenceTickManager(const UMovieSceneSequenceTickManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequenceTickManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequenceTickManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequenceTickManager)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_72_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_76_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSequenceTickManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
