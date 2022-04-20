// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Net/Core/Connection/NetCloseResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetCloseResult() {}
// Cross Module References
	NETCORE_API UEnum* Z_Construct_UEnum_NetCore_ENetCloseResult();
	UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetCloseResult;
	static UEnum* ENetCloseResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetCore_ENetCloseResult, Z_Construct_UPackage__Script_NetCore(), TEXT("ENetCloseResult"));
		}
		return Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton;
	}
	template<> NETCORE_API UEnum* StaticEnum<ENetCloseResult>()
	{
		return ENetCloseResult_StaticEnum();
	}
	struct Z_Construct_UEnum_NetCore_ENetCloseResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::Enumerators[] = {
		{ "ENetCloseResult::NetDriverAlreadyExists", (int64)ENetCloseResult::NetDriverAlreadyExists },
		{ "ENetCloseResult::NetDriverCreateFailure", (int64)ENetCloseResult::NetDriverCreateFailure },
		{ "ENetCloseResult::NetDriverListenFailure", (int64)ENetCloseResult::NetDriverListenFailure },
		{ "ENetCloseResult::ConnectionLost", (int64)ENetCloseResult::ConnectionLost },
		{ "ENetCloseResult::ConnectionTimeout", (int64)ENetCloseResult::ConnectionTimeout },
		{ "ENetCloseResult::FailureReceived", (int64)ENetCloseResult::FailureReceived },
		{ "ENetCloseResult::OutdatedClient", (int64)ENetCloseResult::OutdatedClient },
		{ "ENetCloseResult::OutdatedServer", (int64)ENetCloseResult::OutdatedServer },
		{ "ENetCloseResult::PendingConnectionFailure", (int64)ENetCloseResult::PendingConnectionFailure },
		{ "ENetCloseResult::NetGuidMismatch", (int64)ENetCloseResult::NetGuidMismatch },
		{ "ENetCloseResult::NetChecksumMismatch", (int64)ENetCloseResult::NetChecksumMismatch },
		{ "ENetCloseResult::SecurityMalformedPacket", (int64)ENetCloseResult::SecurityMalformedPacket },
		{ "ENetCloseResult::SecurityInvalidData", (int64)ENetCloseResult::SecurityInvalidData },
		{ "ENetCloseResult::SecurityClosed", (int64)ENetCloseResult::SecurityClosed },
		{ "ENetCloseResult::Unknown", (int64)ENetCloseResult::Unknown },
		{ "ENetCloseResult::Success", (int64)ENetCloseResult::Success },
		{ "ENetCloseResult::Extended", (int64)ENetCloseResult::Extended },
		{ "ENetCloseResult::RPCDoS", (int64)ENetCloseResult::RPCDoS },
		{ "ENetCloseResult::Cleanup", (int64)ENetCloseResult::Cleanup },
		{ "ENetCloseResult::MissingLevelPackage", (int64)ENetCloseResult::MissingLevelPackage },
		{ "ENetCloseResult::PacketHandlerIncomingError", (int64)ENetCloseResult::PacketHandlerIncomingError },
		{ "ENetCloseResult::ZeroLastByte", (int64)ENetCloseResult::ZeroLastByte },
		{ "ENetCloseResult::ZeroSize", (int64)ENetCloseResult::ZeroSize },
		{ "ENetCloseResult::ReadHeaderFail", (int64)ENetCloseResult::ReadHeaderFail },
		{ "ENetCloseResult::ReadHeaderExtraFail", (int64)ENetCloseResult::ReadHeaderExtraFail },
		{ "ENetCloseResult::AckSequenceMismatch", (int64)ENetCloseResult::AckSequenceMismatch },
		{ "ENetCloseResult::BunchBadChannelIndex", (int64)ENetCloseResult::BunchBadChannelIndex },
		{ "ENetCloseResult::BunchChannelNameFail", (int64)ENetCloseResult::BunchChannelNameFail },
		{ "ENetCloseResult::BunchWrongChannelType", (int64)ENetCloseResult::BunchWrongChannelType },
		{ "ENetCloseResult::BunchHeaderOverflow", (int64)ENetCloseResult::BunchHeaderOverflow },
		{ "ENetCloseResult::BunchDataOverflow", (int64)ENetCloseResult::BunchDataOverflow },
		{ "ENetCloseResult::BunchPrematureControlChannel", (int64)ENetCloseResult::BunchPrematureControlChannel },
		{ "ENetCloseResult::BunchPrematureChannel", (int64)ENetCloseResult::BunchPrematureChannel },
		{ "ENetCloseResult::BunchPrematureControlClose", (int64)ENetCloseResult::BunchPrematureControlClose },
		{ "ENetCloseResult::UnknownChannelType", (int64)ENetCloseResult::UnknownChannelType },
		{ "ENetCloseResult::PrematureSend", (int64)ENetCloseResult::PrematureSend },
		{ "ENetCloseResult::CorruptData", (int64)ENetCloseResult::CorruptData },
		{ "ENetCloseResult::SocketSendFailure", (int64)ENetCloseResult::SocketSendFailure },
		{ "ENetCloseResult::BadChildConnectionIndex", (int64)ENetCloseResult::BadChildConnectionIndex },
		{ "ENetCloseResult::LogLimitInstant", (int64)ENetCloseResult::LogLimitInstant },
		{ "ENetCloseResult::LogLimitSustained", (int64)ENetCloseResult::LogLimitSustained },
		{ "ENetCloseResult::ReceivedNetGUIDBunchFail", (int64)ENetCloseResult::ReceivedNetGUIDBunchFail },
		{ "ENetCloseResult::MaxReliableExceeded", (int64)ENetCloseResult::MaxReliableExceeded },
		{ "ENetCloseResult::ReceivedNextBunchFail", (int64)ENetCloseResult::ReceivedNextBunchFail },
		{ "ENetCloseResult::ReceivedNextBunchQueueFail", (int64)ENetCloseResult::ReceivedNextBunchQueueFail },
		{ "ENetCloseResult::PartialInitialReliableDestroy", (int64)ENetCloseResult::PartialInitialReliableDestroy },
		{ "ENetCloseResult::PartialMergeReliableDestroy", (int64)ENetCloseResult::PartialMergeReliableDestroy },
		{ "ENetCloseResult::PartialInitialNonByteAligned", (int64)ENetCloseResult::PartialInitialNonByteAligned },
		{ "ENetCloseResult::PartialNonByteAligned", (int64)ENetCloseResult::PartialNonByteAligned },
		{ "ENetCloseResult::PartialFinalPackageMapExports", (int64)ENetCloseResult::PartialFinalPackageMapExports },
		{ "ENetCloseResult::PartialTooLarge", (int64)ENetCloseResult::PartialTooLarge },
		{ "ENetCloseResult::AlreadyOpen", (int64)ENetCloseResult::AlreadyOpen },
		{ "ENetCloseResult::ReliableBeforeOpen", (int64)ENetCloseResult::ReliableBeforeOpen },
		{ "ENetCloseResult::ReliableBufferOverflow", (int64)ENetCloseResult::ReliableBufferOverflow },
		{ "ENetCloseResult::ControlChannelClose", (int64)ENetCloseResult::ControlChannelClose },
		{ "ENetCloseResult::ControlChannelEndianCheck", (int64)ENetCloseResult::ControlChannelEndianCheck },
		{ "ENetCloseResult::ControlChannelPlayerChannelFail", (int64)ENetCloseResult::ControlChannelPlayerChannelFail },
		{ "ENetCloseResult::ControlChannelMessageUnknown", (int64)ENetCloseResult::ControlChannelMessageUnknown },
		{ "ENetCloseResult::ControlChannelMessageFail", (int64)ENetCloseResult::ControlChannelMessageFail },
		{ "ENetCloseResult::ControlChannelMessagePayloadFail", (int64)ENetCloseResult::ControlChannelMessagePayloadFail },
		{ "ENetCloseResult::ControlChannelBunchOverflowed", (int64)ENetCloseResult::ControlChannelBunchOverflowed },
		{ "ENetCloseResult::ControlChannelQueueBunchOverflowed", (int64)ENetCloseResult::ControlChannelQueueBunchOverflowed },
		{ "ENetCloseResult::ClientHasMustBeMappedGUIDs", (int64)ENetCloseResult::ClientHasMustBeMappedGUIDs },
		{ "ENetCloseResult::UnregisteredMustBeMappedGUID", (int64)ENetCloseResult::UnregisteredMustBeMappedGUID },
		{ "ENetCloseResult::ObjectReplicatorReceivedBunchFail", (int64)ENetCloseResult::ObjectReplicatorReceivedBunchFail },
		{ "ENetCloseResult::ContentBlockFail", (int64)ENetCloseResult::ContentBlockFail },
		{ "ENetCloseResult::ContentBlockHeaderRepLayoutFail", (int64)ENetCloseResult::ContentBlockHeaderRepLayoutFail },
		{ "ENetCloseResult::ContentBlockHeaderIsActorFail", (int64)ENetCloseResult::ContentBlockHeaderIsActorFail },
		{ "ENetCloseResult::ContentBlockHeaderObjFail", (int64)ENetCloseResult::ContentBlockHeaderObjFail },
		{ "ENetCloseResult::ContentBlockHeaderPrematureEnd", (int64)ENetCloseResult::ContentBlockHeaderPrematureEnd },
		{ "ENetCloseResult::ContentBlockHeaderSubObjectActor", (int64)ENetCloseResult::ContentBlockHeaderSubObjectActor },
		{ "ENetCloseResult::ContentBlockHeaderBadParent", (int64)ENetCloseResult::ContentBlockHeaderBadParent },
		{ "ENetCloseResult::ContentBlockHeaderInvalidCreate", (int64)ENetCloseResult::ContentBlockHeaderInvalidCreate },
		{ "ENetCloseResult::ContentBlockHeaderStablyNamedFail", (int64)ENetCloseResult::ContentBlockHeaderStablyNamedFail },
		{ "ENetCloseResult::ContentBlockHeaderNoSubObjectClass", (int64)ENetCloseResult::ContentBlockHeaderNoSubObjectClass },
		{ "ENetCloseResult::ContentBlockHeaderUObjectSubObject", (int64)ENetCloseResult::ContentBlockHeaderUObjectSubObject },
		{ "ENetCloseResult::ContentBlockHeaderAActorSubObject", (int64)ENetCloseResult::ContentBlockHeaderAActorSubObject },
		{ "ENetCloseResult::ContentBlockHeaderFail", (int64)ENetCloseResult::ContentBlockHeaderFail },
		{ "ENetCloseResult::ContentBlockPayloadBitsFail", (int64)ENetCloseResult::ContentBlockPayloadBitsFail },
		{ "ENetCloseResult::FieldHeaderRepIndex", (int64)ENetCloseResult::FieldHeaderRepIndex },
		{ "ENetCloseResult::FieldHeaderBadRepIndex", (int64)ENetCloseResult::FieldHeaderBadRepIndex },
		{ "ENetCloseResult::FieldHeaderPayloadBitsFail", (int64)ENetCloseResult::FieldHeaderPayloadBitsFail },
		{ "ENetCloseResult::FieldPayloadFail", (int64)ENetCloseResult::FieldPayloadFail },
		{ "ENetCloseResult::FaultDisconnect", (int64)ENetCloseResult::FaultDisconnect },
		{ "ENetCloseResult::NotRecoverable", (int64)ENetCloseResult::NotRecoverable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::Enum_MetaDataParams[] = {
		{ "AckSequenceMismatch.Comment", "/** Sequence mismatch while processing acks */" },
		{ "AckSequenceMismatch.Name", "ENetCloseResult::AckSequenceMismatch" },
		{ "AckSequenceMismatch.ToolTip", "Sequence mismatch while processing acks" },
		{ "AlreadyOpen.Comment", "/** Received open bunch when channel already open */" },
		{ "AlreadyOpen.Name", "ENetCloseResult::AlreadyOpen" },
		{ "AlreadyOpen.ToolTip", "Received open bunch when channel already open" },
		{ "BadChildConnectionIndex.Comment", "/** Failed to find splitscreen player matching ChildConnection NetPlayerIndex */" },
		{ "BadChildConnectionIndex.Name", "ENetCloseResult::BadChildConnectionIndex" },
		{ "BadChildConnectionIndex.ToolTip", "Failed to find splitscreen player matching ChildConnection NetPlayerIndex" },
		{ "BunchBadChannelIndex.Comment", "/** Bunch channel index exceeds maximum channel limit */" },
		{ "BunchBadChannelIndex.Name", "ENetCloseResult::BunchBadChannelIndex" },
		{ "BunchBadChannelIndex.ToolTip", "Bunch channel index exceeds maximum channel limit" },
		{ "BunchChannelNameFail.Comment", "/** Bunch channel name serialization failed */" },
		{ "BunchChannelNameFail.Name", "ENetCloseResult::BunchChannelNameFail" },
		{ "BunchChannelNameFail.ToolTip", "Bunch channel name serialization failed" },
		{ "BunchDataOverflow.Comment", "/** Bunch data serialization overflowed */" },
		{ "BunchDataOverflow.Name", "ENetCloseResult::BunchDataOverflow" },
		{ "BunchDataOverflow.ToolTip", "Bunch data serialization overflowed" },
		{ "BunchHeaderOverflow.Comment", "/** Bunch header serialization overflowed */" },
		{ "BunchHeaderOverflow.Name", "ENetCloseResult::BunchHeaderOverflow" },
		{ "BunchHeaderOverflow.ToolTip", "Bunch header serialization overflowed" },
		{ "BunchPrematureChannel.Comment", "/** Received non-control-channel bunch when not yet ready */" },
		{ "BunchPrematureChannel.Name", "ENetCloseResult::BunchPrematureChannel" },
		{ "BunchPrematureChannel.ToolTip", "Received non-control-channel bunch when not yet ready" },
		{ "BunchPrematureControlChannel.Comment", "/** Received control channel bunch before control channel was created */" },
		{ "BunchPrematureControlChannel.Name", "ENetCloseResult::BunchPrematureControlChannel" },
		{ "BunchPrematureControlChannel.ToolTip", "Received control channel bunch before control channel was created" },
		{ "BunchPrematureControlClose.Comment", "/** Received control channel close before open */" },
		{ "BunchPrematureControlClose.Name", "ENetCloseResult::BunchPrematureControlClose" },
		{ "BunchPrematureControlClose.ToolTip", "Received control channel close before open" },
		{ "BunchWrongChannelType.Comment", "/** Bunch specified wrong channel type for an existing channel */" },
		{ "BunchWrongChannelType.Name", "ENetCloseResult::BunchWrongChannelType" },
		{ "BunchWrongChannelType.ToolTip", "Bunch specified wrong channel type for an existing channel" },
		{ "Cleanup.Comment", "/** NetConnection Cleanup was triggered */" },
		{ "Cleanup.Name", "ENetCloseResult::Cleanup" },
		{ "Cleanup.ToolTip", "NetConnection Cleanup was triggered" },
		{ "ClientHasMustBeMappedGUIDs.Comment", "/** Client tried to set bHasMustBeMappedGUIDs */" },
		{ "ClientHasMustBeMappedGUIDs.Name", "ENetCloseResult::ClientHasMustBeMappedGUIDs" },
		{ "ClientHasMustBeMappedGUIDs.ToolTip", "Client tried to set bHasMustBeMappedGUIDs" },
		{ "Comment", "/**\n * Network Close results (can occur before NetDriver/NetConnection creation, and can be success or error)\n *\n * Licensees should use ENetCloseResult::Extended, and specify an ErrorContext value to FNetCloseResult, to specify custom results\n *\n * NOTE: If you modify this, run the enum-checking smoke test to verify you didn't forget to update anything else:\n *\x09\x09\x09System.Core.Networking.FNetCloseResult.EnumTest\n */" },
		{ "ConnectionLost.Comment", "/** A connection to the net driver has been lost */" },
		{ "ConnectionLost.Name", "ENetCloseResult::ConnectionLost" },
		{ "ConnectionLost.ToolTip", "A connection to the net driver has been lost" },
		{ "ConnectionTimeout.Comment", "/** A connection to the net driver has timed out */" },
		{ "ConnectionTimeout.Name", "ENetCloseResult::ConnectionTimeout" },
		{ "ConnectionTimeout.ToolTip", "A connection to the net driver has timed out" },
		{ "ContentBlockFail.Comment", "/** Content block serialization failed */" },
		{ "ContentBlockFail.Name", "ENetCloseResult::ContentBlockFail" },
		{ "ContentBlockFail.ToolTip", "Content block serialization failed" },
		{ "ContentBlockHeaderAActorSubObject.Comment", "/** Content block header sub-object was an AActor subclass */" },
		{ "ContentBlockHeaderAActorSubObject.Name", "ENetCloseResult::ContentBlockHeaderAActorSubObject" },
		{ "ContentBlockHeaderAActorSubObject.ToolTip", "Content block header sub-object was an AActor subclass" },
		{ "ContentBlockHeaderBadParent.Comment", "/** Content block header sub-object not in parent actor */" },
		{ "ContentBlockHeaderBadParent.Name", "ENetCloseResult::ContentBlockHeaderBadParent" },
		{ "ContentBlockHeaderBadParent.ToolTip", "Content block header sub-object not in parent actor" },
		{ "ContentBlockHeaderFail.Comment", "/** Content block header serialization failed */" },
		{ "ContentBlockHeaderFail.Name", "ENetCloseResult::ContentBlockHeaderFail" },
		{ "ContentBlockHeaderFail.ToolTip", "Content block header serialization failed" },
		{ "ContentBlockHeaderInvalidCreate.Comment", "/** The client tried to create a sub-object */" },
		{ "ContentBlockHeaderInvalidCreate.Name", "ENetCloseResult::ContentBlockHeaderInvalidCreate" },
		{ "ContentBlockHeaderInvalidCreate.ToolTip", "The client tried to create a sub-object" },
		{ "ContentBlockHeaderIsActorFail.Comment", "/** Content block header bIsActor serialization failed */" },
		{ "ContentBlockHeaderIsActorFail.Name", "ENetCloseResult::ContentBlockHeaderIsActorFail" },
		{ "ContentBlockHeaderIsActorFail.ToolTip", "Content block header bIsActor serialization failed" },
		{ "ContentBlockHeaderNoSubObjectClass.Comment", "/** Content block header unable to ready sub-object class */" },
		{ "ContentBlockHeaderNoSubObjectClass.Name", "ENetCloseResult::ContentBlockHeaderNoSubObjectClass" },
		{ "ContentBlockHeaderNoSubObjectClass.ToolTip", "Content block header unable to ready sub-object class" },
		{ "ContentBlockHeaderObjFail.Comment", "/** Content block header object serialization failed */" },
		{ "ContentBlockHeaderObjFail.Name", "ENetCloseResult::ContentBlockHeaderObjFail" },
		{ "ContentBlockHeaderObjFail.ToolTip", "Content block header object serialization failed" },
		{ "ContentBlockHeaderPrematureEnd.Comment", "/** Reached end of bunch prematurely, after reading content block header */" },
		{ "ContentBlockHeaderPrematureEnd.Name", "ENetCloseResult::ContentBlockHeaderPrematureEnd" },
		{ "ContentBlockHeaderPrematureEnd.ToolTip", "Reached end of bunch prematurely, after reading content block header" },
		{ "ContentBlockHeaderRepLayoutFail.Comment", "/** Content block header bOutHasRepLayout serialization failed */" },
		{ "ContentBlockHeaderRepLayoutFail.Name", "ENetCloseResult::ContentBlockHeaderRepLayoutFail" },
		{ "ContentBlockHeaderRepLayoutFail.ToolTip", "Content block header bOutHasRepLayout serialization failed" },
		{ "ContentBlockHeaderStablyNamedFail.Comment", "/** Content block header bStablyNamed serialization failed */" },
		{ "ContentBlockHeaderStablyNamedFail.Name", "ENetCloseResult::ContentBlockHeaderStablyNamedFail" },
		{ "ContentBlockHeaderStablyNamedFail.ToolTip", "Content block header bStablyNamed serialization failed" },
		{ "ContentBlockHeaderSubObjectActor.Comment", "/** Content block header sub-object was an Actor */" },
		{ "ContentBlockHeaderSubObjectActor.Name", "ENetCloseResult::ContentBlockHeaderSubObjectActor" },
		{ "ContentBlockHeaderSubObjectActor.ToolTip", "Content block header sub-object was an Actor" },
		{ "ContentBlockHeaderUObjectSubObject.Comment", "/** Content block header sub-object was UObject base class */" },
		{ "ContentBlockHeaderUObjectSubObject.Name", "ENetCloseResult::ContentBlockHeaderUObjectSubObject" },
		{ "ContentBlockHeaderUObjectSubObject.ToolTip", "Content block header sub-object was UObject base class" },
		{ "ContentBlockPayloadBitsFail.Comment", "/** Content block payload NumPayloadBits serialization failed */" },
		{ "ContentBlockPayloadBitsFail.Name", "ENetCloseResult::ContentBlockPayloadBitsFail" },
		{ "ContentBlockPayloadBitsFail.ToolTip", "Content block payload NumPayloadBits serialization failed" },
		{ "ControlChannelBunchOverflowed.Comment", "/** Control channel send bunch overflowed */" },
		{ "ControlChannelBunchOverflowed.Name", "ENetCloseResult::ControlChannelBunchOverflowed" },
		{ "ControlChannelBunchOverflowed.ToolTip", "Control channel send bunch overflowed" },
		{ "ControlChannelClose.Comment", "/** Control channel closing */" },
		{ "ControlChannelClose.Name", "ENetCloseResult::ControlChannelClose" },
		{ "ControlChannelClose.ToolTip", "Control channel closing" },
		{ "ControlChannelEndianCheck.Comment", "/** Endianness check failed */" },
		{ "ControlChannelEndianCheck.Name", "ENetCloseResult::ControlChannelEndianCheck" },
		{ "ControlChannelEndianCheck.ToolTip", "Endianness check failed" },
		{ "ControlChannelMessageFail.Comment", "/** Failed to read control channel message */" },
		{ "ControlChannelMessageFail.Name", "ENetCloseResult::ControlChannelMessageFail" },
		{ "ControlChannelMessageFail.ToolTip", "Failed to read control channel message" },
		{ "ControlChannelMessagePayloadFail.Comment", "/** Failed to read control channel message payload */" },
		{ "ControlChannelMessagePayloadFail.Name", "ENetCloseResult::ControlChannelMessagePayloadFail" },
		{ "ControlChannelMessagePayloadFail.ToolTip", "Failed to read control channel message payload" },
		{ "ControlChannelMessageUnknown.Comment", "/** Received unknown control channel message */" },
		{ "ControlChannelMessageUnknown.Name", "ENetCloseResult::ControlChannelMessageUnknown" },
		{ "ControlChannelMessageUnknown.ToolTip", "Received unknown control channel message" },
		{ "ControlChannelPlayerChannelFail.Comment", "/** The ActorChannel for the connections PlayerController failed */" },
		{ "ControlChannelPlayerChannelFail.Name", "ENetCloseResult::ControlChannelPlayerChannelFail" },
		{ "ControlChannelPlayerChannelFail.ToolTip", "The ActorChannel for the connections PlayerController failed" },
		{ "ControlChannelQueueBunchOverflowed.Comment", "/** Queued control channel send bunch overflowed */" },
		{ "ControlChannelQueueBunchOverflowed.Name", "ENetCloseResult::ControlChannelQueueBunchOverflowed" },
		{ "ControlChannelQueueBunchOverflowed.ToolTip", "Queued control channel send bunch overflowed" },
		{ "CorruptData.Comment", "/** Server received corrupt data from the client - or there was otherwise an error during channel processing */" },
		{ "CorruptData.Name", "ENetCloseResult::CorruptData" },
		{ "CorruptData.ToolTip", "Server received corrupt data from the client - or there was otherwise an error during channel processing" },
		{ "Extended.Comment", "/** Extended/custom ErrorContext state. To be interpreted by code */" },
		{ "Extended.Name", "ENetCloseResult::Extended" },
		{ "Extended.ToolTip", "Extended/custom ErrorContext state. To be interpreted by code" },
		{ "FailureReceived.Comment", "/** The net driver received an NMT_Failure message */" },
		{ "FailureReceived.Name", "ENetCloseResult::FailureReceived" },
		{ "FailureReceived.ToolTip", "The net driver received an NMT_Failure message" },
		{ "FaultDisconnect.Comment", "/** Net Fault Recovery failed to recover from a fault, and is triggering a disconnect */" },
		{ "FaultDisconnect.Name", "ENetCloseResult::FaultDisconnect" },
		{ "FaultDisconnect.ToolTip", "Net Fault Recovery failed to recover from a fault, and is triggering a disconnect" },
		{ "FieldHeaderBadRepIndex.Comment", "/** Field header RepIndex exceeds maximum index limit */" },
		{ "FieldHeaderBadRepIndex.Name", "ENetCloseResult::FieldHeaderBadRepIndex" },
		{ "FieldHeaderBadRepIndex.ToolTip", "Field header RepIndex exceeds maximum index limit" },
		{ "FieldHeaderPayloadBitsFail.Comment", "/** Field header payload NumPayloadBits serialization failed */" },
		{ "FieldHeaderPayloadBitsFail.Name", "ENetCloseResult::FieldHeaderPayloadBitsFail" },
		{ "FieldHeaderPayloadBitsFail.ToolTip", "Field header payload NumPayloadBits serialization failed" },
		{ "FieldHeaderRepIndex.Comment", "/** Field header RepIndex serialization failed */" },
		{ "FieldHeaderRepIndex.Name", "ENetCloseResult::FieldHeaderRepIndex" },
		{ "FieldHeaderRepIndex.ToolTip", "Field header RepIndex serialization failed" },
		{ "FieldPayloadFail.Comment", "/** Field payload serialization failed */" },
		{ "FieldPayloadFail.Name", "ENetCloseResult::FieldPayloadFail" },
		{ "FieldPayloadFail.ToolTip", "Field payload serialization failed" },
		{ "LogLimitInstant.Comment", "/** Log limiting per-second checks insta-kicked the player */" },
		{ "LogLimitInstant.Name", "ENetCloseResult::LogLimitInstant" },
		{ "LogLimitInstant.ToolTip", "Log limiting per-second checks insta-kicked the player" },
		{ "LogLimitSustained.Comment", "/** Log limiting repeated threshold hits kicked the player */" },
		{ "LogLimitSustained.Name", "ENetCloseResult::LogLimitSustained" },
		{ "LogLimitSustained.ToolTip", "Log limiting repeated threshold hits kicked the player" },
		{ "MaxReliableExceeded.Comment", "/** Too many reliable bunches queued */" },
		{ "MaxReliableExceeded.Name", "ENetCloseResult::MaxReliableExceeded" },
		{ "MaxReliableExceeded.ToolTip", "Too many reliable bunches queued" },
		{ "MissingLevelPackage.Comment", "/** UpdateLevelVisibility missing level package */" },
		{ "MissingLevelPackage.Name", "ENetCloseResult::MissingLevelPackage" },
		{ "MissingLevelPackage.ToolTip", "UpdateLevelVisibility missing level package" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetCloseResult.h" },
		{ "NetChecksumMismatch.Comment", "/** Network checksum mismatch */" },
		{ "NetChecksumMismatch.Name", "ENetCloseResult::NetChecksumMismatch" },
		{ "NetChecksumMismatch.ToolTip", "Network checksum mismatch" },
		{ "NetDriverAlreadyExists.Comment", "/** A relevant net driver has already been created for this service */" },
		{ "NetDriverAlreadyExists.Name", "ENetCloseResult::NetDriverAlreadyExists" },
		{ "NetDriverAlreadyExists.ToolTip", "A relevant net driver has already been created for this service" },
		{ "NetDriverCreateFailure.Comment", "/** The net driver creation failed */" },
		{ "NetDriverCreateFailure.Name", "ENetCloseResult::NetDriverCreateFailure" },
		{ "NetDriverCreateFailure.ToolTip", "The net driver creation failed" },
		{ "NetDriverListenFailure.Comment", "/** The net driver failed its Listen() call */" },
		{ "NetDriverListenFailure.Name", "ENetCloseResult::NetDriverListenFailure" },
		{ "NetDriverListenFailure.ToolTip", "The net driver failed its Listen() call" },
		{ "NetGuidMismatch.Comment", "/** NetGuid mismatch */" },
		{ "NetGuidMismatch.Name", "ENetCloseResult::NetGuidMismatch" },
		{ "NetGuidMismatch.ToolTip", "NetGuid mismatch" },
		{ "NotRecoverable.Comment", "/** Marks a PacketHandler/HandlerComponent error, that is not recoverable */" },
		{ "NotRecoverable.Name", "ENetCloseResult::NotRecoverable" },
		{ "NotRecoverable.ToolTip", "Marks a PacketHandler/HandlerComponent error, that is not recoverable" },
		{ "ObjectReplicatorReceivedBunchFail.Comment", "/** FObjectReplicator ReceivedBunch failed */" },
		{ "ObjectReplicatorReceivedBunchFail.Name", "ENetCloseResult::ObjectReplicatorReceivedBunchFail" },
		{ "ObjectReplicatorReceivedBunchFail.ToolTip", "FObjectReplicator ReceivedBunch failed" },
		{ "OutdatedClient.Comment", "/** The client needs to upgrade their game */" },
		{ "OutdatedClient.Name", "ENetCloseResult::OutdatedClient" },
		{ "OutdatedClient.ToolTip", "The client needs to upgrade their game" },
		{ "OutdatedServer.Comment", "/** The server needs to upgrade their game */" },
		{ "OutdatedServer.Name", "ENetCloseResult::OutdatedServer" },
		{ "OutdatedServer.ToolTip", "The server needs to upgrade their game" },
		{ "PacketHandlerIncomingError.Comment", "/** PacketHandler Error processing incoming packet */" },
		{ "PacketHandlerIncomingError.Name", "ENetCloseResult::PacketHandlerIncomingError" },
		{ "PacketHandlerIncomingError.ToolTip", "PacketHandler Error processing incoming packet" },
		{ "PartialFinalPackageMapExports.Comment", "/** Final partial bunch has package map exports */" },
		{ "PartialFinalPackageMapExports.Name", "ENetCloseResult::PartialFinalPackageMapExports" },
		{ "PartialFinalPackageMapExports.ToolTip", "Final partial bunch has package map exports" },
		{ "PartialInitialNonByteAligned.Comment", "/** Partial initial bunch which is not byte aligned */" },
		{ "PartialInitialNonByteAligned.Name", "ENetCloseResult::PartialInitialNonByteAligned" },
		{ "PartialInitialNonByteAligned.ToolTip", "Partial initial bunch which is not byte aligned" },
		{ "PartialInitialReliableDestroy.Comment", "/** Reliable partial initial bunch attempting to destroy incomplete reliable partial bunch */" },
		{ "PartialInitialReliableDestroy.Name", "ENetCloseResult::PartialInitialReliableDestroy" },
		{ "PartialInitialReliableDestroy.ToolTip", "Reliable partial initial bunch attempting to destroy incomplete reliable partial bunch" },
		{ "PartialMergeReliableDestroy.Comment", "/** Reliable partial merge bunch attempting to destroy incomplete reliable partial bunch */" },
		{ "PartialMergeReliableDestroy.Name", "ENetCloseResult::PartialMergeReliableDestroy" },
		{ "PartialMergeReliableDestroy.ToolTip", "Reliable partial merge bunch attempting to destroy incomplete reliable partial bunch" },
		{ "PartialNonByteAligned.Comment", "/** Non-final partial bunch which is not byte aligned */" },
		{ "PartialNonByteAligned.Name", "ENetCloseResult::PartialNonByteAligned" },
		{ "PartialNonByteAligned.ToolTip", "Non-final partial bunch which is not byte aligned" },
		{ "PartialTooLarge.Comment", "/** Partial bunch exceeded maximum partial bunch size */" },
		{ "PartialTooLarge.Name", "ENetCloseResult::PartialTooLarge" },
		{ "PartialTooLarge.ToolTip", "Partial bunch exceeded maximum partial bunch size" },
		{ "PendingConnectionFailure.Comment", "/** There was an error during connection to the game */" },
		{ "PendingConnectionFailure.Name", "ENetCloseResult::PendingConnectionFailure" },
		{ "PendingConnectionFailure.ToolTip", "There was an error during connection to the game" },
		{ "PrematureSend.Comment", "/** Attempted to send data before handshake is complete */" },
		{ "PrematureSend.Name", "ENetCloseResult::PrematureSend" },
		{ "PrematureSend.ToolTip", "Attempted to send data before handshake is complete" },
		{ "ReadHeaderExtraFail.Comment", "/** Failed to read extra PacketHeader information */" },
		{ "ReadHeaderExtraFail.Name", "ENetCloseResult::ReadHeaderExtraFail" },
		{ "ReadHeaderExtraFail.ToolTip", "Failed to read extra PacketHeader information" },
		{ "ReadHeaderFail.Comment", "/** Failed to read PacketHeader */" },
		{ "ReadHeaderFail.Name", "ENetCloseResult::ReadHeaderFail" },
		{ "ReadHeaderFail.ToolTip", "Failed to read PacketHeader" },
		{ "ReceivedNetGUIDBunchFail.Comment", "/** ReceiveNetGUIDBunch serialization failed */" },
		{ "ReceivedNetGUIDBunchFail.Name", "ENetCloseResult::ReceivedNetGUIDBunchFail" },
		{ "ReceivedNetGUIDBunchFail.ToolTip", "ReceiveNetGUIDBunch serialization failed" },
		{ "ReceivedNextBunchFail.Comment", "/** ReceivedNextBunch serialization failed */" },
		{ "ReceivedNextBunchFail.Name", "ENetCloseResult::ReceivedNextBunchFail" },
		{ "ReceivedNextBunchFail.ToolTip", "ReceivedNextBunch serialization failed" },
		{ "ReceivedNextBunchQueueFail.Comment", "/** Queued ReceivedNextBunch serialization failed */" },
		{ "ReceivedNextBunchQueueFail.Name", "ENetCloseResult::ReceivedNextBunchQueueFail" },
		{ "ReceivedNextBunchQueueFail.ToolTip", "Queued ReceivedNextBunch serialization failed" },
		{ "ReliableBeforeOpen.Comment", "/** Received reliable bunch before channel was fully open */" },
		{ "ReliableBeforeOpen.Name", "ENetCloseResult::ReliableBeforeOpen" },
		{ "ReliableBeforeOpen.ToolTip", "Received reliable bunch before channel was fully open" },
		{ "ReliableBufferOverflow.Comment", "/** Reliable buffer overflowed when attempting to send */" },
		{ "ReliableBufferOverflow.Name", "ENetCloseResult::ReliableBufferOverflow" },
		{ "ReliableBufferOverflow.ToolTip", "Reliable buffer overflowed when attempting to send" },
		{ "RPCDoS.Comment", "/** RPC DoS Detection kicked the player */" },
		{ "RPCDoS.Name", "ENetCloseResult::RPCDoS" },
		{ "RPCDoS.ToolTip", "RPC DoS Detection kicked the player" },
		{ "SecurityClosed.Comment", "/** The connection had issues (possibly malicious) and was closed */" },
		{ "SecurityClosed.Name", "ENetCloseResult::SecurityClosed" },
		{ "SecurityClosed.ToolTip", "The connection had issues (possibly malicious) and was closed" },
		{ "SecurityInvalidData.Comment", "/** The packet contained invalid data */" },
		{ "SecurityInvalidData.Name", "ENetCloseResult::SecurityInvalidData" },
		{ "SecurityInvalidData.ToolTip", "The packet contained invalid data" },
		{ "SecurityMalformedPacket.Comment", "/** The packet didn't follow protocol */" },
		{ "SecurityMalformedPacket.Name", "ENetCloseResult::SecurityMalformedPacket" },
		{ "SecurityMalformedPacket.ToolTip", "The packet didn't follow protocol" },
		{ "SocketSendFailure.Comment", "/** Socket send failure */" },
		{ "SocketSendFailure.Name", "ENetCloseResult::SocketSendFailure" },
		{ "SocketSendFailure.ToolTip", "Socket send failure" },
		{ "Success.Comment", "/** Close was successful, happening under normal conditions */" },
		{ "Success.Name", "ENetCloseResult::Success" },
		{ "Success.ToolTip", "Close was successful, happening under normal conditions" },
		{ "ToolTip", "Network Close results (can occur before NetDriver/NetConnection creation, and can be success or error)\n\nLicensees should use ENetCloseResult::Extended, and specify an ErrorContext value to FNetCloseResult, to specify custom results\n\nNOTE: If you modify this, run the enum-checking smoke test to verify you didn't forget to update anything else:\n                    System.Core.Networking.FNetCloseResult.EnumTest" },
		{ "Unknown.Comment", "/** Default state (do not move the position of this in enum) */" },
		{ "Unknown.Name", "ENetCloseResult::Unknown" },
		{ "Unknown.ToolTip", "Default state (do not move the position of this in enum)" },
		{ "UnknownChannelType.Comment", "/** Unknown channel type specified */" },
		{ "UnknownChannelType.Name", "ENetCloseResult::UnknownChannelType" },
		{ "UnknownChannelType.ToolTip", "Unknown channel type specified" },
		{ "UnregisteredMustBeMappedGUID.Comment", "/** Received MustBeMappedGUID that isn't registered */" },
		{ "UnregisteredMustBeMappedGUID.Name", "ENetCloseResult::UnregisteredMustBeMappedGUID" },
		{ "UnregisteredMustBeMappedGUID.ToolTip", "Received MustBeMappedGUID that isn't registered" },
		{ "ZeroLastByte.Comment", "/** Packet had zeros in the last byte */" },
		{ "ZeroLastByte.Name", "ENetCloseResult::ZeroLastByte" },
		{ "ZeroLastByte.ToolTip", "Packet had zeros in the last byte" },
		{ "ZeroSize.Comment", "/** Zero size packet */" },
		{ "ZeroSize.Name", "ENetCloseResult::ZeroSize" },
		{ "ZeroSize.ToolTip", "Zero size packet" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetCore,
		nullptr,
		"ENetCloseResult",
		"ENetCloseResult",
		Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetCore_ENetCloseResult()
	{
		if (!Z_Registration_Info_UEnum_ENetCloseResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetCloseResult.InnerSingleton, Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetCloseResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h_Statics::EnumInfo[] = {
		{ ENetCloseResult_StaticEnum, TEXT("ENetCloseResult"), &Z_Registration_Info_UEnum_ENetCloseResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1110519222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h_4060830510(TEXT("/Script/NetCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
