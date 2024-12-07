#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MinersManual_Hologram

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MinersManual_Hologram.BP_MinersManual_Hologram_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MinersManual_Hologram_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MinersManual_Hologram_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MinersManual_Hologram_C_ReceiveTick");
static_assert(sizeof(BP_MinersManual_Hologram_C_ReceiveTick) == 0x000004, "Wrong size on BP_MinersManual_Hologram_C_ReceiveTick");
static_assert(offsetof(BP_MinersManual_Hologram_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MinersManual_Hologram_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_MinersManual_Hologram.BP_MinersManual_Hologram_C.ExecuteUbergraph_BP_MinersManual_Hologram
// 0x009C (0x009C - 0x0000)
struct BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0014(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram) == 0x000004, "Wrong alignment on BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram");
static_assert(sizeof(BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram) == 0x00009C, "Wrong size on BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram");
static_assert(offsetof(BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram, EntryPoint) == 0x000000, "Member 'BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram, CallFunc_MakeRotator_ReturnValue) == 0x000008, "Member 'BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000014, "Member 'BP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");

}

