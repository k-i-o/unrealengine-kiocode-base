#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DepthCount

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DepthCount.BP_DepthCount_C.ExecuteUbergraph_BP_DepthCount
// 0x0060 (0x0060 - 0x0000)
struct BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359E[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DepthCountWidget_C*                 K2Node_DynamicCast_AsBP_Depth_Count_Widget;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359F[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_35A0[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount) == 0x000008, "Wrong alignment on BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount");
static_assert(sizeof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount) == 0x000060, "Wrong size on BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, EntryPoint) == 0x000000, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_BreakVector_X) == 0x00001C, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_BreakVector_Y) == 0x000020, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_BreakVector_Z) == 0x000024, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_Add_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000030, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, K2Node_DynamicCast_AsBP_Depth_Count_Widget) == 0x000038, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::K2Node_DynamicCast_AsBP_Depth_Count_Widget' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000058, "Member 'BP_DepthCount_C_ExecuteUbergraph_BP_DepthCount::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_DepthCount.BP_DepthCount_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_DepthCount_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DepthCount_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_DepthCount_C_ReceiveTick");
static_assert(sizeof(BP_DepthCount_C_ReceiveTick) == 0x000004, "Wrong size on BP_DepthCount_C_ReceiveTick");
static_assert(offsetof(BP_DepthCount_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_DepthCount_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_DepthCount.BP_DepthCount_C.SetPingActive
// 0x0030 (0x0030 - 0x0000)
struct BP_DepthCount_C_SetPingActive final
{
public:
	bool                                          InPingActive;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35A1[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateBool_ValueChanged;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateBool_OutValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DepthCount_C_SetPingActive) == 0x000008, "Wrong alignment on BP_DepthCount_C_SetPingActive");
static_assert(sizeof(BP_DepthCount_C_SetPingActive) == 0x000030, "Wrong size on BP_DepthCount_C_SetPingActive");
static_assert(offsetof(BP_DepthCount_C_SetPingActive, InPingActive) == 0x000000, "Member 'BP_DepthCount_C_SetPingActive::InPingActive' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_SetPingActive, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_DepthCount_C_SetPingActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_SetPingActive, CallFunc_Conv_BoolToString_ReturnValue) == 0x000008, "Member 'BP_DepthCount_C_SetPingActive::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_SetPingActive, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_DepthCount_C_SetPingActive::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_SetPingActive, CallFunc_UpdateBool_ValueChanged) == 0x000028, "Member 'BP_DepthCount_C_SetPingActive::CallFunc_UpdateBool_ValueChanged' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_SetPingActive, CallFunc_UpdateBool_OutValue) == 0x000029, "Member 'BP_DepthCount_C_SetPingActive::CallFunc_UpdateBool_OutValue' has a wrong offset!");
static_assert(offsetof(BP_DepthCount_C_SetPingActive, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'BP_DepthCount_C_SetPingActive::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
