#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Perk_ToolTip

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip
// 0x00F0 (0x00F0 - 0x0000)
struct UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FDD[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRankDescription_ReturnValue;           // 0x0020(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0038(0x0018)()
	int32                                         CallFunc_GetRankCost_ReturnValue;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FDE[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0058(0x0018)()
	class UPerkAsset*                             K2Node_CustomEvent_Perk;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ClaimedTier;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FDF[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkAsset*                             K2Node_CustomEvent_PerkAsset;                      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Rank;                           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowRank;                       // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FE0[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPerkAsset* Perk, int32 ClaimedTier)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	EPerkTierState                                CallFunc_GetStateAtTier_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FE1[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRankTier_ReturnValue;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPerkUsageType                                CallFunc_GetUsageType_ReturnValue;                 // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InShowRank;                     // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FE2[0x2];                                     // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_PerkColorFromType_OutColor;               // 0x00BC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x00CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FE3[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkDelegateItem*                      CallFunc_GetDelegates_ReturnValue;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip) == 0x000008, "Wrong alignment on UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip");
static_assert(sizeof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip) == 0x0000F0, "Wrong size on UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, EntryPoint) == 0x000000, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_IsVisible_ReturnValue) == 0x000004, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_GetRankDescription_ReturnValue) == 0x000020, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_GetRankDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_TextToUpper_ReturnValue) == 0x000038, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_GetRankCost_ReturnValue) == 0x000050, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_GetRankCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_Conv_IntToText_ReturnValue) == 0x000058, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_CustomEvent_Perk) == 0x000070, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_CustomEvent_Perk' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_CustomEvent_ClaimedTier) == 0x000078, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_CustomEvent_ClaimedTier' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_CustomEvent_PerkAsset) == 0x000080, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_CustomEvent_PerkAsset' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_CustomEvent_Rank) == 0x000088, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_CustomEvent_Rank' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_CustomEvent_ShowRank) == 0x00008C, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_CustomEvent_ShowRank' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_GetStateAtTier_ReturnValue) == 0x0000A0, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_GetStateAtTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A1, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_GetRankTier_ReturnValue) == 0x0000A4, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_GetRankTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_PlayAnimation_ReturnValue) == 0x0000A8, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000B0, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_GetUsageType_ReturnValue) == 0x0000B8, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_GetUsageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_CustomEvent_InShowRank) == 0x0000B9, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_CustomEvent_InShowRank' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_PerkColorFromType_OutColor) == 0x0000BC, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_PerkColorFromType_OutColor' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_MenuColors_OutputColor) == 0x0000CC, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, CallFunc_GetDelegates_ReturnValue) == 0x0000E0, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::CallFunc_GetDelegates_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip, K2Node_Event_IsDesignTime) == 0x0000E8, "Member 'UI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Perk_ToolTip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Perk_ToolTip_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Perk_ToolTip_C_PreConstruct");
static_assert(sizeof(UI_Perk_ToolTip_C_PreConstruct) == 0x000001, "Wrong size on UI_Perk_ToolTip_C_PreConstruct");
static_assert(offsetof(UI_Perk_ToolTip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Perk_ToolTip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Show Rank
// 0x0001 (0x0001 - 0x0000)
struct UI_Perk_ToolTip_C_Show_Rank final
{
public:
	bool                                          InShowRank;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Perk_ToolTip_C_Show_Rank) == 0x000001, "Wrong alignment on UI_Perk_ToolTip_C_Show_Rank");
static_assert(sizeof(UI_Perk_ToolTip_C_Show_Rank) == 0x000001, "Wrong size on UI_Perk_ToolTip_C_Show_Rank");
static_assert(offsetof(UI_Perk_ToolTip_C_Show_Rank, InShowRank) == 0x000000, "Member 'UI_Perk_ToolTip_C_Show_Rank::InShowRank' has a wrong offset!");

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset
// 0x0010 (0x0010 - 0x0000)
struct UI_Perk_ToolTip_C_SetPerkAsset final
{
public:
	class UPerkAsset*                             Param_PerkAsset;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Rank;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowRank;                                          // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Perk_ToolTip_C_SetPerkAsset) == 0x000008, "Wrong alignment on UI_Perk_ToolTip_C_SetPerkAsset");
static_assert(sizeof(UI_Perk_ToolTip_C_SetPerkAsset) == 0x000010, "Wrong size on UI_Perk_ToolTip_C_SetPerkAsset");
static_assert(offsetof(UI_Perk_ToolTip_C_SetPerkAsset, Param_PerkAsset) == 0x000000, "Member 'UI_Perk_ToolTip_C_SetPerkAsset::Param_PerkAsset' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_SetPerkAsset, Param_Rank) == 0x000008, "Member 'UI_Perk_ToolTip_C_SetPerkAsset::Param_Rank' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_SetPerkAsset, ShowRank) == 0x00000C, "Member 'UI_Perk_ToolTip_C_SetPerkAsset::ShowRank' has a wrong offset!");

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event
// 0x0010 (0x0010 - 0x0000)
struct UI_Perk_ToolTip_C_OnPerkClaimed_Event final
{
public:
	class UPerkAsset*                             Perk;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClaimedTier;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Perk_ToolTip_C_OnPerkClaimed_Event) == 0x000008, "Wrong alignment on UI_Perk_ToolTip_C_OnPerkClaimed_Event");
static_assert(sizeof(UI_Perk_ToolTip_C_OnPerkClaimed_Event) == 0x000010, "Wrong size on UI_Perk_ToolTip_C_OnPerkClaimed_Event");
static_assert(offsetof(UI_Perk_ToolTip_C_OnPerkClaimed_Event, Perk) == 0x000000, "Member 'UI_Perk_ToolTip_C_OnPerkClaimed_Event::Perk' has a wrong offset!");
static_assert(offsetof(UI_Perk_ToolTip_C_OnPerkClaimed_Event, ClaimedTier) == 0x000008, "Member 'UI_Perk_ToolTip_C_OnPerkClaimed_Event::ClaimedTier' has a wrong offset!");

}
