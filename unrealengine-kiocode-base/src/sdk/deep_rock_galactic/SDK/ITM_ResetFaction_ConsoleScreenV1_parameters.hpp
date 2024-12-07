#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_ResetFaction_ConsoleScreenV1

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1
// 0x00B8 (0x00B8 - 0x0000)
struct ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_410E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommunityGoalFaction*                  K2Node_CustomEvent_Faction;                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0030(0x0088)()
};
static_assert(alignof(ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1) == 0x000008, "Wrong alignment on ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1");
static_assert(sizeof(ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1) == 0x0000B8, "Wrong size on ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1, EntryPoint) == 0x000000, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1, K2Node_Event_IsDesignTime) == 0x000020, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1, K2Node_CustomEvent_Faction) == 0x000028, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1::K2Node_CustomEvent_Faction' has a wrong offset!");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.Set Faction
// 0x0008 (0x0008 - 0x0000)
struct ITM_ResetFaction_ConsoleScreenV1_C_Set_Faction final
{
public:
	class UCommunityGoalFaction*                  Faction;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_ResetFaction_ConsoleScreenV1_C_Set_Faction) == 0x000008, "Wrong alignment on ITM_ResetFaction_ConsoleScreenV1_C_Set_Faction");
static_assert(sizeof(ITM_ResetFaction_ConsoleScreenV1_C_Set_Faction) == 0x000008, "Wrong size on ITM_ResetFaction_ConsoleScreenV1_C_Set_Faction");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_Set_Faction, Faction) == 0x000000, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_Set_Faction::Faction' has a wrong offset!");

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_ResetFaction_ConsoleScreenV1_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_ResetFaction_ConsoleScreenV1_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_ResetFaction_ConsoleScreenV1_C_PreConstruct");
static_assert(sizeof(ITM_ResetFaction_ConsoleScreenV1_C_PreConstruct) == 0x000001, "Wrong size on ITM_ResetFaction_ConsoleScreenV1_C_PreConstruct");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.CurrentFactionID
// 0x000C (0x000C - 0x0000)
struct ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID) == 0x000004, "Wrong alignment on ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID");
static_assert(sizeof(ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID) == 0x00000C, "Wrong size on ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID, ReturnValue) == 0x000000, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'ITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

}

