#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Crab_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CrabChampions_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_Crab_AnimBP.SK_Crab_AnimBP_C
// 0x0D70 (0x1060 - 0x02F0)
class USK_Crab_AnimBP_C final : public UCrabPlayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02F8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0328(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0350(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0378(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0418(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0440(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x04C0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x04F0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0570(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x05A0(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0688(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x06B8(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x07A0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x07D0(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0850(0x00A0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x08F0(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0990(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0A10(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0A90(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0AC0(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0B70(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0CC8(0x0028)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x0CF0(0x0070)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0D60(0x0190)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x0EF0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x0F38(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0F80(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0FC8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1010(0x0048)()

public:
	void ExecuteUbergraph_SK_Crab_AnimBP(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_C7DA0A2F42AA72E8164827BDEF0F70EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_0C5BFD424317F869BA9BA6952183128F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_TransitionResult_8E73A0074ECF2D7C189700A6EE5C4073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendSpacePlayer_E8712BEA4EC181C68A67D982FE6AFF10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_8A3305B64CED6F9D8144E2810FB6882B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_215BFAB940BF59D898CE37A086737F2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_BlendListByBool_F9EDB7FF4B9502F7D00508A4D74B9E17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_AnimGraphNode_SequencePlayer_E4338ECD4DFB460BBB483D90B945E216();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Crab_AnimBP_C">();
	}
	static class USK_Crab_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Crab_AnimBP_C>();
	}
};
static_assert(alignof(USK_Crab_AnimBP_C) == 0x000010, "Wrong alignment on USK_Crab_AnimBP_C");
static_assert(sizeof(USK_Crab_AnimBP_C) == 0x001060, "Wrong size on USK_Crab_AnimBP_C");
static_assert(offsetof(USK_Crab_AnimBP_C, UberGraphFrame) == 0x0002F0, "Member 'USK_Crab_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_Root) == 0x0002F8, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000328, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000350, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000378, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0003A0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0003C8, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0003F0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000418, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x000440, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_StateResult_4) == 0x0004C0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0004F0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000570, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x0005A0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000688, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x0006B8, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_StateResult_1) == 0x0007A0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0007D0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x000850, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x0008F0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000990, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000A10, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_StateResult) == 0x000A90, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_StateMachine) == 0x000AC0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000B70, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000CC8, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_Inertialization) == 0x000CF0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_Inertialization' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x000D60, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_Slot_4) == 0x000EF0, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_Slot_3) == 0x000F38, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_Slot_2) == 0x000F80, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_Slot_1) == 0x000FC8, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_C, AnimGraphNode_Slot) == 0x001010, "Member 'USK_Crab_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");

}
