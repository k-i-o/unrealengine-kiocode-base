#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_FlatButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ENUM_MenuColors_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Basic_FlatButton.Basic_FlatButton_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Basic_FlatButton_C_OnClicked__DelegateSignature final
{
public:
	class UBasic_FlatButton_C*                    Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_FlatButton_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on Basic_FlatButton_C_OnClicked__DelegateSignature");
static_assert(sizeof(Basic_FlatButton_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on Basic_FlatButton_C_OnClicked__DelegateSignature");
static_assert(offsetof(Basic_FlatButton_C_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'Basic_FlatButton_C_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function Basic_FlatButton.Basic_FlatButton_C.ExecuteUbergraph_Basic_FlatButton
// 0x00B8 (0x00B8 - 0x0000)
struct Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A6C[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0008(0x0018)()
	bool                                          K2Node_CustomEvent_UpperCase;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A6D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0028(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0040(0x0018)()
	int32                                         K2Node_CustomEvent_FontSize;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A6E[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0060(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton) == 0x000008, "Wrong alignment on Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton");
static_assert(sizeof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton) == 0x0000B8, "Wrong size on Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, EntryPoint) == 0x000000, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, Temp_bool_Variable) == 0x000004, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, K2Node_Event_IsDesignTime) == 0x000005, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, K2Node_CustomEvent_Text) == 0x000008, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, K2Node_CustomEvent_UpperCase) == 0x000020, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::K2Node_CustomEvent_UpperCase' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, CallFunc_TextToUpper_ReturnValue) == 0x000028, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, K2Node_Select_Default) == 0x000040, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, K2Node_CustomEvent_FontSize) == 0x000058, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::K2Node_CustomEvent_FontSize' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton, K2Node_MakeStruct_SlateFontInfo) == 0x000060, "Member 'Basic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function Basic_FlatButton.Basic_FlatButton_C.Set Font Size
// 0x0004 (0x0004 - 0x0000)
struct Basic_FlatButton_C_Set_Font_Size final
{
public:
	int32                                         Param_FontSize;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_FlatButton_C_Set_Font_Size) == 0x000004, "Wrong alignment on Basic_FlatButton_C_Set_Font_Size");
static_assert(sizeof(Basic_FlatButton_C_Set_Font_Size) == 0x000004, "Wrong size on Basic_FlatButton_C_Set_Font_Size");
static_assert(offsetof(Basic_FlatButton_C_Set_Font_Size, Param_FontSize) == 0x000000, "Member 'Basic_FlatButton_C_Set_Font_Size::Param_FontSize' has a wrong offset!");

// Function Basic_FlatButton.Basic_FlatButton_C.Set Text
// 0x0020 (0x0020 - 0x0000)
struct Basic_FlatButton_C_Set_Text final
{
public:
	class FText                                   Param_Text;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Param_UpperCase;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_FlatButton_C_Set_Text) == 0x000008, "Wrong alignment on Basic_FlatButton_C_Set_Text");
static_assert(sizeof(Basic_FlatButton_C_Set_Text) == 0x000020, "Wrong size on Basic_FlatButton_C_Set_Text");
static_assert(offsetof(Basic_FlatButton_C_Set_Text, Param_Text) == 0x000000, "Member 'Basic_FlatButton_C_Set_Text::Param_Text' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_Set_Text, Param_UpperCase) == 0x000018, "Member 'Basic_FlatButton_C_Set_Text::Param_UpperCase' has a wrong offset!");

// Function Basic_FlatButton.Basic_FlatButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_FlatButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_FlatButton_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_FlatButton_C_PreConstruct");
static_assert(sizeof(Basic_FlatButton_C_PreConstruct) == 0x000001, "Wrong size on Basic_FlatButton_C_PreConstruct");
static_assert(offsetof(Basic_FlatButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_FlatButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_FlatButton.Basic_FlatButton_C.CreateMenuStyle
// 0x0150 (0x0150 - 0x0000)
struct Basic_FlatButton_C_CreateMenuStyle final
{
public:
	ENUM_MenuColors                               ColorSelector;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A6F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            SlateBrush;                                        // 0x0008(0x0088)(Parm, OutParm)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00A0(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00C8(0x0088)()
};
static_assert(alignof(Basic_FlatButton_C_CreateMenuStyle) == 0x000008, "Wrong alignment on Basic_FlatButton_C_CreateMenuStyle");
static_assert(sizeof(Basic_FlatButton_C_CreateMenuStyle) == 0x000150, "Wrong size on Basic_FlatButton_C_CreateMenuStyle");
static_assert(offsetof(Basic_FlatButton_C_CreateMenuStyle, ColorSelector) == 0x000000, "Member 'Basic_FlatButton_C_CreateMenuStyle::ColorSelector' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_CreateMenuStyle, SlateBrush) == 0x000008, "Member 'Basic_FlatButton_C_CreateMenuStyle::SlateBrush' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_CreateMenuStyle, CallFunc_MenuColors_OutputColor) == 0x000090, "Member 'Basic_FlatButton_C_CreateMenuStyle::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_CreateMenuStyle, K2Node_MakeStruct_SlateColor) == 0x0000A0, "Member 'Basic_FlatButton_C_CreateMenuStyle::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_CreateMenuStyle, K2Node_MakeStruct_SlateBrush) == 0x0000C8, "Member 'Basic_FlatButton_C_CreateMenuStyle::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function Basic_FlatButton.Basic_FlatButton_C.SetStyle
// 0x03F8 (0x03F8 - 0x0000)
struct Basic_FlatButton_C_SetStyle final
{
public:
	ENUM_MenuColors                               InBaseColor;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               InHoverColor;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               InTextColor;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               InTextHoverColor;                                  // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A70[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateSound                            K2Node_MakeStruct_SlateSound;                      // 0x0008(0x0018)(NoDestructor)
	struct FSlateSound                            K2Node_MakeStruct_SlateSound_1;                    // 0x0020(0x0018)(NoDestructor)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	struct FSlateBrush                            CallFunc_CreateMenuStyle_SlateBrush;               // 0x0070(0x0088)()
	struct FSlateBrush                            CallFunc_CreateMenuStyle_SlateBrush_1;             // 0x00F8(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0180(0x0278)()
};
static_assert(alignof(Basic_FlatButton_C_SetStyle) == 0x000008, "Wrong alignment on Basic_FlatButton_C_SetStyle");
static_assert(sizeof(Basic_FlatButton_C_SetStyle) == 0x0003F8, "Wrong size on Basic_FlatButton_C_SetStyle");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, InBaseColor) == 0x000000, "Member 'Basic_FlatButton_C_SetStyle::InBaseColor' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, InHoverColor) == 0x000001, "Member 'Basic_FlatButton_C_SetStyle::InHoverColor' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, InTextColor) == 0x000002, "Member 'Basic_FlatButton_C_SetStyle::InTextColor' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, InTextHoverColor) == 0x000003, "Member 'Basic_FlatButton_C_SetStyle::InTextHoverColor' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, K2Node_MakeStruct_SlateSound) == 0x000008, "Member 'Basic_FlatButton_C_SetStyle::K2Node_MakeStruct_SlateSound' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, K2Node_MakeStruct_SlateSound_1) == 0x000020, "Member 'Basic_FlatButton_C_SetStyle::K2Node_MakeStruct_SlateSound_1' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, CallFunc_MenuColors_OutputColor) == 0x000038, "Member 'Basic_FlatButton_C_SetStyle::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'Basic_FlatButton_C_SetStyle::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, CallFunc_CreateMenuStyle_SlateBrush) == 0x000070, "Member 'Basic_FlatButton_C_SetStyle::CallFunc_CreateMenuStyle_SlateBrush' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, CallFunc_CreateMenuStyle_SlateBrush_1) == 0x0000F8, "Member 'Basic_FlatButton_C_SetStyle::CallFunc_CreateMenuStyle_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(Basic_FlatButton_C_SetStyle, K2Node_MakeStruct_ButtonStyle) == 0x000180, "Member 'Basic_FlatButton_C_SetStyle::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");

// Function Basic_FlatButton.Basic_FlatButton_C.IsInteractable
// 0x0001 (0x0001 - 0x0000)
struct Basic_FlatButton_C_IsInteractable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_FlatButton_C_IsInteractable) == 0x000001, "Wrong alignment on Basic_FlatButton_C_IsInteractable");
static_assert(sizeof(Basic_FlatButton_C_IsInteractable) == 0x000001, "Wrong size on Basic_FlatButton_C_IsInteractable");
static_assert(offsetof(Basic_FlatButton_C_IsInteractable, ReturnValue) == 0x000000, "Member 'Basic_FlatButton_C_IsInteractable::ReturnValue' has a wrong offset!");

}
