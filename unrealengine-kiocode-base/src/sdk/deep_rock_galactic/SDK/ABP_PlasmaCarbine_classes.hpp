#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PlasmaCarbine

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PlasmaCarbine.ABP_PlasmaCarbine_C
// 0x0250 (0x0520 - 0x02D0)
class UABP_PlasmaCarbine_C final : public UAmmoDrivenWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0308(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0388(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x03D0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0498(0x0080)()
	float                                         FireSpinRate;                                      // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_PlasmaCarbine(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PlasmaCarbine_C">();
	}
	static class UABP_PlasmaCarbine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PlasmaCarbine_C>();
	}
};
static_assert(alignof(UABP_PlasmaCarbine_C) == 0x000010, "Wrong alignment on UABP_PlasmaCarbine_C");
static_assert(sizeof(UABP_PlasmaCarbine_C) == 0x000520, "Wrong size on UABP_PlasmaCarbine_C");
static_assert(offsetof(UABP_PlasmaCarbine_C, UberGraphFrame) == 0x0002D0, "Member 'UABP_PlasmaCarbine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PlasmaCarbine_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UABP_PlasmaCarbine_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PlasmaCarbine_C, AnimGraphNode_SequencePlayer_1) == 0x000308, "Member 'UABP_PlasmaCarbine_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PlasmaCarbine_C, AnimGraphNode_Slot) == 0x000388, "Member 'UABP_PlasmaCarbine_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_PlasmaCarbine_C, AnimGraphNode_ApplyAdditive) == 0x0003D0, "Member 'UABP_PlasmaCarbine_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_PlasmaCarbine_C, AnimGraphNode_SequencePlayer) == 0x000498, "Member 'UABP_PlasmaCarbine_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PlasmaCarbine_C, FireSpinRate) == 0x000518, "Member 'UABP_PlasmaCarbine_C::FireSpinRate' has a wrong offset!");

}

