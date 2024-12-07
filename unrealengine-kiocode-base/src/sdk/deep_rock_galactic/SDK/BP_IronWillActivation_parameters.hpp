#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IronWillActivation

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_IronWillActivation.BP_IronWillActivation_C.ExecuteUbergraph_BP_IronWillActivation
// 0x0028 (0x0028 - 0x0000)
struct BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3394[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_Event_character;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Value;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3395[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStatusEffect*                          CallFunc_SetIronWillStatusEffect_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation) == 0x000008, "Wrong alignment on BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation");
static_assert(sizeof(BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation) == 0x000028, "Wrong size on BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation");
static_assert(offsetof(BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation, EntryPoint) == 0x000000, "Member 'BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation, K2Node_Event_character) == 0x000008, "Member 'BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation::K2Node_Event_character' has a wrong offset!");
static_assert(offsetof(BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation, K2Node_Event_Value) == 0x000010, "Member 'BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation, CallFunc_SetIronWillStatusEffect_ReturnValue) == 0x000018, "Member 'BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation::CallFunc_SetIronWillStatusEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_IronWillActivation.BP_IronWillActivation_C.Receive_ActivatePerk
// 0x0010 (0x0010 - 0x0000)
struct BP_IronWillActivation_C_Receive_ActivatePerk final
{
public:
	class APlayerCharacter*                       Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IronWillActivation_C_Receive_ActivatePerk) == 0x000008, "Wrong alignment on BP_IronWillActivation_C_Receive_ActivatePerk");
static_assert(sizeof(BP_IronWillActivation_C_Receive_ActivatePerk) == 0x000010, "Wrong size on BP_IronWillActivation_C_Receive_ActivatePerk");
static_assert(offsetof(BP_IronWillActivation_C_Receive_ActivatePerk, Character) == 0x000000, "Member 'BP_IronWillActivation_C_Receive_ActivatePerk::Character' has a wrong offset!");
static_assert(offsetof(BP_IronWillActivation_C_Receive_ActivatePerk, Value) == 0x000008, "Member 'BP_IronWillActivation_C_Receive_ActivatePerk::Value' has a wrong offset!");

}

