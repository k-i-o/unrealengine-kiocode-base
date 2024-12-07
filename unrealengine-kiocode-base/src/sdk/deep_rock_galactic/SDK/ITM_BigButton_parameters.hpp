#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_BigButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_BigButton.ITM_BigButton_C.ExecuteUbergraph_ITM_BigButton
// 0x00B0 (0x00B0 - 0x0000)
struct ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EEE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_CustomEvent_Color;                          // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EEF[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0058(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton) == 0x000008, "Wrong alignment on ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton");
static_assert(sizeof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton) == 0x0000B0, "Wrong size on ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, EntryPoint) == 0x000000, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, K2Node_CustomEvent_Color) == 0x000028, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::K2Node_CustomEvent_Color' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, CallFunc_MenuColors_OutputColor) == 0x000038, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, K2Node_Event_IsDesignTime) == 0x000048, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, CallFunc_PlayAnimation_ReturnValue_4) == 0x000050, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton, K2Node_MakeStruct_SlateFontInfo) == 0x000058, "Member 'ITM_BigButton_C_ExecuteUbergraph_ITM_BigButton::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function ITM_BigButton.ITM_BigButton_C.SetColor
// 0x0010 (0x0010 - 0x0000)
struct ITM_BigButton_C_SetColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_BigButton_C_SetColor) == 0x000004, "Wrong alignment on ITM_BigButton_C_SetColor");
static_assert(sizeof(ITM_BigButton_C_SetColor) == 0x000010, "Wrong size on ITM_BigButton_C_SetColor");
static_assert(offsetof(ITM_BigButton_C_SetColor, Color) == 0x000000, "Member 'ITM_BigButton_C_SetColor::Color' has a wrong offset!");

// Function ITM_BigButton.ITM_BigButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_BigButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_BigButton_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_BigButton_C_PreConstruct");
static_assert(sizeof(ITM_BigButton_C_PreConstruct) == 0x000001, "Wrong size on ITM_BigButton_C_PreConstruct");
static_assert(offsetof(ITM_BigButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_BigButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_BigButton.ITM_BigButton_C.SetText
// 0x0030 (0x0030 - 0x0000)
struct ITM_BigButton_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
};
static_assert(alignof(ITM_BigButton_C_SetText) == 0x000008, "Wrong alignment on ITM_BigButton_C_SetText");
static_assert(sizeof(ITM_BigButton_C_SetText) == 0x000030, "Wrong size on ITM_BigButton_C_SetText");
static_assert(offsetof(ITM_BigButton_C_SetText, InText) == 0x000000, "Member 'ITM_BigButton_C_SetText::InText' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_SetText, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'ITM_BigButton_C_SetText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function ITM_BigButton.ITM_BigButton_C.OnMouseButtonDown
// 0x02F0 (0x02F0 - 0x0000)
struct ITM_BigButton_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0218(0x00B8)()
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x02D0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_BigButton_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on ITM_BigButton_C_OnMouseButtonDown");
static_assert(sizeof(ITM_BigButton_C_OnMouseButtonDown) == 0x0002F0, "Wrong size on ITM_BigButton_C_OnMouseButtonDown");
static_assert(offsetof(ITM_BigButton_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'ITM_BigButton_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'ITM_BigButton_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ITM_BigButton_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'ITM_BigButton_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000218, "Member 'ITM_BigButton_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x0002D0, "Member 'ITM_BigButton_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_BigButton_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0002E8, "Member 'ITM_BigButton_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

}

