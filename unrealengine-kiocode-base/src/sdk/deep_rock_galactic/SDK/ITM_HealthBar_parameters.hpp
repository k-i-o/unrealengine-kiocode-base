#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_HealthBar

#include "Basic.hpp"


namespace SDK::Params
{

// Function ITM_HealthBar.ITM_HealthBar_C.ExecuteUbergraph_ITM_HealthBar
// 0x000C (0x000C - 0x0000)
struct ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B74[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Percent;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar) == 0x000004, "Wrong alignment on ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar");
static_assert(sizeof(ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar) == 0x00000C, "Wrong size on ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar");
static_assert(offsetof(ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar, EntryPoint) == 0x000000, "Member 'ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar, K2Node_CustomEvent_Percent) == 0x000008, "Member 'ITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar::K2Node_CustomEvent_Percent' has a wrong offset!");

// Function ITM_HealthBar.ITM_HealthBar_C.SetHealth
// 0x0004 (0x0004 - 0x0000)
struct ITM_HealthBar_C_SetHealth final
{
public:
	float                                         Percent;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_HealthBar_C_SetHealth) == 0x000004, "Wrong alignment on ITM_HealthBar_C_SetHealth");
static_assert(sizeof(ITM_HealthBar_C_SetHealth) == 0x000004, "Wrong size on ITM_HealthBar_C_SetHealth");
static_assert(offsetof(ITM_HealthBar_C_SetHealth, Percent) == 0x000000, "Member 'ITM_HealthBar_C_SetHealth::Percent' has a wrong offset!");

// Function ITM_HealthBar.ITM_HealthBar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_HealthBar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_HealthBar_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_HealthBar_C_PreConstruct");
static_assert(sizeof(ITM_HealthBar_C_PreConstruct) == 0x000001, "Wrong size on ITM_HealthBar_C_PreConstruct");
static_assert(offsetof(ITM_HealthBar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_HealthBar_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
