#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_AnimatedNumber

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.ExecuteUbergraph_Basic_AnimatedNumber
// 0x0060 (0x0060 - 0x0000)
struct Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3F04[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0020(0x0018)()
	float                                         K2Node_CustomEvent_Number;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_DoCountAnim;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_PlayCountSound;                 // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F05[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0040(0x0018)()
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber) == 0x000008, "Wrong alignment on Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber");
static_assert(sizeof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber) == 0x000060, "Wrong size on Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, EntryPoint) == 0x000000, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, CallFunc_Conv_FloatToText_ReturnValue) == 0x000020, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, K2Node_CustomEvent_Number) == 0x000038, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::K2Node_CustomEvent_Number' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, K2Node_CustomEvent_DoCountAnim) == 0x00003C, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::K2Node_CustomEvent_DoCountAnim' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, K2Node_CustomEvent_PlayCountSound) == 0x00003D, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::K2Node_CustomEvent_PlayCountSound' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000040, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000058, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber, K2Node_Event_IsDesignTime) == 0x00005C, "Member 'Basic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.SetNumber
// 0x0008 (0x0008 - 0x0000)
struct Basic_AnimatedNumber_C_SetNumber final
{
public:
	float                                         Param_Number;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoCountAnim;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PlayCountSound;                                    // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_AnimatedNumber_C_SetNumber) == 0x000004, "Wrong alignment on Basic_AnimatedNumber_C_SetNumber");
static_assert(sizeof(Basic_AnimatedNumber_C_SetNumber) == 0x000008, "Wrong size on Basic_AnimatedNumber_C_SetNumber");
static_assert(offsetof(Basic_AnimatedNumber_C_SetNumber, Param_Number) == 0x000000, "Member 'Basic_AnimatedNumber_C_SetNumber::Param_Number' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_SetNumber, DoCountAnim) == 0x000004, "Member 'Basic_AnimatedNumber_C_SetNumber::DoCountAnim' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_SetNumber, PlayCountSound) == 0x000005, "Member 'Basic_AnimatedNumber_C_SetNumber::PlayCountSound' has a wrong offset!");

// Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_AnimatedNumber_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_AnimatedNumber_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_AnimatedNumber_C_PreConstruct");
static_assert(sizeof(Basic_AnimatedNumber_C_PreConstruct) == 0x000001, "Wrong size on Basic_AnimatedNumber_C_PreConstruct");
static_assert(offsetof(Basic_AnimatedNumber_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_AnimatedNumber_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.CountUp
// 0x0038 (0x0038 - 0x0000)
struct Basic_AnimatedNumber_C_CountUp final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F06[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F07[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0020(0x0018)()
};
static_assert(alignof(Basic_AnimatedNumber_C_CountUp) == 0x000008, "Wrong alignment on Basic_AnimatedNumber_C_CountUp");
static_assert(sizeof(Basic_AnimatedNumber_C_CountUp) == 0x000038, "Wrong size on Basic_AnimatedNumber_C_CountUp");
static_assert(offsetof(Basic_AnimatedNumber_C_CountUp, Alpha) == 0x000000, "Member 'Basic_AnimatedNumber_C_CountUp::Alpha' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_CountUp, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000004, "Member 'Basic_AnimatedNumber_C_CountUp::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_CountUp, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000008, "Member 'Basic_AnimatedNumber_C_CountUp::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_CountUp, CallFunc_Lerp_ReturnValue) == 0x00000C, "Member 'Basic_AnimatedNumber_C_CountUp::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_CountUp, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000010, "Member 'Basic_AnimatedNumber_C_CountUp::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_CountUp, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000014, "Member 'Basic_AnimatedNumber_C_CountUp::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_CountUp, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'Basic_AnimatedNumber_C_CountUp::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_AnimatedNumber_C_CountUp, CallFunc_Conv_FloatToText_ReturnValue) == 0x000020, "Member 'Basic_AnimatedNumber_C_CountUp::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

}

