#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Urban_woman_01_PostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Urban_woman_01_PostAnimBP.Urban_woman_01_PostAnimBP_C
// 0x0188 (0x0420 - 0x0298)
class UUrban_woman_01_PostAnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2322[0x8];                                     // 0x0298(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_A8DB6493484E2412AB19A7B21B71A4EC; // 0x02A8(0x0020)()
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_AA0C06F647C0C127AD54B1BCF865DF86; // 0x02C8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_063C846E425294201D6DA1B534BAD324; // 0x0310(0x00C8)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_B7C56E8E4E0DDFBBE38BC792BAFEF7ED; // 0x03D8(0x0048)()

public:
	void ExecuteUbergraph_Urban_woman_01_PostAnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Urban_woman_01_PostAnimBP_C">();
	}
	static class UUrban_woman_01_PostAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUrban_woman_01_PostAnimBP_C>();
	}
};
static_assert(alignof(UUrban_woman_01_PostAnimBP_C) == 0x000008, "Wrong alignment on UUrban_woman_01_PostAnimBP_C");
static_assert(sizeof(UUrban_woman_01_PostAnimBP_C) == 0x000420, "Wrong size on UUrban_woman_01_PostAnimBP_C");
static_assert(offsetof(UUrban_woman_01_PostAnimBP_C, UberGraphFrame) == 0x0002A0, "Member 'UUrban_woman_01_PostAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUrban_woman_01_PostAnimBP_C, AnimGraphNode_Root_A8DB6493484E2412AB19A7B21B71A4EC) == 0x0002A8, "Member 'UUrban_woman_01_PostAnimBP_C::AnimGraphNode_Root_A8DB6493484E2412AB19A7B21B71A4EC' has a wrong offset!");
static_assert(offsetof(UUrban_woman_01_PostAnimBP_C, AnimGraphNode_SubInput_AA0C06F647C0C127AD54B1BCF865DF86) == 0x0002C8, "Member 'UUrban_woman_01_PostAnimBP_C::AnimGraphNode_SubInput_AA0C06F647C0C127AD54B1BCF865DF86' has a wrong offset!");
static_assert(offsetof(UUrban_woman_01_PostAnimBP_C, AnimGraphNode_ApplyAdditive_063C846E425294201D6DA1B534BAD324) == 0x000310, "Member 'UUrban_woman_01_PostAnimBP_C::AnimGraphNode_ApplyAdditive_063C846E425294201D6DA1B534BAD324' has a wrong offset!");
static_assert(offsetof(UUrban_woman_01_PostAnimBP_C, AnimGraphNode_SequenceEvaluator_B7C56E8E4E0DDFBBE38BC792BAFEF7ED) == 0x0003D8, "Member 'UUrban_woman_01_PostAnimBP_C::AnimGraphNode_SequenceEvaluator_B7C56E8E4E0DDFBBE38BC792BAFEF7ED' has a wrong offset!");

}

