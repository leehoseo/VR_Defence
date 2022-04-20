// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Classes/OodleNetworkTrainerCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOodleNetworkTrainerCommandlet() {}
// Cross Module References
	OODLENETWORKHANDLERCOMPONENT_API UClass* Z_Construct_UClass_UOodleNetworkTrainerCommandlet_NoRegister();
	OODLENETWORKHANDLERCOMPONENT_API UClass* Z_Construct_UClass_UOodleNetworkTrainerCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
// End Cross Module References
	void UOodleNetworkTrainerCommandlet::StaticRegisterNativesUOodleNetworkTrainerCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOodleNetworkTrainerCommandlet);
	UClass* Z_Construct_UClass_UOodleNetworkTrainerCommandlet_NoRegister()
	{
		return UOodleNetworkTrainerCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompressionTest_MetaData[];
#endif
		static void NewProp_bCompressionTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressionTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteV5Dictionaries_MetaData[];
#endif
		static void NewProp_bWriteV5Dictionaries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteV5Dictionaries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashTableSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HashTableSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DictionarySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DictionarySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DictionaryTrials_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DictionaryTrials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrialRandomness_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrialRandomness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrialGenerations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrialGenerations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoTrials_MetaData[];
#endif
		static void NewProp_bNoTrials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoTrials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_OodleNetworkHandlerComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Commandlet for processing UE packet captures, through Oodle's training API, for generating compressed state dictionaries.\n *\n *\n * Primary Commands:\n *\x09- \"AutoGenerateDictionaries Changelist\":\n *\x09\x09- Iterates every directory recursively within \"*Game*\\Saved\\Oodle\\Server\", and uses all capture files within each directory,\n *\x09\x09\x09to generate a dictionary stored in \"*Game*\\Content\\Oodle\", named \"*Game**DirectoryName*.udic\".\n *\n *\x09\x09- For example, packet captures in \"OrionGame\\Saved\\Oodle\\Server\\Input\", will be generated into a dictionary stored in\n *\x09\x09\x09\"OrionGame\\Content\\Oodle\\OrionGameInput.udic\"\n *\n *\x09\x09- Each folder within \"*Game*\\Content\\Oodle\", should contain at least 100mb of packet captures.\n *\x09\x09\n *\x09\x09- Changelist is an optional parameter than will only use upac files that contain the changelist in their filenames. If\n *\x09\x09\x09omitted, all files in the directory are used.\n *\n *\n * Secondary/Testing Commands:\n *\x09- \"Enable\":\n *\x09\x09- Inserts the Oodle PacketHandler into the games packet handler component list, and initializes Oodle *Engine.ini settings\n *\n *\n *\x09- \"MergePackets OutputFile PacketFile1,PacketFile2,PacketFileN\":\n *\x09\x09- Takes the specified packet capture files, and merges them into a single packet capture file\n *\n *\x09- \"MergePackets OutputFile All Directory\":\n *\x09\x09- As above, but merges all capture files in the specified directory.\n *\n *\n *\x09- \"GenerateDictionary OutputFile FilenameFilter Changelist PacketFile1,PacketFile2,PacketFileN\":\n *\x09\x09- Takes the specified packet capture files, with an optional filter for a substring of a filename and changelist filter\n *\x09\x09\x09(use \"all\" to ignore either of these filters), and uses them to generate a network compression dictionary\n *\n *\x09- \"GenerateDictionary OutputFile FilenameFilter Changelist All Directory\":\n *\x09\x09- As above, but uses all capture files in the specified directory, to generate a network compression dictionary\n *\n *\n *\x09- \"DebugDump OutputDirectory CaptureDirectory Changelist\"\n *\x09\x09- Recursively iterates all .ucap files in CaptureDirectory, and converts them to Oodle-example-code compatible .bin files,\n *\x09\x09\x09in OutputDirectory\n *\n *\n * @todo #JohnB: Unimplemented commands:\n *\x09- \"PacketInfo PacketFile\":\n *\x09\x09- Outputs information about the packet file, such as the MB amount of data recorded, per net connection channel, and data types\n *\x09\x09- @todo #JohnB: Only implement, if deciding to actually capture/track this kind of data\n */" },
		{ "IncludePath", "OodleNetworkTrainerCommandlet.h" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Commandlet for processing UE packet captures, through Oodle's training API, for generating compressed state dictionaries.\n\n\nPrimary Commands:\n    - \"AutoGenerateDictionaries Changelist\":\n            - Iterates every directory recursively within \"*Game*\\Saved\\Oodle\\Server\", and uses all capture files within each directory,\n                    to generate a dictionary stored in \"*Game*\\Content\\Oodle\", named \"*Game**DirectoryName*.udic\".\n\n            - For example, packet captures in \"OrionGame\\Saved\\Oodle\\Server\\Input\", will be generated into a dictionary stored in\n                    \"OrionGame\\Content\\Oodle\\OrionGameInput.udic\"\n\n            - Each folder within \"*Game*\\Content\\Oodle\", should contain at least 100mb of packet captures.\n\n            - Changelist is an optional parameter than will only use upac files that contain the changelist in their filenames. If\n                    omitted, all files in the directory are used.\n\n\nSecondary/Testing Commands:\n    - \"Enable\":\n            - Inserts the Oodle PacketHandler into the games packet handler component list, and initializes Oodle *Engine.ini settings\n\n\n    - \"MergePackets OutputFile PacketFile1,PacketFile2,PacketFileN\":\n            - Takes the specified packet capture files, and merges them into a single packet capture file\n\n    - \"MergePackets OutputFile All Directory\":\n            - As above, but merges all capture files in the specified directory.\n\n\n    - \"GenerateDictionary OutputFile FilenameFilter Changelist PacketFile1,PacketFile2,PacketFileN\":\n            - Takes the specified packet capture files, with an optional filter for a substring of a filename and changelist filter\n                    (use \"all\" to ignore either of these filters), and uses them to generate a network compression dictionary\n\n    - \"GenerateDictionary OutputFile FilenameFilter Changelist All Directory\":\n            - As above, but uses all capture files in the specified directory, to generate a network compression dictionary\n\n\n    - \"DebugDump OutputDirectory CaptureDirectory Changelist\"\n            - Recursively iterates all .ucap files in CaptureDirectory, and converts them to Oodle-example-code compatible .bin files,\n                    in OutputDirectory\n\n\n@todo #JohnB: Unimplemented commands:\n    - \"PacketInfo PacketFile\":\n            - Outputs information about the packet file, such as the MB amount of data recorded, per net connection channel, and data types\n            - @todo #JohnB: Only implement, if deciding to actually capture/track this kind of data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bCompressionTest_MetaData[] = {
		{ "Comment", "/** Whether or not compression testing should be performed after dictionary generation (uses up some of the packets) */" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ToolTip", "Whether or not compression testing should be performed after dictionary generation (uses up some of the packets)" },
	};
#endif
	void Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bCompressionTest_SetBit(void* Obj)
	{
		((UOodleNetworkTrainerCommandlet*)Obj)->bCompressionTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bCompressionTest = { "bCompressionTest", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOodleNetworkTrainerCommandlet), &Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bCompressionTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bCompressionTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bCompressionTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bWriteV5Dictionaries_MetaData[] = {
		{ "Comment", "/** Whether or not to write oodle version 5 dictionaries for back compat */" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ToolTip", "Whether or not to write oodle version 5 dictionaries for back compat" },
	};
#endif
	void Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bWriteV5Dictionaries_SetBit(void* Obj)
	{
		((UOodleNetworkTrainerCommandlet*)Obj)->bWriteV5Dictionaries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bWriteV5Dictionaries = { "bWriteV5Dictionaries", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOodleNetworkTrainerCommandlet), &Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bWriteV5Dictionaries_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bWriteV5Dictionaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bWriteV5Dictionaries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_HashTableSize_MetaData[] = {
		{ "Comment", "/** Size of the hash table to use for the dictionary */" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ToolTip", "Size of the hash table to use for the dictionary" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_HashTableSize = { "HashTableSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOodleNetworkTrainerCommandlet, HashTableSize), METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_HashTableSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_HashTableSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionarySize_MetaData[] = {
		{ "Comment", "/** Size of the dictionary to be generated */" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ToolTip", "Size of the dictionary to be generated" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionarySize = { "DictionarySize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOodleNetworkTrainerCommandlet, DictionarySize), METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionarySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionarySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionaryTrials_MetaData[] = {
		{ "Comment", "/** The number of random packet-selection trials to run, when generating the dictionary, to try and optimize the dictionary */" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ToolTip", "The number of random packet-selection trials to run, when generating the dictionary, to try and optimize the dictionary" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionaryTrials = { "DictionaryTrials", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOodleNetworkTrainerCommandlet, DictionaryTrials), METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionaryTrials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionaryTrials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialRandomness_MetaData[] = {
		{ "Comment", "/** The randomness, in percent, of random packet-selection trials */" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ToolTip", "The randomness, in percent, of random packet-selection trials" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialRandomness = { "TrialRandomness", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOodleNetworkTrainerCommandlet, TrialRandomness), METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialRandomness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialRandomness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialGenerations_MetaData[] = {
		{ "Comment", "/** The number of generations of random packet-selection trials  */" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ToolTip", "The number of generations of random packet-selection trials" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialGenerations = { "TrialGenerations", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOodleNetworkTrainerCommandlet, TrialGenerations), METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialGenerations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialGenerations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bNoTrials_MetaData[] = {
		{ "Comment", "/** Whether or not random-trials have been disabled */" },
		{ "ModuleRelativePath", "Classes/OodleNetworkTrainerCommandlet.h" },
		{ "ToolTip", "Whether or not random-trials have been disabled" },
	};
#endif
	void Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bNoTrials_SetBit(void* Obj)
	{
		((UOodleNetworkTrainerCommandlet*)Obj)->bNoTrials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bNoTrials = { "bNoTrials", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOodleNetworkTrainerCommandlet), &Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bNoTrials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bNoTrials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bNoTrials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bCompressionTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bWriteV5Dictionaries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_HashTableSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionarySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_DictionaryTrials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialRandomness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_TrialGenerations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::NewProp_bNoTrials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOodleNetworkTrainerCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::ClassParams = {
		&UOodleNetworkTrainerCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOodleNetworkTrainerCommandlet()
	{
		if (!Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.OuterSingleton, Z_Construct_UClass_UOodleNetworkTrainerCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet.OuterSingleton;
	}
	template<> OODLENETWORKHANDLERCOMPONENT_API UClass* StaticClass<UOodleNetworkTrainerCommandlet>()
	{
		return UOodleNetworkTrainerCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOodleNetworkTrainerCommandlet);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Classes_OodleNetworkTrainerCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Classes_OodleNetworkTrainerCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOodleNetworkTrainerCommandlet, UOodleNetworkTrainerCommandlet::StaticClass, TEXT("UOodleNetworkTrainerCommandlet"), &Z_Registration_Info_UClass_UOodleNetworkTrainerCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOodleNetworkTrainerCommandlet), 1047314835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Classes_OodleNetworkTrainerCommandlet_h_3251129359(TEXT("/Script/OodleNetworkHandlerComponent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Classes_OodleNetworkTrainerCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Classes_OodleNetworkTrainerCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
