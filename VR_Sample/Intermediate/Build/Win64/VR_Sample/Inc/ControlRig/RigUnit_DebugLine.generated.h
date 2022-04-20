// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DebugLine_generated_h
#error "RigUnit_DebugLine.generated.h already included, missing '#pragma once' in RigUnit_DebugLine.h"
#endif
#define CONTROLRIG_RigUnit_DebugLine_generated_h


#define FRigUnit_DebugLine_Execute() \
	void FRigUnit_DebugLine::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugLine_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugLine_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Color, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugLine>();


#define FRigUnit_DebugLineItemSpace_Execute() \
	void FRigUnit_DebugLineItemSpace::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugLine_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugLineItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Color, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugLineItemSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugLine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
