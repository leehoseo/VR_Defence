// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESoundAssetCompressionType : uint8;
#ifdef ENGINE_SoundWave_generated_h
#error "SoundWave.generated.h already included, missing '#pragma once' in SoundWave.h"
#endif
#define ENGINE_SoundWave_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStreamedAudioPlatformData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveSpectralData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveSpectralDataPerSound>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveEnvelopeDataPerSound>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveSpectralDataEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_249_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveSpectralTimeData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveEnvelopeTimeData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_326_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveCuePoint>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSoundAssetCompressionType); \
	DECLARE_FUNCTION(execGetSoundAssetCompressionType);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSoundAssetCompressionType); \
	DECLARE_FUNCTION(execGetSoundAssetCompressionType);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWave, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundWave(); \
	friend struct Z_Construct_UClass_USoundWave_Statics; \
public: \
	DECLARE_CLASS(USoundWave, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundWave) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_INCLASS \
private: \
	static void StaticRegisterNativesUSoundWave(); \
	friend struct Z_Construct_UClass_USoundWave_Statics; \
public: \
	DECLARE_CLASS(USoundWave, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundWave) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundWave(USoundWave&&); \
	NO_API USoundWave(const USoundWave&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundWave(USoundWave&&); \
	NO_API USoundWave(const USoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWave)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_355_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_358_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundWave."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h


#define FOREACH_ENUM_EDECOMPRESSIONTYPE(op) \
	op(DTYPE_Setup) \
	op(DTYPE_Invalid) \
	op(DTYPE_Preview) \
	op(DTYPE_Native) \
	op(DTYPE_RealTime) \
	op(DTYPE_Procedural) \
	op(DTYPE_Xenon) \
	op(DTYPE_Streaming) 
#define FOREACH_ENUM_ESOUNDWAVEFFTSIZE(op) \
	op(ESoundWaveFFTSize::VerySmall_64) \
	op(ESoundWaveFFTSize::Small_256) \
	op(ESoundWaveFFTSize::Medium_512) \
	op(ESoundWaveFFTSize::Large_1024) \
	op(ESoundWaveFFTSize::VeryLarge_2048) 

enum class ESoundWaveFFTSize : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESoundWaveFFTSize>();

#define FOREACH_ENUM_ESOUNDASSETCOMPRESSIONTYPE(op) \
	op(ESoundAssetCompressionType::BinkAudio) \
	op(ESoundAssetCompressionType::ADPCM) \
	op(ESoundAssetCompressionType::PCM) \
	op(ESoundAssetCompressionType::PlatformSpecific) 

enum class ESoundAssetCompressionType : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESoundAssetCompressionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
