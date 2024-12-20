#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Nurse_PostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Nurse_PostAnimBP.Nurse_PostAnimBP_C
// 0x0190 (0x0428 - 0x0298)
class UNurse_PostAnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_231C[0x8];                                     // 0x0298(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_EECFCA7344C80B674034DDB29460F754; // 0x02A8(0x0020)()
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_8977A6FE46A8C8E5AF1B80A727935ECC; // 0x02C8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_C528DC8E4B4C2550B13CA9AA05581B63; // 0x0310(0x00C8)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_4203D56A430DF819CAD97F8A5468BE3A; // 0x03D8(0x0048)()
	bool                                          SpringControllersAlpha;                            // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Nurse_PostAnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Nurse_PostAnimBP_C">();
	}
	static class UNurse_PostAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNurse_PostAnimBP_C>();
	}
};
static_assert(alignof(UNurse_PostAnimBP_C) == 0x000008, "Wrong alignment on UNurse_PostAnimBP_C");
static_assert(sizeof(UNurse_PostAnimBP_C) == 0x000428, "Wrong size on UNurse_PostAnimBP_C");
static_assert(offsetof(UNurse_PostAnimBP_C, UberGraphFrame) == 0x0002A0, "Member 'UNurse_PostAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNurse_PostAnimBP_C, AnimGraphNode_Root_EECFCA7344C80B674034DDB29460F754) == 0x0002A8, "Member 'UNurse_PostAnimBP_C::AnimGraphNode_Root_EECFCA7344C80B674034DDB29460F754' has a wrong offset!");
static_assert(offsetof(UNurse_PostAnimBP_C, AnimGraphNode_SubInput_8977A6FE46A8C8E5AF1B80A727935ECC) == 0x0002C8, "Member 'UNurse_PostAnimBP_C::AnimGraphNode_SubInput_8977A6FE46A8C8E5AF1B80A727935ECC' has a wrong offset!");
static_assert(offsetof(UNurse_PostAnimBP_C, AnimGraphNode_ApplyAdditive_C528DC8E4B4C2550B13CA9AA05581B63) == 0x000310, "Member 'UNurse_PostAnimBP_C::AnimGraphNode_ApplyAdditive_C528DC8E4B4C2550B13CA9AA05581B63' has a wrong offset!");
static_assert(offsetof(UNurse_PostAnimBP_C, AnimGraphNode_SequenceEvaluator_4203D56A430DF819CAD97F8A5468BE3A) == 0x0003D8, "Member 'UNurse_PostAnimBP_C::AnimGraphNode_SequenceEvaluator_4203D56A430DF819CAD97F8A5468BE3A' has a wrong offset!");
static_assert(offsetof(UNurse_PostAnimBP_C, SpringControllersAlpha) == 0x000420, "Member 'UNurse_PostAnimBP_C::SpringControllersAlpha' has a wrong offset!");

}

