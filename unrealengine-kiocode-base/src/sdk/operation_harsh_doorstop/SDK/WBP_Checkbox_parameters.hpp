#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Checkbox

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Checkbox.WBP_Checkbox_C.CheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_Checkbox_C_CheckStateChanged__DelegateSignature final
{
public:
	ECheckBoxState                                CheckedState;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkbox_C_CheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_Checkbox_C_CheckStateChanged__DelegateSignature");
static_assert(sizeof(WBP_Checkbox_C_CheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_Checkbox_C_CheckStateChanged__DelegateSignature");
static_assert(offsetof(WBP_Checkbox_C_CheckStateChanged__DelegateSignature, CheckedState) == 0x000000, "Member 'WBP_Checkbox_C_CheckStateChanged__DelegateSignature::CheckedState' has a wrong offset!");

// Function WBP_Checkbox.WBP_Checkbox_C.CheckStateChangedBool__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_Checkbox_C_CheckStateChangedBool__DelegateSignature final
{
public:
	bool                                          bChecked;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Checkbox_C_CheckStateChangedBool__DelegateSignature) == 0x000001, "Wrong alignment on WBP_Checkbox_C_CheckStateChangedBool__DelegateSignature");
static_assert(sizeof(WBP_Checkbox_C_CheckStateChangedBool__DelegateSignature) == 0x000001, "Wrong size on WBP_Checkbox_C_CheckStateChangedBool__DelegateSignature");
static_assert(offsetof(WBP_Checkbox_C_CheckStateChangedBool__DelegateSignature, bChecked) == 0x000000, "Member 'WBP_Checkbox_C_CheckStateChangedBool__DelegateSignature::bChecked' has a wrong offset!");

// Function WBP_Checkbox.WBP_Checkbox_C.ExecuteUbergraph_WBP_Checkbox
// 0x0008 (0x0008 - 0x0000)
struct WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckedState_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox) == 0x000004, "Wrong alignment on WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox");
static_assert(sizeof(WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox) == 0x000008, "Wrong size on WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox");
static_assert(offsetof(WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox, EntryPoint) == 0x000000, "Member 'WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox, CallFunc_GetCheckedState_ReturnValue) == 0x000004, "Member 'WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox::CallFunc_GetCheckedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox, K2Node_ComponentBoundEvent_bIsChecked) == 0x000005, "Member 'WBP_Checkbox_C_ExecuteUbergraph_WBP_Checkbox::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");

// Function WBP_Checkbox.WBP_Checkbox_C.BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_Checkbox_C_BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Checkbox_C_BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_Checkbox_C_BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(WBP_Checkbox_C_BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_Checkbox_C_BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(WBP_Checkbox_C_BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'WBP_Checkbox_C_BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function WBP_Checkbox.WBP_Checkbox_C.GetCheckedState
// 0x0002 (0x0002 - 0x0000)
struct WBP_Checkbox_C_GetCheckedState final
{
public:
	ECheckBoxState                                CheckedState;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckedState_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkbox_C_GetCheckedState) == 0x000001, "Wrong alignment on WBP_Checkbox_C_GetCheckedState");
static_assert(sizeof(WBP_Checkbox_C_GetCheckedState) == 0x000002, "Wrong size on WBP_Checkbox_C_GetCheckedState");
static_assert(offsetof(WBP_Checkbox_C_GetCheckedState, CheckedState) == 0x000000, "Member 'WBP_Checkbox_C_GetCheckedState::CheckedState' has a wrong offset!");
static_assert(offsetof(WBP_Checkbox_C_GetCheckedState, CallFunc_GetCheckedState_ReturnValue) == 0x000001, "Member 'WBP_Checkbox_C_GetCheckedState::CallFunc_GetCheckedState_ReturnValue' has a wrong offset!");

// Function WBP_Checkbox.WBP_Checkbox_C.IsChecked
// 0x0002 (0x0002 - 0x0000)
struct WBP_Checkbox_C_IsChecked final
{
public:
	bool                                          bChecked;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Checkbox_C_IsChecked) == 0x000001, "Wrong alignment on WBP_Checkbox_C_IsChecked");
static_assert(sizeof(WBP_Checkbox_C_IsChecked) == 0x000002, "Wrong size on WBP_Checkbox_C_IsChecked");
static_assert(offsetof(WBP_Checkbox_C_IsChecked, bChecked) == 0x000000, "Member 'WBP_Checkbox_C_IsChecked::bChecked' has a wrong offset!");
static_assert(offsetof(WBP_Checkbox_C_IsChecked, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'WBP_Checkbox_C_IsChecked::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

// Function WBP_Checkbox.WBP_Checkbox_C.SetIsChecked
// 0x0001 (0x0001 - 0x0000)
struct WBP_Checkbox_C_SetIsChecked final
{
public:
	bool                                          bChecked;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Checkbox_C_SetIsChecked) == 0x000001, "Wrong alignment on WBP_Checkbox_C_SetIsChecked");
static_assert(sizeof(WBP_Checkbox_C_SetIsChecked) == 0x000001, "Wrong size on WBP_Checkbox_C_SetIsChecked");
static_assert(offsetof(WBP_Checkbox_C_SetIsChecked, bChecked) == 0x000000, "Member 'WBP_Checkbox_C_SetIsChecked::bChecked' has a wrong offset!");

// Function WBP_Checkbox.WBP_Checkbox_C.SetCheckedState
// 0x0001 (0x0001 - 0x0000)
struct WBP_Checkbox_C_SetCheckedState final
{
public:
	ECheckBoxState                                NewCheckedState;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkbox_C_SetCheckedState) == 0x000001, "Wrong alignment on WBP_Checkbox_C_SetCheckedState");
static_assert(sizeof(WBP_Checkbox_C_SetCheckedState) == 0x000001, "Wrong size on WBP_Checkbox_C_SetCheckedState");
static_assert(offsetof(WBP_Checkbox_C_SetCheckedState, NewCheckedState) == 0x000000, "Member 'WBP_Checkbox_C_SetCheckedState::NewCheckedState' has a wrong offset!");

}
