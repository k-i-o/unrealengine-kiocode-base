#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_RetirementRewards

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function WND_RetirementRewards.WND_RetirementRewards_C.GetData
// 0x0150 (0x0150 - 0x0000)
struct WND_RetirementRewards_C_GetData final
{
public:
	struct FClaimableRewardView                   OutData;                                           // 0x0000(0x0088)(Parm, OutParm, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339D[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDialogDataAsset*                       Temp_object_Variable;                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogDataAsset*                       Temp_object_Variable_1;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FClaimableRewardEntry>          CallFunc_ClaimPromotionRewards_OutRewards;         // 0x00A8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_ClaimPromotionRewards_OutFirstPromotion;  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClaimPromotionRewards_ReturnValue;        // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339E[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDialogDataAsset*                       K2Node_Select_Default;                             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClaimableRewardView                   K2Node_MakeStruct_ClaimableRewardView;             // 0x00C8(0x0088)(ContainsInstancedReference)
};
static_assert(alignof(WND_RetirementRewards_C_GetData) == 0x000008, "Wrong alignment on WND_RetirementRewards_C_GetData");
static_assert(sizeof(WND_RetirementRewards_C_GetData) == 0x000150, "Wrong size on WND_RetirementRewards_C_GetData");
static_assert(offsetof(WND_RetirementRewards_C_GetData, OutData) == 0x000000, "Member 'WND_RetirementRewards_C_GetData::OutData' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, Temp_bool_Variable) == 0x000088, "Member 'WND_RetirementRewards_C_GetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, Temp_object_Variable) == 0x000090, "Member 'WND_RetirementRewards_C_GetData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, Temp_object_Variable_1) == 0x000098, "Member 'WND_RetirementRewards_C_GetData::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000A0, "Member 'WND_RetirementRewards_C_GetData::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, CallFunc_ClaimPromotionRewards_OutRewards) == 0x0000A8, "Member 'WND_RetirementRewards_C_GetData::CallFunc_ClaimPromotionRewards_OutRewards' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, CallFunc_ClaimPromotionRewards_OutFirstPromotion) == 0x0000B8, "Member 'WND_RetirementRewards_C_GetData::CallFunc_ClaimPromotionRewards_OutFirstPromotion' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, CallFunc_ClaimPromotionRewards_ReturnValue) == 0x0000B9, "Member 'WND_RetirementRewards_C_GetData::CallFunc_ClaimPromotionRewards_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, K2Node_Select_Default) == 0x0000C0, "Member 'WND_RetirementRewards_C_GetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WND_RetirementRewards_C_GetData, K2Node_MakeStruct_ClaimableRewardView) == 0x0000C8, "Member 'WND_RetirementRewards_C_GetData::K2Node_MakeStruct_ClaimableRewardView' has a wrong offset!");

}
