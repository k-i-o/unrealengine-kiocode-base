#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TinkerUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TinkerUI.TBButton.SetIsFocusable
// 0x0001 (0x0001 - 0x0000)
struct TBButton_SetIsFocusable final
{
public:
	bool                                          bInIsFocusable;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TBButton_SetIsFocusable) == 0x000001, "Wrong alignment on TBButton_SetIsFocusable");
static_assert(sizeof(TBButton_SetIsFocusable) == 0x000001, "Wrong size on TBButton_SetIsFocusable");
static_assert(offsetof(TBButton_SetIsFocusable, bInIsFocusable) == 0x000000, "Member 'TBButton_SetIsFocusable::bInIsFocusable' has a wrong offset!");

// Function TinkerUI.TBButton.SetIsInteractionEnabled
// 0x0001 (0x0001 - 0x0000)
struct TBButton_SetIsInteractionEnabled final
{
public:
	bool                                          bInIsInteractionEnabled;                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TBButton_SetIsInteractionEnabled) == 0x000001, "Wrong alignment on TBButton_SetIsInteractionEnabled");
static_assert(sizeof(TBButton_SetIsInteractionEnabled) == 0x000001, "Wrong size on TBButton_SetIsInteractionEnabled");
static_assert(offsetof(TBButton_SetIsInteractionEnabled, bInIsInteractionEnabled) == 0x000000, "Member 'TBButton_SetIsInteractionEnabled::bInIsInteractionEnabled' has a wrong offset!");

// Function TinkerUI.TBButton.GetIsFocusable
// 0x0001 (0x0001 - 0x0000)
struct TBButton_GetIsFocusable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TBButton_GetIsFocusable) == 0x000001, "Wrong alignment on TBButton_GetIsFocusable");
static_assert(sizeof(TBButton_GetIsFocusable) == 0x000001, "Wrong size on TBButton_GetIsFocusable");
static_assert(offsetof(TBButton_GetIsFocusable, ReturnValue) == 0x000000, "Member 'TBButton_GetIsFocusable::ReturnValue' has a wrong offset!");

// Function TinkerUI.TBButton.IsInteractionEnabled
// 0x0001 (0x0001 - 0x0000)
struct TBButton_IsInteractionEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TBButton_IsInteractionEnabled) == 0x000001, "Wrong alignment on TBButton_IsInteractionEnabled");
static_assert(sizeof(TBButton_IsInteractionEnabled) == 0x000001, "Wrong size on TBButton_IsInteractionEnabled");
static_assert(offsetof(TBButton_IsInteractionEnabled, ReturnValue) == 0x000000, "Member 'TBButton_IsInteractionEnabled::ReturnValue' has a wrong offset!");

// Function TinkerUI.TBSlider.SetMouseUsesStep
// 0x0001 (0x0001 - 0x0000)
struct TBSlider_SetMouseUsesStep final
{
public:
	bool                                          bInValue;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TBSlider_SetMouseUsesStep) == 0x000001, "Wrong alignment on TBSlider_SetMouseUsesStep");
static_assert(sizeof(TBSlider_SetMouseUsesStep) == 0x000001, "Wrong size on TBSlider_SetMouseUsesStep");
static_assert(offsetof(TBSlider_SetMouseUsesStep, bInValue) == 0x000000, "Member 'TBSlider_SetMouseUsesStep::bInValue' has a wrong offset!");

// Function TinkerUI.TBSlider.SetSliderFgBarColor
// 0x0010 (0x0010 - 0x0000)
struct TBSlider_SetSliderFgBarColor final
{
public:
	struct FLinearColor                           InValue;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TBSlider_SetSliderFgBarColor) == 0x000004, "Wrong alignment on TBSlider_SetSliderFgBarColor");
static_assert(sizeof(TBSlider_SetSliderFgBarColor) == 0x000010, "Wrong size on TBSlider_SetSliderFgBarColor");
static_assert(offsetof(TBSlider_SetSliderFgBarColor, InValue) == 0x000000, "Member 'TBSlider_SetSliderFgBarColor::InValue' has a wrong offset!");

}
