#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_AppearOffline

#include "Basic.hpp"


namespace SDK::Params
{

// Function Options_AppearOffline.Options_AppearOffline_C.ExecuteUbergraph_Options_AppearOffline
// 0x0040 (0x0040 - 0x0000)
struct Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E01[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue_1;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAppearOffline_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E02[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline) == 0x000008, "Wrong alignment on Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline");
static_assert(sizeof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline) == 0x000040, "Wrong size on Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline");
static_assert(offsetof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline, EntryPoint) == 0x000000, "Member 'Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline::EntryPoint' has a wrong offset!");
static_assert(offsetof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline, K2Node_ComponentBoundEvent_IsChecked) == 0x000014, "Member 'Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000018, "Member 'Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000020, "Member 'Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline, CallFunc_GetFSDGameUserSettings_ReturnValue_1) == 0x000028, "Member 'Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline::CallFunc_GetFSDGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline, CallFunc_GetAppearOffline_ReturnValue) == 0x000030, "Member 'Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline::CallFunc_GetAppearOffline_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline, CallFunc_GetFSDGameInstance_ReturnValue_1) == 0x000038, "Member 'Options_AppearOffline_C_ExecuteUbergraph_Options_AppearOffline::CallFunc_GetFSDGameInstance_ReturnValue_1' has a wrong offset!");

// Function Options_AppearOffline.Options_AppearOffline_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Options_AppearOffline_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_AppearOffline_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Options_AppearOffline_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");
static_assert(sizeof(Options_AppearOffline_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on Options_AppearOffline_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");
static_assert(offsetof(Options_AppearOffline_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'Options_AppearOffline_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

}
