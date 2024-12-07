#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Widget_DropPod_AltitudeMeter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_Widget_DropPod_AltitudeMeter
// 0x0090 (0x0090 - 0x0000)
struct Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGeneratedMission* OutGeneratedMission)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_44F8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneratedMission*                      K2Node_CustomEvent_OutGeneratedMission;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeepDive_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F9[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0068(0x0028)()
};
static_assert(alignof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter) == 0x000008, "Wrong alignment on Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter");
static_assert(sizeof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter) == 0x000090, "Wrong size on Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, EntryPoint) == 0x000000, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::EntryPoint' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000020, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, CallFunc_GetFSDGameInstance_ReturnValue_1) == 0x000028, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::CallFunc_GetFSDGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, K2Node_CustomEvent_OutGeneratedMission) == 0x000030, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::K2Node_CustomEvent_OutGeneratedMission' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, CallFunc_IsDeepDive_ReturnValue) == 0x000039, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::CallFunc_IsDeepDive_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, K2Node_MakeStruct_SlateColor) == 0x000040, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter, K2Node_MakeStruct_SlateColor_1) == 0x000068, "Member 'Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.OnGeneratedMissionChanged
// 0x0008 (0x0008 - 0x0000)
struct Widget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged final
{
public:
	class UGeneratedMission*                      OutGeneratedMission;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Widget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged) == 0x000008, "Wrong alignment on Widget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged");
static_assert(sizeof(Widget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged) == 0x000008, "Wrong size on Widget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged, OutGeneratedMission) == 0x000000, "Member 'Widget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged::OutGeneratedMission' has a wrong offset!");

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.SetProgress
// 0x0004 (0x0004 - 0x0000)
struct Widget_DropPod_AltitudeMeter_C_SetProgress final
{
public:
	float                                         Progress;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Widget_DropPod_AltitudeMeter_C_SetProgress) == 0x000004, "Wrong alignment on Widget_DropPod_AltitudeMeter_C_SetProgress");
static_assert(sizeof(Widget_DropPod_AltitudeMeter_C_SetProgress) == 0x000004, "Wrong size on Widget_DropPod_AltitudeMeter_C_SetProgress");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_SetProgress, Progress) == 0x000000, "Member 'Widget_DropPod_AltitudeMeter_C_SetProgress::Progress' has a wrong offset!");

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateDepthText
// 0x00D8 (0x00D8 - 0x0000)
struct Widget_DropPod_AltitudeMeter_C_UpdateDepthText final
{
public:
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0000(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0058(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0070(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
};
static_assert(alignof(Widget_DropPod_AltitudeMeter_C_UpdateDepthText) == 0x000008, "Wrong alignment on Widget_DropPod_AltitudeMeter_C_UpdateDepthText");
static_assert(sizeof(Widget_DropPod_AltitudeMeter_C_UpdateDepthText) == 0x0000D8, "Wrong size on Widget_DropPod_AltitudeMeter_C_UpdateDepthText");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_UpdateDepthText, CallFunc_MakeLiteralText_ReturnValue) == 0x000000, "Member 'Widget_DropPod_AltitudeMeter_C_UpdateDepthText::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_UpdateDepthText, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'Widget_DropPod_AltitudeMeter_C_UpdateDepthText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_UpdateDepthText, CallFunc_Conv_FloatToText_ReturnValue) == 0x000058, "Member 'Widget_DropPod_AltitudeMeter_C_UpdateDepthText::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_UpdateDepthText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000070, "Member 'Widget_DropPod_AltitudeMeter_C_UpdateDepthText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_UpdateDepthText, K2Node_MakeArray_Array) == 0x0000B0, "Member 'Widget_DropPod_AltitudeMeter_C_UpdateDepthText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_UpdateDepthText, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'Widget_DropPod_AltitudeMeter_C_UpdateDepthText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateHeader
// 0x0018 (0x0018 - 0x0000)
struct Widget_DropPod_AltitudeMeter_C_UpdateHeader final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Widget_DropPod_AltitudeMeter_C_UpdateHeader) == 0x000008, "Wrong alignment on Widget_DropPod_AltitudeMeter_C_UpdateHeader");
static_assert(sizeof(Widget_DropPod_AltitudeMeter_C_UpdateHeader) == 0x000018, "Wrong size on Widget_DropPod_AltitudeMeter_C_UpdateHeader");
static_assert(offsetof(Widget_DropPod_AltitudeMeter_C_UpdateHeader, InText) == 0x000000, "Member 'Widget_DropPod_AltitudeMeter_C_UpdateHeader::InText' has a wrong offset!");

}

