#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeSpeedWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TimeSpeedWidget.TimeSpeedWidget_C.ExecuteUbergraph_TimeSpeedWidget
// 0x00A0 (0x00A0 - 0x0000)
struct TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0024(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0014)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x004C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGlobalTimeDilation_ReturnValue;        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23F3[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast; // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget) == 0x000008, "Wrong alignment on TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget");
static_assert(sizeof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget) == 0x0000A0, "Wrong size on TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, EntryPoint) == 0x000000, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, K2Node_MakeStruct_LinearColor_1) == 0x000014, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, K2Node_MakeStruct_SlateColor) == 0x000024, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, K2Node_Event_MyGeometry) == 0x00004C, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, K2Node_Event_InDeltaTime) == 0x000084, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, CallFunc_GetGlobalTimeDilation_ReturnValue) == 0x000088, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::CallFunc_GetGlobalTimeDilation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x00008C, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, CallFunc_NotEqual_DoubleDouble_A_ImplicitCast) == 0x000090, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::CallFunc_NotEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget, CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast) == 0x000098, "Member 'TimeSpeedWidget_C_ExecuteUbergraph_TimeSpeedWidget::CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast' has a wrong offset!");

// Function TimeSpeedWidget.TimeSpeedWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct TimeSpeedWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeSpeedWidget_C_Tick) == 0x000004, "Wrong alignment on TimeSpeedWidget_C_Tick");
static_assert(sizeof(TimeSpeedWidget_C_Tick) == 0x00003C, "Wrong size on TimeSpeedWidget_C_Tick");
static_assert(offsetof(TimeSpeedWidget_C_Tick, MyGeometry) == 0x000000, "Member 'TimeSpeedWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'TimeSpeedWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function TimeSpeedWidget.TimeSpeedWidget_C.UpdateImage
// 0x0010 (0x0010 - 0x0000)
struct TimeSpeedWidget_C_UpdateImage final
{
public:
	float                                         CallFunc_GetGlobalTimeDilation_ReturnValue;        // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23F4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeSpeedWidget_C_UpdateImage) == 0x000008, "Wrong alignment on TimeSpeedWidget_C_UpdateImage");
static_assert(sizeof(TimeSpeedWidget_C_UpdateImage) == 0x000010, "Wrong size on TimeSpeedWidget_C_UpdateImage");
static_assert(offsetof(TimeSpeedWidget_C_UpdateImage, CallFunc_GetGlobalTimeDilation_ReturnValue) == 0x000000, "Member 'TimeSpeedWidget_C_UpdateImage::CallFunc_GetGlobalTimeDilation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_UpdateImage, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000004, "Member 'TimeSpeedWidget_C_UpdateImage::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeSpeedWidget_C_UpdateImage, CallFunc_NotEqual_DoubleDouble_A_ImplicitCast) == 0x000008, "Member 'TimeSpeedWidget_C_UpdateImage::CallFunc_NotEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

