#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_VolumeSlider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Options_VolumeSlider.Options_VolumeSlider_C.ExecuteUbergraph_Options_VolumeSlider
// 0x00E0 (0x00E0 - 0x0000)
struct Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_FSDGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4410[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UFSDGameUserSettings*                   CallFunc_FSDGameUserSettings_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetVolume_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Value_Value;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4411[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0018)()
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider) == 0x000008, "Wrong alignment on Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider");
static_assert(sizeof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider) == 0x0000E0, "Wrong size on Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, EntryPoint) == 0x000000, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_FSDGameUserSettings_ReturnValue) == 0x000008, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_FSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, K2Node_Event_IsDesignTime) == 0x000010, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, K2Node_ComponentBoundEvent_Value) == 0x000014, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000018, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_GetFSDGameInstance_ReturnValue_1) == 0x000020, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_GetFSDGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_FSDGameUserSettings_ReturnValue_1) == 0x000038, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_FSDGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_GetVolume_ReturnValue) == 0x000040, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_GetVolume_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_Get_Value_Value) == 0x000044, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_Get_Value_Value' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000048, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_Round_ReturnValue) == 0x00004C, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000050, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, K2Node_MakeArray_Array) == 0x000098, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_Max_ReturnValue) == 0x0000A8, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000C8, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider, K2Node_MakeStruct_Margin) == 0x0000CC, "Member 'Options_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function Options_VolumeSlider.Options_VolumeSlider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Options_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on Options_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
static_assert(sizeof(Options_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on Options_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
static_assert(offsetof(Options_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'Options_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature::Value' has a wrong offset!");

// Function Options_VolumeSlider.Options_VolumeSlider_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Options_VolumeSlider_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_VolumeSlider_C_PreConstruct) == 0x000001, "Wrong alignment on Options_VolumeSlider_C_PreConstruct");
static_assert(sizeof(Options_VolumeSlider_C_PreConstruct) == 0x000001, "Wrong size on Options_VolumeSlider_C_PreConstruct");
static_assert(offsetof(Options_VolumeSlider_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Options_VolumeSlider_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

