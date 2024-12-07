#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DragRotateCharacter

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_DragRotateCharacter.ITM_DragRotateCharacter_C.OnMouseMove
// 0x02F8 (0x02F8 - 0x0000)
struct ITM_DragRotateCharacter_C_OnMouseMove final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FVector2D                              CallFunc_PointerEvent_GetCursorDelta_ReturnValue;  // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3813[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3814[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0188(0x00B8)()
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0240(0x00B8)()
};
static_assert(alignof(ITM_DragRotateCharacter_C_OnMouseMove) == 0x000008, "Wrong alignment on ITM_DragRotateCharacter_C_OnMouseMove");
static_assert(sizeof(ITM_DragRotateCharacter_C_OnMouseMove) == 0x0002F8, "Wrong size on ITM_DragRotateCharacter_C_OnMouseMove");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, MyGeometry) == 0x000000, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::MyGeometry' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, MouseEvent) == 0x000038, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::MouseEvent' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, ReturnValue) == 0x0000A8, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_PointerEvent_GetCursorDelta_ReturnValue) == 0x000160, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_PointerEvent_GetCursorDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_BreakVector2D_X) == 0x00016C, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_BreakVector2D_Y) == 0x000170, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000174, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000178, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000180, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_Handled_ReturnValue) == 0x000188, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseMove, CallFunc_Unhandled_ReturnValue) == 0x000240, "Member 'ITM_DragRotateCharacter_C_OnMouseMove::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function ITM_DragRotateCharacter.ITM_DragRotateCharacter_C.OnMouseButtonDown
// 0x03A8 (0x03A8 - 0x0000)
struct ITM_DragRotateCharacter_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0218(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3815[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0238(0x00B8)()
	struct FEventReply                            CallFunc_CaptureMouse_ReturnValue;                 // 0x02F0(0x00B8)()
};
static_assert(alignof(ITM_DragRotateCharacter_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on ITM_DragRotateCharacter_C_OnMouseButtonDown");
static_assert(sizeof(ITM_DragRotateCharacter_C_OnMouseButtonDown) == 0x0003A8, "Wrong size on ITM_DragRotateCharacter_C_OnMouseButtonDown");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000218, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000230, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000238, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonDown, CallFunc_CaptureMouse_ReturnValue) == 0x0002F0, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonDown::CallFunc_CaptureMouse_ReturnValue' has a wrong offset!");

// Function ITM_DragRotateCharacter.ITM_DragRotateCharacter_C.OnMouseButtonUp
// 0x03A8 (0x03A8 - 0x0000)
struct ITM_DragRotateCharacter_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0160(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0178(0x00B8)()
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3816[0x6];                                     // 0x0232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0238(0x00B8)()
	struct FEventReply                            CallFunc_ReleaseMouseCapture_ReturnValue;          // 0x02F0(0x00B8)()
};
static_assert(alignof(ITM_DragRotateCharacter_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on ITM_DragRotateCharacter_C_OnMouseButtonUp");
static_assert(sizeof(ITM_DragRotateCharacter_C_OnMouseButtonUp) == 0x0003A8, "Wrong size on ITM_DragRotateCharacter_C_OnMouseButtonUp");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, MouseEvent) == 0x000038, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, ReturnValue) == 0x0000A8, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000160, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, CallFunc_Unhandled_ReturnValue) == 0x000178, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000230, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, CallFunc_BooleanAND_ReturnValue) == 0x000231, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, CallFunc_Handled_ReturnValue) == 0x000238, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DragRotateCharacter_C_OnMouseButtonUp, CallFunc_ReleaseMouseCapture_ReturnValue) == 0x0002F0, "Member 'ITM_DragRotateCharacter_C_OnMouseButtonUp::CallFunc_ReleaseMouseCapture_ReturnValue' has a wrong offset!");

}

