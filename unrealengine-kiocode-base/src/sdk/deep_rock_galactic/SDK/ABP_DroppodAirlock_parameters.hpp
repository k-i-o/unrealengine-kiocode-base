#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DroppodAirlock

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.ExecuteUbergraph_ABP_DroppodAirlock
// 0x0028 (0x0028 - 0x0000)
struct ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4630[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4631[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DropPod_Base_C*                     K2Node_DynamicCast_AsBP_Drop_Pod_Base;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock) == 0x000008, "Wrong alignment on ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock");
static_assert(sizeof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock) == 0x000028, "Wrong size on ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock");
static_assert(offsetof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock, EntryPoint) == 0x000000, "Member 'ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock, K2Node_Event_DeltaTimeX) == 0x000010, "Member 'ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock, K2Node_DynamicCast_AsBP_Drop_Pod_Base) == 0x000018, "Member 'ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock::K2Node_DynamicCast_AsBP_Drop_Pod_Base' has a wrong offset!");
static_assert(offsetof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock, K2Node_SwitchEnum_CmpSuccess) == 0x000022, "Member 'ABP_DroppodAirlock_C_ExecuteUbergraph_ABP_DroppodAirlock::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_DroppodAirlock_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_DroppodAirlock_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_DroppodAirlock_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_DroppodAirlock_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_DroppodAirlock_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_DroppodAirlock_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_DroppodAirlock_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_DroppodAirlock_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_DroppodAirlock_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_DroppodAirlock_C_AnimGraph");
static_assert(sizeof(ABP_DroppodAirlock_C_AnimGraph) == 0x000010, "Wrong size on ABP_DroppodAirlock_C_AnimGraph");
static_assert(offsetof(ABP_DroppodAirlock_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_DroppodAirlock_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

