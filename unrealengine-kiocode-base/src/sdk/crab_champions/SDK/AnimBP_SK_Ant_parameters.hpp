#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_SK_Ant

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_SK_Ant.AnimBP_SK_Ant_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AnimBP_SK_Ant_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_SK_Ant_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_SK_Ant_C_AnimGraph");
static_assert(sizeof(AnimBP_SK_Ant_C_AnimGraph) == 0x000010, "Wrong size on AnimBP_SK_Ant_C_AnimGraph");
static_assert(offsetof(AnimBP_SK_Ant_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AnimBP_SK_Ant_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function AnimBP_SK_Ant.AnimBP_SK_Ant_C.ExecuteUbergraph_AnimBP_SK_Ant
// 0x000C (0x000C - 0x0000)
struct AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_18EB[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant) == 0x000004, "Wrong alignment on AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant");
static_assert(sizeof(AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant) == 0x00000C, "Wrong size on AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant");
static_assert(offsetof(AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant, EntryPoint) == 0x000000, "Member 'AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant::EntryPoint' has a wrong offset!");
static_assert(offsetof(AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant, CallFunc_Less_FloatFloat_ReturnValue) == 0x000004, "Member 'AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000005, "Member 'AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'AnimBP_SK_Ant_C_ExecuteUbergraph_AnimBP_SK_Ant::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

}
