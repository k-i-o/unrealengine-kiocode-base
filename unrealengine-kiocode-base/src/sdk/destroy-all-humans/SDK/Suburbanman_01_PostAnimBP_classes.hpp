#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Suburbanman_01_PostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass suburbanman_01_PostAnimBP.suburbanman_01_PostAnimBP_C
// 0x0188 (0x0420 - 0x0298)
class USuburbanman_01_PostAnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2328[0x8];                                     // 0x0298(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_9FE307B34E76B5E7990FEE997C486692; // 0x02A8(0x0020)()
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_AB2897BA4917CA0BCF14FCB7EA15EF99; // 0x02C8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_3C5AA4CC470DC1690CEBE2B24EFAB843; // 0x0310(0x00C8)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_64214F2F426FCD184ECD93BE0647AE3B; // 0x03D8(0x0048)()

public:
	void ExecuteUbergraph_suburbanman_01_PostAnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"suburbanman_01_PostAnimBP_C">();
	}
	static class USuburbanman_01_PostAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USuburbanman_01_PostAnimBP_C>();
	}
};
static_assert(alignof(USuburbanman_01_PostAnimBP_C) == 0x000008, "Wrong alignment on USuburbanman_01_PostAnimBP_C");
static_assert(sizeof(USuburbanman_01_PostAnimBP_C) == 0x000420, "Wrong size on USuburbanman_01_PostAnimBP_C");
static_assert(offsetof(USuburbanman_01_PostAnimBP_C, UberGraphFrame) == 0x0002A0, "Member 'USuburbanman_01_PostAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USuburbanman_01_PostAnimBP_C, AnimGraphNode_Root_9FE307B34E76B5E7990FEE997C486692) == 0x0002A8, "Member 'USuburbanman_01_PostAnimBP_C::AnimGraphNode_Root_9FE307B34E76B5E7990FEE997C486692' has a wrong offset!");
static_assert(offsetof(USuburbanman_01_PostAnimBP_C, AnimGraphNode_SubInput_AB2897BA4917CA0BCF14FCB7EA15EF99) == 0x0002C8, "Member 'USuburbanman_01_PostAnimBP_C::AnimGraphNode_SubInput_AB2897BA4917CA0BCF14FCB7EA15EF99' has a wrong offset!");
static_assert(offsetof(USuburbanman_01_PostAnimBP_C, AnimGraphNode_ApplyAdditive_3C5AA4CC470DC1690CEBE2B24EFAB843) == 0x000310, "Member 'USuburbanman_01_PostAnimBP_C::AnimGraphNode_ApplyAdditive_3C5AA4CC470DC1690CEBE2B24EFAB843' has a wrong offset!");
static_assert(offsetof(USuburbanman_01_PostAnimBP_C, AnimGraphNode_SequenceEvaluator_64214F2F426FCD184ECD93BE0647AE3B) == 0x0003D8, "Member 'USuburbanman_01_PostAnimBP_C::AnimGraphNode_SequenceEvaluator_64214F2F426FCD184ECD93BE0647AE3B' has a wrong offset!");

}
