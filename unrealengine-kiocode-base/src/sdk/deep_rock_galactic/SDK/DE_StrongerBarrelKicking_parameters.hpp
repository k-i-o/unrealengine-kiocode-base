#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DE_StrongerBarrelKicking

#include "Basic.hpp"


namespace SDK::Params
{

// Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.ExecuteUbergraph_DE_StrongerBarrelKicking
// 0x0010 (0x0010 - 0x0000)
struct DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddModifier_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       K2Node_Event_character;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking) == 0x000008, "Wrong alignment on DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking");
static_assert(sizeof(DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking) == 0x000010, "Wrong size on DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking");
static_assert(offsetof(DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking, EntryPoint) == 0x000000, "Member 'DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking::EntryPoint' has a wrong offset!");
static_assert(offsetof(DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking, CallFunc_AddModifier_ReturnValue) == 0x000004, "Member 'DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking::CallFunc_AddModifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking, K2Node_Event_character) == 0x000008, "Member 'DE_StrongerBarrelKicking_C_ExecuteUbergraph_DE_StrongerBarrelKicking::K2Node_Event_character' has a wrong offset!");

// Function DE_StrongerBarrelKicking.DE_StrongerBarrelKicking_C.OnStartEffect
// 0x0008 (0x0008 - 0x0000)
struct DE_StrongerBarrelKicking_C_OnStartEffect final
{
public:
	class APlayerCharacter*                       Param_Character;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DE_StrongerBarrelKicking_C_OnStartEffect) == 0x000008, "Wrong alignment on DE_StrongerBarrelKicking_C_OnStartEffect");
static_assert(sizeof(DE_StrongerBarrelKicking_C_OnStartEffect) == 0x000008, "Wrong size on DE_StrongerBarrelKicking_C_OnStartEffect");
static_assert(offsetof(DE_StrongerBarrelKicking_C_OnStartEffect, Param_Character) == 0x000000, "Member 'DE_StrongerBarrelKicking_C_OnStartEffect::Param_Character' has a wrong offset!");

}
