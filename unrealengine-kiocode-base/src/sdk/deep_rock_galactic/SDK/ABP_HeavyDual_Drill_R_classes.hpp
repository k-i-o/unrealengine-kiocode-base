#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_HeavyDual_Drill_R

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_HeavyDual_Drill_R.ABP_HeavyDual_Drill_R_C
// 0x05C0 (0x0890 - 0x02D0)
class UABP_HeavyDual_Drill_R_C final : public UDoubleDrillAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0308(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0330(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0358(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x03D8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0408(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0488(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x04B8(0x00B0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0568(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0590(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x05B8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0638(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0668(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x06E8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0718(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x07C8(0x00C0)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_R_AnimGraphNode_TransitionResult_390E1F5847CCD80694ADF384F17BEFAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_R_AnimGraphNode_TransitionResult_D12FE6AB4B7BC9F94D60F68F1B91CF96();
	void ExecuteUbergraph_ABP_HeavyDual_Drill_R(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_HeavyDual_Drill_R_C">();
	}
	static class UABP_HeavyDual_Drill_R_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_HeavyDual_Drill_R_C>();
	}
};
static_assert(alignof(UABP_HeavyDual_Drill_R_C) == 0x000010, "Wrong alignment on UABP_HeavyDual_Drill_R_C");
static_assert(sizeof(UABP_HeavyDual_Drill_R_C) == 0x000890, "Wrong size on UABP_HeavyDual_Drill_R_C");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, UberGraphFrame) == 0x0002D0, "Member 'UABP_HeavyDual_Drill_R_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_TransitionResult_3) == 0x000308, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_TransitionResult_2) == 0x000330, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_SequencePlayer_3) == 0x000358, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_StateResult_3) == 0x0003D8, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_SequencePlayer_2) == 0x000408, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_StateResult_2) == 0x000488, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_StateMachine_1) == 0x0004B8, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_TransitionResult_1) == 0x000568, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_TransitionResult) == 0x000590, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_SequencePlayer_1) == 0x0005B8, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_StateResult_1) == 0x000638, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_SequencePlayer) == 0x000668, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_StateResult) == 0x0006E8, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_StateMachine) == 0x000718, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_HeavyDual_Drill_R_C, AnimGraphNode_LayeredBoneBlend) == 0x0007C8, "Member 'UABP_HeavyDual_Drill_R_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");

}
