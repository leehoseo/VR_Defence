// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/MovieSceneBoundObjectInstantiator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoundObjectInstantiator() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneGenericBoundObjectInstantiator::StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGenericBoundObjectInstantiator);
	UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister()
	{
		return UMovieSceneGenericBoundObjectInstantiator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneBoundObjectInstantiator.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneBoundObjectInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGenericBoundObjectInstantiator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::ClassParams = {
		&UMovieSceneGenericBoundObjectInstantiator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.OuterSingleton, Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneGenericBoundObjectInstantiator>()
	{
		return UMovieSceneGenericBoundObjectInstantiator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGenericBoundObjectInstantiator);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator, UMovieSceneGenericBoundObjectInstantiator::StaticClass, TEXT("UMovieSceneGenericBoundObjectInstantiator"), &Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGenericBoundObjectInstantiator), 1466587213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_3659367067(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
