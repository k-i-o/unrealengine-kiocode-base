#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_HeavyParticleCannon_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_HeavyParticleCannon_New.ABP_HeavyParticleCannon_New_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_HeavyParticleCannon_New_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_HeavyParticleCannon_New_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_HeavyParticleCannon_New_C_AnimGraph");
static_assert(sizeof(ABP_HeavyParticleCannon_New_C_AnimGraph) == 0x000010, "Wrong size on ABP_HeavyParticleCannon_New_C_AnimGraph");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_HeavyParticleCannon_New_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_HeavyParticleCannon_New.ABP_HeavyParticleCannon_New_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_HeavyParticleCannon_New_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_HeavyParticleCannon_New_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_HeavyParticleCannon_New_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_HeavyParticleCannon_New_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_HeavyParticleCannon_New_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_HeavyParticleCannon_New_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_HeavyParticleCannon_New.ABP_HeavyParticleCannon_New_C.ExecuteUbergraph_ABP_HeavyParticleCannon_New
// 0x0054 (0x0054 - 0x0000)
struct ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1603[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New) == 0x000004, "Wrong alignment on ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New");
static_assert(sizeof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New) == 0x000054, "Wrong size on ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, EntryPoint) == 0x000000, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_MakeRotator_ReturnValue) == 0x000008, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000014, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_MakeRotator_ReturnValue_1) == 0x000018, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, K2Node_Event_DeltaTimeX) == 0x000024, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000028, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_SelectFloat_ReturnValue) == 0x00002C, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000030, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_SelectFloat_ReturnValue_1) == 0x000034, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x00003C, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x000040, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Add_FloatFloat_ReturnValue) == 0x000044, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000048, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_Percent_FloatFloat_ReturnValue) == 0x00004C, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New, CallFunc_FClamp_ReturnValue) == 0x000050, "Member 'ABP_HeavyParticleCannon_New_C_ExecuteUbergraph_ABP_HeavyParticleCannon_New::CallFunc_FClamp_ReturnValue' has a wrong offset!");

}
