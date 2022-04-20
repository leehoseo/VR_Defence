// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AudioSettings_generated_h
#error "AudioSettings.generated.h already included, missing '#pragma once' in AudioSettings.h"
#endif
#define ENGINE_AudioSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioQualitySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioQualitySettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundDebugEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundDebugEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDefaultAudioBusSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioSettings(); \
	friend struct Z_Construct_UClass_UAudioSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSettings(); \
	friend struct Z_Construct_UClass_UAudioSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioSettings(UAudioSettings&&); \
	NO_API UAudioSettings(const UAudioSettings&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioSettings(UAudioSettings&&); \
	NO_API UAudioSettings(const UAudioSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_97_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_100_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h


#define FOREACH_ENUM_EVOICESAMPLERATE(op) \
	op(EVoiceSampleRate::Low16000Hz) \
	op(EVoiceSampleRate::Normal24000Hz) 

enum class EVoiceSampleRate : int32;
template<> ENGINE_API UEnum* StaticEnum<EVoiceSampleRate>();

#define FOREACH_ENUM_EPANNINGMETHOD(op) \
	op(EPanningMethod::Linear) \
	op(EPanningMethod::EqualPower) 

enum class EPanningMethod : int8;
template<> ENGINE_API UEnum* StaticEnum<EPanningMethod>();

#define FOREACH_ENUM_EMONOCHANNELUPMIXMETHOD(op) \
	op(EMonoChannelUpmixMethod::Linear) \
	op(EMonoChannelUpmixMethod::EqualPower) \
	op(EMonoChannelUpmixMethod::FullVolume) 

enum class EMonoChannelUpmixMethod : int8;
template<> ENGINE_API UEnum* StaticEnum<EMonoChannelUpmixMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
