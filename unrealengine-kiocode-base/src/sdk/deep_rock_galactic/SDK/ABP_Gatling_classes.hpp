#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Gatling

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Gatling.ABP_Gatling_C
// 0x0FA0 (0x12A0 - 0x0300)
class UABP_Gatling_C final : public UBeltDrivenAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0308(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0338(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03B8(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0400(0x00C0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x04C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x04E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0510(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0538(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0588(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x05B8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0638(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0668(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x06E8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0718(0x00B0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x07C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x07F0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0818(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0898(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x08C8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0948(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0978(0x00B0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0A28(0x0020)()
	uint8                                         Pad_47E6[0x8];                                     // 0x0A48(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0A50(0x0830)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1280(0x0020)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C();
	void ExecuteUbergraph_ABP_Gatling(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Gatling_C">();
	}
	static class UABP_Gatling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Gatling_C>();
	}
};
static_assert(alignof(UABP_Gatling_C) == 0x000010, "Wrong alignment on UABP_Gatling_C");
static_assert(sizeof(UABP_Gatling_C) == 0x0012A0, "Wrong size on UABP_Gatling_C");
static_assert(offsetof(UABP_Gatling_C, UberGraphFrame) == 0x000300, "Member 'UABP_Gatling_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_Root) == 0x000308, "Member 'UABP_Gatling_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_SequencePlayer_4) == 0x000338, "Member 'UABP_Gatling_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_Slot) == 0x0003B8, "Member 'UABP_Gatling_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_LayeredBoneBlend) == 0x000400, "Member 'UABP_Gatling_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_TransitionResult_4) == 0x0004C0, "Member 'UABP_Gatling_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_TransitionResult_3) == 0x0004E8, "Member 'UABP_Gatling_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_TransitionResult_2) == 0x000510, "Member 'UABP_Gatling_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_SequenceEvaluator) == 0x000538, "Member 'UABP_Gatling_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_StateResult_4) == 0x000588, "Member 'UABP_Gatling_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_SequencePlayer_3) == 0x0005B8, "Member 'UABP_Gatling_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_StateResult_3) == 0x000638, "Member 'UABP_Gatling_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_SequencePlayer_2) == 0x000668, "Member 'UABP_Gatling_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_StateResult_2) == 0x0006E8, "Member 'UABP_Gatling_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_StateMachine_1) == 0x000718, "Member 'UABP_Gatling_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_TransitionResult_1) == 0x0007C8, "Member 'UABP_Gatling_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_TransitionResult) == 0x0007F0, "Member 'UABP_Gatling_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_SequencePlayer_1) == 0x000818, "Member 'UABP_Gatling_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_StateResult_1) == 0x000898, "Member 'UABP_Gatling_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_SequencePlayer) == 0x0008C8, "Member 'UABP_Gatling_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_StateResult) == 0x000948, "Member 'UABP_Gatling_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_StateMachine) == 0x000978, "Member 'UABP_Gatling_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_LocalToComponentSpace) == 0x000A28, "Member 'UABP_Gatling_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_RigidBody) == 0x000A50, "Member 'UABP_Gatling_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UABP_Gatling_C, AnimGraphNode_ComponentToLocalSpace) == 0x001280, "Member 'UABP_Gatling_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");

}
