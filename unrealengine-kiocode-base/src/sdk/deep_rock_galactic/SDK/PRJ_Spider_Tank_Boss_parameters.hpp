#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_Spider_Tank_Boss

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C.OnImpacted
// 0x008C (0x008C - 0x0000)
struct PRJ_Spider_Tank_Boss_C_OnImpacted final
{
public:
	bool                                          PredictedImpact;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A64[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             HitResult;                                         // 0x0004(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(PRJ_Spider_Tank_Boss_C_OnImpacted) == 0x000004, "Wrong alignment on PRJ_Spider_Tank_Boss_C_OnImpacted");
static_assert(sizeof(PRJ_Spider_Tank_Boss_C_OnImpacted) == 0x00008C, "Wrong size on PRJ_Spider_Tank_Boss_C_OnImpacted");
static_assert(offsetof(PRJ_Spider_Tank_Boss_C_OnImpacted, PredictedImpact) == 0x000000, "Member 'PRJ_Spider_Tank_Boss_C_OnImpacted::PredictedImpact' has a wrong offset!");
static_assert(offsetof(PRJ_Spider_Tank_Boss_C_OnImpacted, HitResult) == 0x000004, "Member 'PRJ_Spider_Tank_Boss_C_OnImpacted::HitResult' has a wrong offset!");

// Function PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C.ExecuteUbergraph_PRJ_Spider_Tank_Boss
// 0x0094 (0x0094 - 0x0000)
struct PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_PredictedImpact;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A65[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0008(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss) == 0x000004, "Wrong alignment on PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss");
static_assert(sizeof(PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss) == 0x000094, "Wrong size on PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss");
static_assert(offsetof(PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss, EntryPoint) == 0x000000, "Member 'PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss::EntryPoint' has a wrong offset!");
static_assert(offsetof(PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss, K2Node_Event_PredictedImpact) == 0x000004, "Member 'PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss::K2Node_Event_PredictedImpact' has a wrong offset!");
static_assert(offsetof(PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss, K2Node_Event_HitResult) == 0x000008, "Member 'PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss, CallFunc_HasAuthority_ReturnValue) == 0x000090, "Member 'PRJ_Spider_Tank_Boss_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

}

