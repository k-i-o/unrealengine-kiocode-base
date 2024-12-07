#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PlagueWormPod

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_PlagueWormPod.ABP_PlagueWormPod_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_PlagueWormPod_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_PlagueWormPod_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_PlagueWormPod_C_AnimGraph");
static_assert(sizeof(ABP_PlagueWormPod_C_AnimGraph) == 0x000010, "Wrong size on ABP_PlagueWormPod_C_AnimGraph");
static_assert(offsetof(ABP_PlagueWormPod_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_PlagueWormPod_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_PlagueWormPod.ABP_PlagueWormPod_C.ExecuteUbergraph_ABP_PlagueWormPod
// 0x0004 (0x0004 - 0x0000)
struct ABP_PlagueWormPod_C_ExecuteUbergraph_ABP_PlagueWormPod final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlagueWormPod_C_ExecuteUbergraph_ABP_PlagueWormPod) == 0x000004, "Wrong alignment on ABP_PlagueWormPod_C_ExecuteUbergraph_ABP_PlagueWormPod");
static_assert(sizeof(ABP_PlagueWormPod_C_ExecuteUbergraph_ABP_PlagueWormPod) == 0x000004, "Wrong size on ABP_PlagueWormPod_C_ExecuteUbergraph_ABP_PlagueWormPod");
static_assert(offsetof(ABP_PlagueWormPod_C_ExecuteUbergraph_ABP_PlagueWormPod, EntryPoint) == 0x000000, "Member 'ABP_PlagueWormPod_C_ExecuteUbergraph_ABP_PlagueWormPod::EntryPoint' has a wrong offset!");

}

