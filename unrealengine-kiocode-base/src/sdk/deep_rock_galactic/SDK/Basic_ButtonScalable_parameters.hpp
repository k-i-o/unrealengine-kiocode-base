#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_ButtonScalable

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.ExecuteUbergraph_Basic_ButtonScalable
// 0x0070 (0x0070 - 0x0000)
struct Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FBA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	class UBasic_ToolTip_C*                       K2Node_DynamicCast_AsBasic_Tool_Tip;               // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable) == 0x000008, "Wrong alignment on Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable");
static_assert(sizeof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable) == 0x000070, "Wrong size on Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable");
static_assert(offsetof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable, EntryPoint) == 0x000000, "Member 'Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable, CallFunc_MenuColors_OutputColor) == 0x000008, "Member 'Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable, CallFunc_MenuColors_OutputColor_1) == 0x000018, "Member 'Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable, CallFunc_MenuColors_OutputColor_2) == 0x000028, "Member 'Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable, K2Node_DynamicCast_AsBasic_Tool_Tip) == 0x000060, "Member 'Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable::K2Node_DynamicCast_AsBasic_Tool_Tip' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'Basic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_ButtonScalable_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ButtonScalable_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_ButtonScalable_C_PreConstruct");
static_assert(sizeof(Basic_ButtonScalable_C_PreConstruct) == 0x000001, "Wrong size on Basic_ButtonScalable_C_PreConstruct");
static_assert(offsetof(Basic_ButtonScalable_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_ButtonScalable_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetFontSize
// 0x0060 (0x0060 - 0x0000)
struct Basic_ButtonScalable_C_SetFontSize final
{
public:
	int32                                         FontSize;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FBB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0008(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(Basic_ButtonScalable_C_SetFontSize) == 0x000008, "Wrong alignment on Basic_ButtonScalable_C_SetFontSize");
static_assert(sizeof(Basic_ButtonScalable_C_SetFontSize) == 0x000060, "Wrong size on Basic_ButtonScalable_C_SetFontSize");
static_assert(offsetof(Basic_ButtonScalable_C_SetFontSize, FontSize) == 0x000000, "Member 'Basic_ButtonScalable_C_SetFontSize::FontSize' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_SetFontSize, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'Basic_ButtonScalable_C_SetFontSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetButtonText
// 0x0030 (0x0030 - 0x0000)
struct Basic_ButtonScalable_C_SetButtonText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
};
static_assert(alignof(Basic_ButtonScalable_C_SetButtonText) == 0x000008, "Wrong alignment on Basic_ButtonScalable_C_SetButtonText");
static_assert(sizeof(Basic_ButtonScalable_C_SetButtonText) == 0x000030, "Wrong size on Basic_ButtonScalable_C_SetButtonText");
static_assert(offsetof(Basic_ButtonScalable_C_SetButtonText, Text) == 0x000000, "Member 'Basic_ButtonScalable_C_SetButtonText::Text' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_SetButtonText, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'Basic_ButtonScalable_C_SetButtonText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.IsPressed
// 0x0002 (0x0002 - 0x0000)
struct Basic_ButtonScalable_C_IsPressed final
{
public:
	bool                                          Param_IsPressed;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPressed_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ButtonScalable_C_IsPressed) == 0x000001, "Wrong alignment on Basic_ButtonScalable_C_IsPressed");
static_assert(sizeof(Basic_ButtonScalable_C_IsPressed) == 0x000002, "Wrong size on Basic_ButtonScalable_C_IsPressed");
static_assert(offsetof(Basic_ButtonScalable_C_IsPressed, Param_IsPressed) == 0x000000, "Member 'Basic_ButtonScalable_C_IsPressed::Param_IsPressed' has a wrong offset!");
static_assert(offsetof(Basic_ButtonScalable_C_IsPressed, CallFunc_IsPressed_ReturnValue) == 0x000001, "Member 'Basic_ButtonScalable_C_IsPressed::CallFunc_IsPressed_ReturnValue' has a wrong offset!");

}

