#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DualMachinePistols

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_DualMachinePistols.ABP_DualMachinePistols_C
// 0x00D0 (0x0390 - 0x02C0)
class UABP_DualMachinePistols_C final : public UAnimInstance
{
public:
	uint8                                         Pad_530A[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02F8(0x0048)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0340(0x0050)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_DualMachinePistols(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_DualMachinePistols_C">();
	}
	static class UABP_DualMachinePistols_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_DualMachinePistols_C>();
	}
};
static_assert(alignof(UABP_DualMachinePistols_C) == 0x000010, "Wrong alignment on UABP_DualMachinePistols_C");
static_assert(sizeof(UABP_DualMachinePistols_C) == 0x000390, "Wrong size on UABP_DualMachinePistols_C");
static_assert(offsetof(UABP_DualMachinePistols_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_DualMachinePistols_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_DualMachinePistols_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_DualMachinePistols_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_DualMachinePistols_C, AnimGraphNode_Slot) == 0x0002F8, "Member 'UABP_DualMachinePistols_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_DualMachinePistols_C, AnimGraphNode_SequenceEvaluator) == 0x000340, "Member 'UABP_DualMachinePistols_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");

}
