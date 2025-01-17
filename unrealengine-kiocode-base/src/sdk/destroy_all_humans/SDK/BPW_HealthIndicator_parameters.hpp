#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_HealthIndicator

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPW_HealthIndicator.BPW_HealthIndicator_C.Get_Bar_NPCHP_Percent_0
// 0x0038 (0x0038 - 0x0000)
struct BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0 final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20B9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachedActor_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20BA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBFGActorComponent_PawnStats*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20BB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBFGActorStat_Float*                    CallFunc_GetHealthStat_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRatio_ReturnValue;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0) == 0x000008, "Wrong alignment on BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0");
static_assert(sizeof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0) == 0x000038, "Wrong size on BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0");
static_assert(offsetof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0, ReturnValue) == 0x000000, "Member 'BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0, CallFunc_GetAttachedActor_ReturnValue) == 0x000008, "Member 'BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0::CallFunc_GetAttachedActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0, CallFunc_IsValid_ReturnValue1) == 0x000020, "Member 'BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0, CallFunc_GetHealthStat_ReturnValue) == 0x000028, "Member 'BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0::CallFunc_GetHealthStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0, CallFunc_GetRatio_ReturnValue) == 0x000030, "Member 'BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0::CallFunc_GetRatio_ReturnValue' has a wrong offset!");

// Function BPW_HealthIndicator.BPW_HealthIndicator_C.FadeOut
// 0x0018 (0x0018 - 0x0000)
struct BPW_HealthIndicator_C_FadeOut final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPW_HealthIndicator_C_FadeOut) == 0x000008, "Wrong alignment on BPW_HealthIndicator_C_FadeOut");
static_assert(sizeof(BPW_HealthIndicator_C_FadeOut) == 0x000018, "Wrong size on BPW_HealthIndicator_C_FadeOut");
static_assert(offsetof(BPW_HealthIndicator_C_FadeOut, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BPW_HealthIndicator_C_FadeOut::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPW_HealthIndicator_C_FadeOut, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'BPW_HealthIndicator_C_FadeOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function BPW_HealthIndicator.BPW_HealthIndicator_C.FadeIn
// 0x0018 (0x0018 - 0x0000)
struct BPW_HealthIndicator_C_FadeIn final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPW_HealthIndicator_C_FadeIn) == 0x000008, "Wrong alignment on BPW_HealthIndicator_C_FadeIn");
static_assert(sizeof(BPW_HealthIndicator_C_FadeIn) == 0x000018, "Wrong size on BPW_HealthIndicator_C_FadeIn");
static_assert(offsetof(BPW_HealthIndicator_C_FadeIn, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BPW_HealthIndicator_C_FadeIn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPW_HealthIndicator_C_FadeIn, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'BPW_HealthIndicator_C_FadeIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

