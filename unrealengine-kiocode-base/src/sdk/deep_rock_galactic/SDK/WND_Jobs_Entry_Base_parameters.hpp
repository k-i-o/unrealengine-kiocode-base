#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_Jobs_Entry_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct WND_Jobs_Entry_Base_C_SetData final
{
public:
	class UCampaign*                              Campaign;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WND_Jobs_Entry_Base_C_SetData) == 0x000008, "Wrong alignment on WND_Jobs_Entry_Base_C_SetData");
static_assert(sizeof(WND_Jobs_Entry_Base_C_SetData) == 0x000008, "Wrong size on WND_Jobs_Entry_Base_C_SetData");
static_assert(offsetof(WND_Jobs_Entry_Base_C_SetData, Campaign) == 0x000000, "Member 'WND_Jobs_Entry_Base_C_SetData::Campaign' has a wrong offset!");

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base
// 0x0010 (0x0010 - 0x0000)
struct WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCampaign*                              K2Node_CustomEvent_Campaign;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base) == 0x000008, "Wrong alignment on WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base");
static_assert(sizeof(WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base) == 0x000010, "Wrong size on WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base");
static_assert(offsetof(WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base, EntryPoint) == 0x000000, "Member 'WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base, K2Node_CustomEvent_Campaign) == 0x000008, "Member 'WND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base::K2Node_CustomEvent_Campaign' has a wrong offset!");

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WND_Jobs_Entry_Base_C_Unfolded__DelegateSignature final
{
public:
	class UWND_Jobs_Entry_Base_C*                 Entry;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WND_Jobs_Entry_Base_C_Unfolded__DelegateSignature) == 0x000008, "Wrong alignment on WND_Jobs_Entry_Base_C_Unfolded__DelegateSignature");
static_assert(sizeof(WND_Jobs_Entry_Base_C_Unfolded__DelegateSignature) == 0x000008, "Wrong size on WND_Jobs_Entry_Base_C_Unfolded__DelegateSignature");
static_assert(offsetof(WND_Jobs_Entry_Base_C_Unfolded__DelegateSignature, Entry) == 0x000000, "Member 'WND_Jobs_Entry_Base_C_Unfolded__DelegateSignature::Entry' has a wrong offset!");

}

