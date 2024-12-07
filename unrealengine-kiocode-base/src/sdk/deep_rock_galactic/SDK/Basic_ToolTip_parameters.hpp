#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_ToolTip

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Basic_ToolTip.Basic_ToolTip_C.ExecuteUbergraph_Basic_ToolTip
// 0x0018 (0x0018 - 0x0000)
struct Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E44[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_CustomEvent_Owner;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip) == 0x000008, "Wrong alignment on Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip");
static_assert(sizeof(Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip) == 0x000018, "Wrong size on Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip");
static_assert(offsetof(Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip, EntryPoint) == 0x000000, "Member 'Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip, K2Node_CustomEvent_Owner) == 0x000008, "Member 'Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip::K2Node_CustomEvent_Owner' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip, CallFunc_TextIsEmpty_ReturnValue) == 0x000010, "Member 'Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'Basic_ToolTip_C_ExecuteUbergraph_Basic_ToolTip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.Set Tool Tip Owner
// 0x0008 (0x0008 - 0x0000)
struct Basic_ToolTip_C_Set_Tool_Tip_Owner final
{
public:
	class UWidget*                                Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_ToolTip_C_Set_Tool_Tip_Owner) == 0x000008, "Wrong alignment on Basic_ToolTip_C_Set_Tool_Tip_Owner");
static_assert(sizeof(Basic_ToolTip_C_Set_Tool_Tip_Owner) == 0x000008, "Wrong size on Basic_ToolTip_C_Set_Tool_Tip_Owner");
static_assert(offsetof(Basic_ToolTip_C_Set_Tool_Tip_Owner, Owner) == 0x000000, "Member 'Basic_ToolTip_C_Set_Tool_Tip_Owner::Owner' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_ToolTip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ToolTip_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_ToolTip_C_PreConstruct");
static_assert(sizeof(Basic_ToolTip_C_PreConstruct) == 0x000001, "Wrong size on Basic_ToolTip_C_PreConstruct");
static_assert(offsetof(Basic_ToolTip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_ToolTip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.SetTarget
// 0x0010 (0x0010 - 0x0000)
struct Basic_ToolTip_C_SetTarget final
{
public:
	class UWidget*                                Target_Widget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ToolTip_C_SetTarget) == 0x000008, "Wrong alignment on Basic_ToolTip_C_SetTarget");
static_assert(sizeof(Basic_ToolTip_C_SetTarget) == 0x000010, "Wrong size on Basic_ToolTip_C_SetTarget");
static_assert(offsetof(Basic_ToolTip_C_SetTarget, Target_Widget) == 0x000000, "Member 'Basic_ToolTip_C_SetTarget::Target_Widget' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetTarget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'Basic_ToolTip_C_SetTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct Basic_ToolTip_C_SetText final
{
public:
	class FText                                   ToolTip;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Basic_ToolTip_C_SetText) == 0x000008, "Wrong alignment on Basic_ToolTip_C_SetText");
static_assert(sizeof(Basic_ToolTip_C_SetText) == 0x000018, "Wrong size on Basic_ToolTip_C_SetText");
static_assert(offsetof(Basic_ToolTip_C_SetText, ToolTip) == 0x000000, "Member 'Basic_ToolTip_C_SetText::ToolTip' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.SetPostionAndAlignment
// 0x0020 (0x0020 - 0x0000)
struct Basic_ToolTip_C_SetPostionAndAlignment final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InAlignment;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_ToolTip_C_SetPostionAndAlignment) == 0x000008, "Wrong alignment on Basic_ToolTip_C_SetPostionAndAlignment");
static_assert(sizeof(Basic_ToolTip_C_SetPostionAndAlignment) == 0x000020, "Wrong size on Basic_ToolTip_C_SetPostionAndAlignment");
static_assert(offsetof(Basic_ToolTip_C_SetPostionAndAlignment, InPosition) == 0x000000, "Member 'Basic_ToolTip_C_SetPostionAndAlignment::InPosition' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetPostionAndAlignment, InAlignment) == 0x000008, "Member 'Basic_ToolTip_C_SetPostionAndAlignment::InAlignment' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetPostionAndAlignment, CanvasSlot) == 0x000010, "Member 'Basic_ToolTip_C_SetPostionAndAlignment::CanvasSlot' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetPostionAndAlignment, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'Basic_ToolTip_C_SetPostionAndAlignment::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.SetMinWidth
// 0x0008 (0x0008 - 0x0000)
struct Basic_ToolTip_C_SetMinWidth final
{
public:
	float                                         MinWidth;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ToolTip_C_SetMinWidth) == 0x000004, "Wrong alignment on Basic_ToolTip_C_SetMinWidth");
static_assert(sizeof(Basic_ToolTip_C_SetMinWidth) == 0x000008, "Wrong size on Basic_ToolTip_C_SetMinWidth");
static_assert(offsetof(Basic_ToolTip_C_SetMinWidth, MinWidth) == 0x000000, "Member 'Basic_ToolTip_C_SetMinWidth::MinWidth' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetMinWidth, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'Basic_ToolTip_C_SetMinWidth::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.SetMaxWidth
// 0x0008 (0x0008 - 0x0000)
struct Basic_ToolTip_C_SetMaxWidth final
{
public:
	float                                         MaxWidth;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ToolTip_C_SetMaxWidth) == 0x000004, "Wrong alignment on Basic_ToolTip_C_SetMaxWidth");
static_assert(sizeof(Basic_ToolTip_C_SetMaxWidth) == 0x000008, "Wrong size on Basic_ToolTip_C_SetMaxWidth");
static_assert(offsetof(Basic_ToolTip_C_SetMaxWidth, MaxWidth) == 0x000000, "Member 'Basic_ToolTip_C_SetMaxWidth::MaxWidth' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetMaxWidth, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'Basic_ToolTip_C_SetMaxWidth::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.SetWidth
// 0x0008 (0x0008 - 0x0000)
struct Basic_ToolTip_C_SetWidth final
{
public:
	float                                         InWidthOverride;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_ToolTip_C_SetWidth) == 0x000004, "Wrong alignment on Basic_ToolTip_C_SetWidth");
static_assert(sizeof(Basic_ToolTip_C_SetWidth) == 0x000008, "Wrong size on Basic_ToolTip_C_SetWidth");
static_assert(offsetof(Basic_ToolTip_C_SetWidth, InWidthOverride) == 0x000000, "Member 'Basic_ToolTip_C_SetWidth::InWidthOverride' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetWidth, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'Basic_ToolTip_C_SetWidth::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.FadeIn
// 0x0018 (0x0018 - 0x0000)
struct Basic_ToolTip_C_FadeIn final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E45[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_ToolTip_C_FadeIn) == 0x000008, "Wrong alignment on Basic_ToolTip_C_FadeIn");
static_assert(sizeof(Basic_ToolTip_C_FadeIn) == 0x000018, "Wrong size on Basic_ToolTip_C_FadeIn");
static_assert(offsetof(Basic_ToolTip_C_FadeIn, Duration) == 0x000000, "Member 'Basic_ToolTip_C_FadeIn::Duration' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_FadeIn, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'Basic_ToolTip_C_FadeIn::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_FadeIn, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'Basic_ToolTip_C_FadeIn::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_FadeIn, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x00000C, "Member 'Basic_ToolTip_C_FadeIn::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_FadeIn, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'Basic_ToolTip_C_FadeIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.SetTextJustification
// 0x0010 (0x0010 - 0x0000)
struct Basic_ToolTip_C_SetTextJustification final
{
public:
	ETextJustify                                  Justification;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E46[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_ToolTip_C_SetTextJustification) == 0x000008, "Wrong alignment on Basic_ToolTip_C_SetTextJustification");
static_assert(sizeof(Basic_ToolTip_C_SetTextJustification) == 0x000010, "Wrong size on Basic_ToolTip_C_SetTextJustification");
static_assert(offsetof(Basic_ToolTip_C_SetTextJustification, Justification) == 0x000000, "Member 'Basic_ToolTip_C_SetTextJustification::Justification' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetTextJustification, Temp_byte_Variable) == 0x000001, "Member 'Basic_ToolTip_C_SetTextJustification::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetTextJustification, Temp_byte_Variable_1) == 0x000002, "Member 'Basic_ToolTip_C_SetTextJustification::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetTextJustification, Temp_byte_Variable_2) == 0x000003, "Member 'Basic_ToolTip_C_SetTextJustification::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetTextJustification, Temp_byte_Variable_3) == 0x000004, "Member 'Basic_ToolTip_C_SetTextJustification::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetTextJustification, K2Node_Select_Default) == 0x000005, "Member 'Basic_ToolTip_C_SetTextJustification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetTextJustification, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000008, "Member 'Basic_ToolTip_C_SetTextJustification::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");

// Function Basic_ToolTip.Basic_ToolTip_C.SetInput
// 0x00D0 (0x00D0 - 0x0000)
struct Basic_ToolTip_C_SetInput final
{
public:
	struct FKey                                   InDefaultKey;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FKey                                   InConsoleOverride;                                 // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FActionIconMapping                     Icon;                                              // 0x0030(0x0028)(Edit, BlueprintVisible)
	struct FKey                                   Key;                                               // 0x0058(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E47[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionIconMapping                     CallFunc_FindKeyIcon_KeyIcon;                      // 0x0078(0x0028)()
	bool                                          CallFunc_FindKeyIcon_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E48[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentInputSource_ReturnValue;         // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E49[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Select_Default;                             // 0x00B8(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(Basic_ToolTip_C_SetInput) == 0x000008, "Wrong alignment on Basic_ToolTip_C_SetInput");
static_assert(sizeof(Basic_ToolTip_C_SetInput) == 0x0000D0, "Wrong size on Basic_ToolTip_C_SetInput");
static_assert(offsetof(Basic_ToolTip_C_SetInput, InDefaultKey) == 0x000000, "Member 'Basic_ToolTip_C_SetInput::InDefaultKey' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, InConsoleOverride) == 0x000018, "Member 'Basic_ToolTip_C_SetInput::InConsoleOverride' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, Icon) == 0x000030, "Member 'Basic_ToolTip_C_SetInput::Icon' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, Key) == 0x000058, "Member 'Basic_ToolTip_C_SetInput::Key' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, Temp_bool_Variable) == 0x000070, "Member 'Basic_ToolTip_C_SetInput::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_FindKeyIcon_KeyIcon) == 0x000078, "Member 'Basic_ToolTip_C_SetInput::CallFunc_FindKeyIcon_KeyIcon' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_FindKeyIcon_ReturnValue) == 0x0000A0, "Member 'Basic_ToolTip_C_SetInput::CallFunc_FindKeyIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_SelectVisibility_IsVisible) == 0x0000A1, "Member 'Basic_ToolTip_C_SetInput::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_SelectVisibility_VisibilityChanged) == 0x0000A2, "Member 'Basic_ToolTip_C_SetInput::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_SelectVisibility_New_Visibility) == 0x0000A3, "Member 'Basic_ToolTip_C_SetInput::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0000A4, "Member 'Basic_ToolTip_C_SetInput::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x0000A8, "Member 'Basic_ToolTip_C_SetInput::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_Not_PreBool_ReturnValue) == 0x0000B0, "Member 'Basic_ToolTip_C_SetInput::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_IsCurrentInputSource_ReturnValue) == 0x0000B1, "Member 'Basic_ToolTip_C_SetInput::CallFunc_IsCurrentInputSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, CallFunc_BooleanAND_ReturnValue) == 0x0000B2, "Member 'Basic_ToolTip_C_SetInput::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_ToolTip_C_SetInput, K2Node_Select_Default) == 0x0000B8, "Member 'Basic_ToolTip_C_SetInput::K2Node_Select_Default' has a wrong offset!");

}

