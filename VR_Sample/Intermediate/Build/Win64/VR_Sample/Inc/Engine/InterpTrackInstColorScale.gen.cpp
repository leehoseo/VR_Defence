// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstColorScale.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstColorScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstColorScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstColorScale();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstColorScale::StaticRegisterNativesUInterpTrackInstColorScale()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstColorScale);
	UClass* Z_Construct_UClass_UInterpTrackInstColorScale_NoRegister()
	{
		return UInterpTrackInstColorScale::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstColorScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstColorScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstColorScale_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstColorScale.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstColorScale.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstColorScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstColorScale>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstColorScale_Statics::ClassParams = {
		&UInterpTrackInstColorScale::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstColorScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstColorScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstColorScale()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstColorScale.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstColorScale.OuterSingleton, Z_Construct_UClass_UInterpTrackInstColorScale_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstColorScale.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstColorScale>()
	{
		return UInterpTrackInstColorScale::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstColorScale);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstColorScale_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstColorScale_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstColorScale, UInterpTrackInstColorScale::StaticClass, TEXT("UInterpTrackInstColorScale"), &Z_Registration_Info_UClass_UInterpTrackInstColorScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstColorScale), 1929488284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstColorScale_h_4802587(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstColorScale_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstColorScale_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
