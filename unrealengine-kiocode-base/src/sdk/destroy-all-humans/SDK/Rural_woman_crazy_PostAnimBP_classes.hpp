#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rural_woman_crazy_PostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Rural_woman_crazy_PostAnimBP.Rural_woman_crazy_PostAnimBP_C
// 0x0188 (0x0420 - 0x0298)
class URural_woman_crazy_PostAnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_231E[0x8];                                     // 0x0298(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_F975EB8649DBE642BCB59797A26FB1AD; // 0x02A8(0x0020)()
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_1B75F0CE4D65BFE933C1DEB1C0A09CB9; // 0x02C8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_0A6B24AC4BC129698F915CBFA062ECD8; // 0x0310(0x00C8)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_B2C4E2CD43387370A075DCB33747E305; // 0x03D8(0x0048)()

public:
	void ExecuteUbergraph_Rural_woman_crazy_PostAnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Rural_woman_crazy_PostAnimBP_C">();
	}
	static class URural_woman_crazy_PostAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URural_woman_crazy_PostAnimBP_C>();
	}
};
static_assert(alignof(URural_woman_crazy_PostAnimBP_C) == 0x000008, "Wrong alignment on URural_woman_crazy_PostAnimBP_C");
static_assert(sizeof(URural_woman_crazy_PostAnimBP_C) == 0x000420, "Wrong size on URural_woman_crazy_PostAnimBP_C");
static_assert(offsetof(URural_woman_crazy_PostAnimBP_C, UberGraphFrame) == 0x0002A0, "Member 'URural_woman_crazy_PostAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URural_woman_crazy_PostAnimBP_C, AnimGraphNode_Root_F975EB8649DBE642BCB59797A26FB1AD) == 0x0002A8, "Member 'URural_woman_crazy_PostAnimBP_C::AnimGraphNode_Root_F975EB8649DBE642BCB59797A26FB1AD' has a wrong offset!");
static_assert(offsetof(URural_woman_crazy_PostAnimBP_C, AnimGraphNode_SubInput_1B75F0CE4D65BFE933C1DEB1C0A09CB9) == 0x0002C8, "Member 'URural_woman_crazy_PostAnimBP_C::AnimGraphNode_SubInput_1B75F0CE4D65BFE933C1DEB1C0A09CB9' has a wrong offset!");
static_assert(offsetof(URural_woman_crazy_PostAnimBP_C, AnimGraphNode_ApplyAdditive_0A6B24AC4BC129698F915CBFA062ECD8) == 0x000310, "Member 'URural_woman_crazy_PostAnimBP_C::AnimGraphNode_ApplyAdditive_0A6B24AC4BC129698F915CBFA062ECD8' has a wrong offset!");
static_assert(offsetof(URural_woman_crazy_PostAnimBP_C, AnimGraphNode_SequenceEvaluator_B2C4E2CD43387370A075DCB33747E305) == 0x0003D8, "Member 'URural_woman_crazy_PostAnimBP_C::AnimGraphNode_SequenceEvaluator_B2C4E2CD43387370A075DCB33747E305' has a wrong offset!");

}
