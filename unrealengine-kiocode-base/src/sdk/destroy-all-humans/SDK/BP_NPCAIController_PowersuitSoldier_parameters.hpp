#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAIController_PowersuitSoldier

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NPCAIController_PowersuitSoldier.BP_NPCAIController_PowersuitSoldier_C.ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier) == 0x000004, "Wrong alignment on BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier");
static_assert(sizeof(BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier) == 0x000008, "Wrong size on BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier");
static_assert(offsetof(BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier, EntryPoint) == 0x000000, "Member 'BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_NPCAIController_PowersuitSoldier_C_ExecuteUbergraph_BP_NPCAIController_PowersuitSoldier::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_NPCAIController_PowersuitSoldier.BP_NPCAIController_PowersuitSoldier_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_NPCAIController_PowersuitSoldier_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_PowersuitSoldier_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_NPCAIController_PowersuitSoldier_C_ReceiveTick");
static_assert(sizeof(BP_NPCAIController_PowersuitSoldier_C_ReceiveTick) == 0x000004, "Wrong size on BP_NPCAIController_PowersuitSoldier_C_ReceiveTick");
static_assert(offsetof(BP_NPCAIController_PowersuitSoldier_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_NPCAIController_PowersuitSoldier_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
