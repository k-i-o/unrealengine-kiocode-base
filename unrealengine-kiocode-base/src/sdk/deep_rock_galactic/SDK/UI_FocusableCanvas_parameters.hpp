#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FocusableCanvas

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFocused;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature) == 0x000008, "Wrong alignment on UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature");
static_assert(sizeof(UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature) == 0x000010, "Wrong size on UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature");
static_assert(offsetof(UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature, Widget) == 0x000000, "Member 'UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature, IsFocused) == 0x000008, "Member 'UI_FocusableCanvas_C_OnFocusChanged__DelegateSignature::IsFocused' has a wrong offset!");

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnHoverChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsHovered;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature) == 0x000008, "Wrong alignment on UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature");
static_assert(sizeof(UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature) == 0x000010, "Wrong size on UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature");
static_assert(offsetof(UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature, Widget) == 0x000000, "Member 'UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature, Param_IsHovered) == 0x000008, "Member 'UI_FocusableCanvas_C_OnHoverChanged__DelegateSignature::Param_IsHovered' has a wrong offset!");

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.ExecuteUbergraph_UI_FocusableCanvas
// 0x0128 (0x0128 - 0x0000)
struct UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0004(0x0008)(NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x000C(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AA6[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0048(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B8(0x0070)(ConstParm)
};
static_assert(alignof(UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas) == 0x000008, "Wrong alignment on UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas");
static_assert(sizeof(UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas) == 0x000128, "Wrong size on UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas");
static_assert(offsetof(UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas, EntryPoint) == 0x000000, "Member 'UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas, K2Node_Event_InFocusEvent) == 0x000004, "Member 'UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas, K2Node_Event_MyGeometry) == 0x00000C, "Member 'UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas, K2Node_Event_MouseEvent_1) == 0x000048, "Member 'UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas, K2Node_Event_MouseEvent) == 0x0000B8, "Member 'UI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas::K2Node_Event_MouseEvent' has a wrong offset!");

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct UI_FocusableCanvas_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_FocusableCanvas_C_OnMouseLeave) == 0x000008, "Wrong alignment on UI_FocusableCanvas_C_OnMouseLeave");
static_assert(sizeof(UI_FocusableCanvas_C_OnMouseLeave) == 0x000070, "Wrong size on UI_FocusableCanvas_C_OnMouseLeave");
static_assert(offsetof(UI_FocusableCanvas_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'UI_FocusableCanvas_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct UI_FocusableCanvas_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_FocusableCanvas_C_OnMouseEnter) == 0x000008, "Wrong alignment on UI_FocusableCanvas_C_OnMouseEnter");
static_assert(sizeof(UI_FocusableCanvas_C_OnMouseEnter) == 0x0000A8, "Wrong size on UI_FocusableCanvas_C_OnMouseEnter");
static_assert(offsetof(UI_FocusableCanvas_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'UI_FocusableCanvas_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'UI_FocusableCanvas_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct UI_FocusableCanvas_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UI_FocusableCanvas_C_OnFocusLost) == 0x000004, "Wrong alignment on UI_FocusableCanvas_C_OnFocusLost");
static_assert(sizeof(UI_FocusableCanvas_C_OnFocusLost) == 0x000008, "Wrong size on UI_FocusableCanvas_C_OnFocusLost");
static_assert(offsetof(UI_FocusableCanvas_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'UI_FocusableCanvas_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct UI_FocusableCanvas_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x00F8(0x00B8)()
};
static_assert(alignof(UI_FocusableCanvas_C_OnFocusReceived) == 0x000008, "Wrong alignment on UI_FocusableCanvas_C_OnFocusReceived");
static_assert(sizeof(UI_FocusableCanvas_C_OnFocusReceived) == 0x0001B0, "Wrong size on UI_FocusableCanvas_C_OnFocusReceived");
static_assert(offsetof(UI_FocusableCanvas_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'UI_FocusableCanvas_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'UI_FocusableCanvas_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'UI_FocusableCanvas_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FocusableCanvas_C_OnFocusReceived, CallFunc_Unhandled_ReturnValue) == 0x0000F8, "Member 'UI_FocusableCanvas_C_OnFocusReceived::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

}
