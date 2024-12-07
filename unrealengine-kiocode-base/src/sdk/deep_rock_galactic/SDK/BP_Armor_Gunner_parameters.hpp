#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Armor_Gunner

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function BP_Armor_Gunner.BP_Armor_Gunner_C.GetGearStatEntry
// 0x0020 (0x0020 - 0x0000)
struct BP_Armor_Gunner_C_GetGearStatEntry final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Armor_Gunner_C_GetGearStatEntry) == 0x000008, "Wrong alignment on BP_Armor_Gunner_C_GetGearStatEntry");
static_assert(sizeof(BP_Armor_Gunner_C_GetGearStatEntry) == 0x000020, "Wrong size on BP_Armor_Gunner_C_GetGearStatEntry");
static_assert(offsetof(BP_Armor_Gunner_C_GetGearStatEntry, PlayerState) == 0x000000, "Member 'BP_Armor_Gunner_C_GetGearStatEntry::PlayerState' has a wrong offset!");
static_assert(offsetof(BP_Armor_Gunner_C_GetGearStatEntry, Stats) == 0x000008, "Member 'BP_Armor_Gunner_C_GetGearStatEntry::Stats' has a wrong offset!");
static_assert(offsetof(BP_Armor_Gunner_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue) == 0x000018, "Member 'BP_Armor_Gunner_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");

}

