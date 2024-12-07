#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextField_SeeThrough

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TextField_SeeThrough.TextField_SeeThrough_C.SetShowBG
// 0x0005 (0x0005 - 0x0000)
struct TextField_SeeThrough_C_SetShowBG final
{
public:
	bool                                          Param_ShowBG;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextField_SeeThrough_C_SetShowBG) == 0x000001, "Wrong alignment on TextField_SeeThrough_C_SetShowBG");
static_assert(sizeof(TextField_SeeThrough_C_SetShowBG) == 0x000005, "Wrong size on TextField_SeeThrough_C_SetShowBG");
static_assert(offsetof(TextField_SeeThrough_C_SetShowBG, Param_ShowBG) == 0x000000, "Member 'TextField_SeeThrough_C_SetShowBG::Param_ShowBG' has a wrong offset!");
static_assert(offsetof(TextField_SeeThrough_C_SetShowBG, Temp_bool_Variable) == 0x000001, "Member 'TextField_SeeThrough_C_SetShowBG::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TextField_SeeThrough_C_SetShowBG, Temp_byte_Variable) == 0x000002, "Member 'TextField_SeeThrough_C_SetShowBG::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TextField_SeeThrough_C_SetShowBG, Temp_byte_Variable_1) == 0x000003, "Member 'TextField_SeeThrough_C_SetShowBG::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TextField_SeeThrough_C_SetShowBG, K2Node_Select_Default) == 0x000004, "Member 'TextField_SeeThrough_C_SetShowBG::K2Node_Select_Default' has a wrong offset!");

// Function TextField_SeeThrough.TextField_SeeThrough_C.SetTextSize
// 0x0004 (0x0004 - 0x0000)
struct TextField_SeeThrough_C_SetTextSize final
{
public:
	int32                                         Param_TextSize;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextField_SeeThrough_C_SetTextSize) == 0x000004, "Wrong alignment on TextField_SeeThrough_C_SetTextSize");
static_assert(sizeof(TextField_SeeThrough_C_SetTextSize) == 0x000004, "Wrong size on TextField_SeeThrough_C_SetTextSize");
static_assert(offsetof(TextField_SeeThrough_C_SetTextSize, Param_TextSize) == 0x000000, "Member 'TextField_SeeThrough_C_SetTextSize::Param_TextSize' has a wrong offset!");

// Function TextField_SeeThrough.TextField_SeeThrough_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct TextField_SeeThrough_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TextField_SeeThrough_C_SetText) == 0x000008, "Wrong alignment on TextField_SeeThrough_C_SetText");
static_assert(sizeof(TextField_SeeThrough_C_SetText) == 0x000018, "Wrong size on TextField_SeeThrough_C_SetText");
static_assert(offsetof(TextField_SeeThrough_C_SetText, InText) == 0x000000, "Member 'TextField_SeeThrough_C_SetText::InText' has a wrong offset!");

// Function TextField_SeeThrough.TextField_SeeThrough_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TextField_SeeThrough_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextField_SeeThrough_C_PreConstruct) == 0x000001, "Wrong alignment on TextField_SeeThrough_C_PreConstruct");
static_assert(sizeof(TextField_SeeThrough_C_PreConstruct) == 0x000001, "Wrong size on TextField_SeeThrough_C_PreConstruct");
static_assert(offsetof(TextField_SeeThrough_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TextField_SeeThrough_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function TextField_SeeThrough.TextField_SeeThrough_C.ExecuteUbergraph_TextField_SeeThrough
// 0x0008 (0x0008 - 0x0000)
struct TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough) == 0x000004, "Wrong alignment on TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough");
static_assert(sizeof(TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough) == 0x000008, "Wrong size on TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough");
static_assert(offsetof(TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough, EntryPoint) == 0x000000, "Member 'TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough, K2Node_Event_IsDesignTime) == 0x000004, "Member 'TextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough::K2Node_Event_IsDesignTime' has a wrong offset!");

}

