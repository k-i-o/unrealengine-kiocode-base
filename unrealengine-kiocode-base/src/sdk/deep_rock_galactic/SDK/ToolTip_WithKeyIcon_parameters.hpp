#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToolTip_WithKeyIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.ExecuteUbergraph_ToolTip_WithKeyIcon
// 0x0018 (0x0018 - 0x0000)
struct ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_CustomEvent_Owner;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon) == 0x000008, "Wrong alignment on ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon");
static_assert(sizeof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon) == 0x000018, "Wrong size on ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon");
static_assert(offsetof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon, EntryPoint) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon, K2Node_CustomEvent_Owner) == 0x000008, "Member 'ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon::K2Node_CustomEvent_Owner' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon, CallFunc_TextIsEmpty_ReturnValue) == 0x000010, "Member 'ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000012, "Member 'ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.Set Tool Tip Owner
// 0x0008 (0x0008 - 0x0000)
struct ToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner final
{
public:
	class UWidget*                                Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner) == 0x000008, "Wrong alignment on ToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner");
static_assert(sizeof(ToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner) == 0x000008, "Wrong size on ToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner");
static_assert(offsetof(ToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner, Owner) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner::Owner' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ToolTip_WithKeyIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_PreConstruct) == 0x000001, "Wrong alignment on ToolTip_WithKeyIcon_C_PreConstruct");
static_assert(sizeof(ToolTip_WithKeyIcon_C_PreConstruct) == 0x000001, "Wrong size on ToolTip_WithKeyIcon_C_PreConstruct");
static_assert(offsetof(ToolTip_WithKeyIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetTarget
// 0x0010 (0x0010 - 0x0000)
struct ToolTip_WithKeyIcon_C_SetTarget final
{
public:
	class UWidget*                                Target_Widget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_SetTarget) == 0x000008, "Wrong alignment on ToolTip_WithKeyIcon_C_SetTarget");
static_assert(sizeof(ToolTip_WithKeyIcon_C_SetTarget) == 0x000010, "Wrong size on ToolTip_WithKeyIcon_C_SetTarget");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetTarget, Target_Widget) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_SetTarget::Target_Widget' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetTarget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ToolTip_WithKeyIcon_C_SetTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetData
// 0x0068 (0x0068 - 0x0000)
struct ToolTip_WithKeyIcon_C_SetData final
{
public:
	class FText                                   Param_Headline;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Param_Text;                                        // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActionIconMapping                     Param_Icon;                                        // 0x0030(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_SetData) == 0x000008, "Wrong alignment on ToolTip_WithKeyIcon_C_SetData");
static_assert(sizeof(ToolTip_WithKeyIcon_C_SetData) == 0x000068, "Wrong size on ToolTip_WithKeyIcon_C_SetData");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Param_Headline) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_SetData::Param_Headline' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Param_Text) == 0x000018, "Member 'ToolTip_WithKeyIcon_C_SetData::Param_Text' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Param_Icon) == 0x000030, "Member 'ToolTip_WithKeyIcon_C_SetData::Param_Icon' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Temp_byte_Variable) == 0x000058, "Member 'ToolTip_WithKeyIcon_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Temp_byte_Variable_1) == 0x000059, "Member 'ToolTip_WithKeyIcon_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Temp_bool_Variable) == 0x00005A, "Member 'ToolTip_WithKeyIcon_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Temp_byte_Variable_2) == 0x00005B, "Member 'ToolTip_WithKeyIcon_C_SetData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Temp_byte_Variable_3) == 0x00005C, "Member 'ToolTip_WithKeyIcon_C_SetData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, Temp_bool_Variable_1) == 0x00005D, "Member 'ToolTip_WithKeyIcon_C_SetData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, CallFunc_IsValid_ReturnValue) == 0x00005E, "Member 'ToolTip_WithKeyIcon_C_SetData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, K2Node_Select_Default) == 0x00005F, "Member 'ToolTip_WithKeyIcon_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, CallFunc_TextIsEmpty_ReturnValue) == 0x000060, "Member 'ToolTip_WithKeyIcon_C_SetData::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetData, K2Node_Select_Default_1) == 0x000061, "Member 'ToolTip_WithKeyIcon_C_SetData::K2Node_Select_Default_1' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetPostionAndAlignment
// 0x0068 (0x0068 - 0x0000)
struct ToolTip_WithKeyIcon_C_SetPostionAndAlignment final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InAlignment;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment) == 0x000008, "Wrong alignment on ToolTip_WithKeyIcon_C_SetPostionAndAlignment");
static_assert(sizeof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment) == 0x000068, "Wrong size on ToolTip_WithKeyIcon_C_SetPostionAndAlignment");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment, InPosition) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_SetPostionAndAlignment::InPosition' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment, InAlignment) == 0x000008, "Member 'ToolTip_WithKeyIcon_C_SetPostionAndAlignment::InAlignment' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment, CanvasSlot) == 0x000010, "Member 'ToolTip_WithKeyIcon_C_SetPostionAndAlignment::CanvasSlot' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment, CallFunc_MenuColors_OutputColor) == 0x000018, "Member 'ToolTip_WithKeyIcon_C_SetPostionAndAlignment::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment, CallFunc_MenuColors_OutputColor_1) == 0x000028, "Member 'ToolTip_WithKeyIcon_C_SetPostionAndAlignment::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'ToolTip_WithKeyIcon_C_SetPostionAndAlignment::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetPostionAndAlignment, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'ToolTip_WithKeyIcon_C_SetPostionAndAlignment::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMinWidth
// 0x0008 (0x0008 - 0x0000)
struct ToolTip_WithKeyIcon_C_SetMinWidth final
{
public:
	float                                         MinWidth;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_SetMinWidth) == 0x000004, "Wrong alignment on ToolTip_WithKeyIcon_C_SetMinWidth");
static_assert(sizeof(ToolTip_WithKeyIcon_C_SetMinWidth) == 0x000008, "Wrong size on ToolTip_WithKeyIcon_C_SetMinWidth");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetMinWidth, MinWidth) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_SetMinWidth::MinWidth' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetMinWidth, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'ToolTip_WithKeyIcon_C_SetMinWidth::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMaxWidth
// 0x0008 (0x0008 - 0x0000)
struct ToolTip_WithKeyIcon_C_SetMaxWidth final
{
public:
	float                                         MaxWidth;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_SetMaxWidth) == 0x000004, "Wrong alignment on ToolTip_WithKeyIcon_C_SetMaxWidth");
static_assert(sizeof(ToolTip_WithKeyIcon_C_SetMaxWidth) == 0x000008, "Wrong size on ToolTip_WithKeyIcon_C_SetMaxWidth");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetMaxWidth, MaxWidth) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_SetMaxWidth::MaxWidth' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetMaxWidth, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'ToolTip_WithKeyIcon_C_SetMaxWidth::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetWidth
// 0x0008 (0x0008 - 0x0000)
struct ToolTip_WithKeyIcon_C_SetWidth final
{
public:
	float                                         InWidthOverride;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_SetWidth) == 0x000004, "Wrong alignment on ToolTip_WithKeyIcon_C_SetWidth");
static_assert(sizeof(ToolTip_WithKeyIcon_C_SetWidth) == 0x000008, "Wrong size on ToolTip_WithKeyIcon_C_SetWidth");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetWidth, InWidthOverride) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_SetWidth::InWidthOverride' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_SetWidth, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'ToolTip_WithKeyIcon_C_SetWidth::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.FadeIn
// 0x0018 (0x0018 - 0x0000)
struct ToolTip_WithKeyIcon_C_FadeIn final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToolTip_WithKeyIcon_C_FadeIn) == 0x000008, "Wrong alignment on ToolTip_WithKeyIcon_C_FadeIn");
static_assert(sizeof(ToolTip_WithKeyIcon_C_FadeIn) == 0x000018, "Wrong size on ToolTip_WithKeyIcon_C_FadeIn");
static_assert(offsetof(ToolTip_WithKeyIcon_C_FadeIn, Duration) == 0x000000, "Member 'ToolTip_WithKeyIcon_C_FadeIn::Duration' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_FadeIn, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'ToolTip_WithKeyIcon_C_FadeIn::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_FadeIn, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'ToolTip_WithKeyIcon_C_FadeIn::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_FadeIn, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x00000C, "Member 'ToolTip_WithKeyIcon_C_FadeIn::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolTip_WithKeyIcon_C_FadeIn, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'ToolTip_WithKeyIcon_C_FadeIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

