#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_ShowFPS

#include "Basic.hpp"


namespace SDK::Params
{

// Function Options_ShowFPS.Options_ShowFPS_C.ExecuteUbergraph_Options_ShowFPS
// 0x0038 (0x0038 - 0x0000)
struct Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_NewValue;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B2B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_FSDGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetShowFPS_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B2C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_FSDGameUserSettings_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetShowFPS_ReturnValue_1;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B2D[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool NewValue)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS) == 0x000008, "Wrong alignment on Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS");
static_assert(sizeof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS) == 0x000038, "Wrong size on Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, EntryPoint) == 0x000000, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::EntryPoint' has a wrong offset!");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, K2Node_ComponentBoundEvent_IsChecked) == 0x000004, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, K2Node_CustomEvent_NewValue) == 0x000005, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, CallFunc_FSDGameUserSettings_ReturnValue) == 0x000008, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::CallFunc_FSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, CallFunc_GetShowFPS_ReturnValue) == 0x000010, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::CallFunc_GetShowFPS_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, CallFunc_FSDGameUserSettings_ReturnValue_1) == 0x000018, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::CallFunc_FSDGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000020, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, CallFunc_GetShowFPS_ReturnValue_1) == 0x000021, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::CallFunc_GetShowFPS_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'Options_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function Options_ShowFPS.Options_ShowFPS_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Options_ShowFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_ShowFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Options_ShowFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");
static_assert(sizeof(Options_ShowFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on Options_ShowFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");
static_assert(offsetof(Options_ShowFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'Options_ShowFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function Options_ShowFPS.Options_ShowFPS_C.OnShowFPSChanged
// 0x0001 (0x0001 - 0x0000)
struct Options_ShowFPS_C_OnShowFPSChanged final
{
public:
	bool                                          NewValue;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_ShowFPS_C_OnShowFPSChanged) == 0x000001, "Wrong alignment on Options_ShowFPS_C_OnShowFPSChanged");
static_assert(sizeof(Options_ShowFPS_C_OnShowFPSChanged) == 0x000001, "Wrong size on Options_ShowFPS_C_OnShowFPSChanged");
static_assert(offsetof(Options_ShowFPS_C_OnShowFPSChanged, NewValue) == 0x000000, "Member 'Options_ShowFPS_C_OnShowFPSChanged::NewValue' has a wrong offset!");

}

