#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_CombatShotgun_A

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_CombatShotgun_A.ABP_CombatShotgun_A_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_CombatShotgun_A_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_CombatShotgun_A_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_CombatShotgun_A_C_AnimGraph");
static_assert(sizeof(ABP_CombatShotgun_A_C_AnimGraph) == 0x000010, "Wrong size on ABP_CombatShotgun_A_C_AnimGraph");
static_assert(offsetof(ABP_CombatShotgun_A_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_CombatShotgun_A_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_CombatShotgun_A.ABP_CombatShotgun_A_C.ExecuteUbergraph_ABP_CombatShotgun_A
// 0x0020 (0x0020 - 0x0000)
struct ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47E8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmmoDrivenWeapon*                      K2Node_DynamicCast_AsAmmo_Driven_Weapon;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A) == 0x000008, "Wrong alignment on ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A");
static_assert(sizeof(ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A) == 0x000020, "Wrong size on ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A");
static_assert(offsetof(ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A, EntryPoint) == 0x000000, "Member 'ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A, K2Node_DynamicCast_AsAmmo_Driven_Weapon) == 0x000010, "Member 'ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A::K2Node_DynamicCast_AsAmmo_Driven_Weapon' has a wrong offset!");
static_assert(offsetof(ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A, CallFunc_IsLocallyControlled_ReturnValue) == 0x000019, "Member 'ABP_CombatShotgun_A_C_ExecuteUbergraph_ABP_CombatShotgun_A::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

}
