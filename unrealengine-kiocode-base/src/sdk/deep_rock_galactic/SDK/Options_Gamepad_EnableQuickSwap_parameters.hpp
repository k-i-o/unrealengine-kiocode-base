#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Gamepad_EnableQuickSwap

#include "Basic.hpp"


namespace SDK::Params
{

// Function Options_Gamepad_EnableQuickSwap.Options_Gamepad_EnableQuickSwap_C.ExecuteUbergraph_Options_Gamepad_EnableQuickSwap
// 0x0040 (0x0040 - 0x0000)
struct Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C22[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C23[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap) == 0x000008, "Wrong alignment on Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap");
static_assert(sizeof(Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap) == 0x000040, "Wrong size on Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap, EntryPoint) == 0x000000, "Member 'Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap::EntryPoint' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000008, "Member 'Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000010, "Member 'Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap, K2Node_Event_IsDesignTime) == 0x000028, "Member 'Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'Options_Gamepad_EnableQuickSwap_C_ExecuteUbergraph_Options_Gamepad_EnableQuickSwap::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function Options_Gamepad_EnableQuickSwap.Options_Gamepad_EnableQuickSwap_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Options_Gamepad_EnableQuickSwap_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_Gamepad_EnableQuickSwap_C_PreConstruct) == 0x000001, "Wrong alignment on Options_Gamepad_EnableQuickSwap_C_PreConstruct");
static_assert(sizeof(Options_Gamepad_EnableQuickSwap_C_PreConstruct) == 0x000001, "Wrong size on Options_Gamepad_EnableQuickSwap_C_PreConstruct");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Options_Gamepad_EnableQuickSwap_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Options_Gamepad_EnableQuickSwap.Options_Gamepad_EnableQuickSwap_C.Refresh
// 0x0028 (0x0028 - 0x0000)
struct Options_Gamepad_EnableQuickSwap_C_Refresh final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C24[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C25[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_FindActionIcon_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPreviousItemEnabledOnController_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C26[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_Gamepad_EnableQuickSwap_C_Refresh) == 0x000008, "Wrong alignment on Options_Gamepad_EnableQuickSwap_C_Refresh");
static_assert(sizeof(Options_Gamepad_EnableQuickSwap_C_Refresh) == 0x000028, "Wrong size on Options_Gamepad_EnableQuickSwap_C_Refresh");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Refresh, Temp_bool_Variable) == 0x000000, "Member 'Options_Gamepad_EnableQuickSwap_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Refresh, Temp_int_Variable) == 0x000004, "Member 'Options_Gamepad_EnableQuickSwap_C_Refresh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Refresh, Temp_int_Variable_1) == 0x000008, "Member 'Options_Gamepad_EnableQuickSwap_C_Refresh::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Refresh, CallFunc_FindActionIcon_ReturnValue) == 0x000010, "Member 'Options_Gamepad_EnableQuickSwap_C_Refresh::CallFunc_FindActionIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Refresh, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000018, "Member 'Options_Gamepad_EnableQuickSwap_C_Refresh::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Refresh, CallFunc_GetPreviousItemEnabledOnController_ReturnValue) == 0x000020, "Member 'Options_Gamepad_EnableQuickSwap_C_Refresh::CallFunc_GetPreviousItemEnabledOnController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Refresh, K2Node_Select_Default) == 0x000024, "Member 'Options_Gamepad_EnableQuickSwap_C_Refresh::K2Node_Select_Default' has a wrong offset!");

// Function Options_Gamepad_EnableQuickSwap.Options_Gamepad_EnableQuickSwap_C.Next
// 0x0038 (0x0038 - 0x0000)
struct Options_Gamepad_EnableQuickSwap_C_Next final
{
public:
	bool                                          Forward;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C27[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C28[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_Gamepad_EnableQuickSwap_C_Next) == 0x000008, "Wrong alignment on Options_Gamepad_EnableQuickSwap_C_Next");
static_assert(sizeof(Options_Gamepad_EnableQuickSwap_C_Next) == 0x000038, "Wrong size on Options_Gamepad_EnableQuickSwap_C_Next");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, Forward) == 0x000000, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::Forward' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, Temp_bool_Variable) == 0x000001, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, Temp_int_Variable) == 0x000004, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, Temp_int_Variable_1) == 0x000008, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x00000C, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000010, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, CallFunc_GetChildrenCount_ReturnValue) == 0x00001C, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000020, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, K2Node_Select_Default) == 0x000024, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Options_Gamepad_EnableQuickSwap_C_Next, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'Options_Gamepad_EnableQuickSwap_C_Next::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");

}

