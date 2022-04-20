// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_AimConstraint_generated_h
#error "RigUnit_AimConstraint.generated.h already included, missing '#pragma once' in RigUnit_AimConstraint.h"
#endif
#define CONTROLRIG_RigUnit_AimConstraint_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAimTarget_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FAimTarget>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimConstraint_WorkData>();


#define FRigUnit_AimConstraint_Execute() \
	void FRigUnit_AimConstraint::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Joint, \
		const EAimMode AimMode, \
		const EAimMode UpMode, \
		const FVector& AimVector, \
		const FVector& UpVector, \
		const TArrayView<const FAimTarget>& AimTargets, \
		const TArrayView<const FAimTarget>& UpTargets, \
		FRigUnit_AimConstraint_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Joint, \
		const EAimMode AimMode, \
		const EAimMode UpMode, \
		const FVector& AimVector, \
		const FVector& UpVector, \
		const TArrayView<const FAimTarget>& AimTargets, \
		const TArrayView<const FAimTarget>& UpTargets, \
		FRigUnit_AimConstraint_WorkData& WorkData, \
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
		const FName& Joint = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const EAimMode AimMode = *(EAimMode*)RigVMMemoryHandles[1].GetData(false); \
		const EAimMode UpMode = *(EAimMode*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& AimVector = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& UpVector = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FAimTarget>& AimTargets = *(TArray<FAimTarget>*)RigVMMemoryHandles[5].GetData(false); \
		TArray<FAimTarget>& UpTargets = *(TArray<FAimTarget>*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_AimConstraint_WorkData& WorkData = *(FRigUnit_AimConstraint_WorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Joint, \
			AimMode, \
			UpMode, \
			AimVector, \
			UpVector, \
			AimTargets, \
			UpTargets, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimConstraint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_AimConstraint_h


#define FOREACH_ENUM_EAIMMODE(op) \
	op(EAimMode::AimAtTarget) \
	op(EAimMode::OrientToTarget) 

enum class EAimMode : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<EAimMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
