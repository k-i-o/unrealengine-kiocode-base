#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Gatling

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Gatling.ABP_Gatling_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Gatling_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Gatling_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Gatling_C_AnimGraph");
static_assert(sizeof(ABP_Gatling_C_AnimGraph) == 0x000010, "Wrong size on ABP_Gatling_C_AnimGraph");
static_assert(offsetof(ABP_Gatling_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Gatling_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Gatling.ABP_Gatling_C.ExecuteUbergraph_ABP_Gatling
// 0x000C (0x000C - 0x0000)
struct ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling) == 0x000004, "Wrong alignment on ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling");
static_assert(sizeof(ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling) == 0x00000C, "Wrong size on ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling");
static_assert(offsetof(ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling, EntryPoint) == 0x000000, "Member 'ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue) == 0x000004, "Member 'ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'ABP_Gatling_C_ExecuteUbergraph_ABP_Gatling::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

}
