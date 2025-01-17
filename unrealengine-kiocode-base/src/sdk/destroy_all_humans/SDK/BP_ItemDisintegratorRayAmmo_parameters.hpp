#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemDisintegratorRayAmmo

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ItemDisintegratorRayAmmo.BP_ItemDisintegratorRayAmmo_C.ExecuteUbergraph_BP_ItemDisintegratorRayAmmo
// 0x0018 (0x0018 - 0x0000)
struct BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBFGEffectBlackboard*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_pCollectedBy;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo) == 0x000008, "Wrong alignment on BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo");
static_assert(sizeof(BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo) == 0x000018, "Wrong size on BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo");
static_assert(offsetof(BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo, EntryPoint) == 0x000000, "Member 'BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo, CallFunc_GetBlackboard_ReturnValue) == 0x000008, "Member 'BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo, K2Node_Event_pCollectedBy) == 0x000010, "Member 'BP_ItemDisintegratorRayAmmo_C_ExecuteUbergraph_BP_ItemDisintegratorRayAmmo::K2Node_Event_pCollectedBy' has a wrong offset!");

// Function BP_ItemDisintegratorRayAmmo.BP_ItemDisintegratorRayAmmo_C.OnCollected
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemDisintegratorRayAmmo_C_OnCollected final
{
public:
	class AActor*                                 PCollectedBy;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemDisintegratorRayAmmo_C_OnCollected) == 0x000008, "Wrong alignment on BP_ItemDisintegratorRayAmmo_C_OnCollected");
static_assert(sizeof(BP_ItemDisintegratorRayAmmo_C_OnCollected) == 0x000008, "Wrong size on BP_ItemDisintegratorRayAmmo_C_OnCollected");
static_assert(offsetof(BP_ItemDisintegratorRayAmmo_C_OnCollected, PCollectedBy) == 0x000000, "Member 'BP_ItemDisintegratorRayAmmo_C_OnCollected::PCollectedBy' has a wrong offset!");

}

