#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Header_ButtonCutCorner

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Header_ButtonCutCorner_C_OnClicked__DelegateSignature final
{
public:
	class UHeader_ButtonCutCorner_C*              Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Header_ButtonCutCorner_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on Header_ButtonCutCorner_C_OnClicked__DelegateSignature");
static_assert(sizeof(Header_ButtonCutCorner_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on Header_ButtonCutCorner_C_OnClicked__DelegateSignature");
static_assert(offsetof(Header_ButtonCutCorner_C_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'Header_ButtonCutCorner_C_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.ExecuteUbergraph_Header_ButtonCutCorner
// 0x0100 (0x0100 - 0x0000)
struct Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36BD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36BE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36BF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	class UBasic_ToolTip_C*                       K2Node_DynamicCast_AsBasic_Tool_Tip;               // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsToggleOn;                     // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36C0[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_3;                 // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C1[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0090(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00B8(0x0028)()
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36C2[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InShow;                         // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner) == 0x000008, "Wrong alignment on Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner");
static_assert(sizeof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner) == 0x000100, "Wrong size on Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, EntryPoint) == 0x000000, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::EntryPoint' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, Temp_bool_Variable) == 0x000004, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, Temp_float_Variable) == 0x000008, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, Temp_float_Variable_1) == 0x00000C, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_Event_IsDesignTime) == 0x000010, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_MenuColors_OutputColor) == 0x000014, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_MenuColors_OutputColor_1) == 0x000024, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_DynamicCast_AsBasic_Tool_Tip) == 0x000060, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_DynamicCast_AsBasic_Tool_Tip' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_CustomEvent_IsToggleOn) == 0x000069, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_CustomEvent_IsToggleOn' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_MenuColors_OutputColor_2) == 0x00006C, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_MenuColors_OutputColor_3) == 0x00007C, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_MenuColors_OutputColor_3' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_MakeStruct_SlateColor_1) == 0x000090, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_MakeStruct_SlateColor_2) == 0x0000B8, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_IsHovered_ReturnValue) == 0x0000E0, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_BooleanOR_ReturnValue) == 0x0000E1, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_Select_Default) == 0x0000E4, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0000E8, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_MakeVector2D_ReturnValue) == 0x0000F0, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, K2Node_CustomEvent_InShow) == 0x0000F8, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::K2Node_CustomEvent_InShow' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_SelectVisibility_IsVisible) == 0x0000F9, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_SelectVisibility_VisibilityChanged) == 0x0000FA, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner, CallFunc_SelectVisibility_New_Visibility) == 0x0000FB, "Member 'Header_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.ToggleNotificationIcon
// 0x0001 (0x0001 - 0x0000)
struct Header_ButtonCutCorner_C_ToggleNotificationIcon final
{
public:
	bool                                          InShow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Header_ButtonCutCorner_C_ToggleNotificationIcon) == 0x000001, "Wrong alignment on Header_ButtonCutCorner_C_ToggleNotificationIcon");
static_assert(sizeof(Header_ButtonCutCorner_C_ToggleNotificationIcon) == 0x000001, "Wrong size on Header_ButtonCutCorner_C_ToggleNotificationIcon");
static_assert(offsetof(Header_ButtonCutCorner_C_ToggleNotificationIcon, InShow) == 0x000000, "Member 'Header_ButtonCutCorner_C_ToggleNotificationIcon::InShow' has a wrong offset!");

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Toggle
// 0x0001 (0x0001 - 0x0000)
struct Header_ButtonCutCorner_C_Toggle final
{
public:
	bool                                          IsToggleOn;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Header_ButtonCutCorner_C_Toggle) == 0x000001, "Wrong alignment on Header_ButtonCutCorner_C_Toggle");
static_assert(sizeof(Header_ButtonCutCorner_C_Toggle) == 0x000001, "Wrong size on Header_ButtonCutCorner_C_Toggle");
static_assert(offsetof(Header_ButtonCutCorner_C_Toggle, IsToggleOn) == 0x000000, "Member 'Header_ButtonCutCorner_C_Toggle::IsToggleOn' has a wrong offset!");

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Header_ButtonCutCorner_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Header_ButtonCutCorner_C_PreConstruct) == 0x000001, "Wrong alignment on Header_ButtonCutCorner_C_PreConstruct");
static_assert(sizeof(Header_ButtonCutCorner_C_PreConstruct) == 0x000001, "Wrong size on Header_ButtonCutCorner_C_PreConstruct");
static_assert(offsetof(Header_ButtonCutCorner_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Header_ButtonCutCorner_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.SetFontSize
// 0x0060 (0x0060 - 0x0000)
struct Header_ButtonCutCorner_C_SetFontSize final
{
public:
	int32                                         FontSize;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0008(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(Header_ButtonCutCorner_C_SetFontSize) == 0x000008, "Wrong alignment on Header_ButtonCutCorner_C_SetFontSize");
static_assert(sizeof(Header_ButtonCutCorner_C_SetFontSize) == 0x000060, "Wrong size on Header_ButtonCutCorner_C_SetFontSize");
static_assert(offsetof(Header_ButtonCutCorner_C_SetFontSize, FontSize) == 0x000000, "Member 'Header_ButtonCutCorner_C_SetFontSize::FontSize' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_SetFontSize, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'Header_ButtonCutCorner_C_SetFontSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.SetButtonText
// 0x0038 (0x0038 - 0x0000)
struct Header_ButtonCutCorner_C_SetButtonText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Header_ButtonCutCorner_C_SetButtonText) == 0x000008, "Wrong alignment on Header_ButtonCutCorner_C_SetButtonText");
static_assert(sizeof(Header_ButtonCutCorner_C_SetButtonText) == 0x000038, "Wrong size on Header_ButtonCutCorner_C_SetButtonText");
static_assert(offsetof(Header_ButtonCutCorner_C_SetButtonText, Text) == 0x000000, "Member 'Header_ButtonCutCorner_C_SetButtonText::Text' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_SetButtonText, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'Header_ButtonCutCorner_C_SetButtonText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_SetButtonText, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000030, "Member 'Header_ButtonCutCorner_C_SetButtonText::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");

// Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.IsPressed
// 0x0002 (0x0002 - 0x0000)
struct Header_ButtonCutCorner_C_IsPressed final
{
public:
	bool                                          Param_IsPressed;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPressed_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Header_ButtonCutCorner_C_IsPressed) == 0x000001, "Wrong alignment on Header_ButtonCutCorner_C_IsPressed");
static_assert(sizeof(Header_ButtonCutCorner_C_IsPressed) == 0x000002, "Wrong size on Header_ButtonCutCorner_C_IsPressed");
static_assert(offsetof(Header_ButtonCutCorner_C_IsPressed, Param_IsPressed) == 0x000000, "Member 'Header_ButtonCutCorner_C_IsPressed::Param_IsPressed' has a wrong offset!");
static_assert(offsetof(Header_ButtonCutCorner_C_IsPressed, CallFunc_IsPressed_ReturnValue) == 0x000001, "Member 'Header_ButtonCutCorner_C_IsPressed::CallFunc_IsPressed_ReturnValue' has a wrong offset!");

}

