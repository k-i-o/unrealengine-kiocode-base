#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_ButtonCutCorner

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Basic_ButtonCutCorner_C_OnClicked__DelegateSignature final
{
public:
	class UBasic_ButtonCutCorner_C*               Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_ButtonCutCorner_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on Basic_ButtonCutCorner_C_OnClicked__DelegateSignature");
static_assert(sizeof(Basic_ButtonCutCorner_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on Basic_ButtonCutCorner_C_OnClicked__DelegateSignature");
static_assert(offsetof(Basic_ButtonCutCorner_C_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'Basic_ButtonCutCorner_C_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.ExecuteUbergraph_Basic_ButtonCutCorner
// 0x00A0 (0x00A0 - 0x0000)
struct Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3128[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       K2Node_DynamicCast_AsBasic_Tool_Tip;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3129[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_312A[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0070(0x0028)()
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsToggleOn;                     // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner) == 0x000008, "Wrong alignment on Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner");
static_assert(sizeof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner) == 0x0000A0, "Wrong size on Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, EntryPoint) == 0x000000, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, CallFunc_MenuColors_OutputColor) == 0x000008, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, K2Node_DynamicCast_AsBasic_Tool_Tip) == 0x000018, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::K2Node_DynamicCast_AsBasic_Tool_Tip' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, CallFunc_MenuColors_OutputColor_1) == 0x000024, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, CallFunc_MenuColors_OutputColor_2) == 0x000034, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, K2Node_MakeStruct_SlateColor_1) == 0x000070, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, CallFunc_IsHovered_ReturnValue) == 0x000098, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, CallFunc_BooleanOR_ReturnValue) == 0x000099, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner, K2Node_CustomEvent_IsToggleOn) == 0x00009A, "Member 'Basic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner::K2Node_CustomEvent_IsToggleOn' has a wrong offset!");

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Toggle
// 0x0001 (0x0001 - 0x0000)
struct Basic_ButtonCutCorner_C_Toggle final
{
public:
	bool                                          IsToggleOn;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ButtonCutCorner_C_Toggle) == 0x000001, "Wrong alignment on Basic_ButtonCutCorner_C_Toggle");
static_assert(sizeof(Basic_ButtonCutCorner_C_Toggle) == 0x000001, "Wrong size on Basic_ButtonCutCorner_C_Toggle");
static_assert(offsetof(Basic_ButtonCutCorner_C_Toggle, IsToggleOn) == 0x000000, "Member 'Basic_ButtonCutCorner_C_Toggle::IsToggleOn' has a wrong offset!");

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_ButtonCutCorner_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ButtonCutCorner_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_ButtonCutCorner_C_PreConstruct");
static_assert(sizeof(Basic_ButtonCutCorner_C_PreConstruct) == 0x000001, "Wrong size on Basic_ButtonCutCorner_C_PreConstruct");
static_assert(offsetof(Basic_ButtonCutCorner_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_ButtonCutCorner_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetFontSize
// 0x0060 (0x0060 - 0x0000)
struct Basic_ButtonCutCorner_C_SetFontSize final
{
public:
	int32                                         FontSize;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_312B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0008(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(Basic_ButtonCutCorner_C_SetFontSize) == 0x000008, "Wrong alignment on Basic_ButtonCutCorner_C_SetFontSize");
static_assert(sizeof(Basic_ButtonCutCorner_C_SetFontSize) == 0x000060, "Wrong size on Basic_ButtonCutCorner_C_SetFontSize");
static_assert(offsetof(Basic_ButtonCutCorner_C_SetFontSize, FontSize) == 0x000000, "Member 'Basic_ButtonCutCorner_C_SetFontSize::FontSize' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_SetFontSize, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'Basic_ButtonCutCorner_C_SetFontSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetButtonText
// 0x0050 (0x0050 - 0x0000)
struct Basic_ButtonCutCorner_C_SetButtonText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   OverrideControllerText;                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0030(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ButtonCutCorner_C_SetButtonText) == 0x000008, "Wrong alignment on Basic_ButtonCutCorner_C_SetButtonText");
static_assert(sizeof(Basic_ButtonCutCorner_C_SetButtonText) == 0x000050, "Wrong size on Basic_ButtonCutCorner_C_SetButtonText");
static_assert(offsetof(Basic_ButtonCutCorner_C_SetButtonText, Text) == 0x000000, "Member 'Basic_ButtonCutCorner_C_SetButtonText::Text' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_SetButtonText, OverrideControllerText) == 0x000018, "Member 'Basic_ButtonCutCorner_C_SetButtonText::OverrideControllerText' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_SetButtonText, CallFunc_TextToUpper_ReturnValue) == 0x000030, "Member 'Basic_ButtonCutCorner_C_SetButtonText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_SetButtonText, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000048, "Member 'Basic_ButtonCutCorner_C_SetButtonText::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");

// Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.IsPressed
// 0x0002 (0x0002 - 0x0000)
struct Basic_ButtonCutCorner_C_IsPressed final
{
public:
	bool                                          Param_IsPressed;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPressed_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ButtonCutCorner_C_IsPressed) == 0x000001, "Wrong alignment on Basic_ButtonCutCorner_C_IsPressed");
static_assert(sizeof(Basic_ButtonCutCorner_C_IsPressed) == 0x000002, "Wrong size on Basic_ButtonCutCorner_C_IsPressed");
static_assert(offsetof(Basic_ButtonCutCorner_C_IsPressed, Param_IsPressed) == 0x000000, "Member 'Basic_ButtonCutCorner_C_IsPressed::Param_IsPressed' has a wrong offset!");
static_assert(offsetof(Basic_ButtonCutCorner_C_IsPressed, CallFunc_IsPressed_ReturnValue) == 0x000001, "Member 'Basic_ButtonCutCorner_C_IsPressed::CallFunc_IsPressed_ReturnValue' has a wrong offset!");

}
