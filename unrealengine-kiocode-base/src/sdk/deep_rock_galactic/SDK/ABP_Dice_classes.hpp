#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Dice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Dice.ABP_Dice_C
// 0x0A80 (0x0D40 - 0x02C0)
class UABP_Dice_C final : public UAnimInstance
{
public:
	uint8                                         Pad_4225[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x02F8(0x01D8)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x04D0(0x0830)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0D00(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0D20(0x0020)()

public:
	void ExecuteUbergraph_ABP_Dice(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Dice_C">();
	}
	static class UABP_Dice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Dice_C>();
	}
};
static_assert(alignof(UABP_Dice_C) == 0x000010, "Wrong alignment on UABP_Dice_C");
static_assert(sizeof(UABP_Dice_C) == 0x000D40, "Wrong size on UABP_Dice_C");
static_assert(offsetof(UABP_Dice_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_Dice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Dice_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_Dice_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Dice_C, AnimGraphNode_CopyPoseFromMesh) == 0x0002F8, "Member 'UABP_Dice_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UABP_Dice_C, AnimGraphNode_RigidBody) == 0x0004D0, "Member 'UABP_Dice_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UABP_Dice_C, AnimGraphNode_LocalToComponentSpace) == 0x000D00, "Member 'UABP_Dice_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Dice_C, AnimGraphNode_ComponentToLocalSpace) == 0x000D20, "Member 'UABP_Dice_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");

}
