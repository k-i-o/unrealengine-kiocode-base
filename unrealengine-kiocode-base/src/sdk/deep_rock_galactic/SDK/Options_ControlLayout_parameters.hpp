#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_ControlLayout

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function Options_ControlLayout.Options_ControlLayout_C.ExecuteUbergraph_Options_ControlLayout
// 0x0030 (0x0030 - 0x0000)
struct Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4922[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFSDInputSource InputSource)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFSDGameUserSettings*                   CallFunc_FSDGameUserSettings_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFSDInputSource                               K2Node_CustomEvent_InputSource;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFSDInputSource                               CallFunc_GetInputSource_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4923[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout) == 0x000008, "Wrong alignment on Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout");
static_assert(sizeof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout) == 0x000030, "Wrong size on Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout");
static_assert(offsetof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout, EntryPoint) == 0x000000, "Member 'Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout::EntryPoint' has a wrong offset!");
static_assert(offsetof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout, Temp_bool_Variable) == 0x000004, "Member 'Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout, CallFunc_FSDGameUserSettings_ReturnValue) == 0x000018, "Member 'Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout::CallFunc_FSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout, K2Node_CustomEvent_InputSource) == 0x000020, "Member 'Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout::K2Node_CustomEvent_InputSource' has a wrong offset!");
static_assert(offsetof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout, CallFunc_GetInputSource_ReturnValue) == 0x000021, "Member 'Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout::CallFunc_GetInputSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000022, "Member 'Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout, K2Node_Select_Default) == 0x000028, "Member 'Options_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout::K2Node_Select_Default' has a wrong offset!");

// Function Options_ControlLayout.Options_ControlLayout_C.OnInputSourceChanged
// 0x0001 (0x0001 - 0x0000)
struct Options_ControlLayout_C_OnInputSourceChanged final
{
public:
	EFSDInputSource                               InputSource;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_ControlLayout_C_OnInputSourceChanged) == 0x000001, "Wrong alignment on Options_ControlLayout_C_OnInputSourceChanged");
static_assert(sizeof(Options_ControlLayout_C_OnInputSourceChanged) == 0x000001, "Wrong size on Options_ControlLayout_C_OnInputSourceChanged");
static_assert(offsetof(Options_ControlLayout_C_OnInputSourceChanged, InputSource) == 0x000000, "Member 'Options_ControlLayout_C_OnInputSourceChanged::InputSource' has a wrong offset!");

}
