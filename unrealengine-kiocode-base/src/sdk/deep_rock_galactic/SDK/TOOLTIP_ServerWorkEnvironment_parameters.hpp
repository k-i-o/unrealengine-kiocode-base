#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TOOLTIP_ServerWorkEnvironment

#include "Basic.hpp"


namespace SDK::Params
{

// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct TOOLTIP_ServerWorkEnvironment_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TOOLTIP_ServerWorkEnvironment_C_SetText) == 0x000008, "Wrong alignment on TOOLTIP_ServerWorkEnvironment_C_SetText");
static_assert(sizeof(TOOLTIP_ServerWorkEnvironment_C_SetText) == 0x000018, "Wrong size on TOOLTIP_ServerWorkEnvironment_C_SetText");
static_assert(offsetof(TOOLTIP_ServerWorkEnvironment_C_SetText, InText) == 0x000000, "Member 'TOOLTIP_ServerWorkEnvironment_C_SetText::InText' has a wrong offset!");

// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TOOLTIP_ServerWorkEnvironment_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TOOLTIP_ServerWorkEnvironment_C_PreConstruct) == 0x000001, "Wrong alignment on TOOLTIP_ServerWorkEnvironment_C_PreConstruct");
static_assert(sizeof(TOOLTIP_ServerWorkEnvironment_C_PreConstruct) == 0x000001, "Wrong size on TOOLTIP_ServerWorkEnvironment_C_PreConstruct");
static_assert(offsetof(TOOLTIP_ServerWorkEnvironment_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TOOLTIP_ServerWorkEnvironment_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment
// 0x0008 (0x0008 - 0x0000)
struct TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment) == 0x000004, "Wrong alignment on TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment");
static_assert(sizeof(TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment) == 0x000008, "Wrong size on TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment");
static_assert(offsetof(TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment, EntryPoint) == 0x000000, "Member 'TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment::EntryPoint' has a wrong offset!");
static_assert(offsetof(TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment, K2Node_Event_IsDesignTime) == 0x000004, "Member 'TOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment::K2Node_Event_IsDesignTime' has a wrong offset!");

}

