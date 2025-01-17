#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Suburban_woman_01_PostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Suburban_woman_01_PostAnimBP.Suburban_woman_01_PostAnimBP_C
// 0x0188 (0x0420 - 0x0298)
class USuburban_woman_01_PostAnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2067[0x8];                                     // 0x0298(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_69ECF3714CACDC75D157F1B6C57D7407; // 0x02A8(0x0020)()
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_F9A63B5D46F07B9B1F3330AB61AC31EF; // 0x02C8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2AF5EEEF45704877B195278E6D92732B; // 0x0310(0x00C8)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_959B71424B0C492C46A35294D90D79E2; // 0x03D8(0x0048)()

public:
	void ExecuteUbergraph_Suburban_woman_01_PostAnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Suburban_woman_01_PostAnimBP_C">();
	}
	static class USuburban_woman_01_PostAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USuburban_woman_01_PostAnimBP_C>();
	}
};
static_assert(alignof(USuburban_woman_01_PostAnimBP_C) == 0x000008, "Wrong alignment on USuburban_woman_01_PostAnimBP_C");
static_assert(sizeof(USuburban_woman_01_PostAnimBP_C) == 0x000420, "Wrong size on USuburban_woman_01_PostAnimBP_C");
static_assert(offsetof(USuburban_woman_01_PostAnimBP_C, UberGraphFrame) == 0x0002A0, "Member 'USuburban_woman_01_PostAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USuburban_woman_01_PostAnimBP_C, AnimGraphNode_Root_69ECF3714CACDC75D157F1B6C57D7407) == 0x0002A8, "Member 'USuburban_woman_01_PostAnimBP_C::AnimGraphNode_Root_69ECF3714CACDC75D157F1B6C57D7407' has a wrong offset!");
static_assert(offsetof(USuburban_woman_01_PostAnimBP_C, AnimGraphNode_SubInput_F9A63B5D46F07B9B1F3330AB61AC31EF) == 0x0002C8, "Member 'USuburban_woman_01_PostAnimBP_C::AnimGraphNode_SubInput_F9A63B5D46F07B9B1F3330AB61AC31EF' has a wrong offset!");
static_assert(offsetof(USuburban_woman_01_PostAnimBP_C, AnimGraphNode_ApplyAdditive_2AF5EEEF45704877B195278E6D92732B) == 0x000310, "Member 'USuburban_woman_01_PostAnimBP_C::AnimGraphNode_ApplyAdditive_2AF5EEEF45704877B195278E6D92732B' has a wrong offset!");
static_assert(offsetof(USuburban_woman_01_PostAnimBP_C, AnimGraphNode_SequenceEvaluator_959B71424B0C492C46A35294D90D79E2) == 0x0003D8, "Member 'USuburban_woman_01_PostAnimBP_C::AnimGraphNode_SequenceEvaluator_959B71424B0C492C46A35294D90D79E2' has a wrong offset!");

}

