#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Menu_ColorBarVertical

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ENUM_PixelWidths_structs.hpp"


namespace SDK::Params
{

// Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.ExecuteUbergraph_Basic_Menu_ColorBarVertical
// 0x002C (0x002C - 0x0000)
struct Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_PixelWidths                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3786[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3787[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical) == 0x000004, "Wrong alignment on Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical");
static_assert(sizeof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical) == 0x00002C, "Wrong size on Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical, EntryPoint) == 0x000000, "Member 'Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical, Temp_byte_Variable) == 0x000004, "Member 'Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical, CallFunc_MenuColors_OutputColor) == 0x000008, "Member 'Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical, Temp_float_Variable) == 0x000018, "Member 'Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical, Temp_float_Variable_1) == 0x00001C, "Member 'Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical, Temp_float_Variable_2) == 0x000020, "Member 'Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical, K2Node_Event_IsDesignTime) == 0x000024, "Member 'Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical, K2Node_Select_Default) == 0x000028, "Member 'Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical::K2Node_Select_Default' has a wrong offset!");

// Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_Menu_ColorBarVertical_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Menu_ColorBarVertical_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_Menu_ColorBarVertical_C_PreConstruct");
static_assert(sizeof(Basic_Menu_ColorBarVertical_C_PreConstruct) == 0x000001, "Wrong size on Basic_Menu_ColorBarVertical_C_PreConstruct");
static_assert(offsetof(Basic_Menu_ColorBarVertical_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_Menu_ColorBarVertical_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

