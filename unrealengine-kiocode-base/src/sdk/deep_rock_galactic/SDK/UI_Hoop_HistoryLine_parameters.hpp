#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Hoop_HistoryLine

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.SetScore
// 0x0004 (0x0004 - 0x0000)
struct UI_Hoop_HistoryLine_C_SetScore final
{
public:
	int32                                         Score;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Hoop_HistoryLine_C_SetScore) == 0x000004, "Wrong alignment on UI_Hoop_HistoryLine_C_SetScore");
static_assert(sizeof(UI_Hoop_HistoryLine_C_SetScore) == 0x000004, "Wrong size on UI_Hoop_HistoryLine_C_SetScore");
static_assert(offsetof(UI_Hoop_HistoryLine_C_SetScore, Score) == 0x000000, "Member 'UI_Hoop_HistoryLine_C_SetScore::Score' has a wrong offset!");

// Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.ExecuteUbergraph_UI_Hoop_HistoryLine
// 0x0030 (0x0030 - 0x0000)
struct UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34A5[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Score;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34A6[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine) == 0x000008, "Wrong alignment on UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine");
static_assert(sizeof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine) == 0x000030, "Wrong size on UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine");
static_assert(offsetof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine, EntryPoint) == 0x000000, "Member 'UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine, Temp_bool_Variable) == 0x000004, "Member 'UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine, Temp_byte_Variable) == 0x000005, "Member 'UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine, Temp_byte_Variable_1) == 0x000006, "Member 'UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine, K2Node_CustomEvent_Score) == 0x000008, "Member 'UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine::K2Node_CustomEvent_Score' has a wrong offset!");
static_assert(offsetof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine, K2Node_Select_Default) == 0x000028, "Member 'UI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine::K2Node_Select_Default' has a wrong offset!");

}
