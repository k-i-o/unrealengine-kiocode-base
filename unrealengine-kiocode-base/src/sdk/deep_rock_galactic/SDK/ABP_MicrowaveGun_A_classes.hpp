#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_MicrowaveGun_A

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C
// 0x05F0 (0x08C0 - 0x02D0)
class UABP_MicrowaveGun_A_C final : public UAmmoDrivenWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0308(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0350(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0378(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x03A0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0420(0x0030)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0450(0x0018)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0468(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0498(0x00B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0548(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0650(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0670(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0690(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0798(0x0108)()
	float                                         RotateAmount;                                      // 0x08A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateSpeed;                                       // 0x08A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStartCharacterOverheat;                          // 0x08A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_C7BC802944DE4B55B4B4BDB20485D581();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F64A336448E91212781B0BB5A0B348FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F56B78FB4CFB682D3282CA9DE5426AA6();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_StartCharacterOverheat();
	void ExecuteUbergraph_ABP_MicrowaveGun_A(int32 EntryPoint);
	void OnStartCharacterOverheat__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_MicrowaveGun_A_C">();
	}
	static class UABP_MicrowaveGun_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_MicrowaveGun_A_C>();
	}
};
static_assert(alignof(UABP_MicrowaveGun_A_C) == 0x000010, "Wrong alignment on UABP_MicrowaveGun_A_C");
static_assert(sizeof(UABP_MicrowaveGun_A_C) == 0x0008C0, "Wrong size on UABP_MicrowaveGun_A_C");
static_assert(offsetof(UABP_MicrowaveGun_A_C, UberGraphFrame) == 0x0002D0, "Member 'UABP_MicrowaveGun_A_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_Slot) == 0x000308, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_TransitionResult_1) == 0x000350, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_TransitionResult) == 0x000378, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_SequencePlayer) == 0x0003A0, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_StateResult_1) == 0x000420, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_LocalRefPose) == 0x000450, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_StateResult) == 0x000468, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_StateMachine) == 0x000498, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_ModifyBone_2) == 0x000548, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_LocalToComponentSpace) == 0x000650, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_ComponentToLocalSpace) == 0x000670, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_ModifyBone_1) == 0x000690, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, AnimGraphNode_ModifyBone) == 0x000798, "Member 'UABP_MicrowaveGun_A_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, RotateAmount) == 0x0008A0, "Member 'UABP_MicrowaveGun_A_C::RotateAmount' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, RotateSpeed) == 0x0008A4, "Member 'UABP_MicrowaveGun_A_C::RotateSpeed' has a wrong offset!");
static_assert(offsetof(UABP_MicrowaveGun_A_C, OnStartCharacterOverheat) == 0x0008A8, "Member 'UABP_MicrowaveGun_A_C::OnStartCharacterOverheat' has a wrong offset!");

}
