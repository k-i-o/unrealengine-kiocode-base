#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JumpBoots

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_JumpBoots.BP_JumpBoots_C.ExecuteUbergraph_BP_JumpBoots
// 0x0020 (0x0020 - 0x0000)
struct BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_Event_character;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Value;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3220[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFallingStateComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots) == 0x000008, "Wrong alignment on BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots");
static_assert(sizeof(BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots) == 0x000020, "Wrong size on BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots");
static_assert(offsetof(BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots, EntryPoint) == 0x000000, "Member 'BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots, K2Node_Event_character) == 0x000008, "Member 'BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots::K2Node_Event_character' has a wrong offset!");
static_assert(offsetof(BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots, K2Node_Event_Value) == 0x000010, "Member 'BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_JumpBoots.BP_JumpBoots_C.Receive_ActivatePerk
// 0x0010 (0x0010 - 0x0000)
struct BP_JumpBoots_C_Receive_ActivatePerk final
{
public:
	class APlayerCharacter*                       Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_JumpBoots_C_Receive_ActivatePerk) == 0x000008, "Wrong alignment on BP_JumpBoots_C_Receive_ActivatePerk");
static_assert(sizeof(BP_JumpBoots_C_Receive_ActivatePerk) == 0x000010, "Wrong size on BP_JumpBoots_C_Receive_ActivatePerk");
static_assert(offsetof(BP_JumpBoots_C_Receive_ActivatePerk, Character) == 0x000000, "Member 'BP_JumpBoots_C_Receive_ActivatePerk::Character' has a wrong offset!");
static_assert(offsetof(BP_JumpBoots_C_Receive_ActivatePerk, Value) == 0x000008, "Member 'BP_JumpBoots_C_Receive_ActivatePerk::Value' has a wrong offset!");

}
