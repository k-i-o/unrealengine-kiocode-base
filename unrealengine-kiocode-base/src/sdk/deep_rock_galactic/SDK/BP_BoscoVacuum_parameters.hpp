#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BoscoVacuum

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BoscoVacuum.BP_BoscoVacuum_C.ExecuteUbergraph_BP_BoscoVacuum
// 0x0040 (0x0040 - 0x0000)
struct BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54B1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABosco*                                 CallFunc_GetBosco_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABosco*                                 CallFunc_GetBosco_ReturnValue_1;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum) == 0x000008, "Wrong alignment on BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum");
static_assert(sizeof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum) == 0x000040, "Wrong size on BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum");
static_assert(offsetof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum, EntryPoint) == 0x000000, "Member 'BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum, CallFunc_GetBosco_ReturnValue) == 0x000008, "Member 'BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum::CallFunc_GetBosco_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum, CallFunc_GetBosco_ReturnValue_1) == 0x000010, "Member 'BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum::CallFunc_GetBosco_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000018, "Member 'BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000020, "Member 'BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000028, "Member 'BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000030, "Member 'BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
