// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_FABRIK_generated_h
#error "RigUnit_FABRIK.generated.h already included, missing '#pragma once' in RigUnit_FABRIK.h"
#endif
#define CONTROLRIG_RigUnit_FABRIK_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FABRIK_WorkData>();


#define FRigUnit_FABRIK_Execute() \
	void FRigUnit_FABRIK::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& StartBone, \
		const FName& EffectorBone, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& StartBone, \
		const FName& EffectorBone, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform, \
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
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& EffectorBone = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const float Precision = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_FABRIK_WorkData& WorkData = *(FRigUnit_FABRIK_WorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		const bool bSetEffectorTransform = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			StartBone, \
			EffectorBone, \
			EffectorTransform, \
			Precision, \
			Weight, \
			bPropagateToChildren, \
			MaxIterations, \
			WorkData, \
			bSetEffectorTransform, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FABRIK>();


#define FRigUnit_FABRIKPerItem_Execute() \
	void FRigUnit_FABRIKPerItem::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform, \
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
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float Precision = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		FRigUnit_FABRIK_WorkData& WorkData = *(FRigUnit_FABRIK_WorkData*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		const bool bSetEffectorTransform = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			EffectorTransform, \
			Precision, \
			Weight, \
			bPropagateToChildren, \
			MaxIterations, \
			WorkData, \
			bSetEffectorTransform, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FABRIKPerItem>();


#define FRigUnit_FABRIKItemArray_Execute() \
	void FRigUnit_FABRIKItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_FABRIK_WorkData& WorkData, \
		const bool bSetEffectorTransform, \
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
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float Precision = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		FRigUnit_FABRIK_WorkData& WorkData = *(FRigUnit_FABRIK_WorkData*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		const bool bSetEffectorTransform = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			EffectorTransform, \
			Precision, \
			Weight, \
			bPropagateToChildren, \
			MaxIterations, \
			WorkData, \
			bSetEffectorTransform, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FABRIKItemArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
