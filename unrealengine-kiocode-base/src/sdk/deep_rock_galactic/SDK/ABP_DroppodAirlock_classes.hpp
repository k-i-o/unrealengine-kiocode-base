#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DroppodAirlock

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_DroppodAirlock.ABP_DroppodAirlock_C
// 0x06F0 (0x09B0 - 0x02C0)
class UABP_DroppodAirlock_C final : public UAnimInstance
{
public:
	uint8                                         Pad_462F[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0320(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0348(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0370(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0398(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x03C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x03E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0410(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0438(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0460(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0488(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_2;                 // 0x04B0(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0500(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0530(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x05B0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x05E0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0660(0x0030)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x0690(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x06E0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0710(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0790(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x07C0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0840(0x0030)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0870(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x08C0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x08F0(0x00B0)()
	class ABP_DropPod_Base_C*                     DropPod;                                           // 0x09A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OuterOpen;                                         // 0x09A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InnerOpen;                                         // 0x09A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ABP_DroppodAirlock(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_DroppodAirlock_C">();
	}
	static class UABP_DroppodAirlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_DroppodAirlock_C>();
	}
};
static_assert(alignof(UABP_DroppodAirlock_C) == 0x000010, "Wrong alignment on UABP_DroppodAirlock_C");
static_assert(sizeof(UABP_DroppodAirlock_C) == 0x0009B0, "Wrong size on UABP_DroppodAirlock_C");
static_assert(offsetof(UABP_DroppodAirlock_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_DroppodAirlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_10) == 0x0002F8, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_9) == 0x000320, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_8) == 0x000348, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_7) == 0x000370, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_6) == 0x000398, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_5) == 0x0003C0, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_4) == 0x0003E8, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_3) == 0x000410, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_2) == 0x000438, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult_1) == 0x000460, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_TransitionResult) == 0x000488, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_SequenceEvaluator_2) == 0x0004B0, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_SequenceEvaluator_2' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_StateResult_6) == 0x000500, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_SequencePlayer_3) == 0x000530, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_StateResult_5) == 0x0005B0, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_SequencePlayer_2) == 0x0005E0, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_StateResult_4) == 0x000660, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_SequenceEvaluator_1) == 0x000690, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_StateResult_3) == 0x0006E0, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_SequencePlayer_1) == 0x000710, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_StateResult_2) == 0x000790, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_SequencePlayer) == 0x0007C0, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_StateResult_1) == 0x000840, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_SequenceEvaluator) == 0x000870, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_StateResult) == 0x0008C0, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, AnimGraphNode_StateMachine) == 0x0008F0, "Member 'UABP_DroppodAirlock_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, DropPod) == 0x0009A0, "Member 'UABP_DroppodAirlock_C::DropPod' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, OuterOpen) == 0x0009A8, "Member 'UABP_DroppodAirlock_C::OuterOpen' has a wrong offset!");
static_assert(offsetof(UABP_DroppodAirlock_C, InnerOpen) == 0x0009A9, "Member 'UABP_DroppodAirlock_C::InnerOpen' has a wrong offset!");

}

