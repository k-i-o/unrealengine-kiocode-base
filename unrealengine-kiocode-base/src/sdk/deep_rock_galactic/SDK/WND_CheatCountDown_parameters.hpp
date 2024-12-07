#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_CheatCountDown

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WND_CheatCountDown.WND_CheatCountDown_C.ExecuteUbergraph_WND_CheatCountDown
// 0x0070 (0x0070 - 0x0000)
struct WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_FCeil64_ReturnValue;                      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3630[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0050(0x0018)()
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown) == 0x000008, "Wrong alignment on WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown");
static_assert(sizeof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown) == 0x000070, "Wrong size on WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown");
static_assert(offsetof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown, EntryPoint) == 0x000000, "Member 'WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown::EntryPoint' has a wrong offset!");
static_assert(offsetof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown, K2Node_Event_MyGeometry) == 0x000004, "Member 'WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown, CallFunc_FCeil64_ReturnValue) == 0x000040, "Member 'WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown::CallFunc_FCeil64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000048, "Member 'WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000050, "Member 'WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000068, "Member 'WND_CheatCountDown_C_ExecuteUbergraph_WND_CheatCountDown::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function WND_CheatCountDown.WND_CheatCountDown_C.Tick
// 0x003C (0x003C - 0x0000)
struct WND_CheatCountDown_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WND_CheatCountDown_C_Tick) == 0x000004, "Wrong alignment on WND_CheatCountDown_C_Tick");
static_assert(sizeof(WND_CheatCountDown_C_Tick) == 0x00003C, "Wrong size on WND_CheatCountDown_C_Tick");
static_assert(offsetof(WND_CheatCountDown_C_Tick, MyGeometry) == 0x000000, "Member 'WND_CheatCountDown_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WND_CheatCountDown_C_Tick, InDeltaTime) == 0x000038, "Member 'WND_CheatCountDown_C_Tick::InDeltaTime' has a wrong offset!");

}

