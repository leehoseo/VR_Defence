// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Attractor/ParticleModuleAttractorBase.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleAttractorBase::StaticRegisterNativesUParticleModuleAttractorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAttractorBase);
	UClass* Z_Construct_UClass_UParticleModuleAttractorBase_NoRegister()
	{
		return UParticleModuleAttractorBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAttractorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAttractorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Attraction" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAttractorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorBase_Statics::ClassParams = {
		&UParticleModuleAttractorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAttractorBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleAttractorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAttractorBase.OuterSingleton, Z_Construct_UClass_UParticleModuleAttractorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleAttractorBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorBase>()
	{
		return UParticleModuleAttractorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorBase);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAttractorBase, UParticleModuleAttractorBase::StaticClass, TEXT("UParticleModuleAttractorBase"), &Z_Registration_Info_UClass_UParticleModuleAttractorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAttractorBase), 926851540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_542777250(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
