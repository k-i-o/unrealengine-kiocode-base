#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_ScrollArrow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Basic_ScrollArrow.Basic_ScrollArrow_C.ExecuteUbergraph_Basic_ScrollArrow
// 0x0028 (0x0028 - 0x0000)
struct Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A49[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow) == 0x000004, "Wrong alignment on Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow");
static_assert(sizeof(Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow) == 0x000028, "Wrong size on Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow");
static_assert(offsetof(Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow, EntryPoint) == 0x000000, "Member 'Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow, CallFunc_MenuColors_OutputColor) == 0x000004, "Member 'Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow, K2Node_Event_IsDesignTime) == 0x000014, "Member 'Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow, CallFunc_MenuColors_OutputColor_1) == 0x000018, "Member 'Basic_ScrollArrow_C_ExecuteUbergraph_Basic_ScrollArrow::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");

// Function Basic_ScrollArrow.Basic_ScrollArrow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_ScrollArrow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ScrollArrow_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_ScrollArrow_C_PreConstruct");
static_assert(sizeof(Basic_ScrollArrow_C_PreConstruct) == 0x000001, "Wrong size on Basic_ScrollArrow_C_PreConstruct");
static_assert(offsetof(Basic_ScrollArrow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_ScrollArrow_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
