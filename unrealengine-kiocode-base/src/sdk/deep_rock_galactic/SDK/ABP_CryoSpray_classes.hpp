#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_CryoSpray

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_CryoSpray.ABP_CryoSpray_C
// 0x03E0 (0x06C0 - 0x02E0)
class UABP_CryoSpray_C final : public UCryoSprayAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02E8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0318(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0360(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x03E0(0x00C0)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x04A0(0x0050)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x04F0(0x0080)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0570(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0590(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0698(0x0020)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_CryoSpray(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_CryoSpray_C">();
	}
	static class UABP_CryoSpray_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_CryoSpray_C>();
	}
};
static_assert(alignof(UABP_CryoSpray_C) == 0x000010, "Wrong alignment on UABP_CryoSpray_C");
static_assert(sizeof(UABP_CryoSpray_C) == 0x0006C0, "Wrong size on UABP_CryoSpray_C");
static_assert(offsetof(UABP_CryoSpray_C, UberGraphFrame) == 0x0002E0, "Member 'UABP_CryoSpray_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_Root) == 0x0002E8, "Member 'UABP_CryoSpray_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_Slot) == 0x000318, "Member 'UABP_CryoSpray_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_SequencePlayer_1) == 0x000360, "Member 'UABP_CryoSpray_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_LayeredBoneBlend) == 0x0003E0, "Member 'UABP_CryoSpray_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_SequenceEvaluator) == 0x0004A0, "Member 'UABP_CryoSpray_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_SequencePlayer) == 0x0004F0, "Member 'UABP_CryoSpray_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_LocalToComponentSpace) == 0x000570, "Member 'UABP_CryoSpray_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_ModifyBone) == 0x000590, "Member 'UABP_CryoSpray_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_CryoSpray_C, AnimGraphNode_ComponentToLocalSpace) == 0x000698, "Member 'UABP_CryoSpray_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");

}

