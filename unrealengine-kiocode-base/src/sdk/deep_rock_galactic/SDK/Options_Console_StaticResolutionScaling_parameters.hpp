#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Console_StaticResolutionScaling

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Options_Console_StaticResolutionScaling.Options_Console_StaticResolutionScaling_C.ExecuteUbergraph_Options_Console_StaticResolutionScaling
// 0x0120 (0x0120 - 0x0000)
struct Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_157D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Value;                  // 0x0008(0x0018)()
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_157E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_StringToFloat_ReturnValue;           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_157F[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUseManualGraphicsMode_ReturnValue;     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1580[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue_1;     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue_2;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStaticResolutionScale_ReturnValue;     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0090(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	bool                                          CallFunc_ContainsOption_DoesContain;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1581[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue_3;     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveOption_ReturnValue;                 // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsOption_DoesContain_1;             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1582[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_Option_Index;                         // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue_4;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUseManualGraphicsMode_ReturnValue_1;   // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling) == 0x000008, "Wrong alignment on Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling");
static_assert(sizeof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling) == 0x000120, "Wrong size on Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, EntryPoint) == 0x000000, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::EntryPoint' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, K2Node_ComponentBoundEvent_Value) == 0x000008, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, K2Node_ComponentBoundEvent_Index) == 0x000020, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_LeftChop_ReturnValue) == 0x000038, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_Conv_StringToFloat_ReturnValue) == 0x000048, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_Conv_StringToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, K2Node_Event_IsDesignTime) == 0x00004C, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000050, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetUseManualGraphicsMode_ReturnValue) == 0x000058, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetUseManualGraphicsMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000060, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetFSDGameUserSettings_ReturnValue_1) == 0x000068, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetFSDGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetFSDGameUserSettings_ReturnValue_2) == 0x000070, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetFSDGameUserSettings_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetStaticResolutionScale_ReturnValue) == 0x000078, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetStaticResolutionScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00008C, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, K2Node_MakeStruct_FormatArgumentData) == 0x000090, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, K2Node_MakeArray_Array) == 0x0000D0, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_ContainsOption_DoesContain) == 0x0000F8, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_ContainsOption_DoesContain' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetFSDGameUserSettings_ReturnValue_3) == 0x000100, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetFSDGameUserSettings_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_RemoveOption_ReturnValue) == 0x000108, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_RemoveOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_ContainsOption_DoesContain_1) == 0x000109, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_ContainsOption_DoesContain_1' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_Add_Option_Index) == 0x00010C, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_Add_Option_Index' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetFSDGameUserSettings_ReturnValue_4) == 0x000110, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetFSDGameUserSettings_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling, CallFunc_GetUseManualGraphicsMode_ReturnValue_1) == 0x000118, "Member 'Options_Console_StaticResolutionScaling_C_ExecuteUbergraph_Options_Console_StaticResolutionScaling::CallFunc_GetUseManualGraphicsMode_ReturnValue_1' has a wrong offset!");

// Function Options_Console_StaticResolutionScaling.Options_Console_StaticResolutionScaling_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Options_Console_StaticResolutionScaling_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_Console_StaticResolutionScaling_C_PreConstruct) == 0x000001, "Wrong alignment on Options_Console_StaticResolutionScaling_C_PreConstruct");
static_assert(sizeof(Options_Console_StaticResolutionScaling_C_PreConstruct) == 0x000001, "Wrong size on Options_Console_StaticResolutionScaling_C_PreConstruct");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Options_Console_StaticResolutionScaling_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Options_Console_StaticResolutionScaling.Options_Console_StaticResolutionScaling_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature final
{
public:
	class FText                                   Value;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_Index;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature) == 0x000008, "Wrong alignment on Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature");
static_assert(sizeof(Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature) == 0x000020, "Wrong size on Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature, Value) == 0x000000, "Member 'Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature, Param_Index) == 0x000018, "Member 'Options_Console_StaticResolutionScaling_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function Options_Console_StaticResolutionScaling.Options_Console_StaticResolutionScaling_C.AddResolutionOptions
// 0x0088 (0x0088 - 0x0000)
struct Options_Console_StaticResolutionScaling_C_AddResolutionOptions final
{
public:
	int32                                         EndValue;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartValue;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1583[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0068(0x0018)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1584[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_Option_Index;                         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions) == 0x000008, "Wrong alignment on Options_Console_StaticResolutionScaling_C_AddResolutionOptions");
static_assert(sizeof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions) == 0x000088, "Wrong size on Options_Console_StaticResolutionScaling_C_AddResolutionOptions");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, EndValue) == 0x000000, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::EndValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, StartValue) == 0x000004, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::StartValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, Temp_int_Variable) == 0x000008, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, CallFunc_Multiply_IntInt_ReturnValue) == 0x00000C, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, K2Node_MakeArray_Array) == 0x000058, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, CallFunc_Format_ReturnValue) == 0x000068, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000080, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_Console_StaticResolutionScaling_C_AddResolutionOptions, CallFunc_Add_Option_Index) == 0x000084, "Member 'Options_Console_StaticResolutionScaling_C_AddResolutionOptions::CallFunc_Add_Option_Index' has a wrong offset!");

}

