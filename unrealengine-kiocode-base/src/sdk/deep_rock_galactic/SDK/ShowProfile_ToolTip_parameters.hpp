#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowProfile_ToolTip

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.FadeIn
// 0x0018 (0x0018 - 0x0000)
struct ShowProfile_ToolTip_C_FadeIn final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_353B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShowProfile_ToolTip_C_FadeIn) == 0x000008, "Wrong alignment on ShowProfile_ToolTip_C_FadeIn");
static_assert(sizeof(ShowProfile_ToolTip_C_FadeIn) == 0x000018, "Wrong size on ShowProfile_ToolTip_C_FadeIn");
static_assert(offsetof(ShowProfile_ToolTip_C_FadeIn, Duration) == 0x000000, "Member 'ShowProfile_ToolTip_C_FadeIn::Duration' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_FadeIn, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'ShowProfile_ToolTip_C_FadeIn::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_FadeIn, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'ShowProfile_ToolTip_C_FadeIn::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_FadeIn, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x00000C, "Member 'ShowProfile_ToolTip_C_FadeIn::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_FadeIn, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'ShowProfile_ToolTip_C_FadeIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetPostionAndAlignment
// 0x0020 (0x0020 - 0x0000)
struct ShowProfile_ToolTip_C_SetPostionAndAlignment final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InAlignment;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShowProfile_ToolTip_C_SetPostionAndAlignment) == 0x000008, "Wrong alignment on ShowProfile_ToolTip_C_SetPostionAndAlignment");
static_assert(sizeof(ShowProfile_ToolTip_C_SetPostionAndAlignment) == 0x000020, "Wrong size on ShowProfile_ToolTip_C_SetPostionAndAlignment");
static_assert(offsetof(ShowProfile_ToolTip_C_SetPostionAndAlignment, InPosition) == 0x000000, "Member 'ShowProfile_ToolTip_C_SetPostionAndAlignment::InPosition' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_SetPostionAndAlignment, InAlignment) == 0x000008, "Member 'ShowProfile_ToolTip_C_SetPostionAndAlignment::InAlignment' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_SetPostionAndAlignment, CanvasSlot) == 0x000010, "Member 'ShowProfile_ToolTip_C_SetPostionAndAlignment::CanvasSlot' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_SetPostionAndAlignment, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'ShowProfile_ToolTip_C_SetPostionAndAlignment::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetText
// 0x0048 (0x0048 - 0x0000)
struct ShowProfile_ToolTip_C_SetText final
{
public:
	class FText                                   ToolTip;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Region;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Param_Name;                                        // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ShowProfile_ToolTip_C_SetText) == 0x000008, "Wrong alignment on ShowProfile_ToolTip_C_SetText");
static_assert(sizeof(ShowProfile_ToolTip_C_SetText) == 0x000048, "Wrong size on ShowProfile_ToolTip_C_SetText");
static_assert(offsetof(ShowProfile_ToolTip_C_SetText, ToolTip) == 0x000000, "Member 'ShowProfile_ToolTip_C_SetText::ToolTip' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_SetText, Region) == 0x000018, "Member 'ShowProfile_ToolTip_C_SetText::Region' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_SetText, Param_Name) == 0x000030, "Member 'ShowProfile_ToolTip_C_SetText::Param_Name' has a wrong offset!");

// Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetTarget
// 0x0010 (0x0010 - 0x0000)
struct ShowProfile_ToolTip_C_SetTarget final
{
public:
	class UWidget*                                Target_Widget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShowProfile_ToolTip_C_SetTarget) == 0x000008, "Wrong alignment on ShowProfile_ToolTip_C_SetTarget");
static_assert(sizeof(ShowProfile_ToolTip_C_SetTarget) == 0x000010, "Wrong size on ShowProfile_ToolTip_C_SetTarget");
static_assert(offsetof(ShowProfile_ToolTip_C_SetTarget, Target_Widget) == 0x000000, "Member 'ShowProfile_ToolTip_C_SetTarget::Target_Widget' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_SetTarget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ShowProfile_ToolTip_C_SetTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ShowProfile_ToolTip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShowProfile_ToolTip_C_PreConstruct) == 0x000001, "Wrong alignment on ShowProfile_ToolTip_C_PreConstruct");
static_assert(sizeof(ShowProfile_ToolTip_C_PreConstruct) == 0x000001, "Wrong size on ShowProfile_ToolTip_C_PreConstruct");
static_assert(offsetof(ShowProfile_ToolTip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShowProfile_ToolTip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.Set Tool Tip Owner
// 0x0008 (0x0008 - 0x0000)
struct ShowProfile_ToolTip_C_Set_Tool_Tip_Owner final
{
public:
	class UWidget*                                Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShowProfile_ToolTip_C_Set_Tool_Tip_Owner) == 0x000008, "Wrong alignment on ShowProfile_ToolTip_C_Set_Tool_Tip_Owner");
static_assert(sizeof(ShowProfile_ToolTip_C_Set_Tool_Tip_Owner) == 0x000008, "Wrong size on ShowProfile_ToolTip_C_Set_Tool_Tip_Owner");
static_assert(offsetof(ShowProfile_ToolTip_C_Set_Tool_Tip_Owner, Owner) == 0x000000, "Member 'ShowProfile_ToolTip_C_Set_Tool_Tip_Owner::Owner' has a wrong offset!");

// Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.ExecuteUbergraph_ShowProfile_ToolTip
// 0x0018 (0x0018 - 0x0000)
struct ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_353C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_CustomEvent_Owner;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip) == 0x000008, "Wrong alignment on ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip");
static_assert(sizeof(ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip) == 0x000018, "Wrong size on ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip");
static_assert(offsetof(ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip, EntryPoint) == 0x000000, "Member 'ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip, K2Node_CustomEvent_Owner) == 0x000008, "Member 'ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip::K2Node_CustomEvent_Owner' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip, CallFunc_TextIsEmpty_ReturnValue) == 0x000010, "Member 'ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'ShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
