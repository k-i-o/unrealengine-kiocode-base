#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_GooCannon_B_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_GooCannon_B_Skeleton_AnimBlueprint.ABP_GooCannon_B_Skeleton_AnimBlueprint_C
// 0x0A40 (0x0D10 - 0x02D0)
class UABP_GooCannon_B_Skeleton_AnimBlueprint_C final : public UGooGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0308(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_4;                     // 0x0350(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0418(0x0080)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_3;                     // 0x0498(0x00C8)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_3;                 // 0x0560(0x0050)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;                     // 0x05B0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0678(0x0080)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x06F8(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x07C0(0x0080)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_2;                 // 0x0840(0x0050)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0890(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x08B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x08E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0908(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0930(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x09B0(0x0030)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x09E0(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0A30(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0A60(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0AE0(0x0030)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0B10(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0B60(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0B90(0x00B0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0C40(0x00C8)()
	class UAnimMontage*                           BarrelBoostMontage;                                // 0x0D08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E259F76345A0B619B66F21BD90BAE003();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_ApplyAdditive_7E5D13D445D959147B41D991B0367056();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2B74B9364BCD8EE1EE5CF1B04A9D384F();
	void AnimNotify_BarrelBoostBegin();
	void AnimNotify_BarrelBoostEnd();
	void BlueprintBeginPlay();
	void OnMontageEnded_Event_0(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_GooCannon_B_Skeleton_AnimBlueprint_C">();
	}
	static class UABP_GooCannon_B_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_GooCannon_B_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UABP_GooCannon_B_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C) == 0x000D10, "Wrong size on UABP_GooCannon_B_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002D0, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000308, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_ApplyAdditive_4) == 0x000350, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_ApplyAdditive_4' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_4) == 0x000418, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_ApplyAdditive_3) == 0x000498, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_ApplyAdditive_3' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequenceEvaluator_3) == 0x000560, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequenceEvaluator_3' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_ApplyAdditive_2) == 0x0005B0, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_3) == 0x000678, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_ApplyAdditive_1) == 0x0006F8, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_2) == 0x0007C0, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequenceEvaluator_2) == 0x000840, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequenceEvaluator_2' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_3) == 0x000890, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_2) == 0x0008B8, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_1) == 0x0008E0, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult) == 0x000908, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_1) == 0x000930, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_3) == 0x0009B0, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequenceEvaluator_1) == 0x0009E0, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_2) == 0x000A30, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x000A60, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_1) == 0x000AE0, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_SequenceEvaluator) == 0x000B10, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult) == 0x000B60, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_StateMachine) == 0x000B90, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, AnimGraphNode_ApplyAdditive) == 0x000C40, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_GooCannon_B_Skeleton_AnimBlueprint_C, BarrelBoostMontage) == 0x000D08, "Member 'UABP_GooCannon_B_Skeleton_AnimBlueprint_C::BarrelBoostMontage' has a wrong offset!");

}
