#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DE_SmartStout

#include "Basic.hpp"


namespace SDK::Params
{

// Function DE_SmartStout.DE_SmartStout_C.ExecuteUbergraph_DE_SmartStout
// 0x0040 (0x0040 - 0x0000)
struct DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerController*                   CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_Event_character;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout) == 0x000008, "Wrong alignment on DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout");
static_assert(sizeof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout) == 0x000040, "Wrong size on DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, EntryPoint) == 0x000000, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::EntryPoint' has a wrong offset!");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000010, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, CallFunc_IsLocallyControlled_ReturnValue) == 0x000018, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, K2Node_Event_character) == 0x000020, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::K2Node_Event_character' has a wrong offset!");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000028, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000030, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x000038, "Member 'DE_SmartStout_C_ExecuteUbergraph_DE_SmartStout::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");

// Function DE_SmartStout.DE_SmartStout_C.OnStartEffect
// 0x0008 (0x0008 - 0x0000)
struct DE_SmartStout_C_OnStartEffect final
{
public:
	class APlayerCharacter*                       Param_Character;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DE_SmartStout_C_OnStartEffect) == 0x000008, "Wrong alignment on DE_SmartStout_C_OnStartEffect");
static_assert(sizeof(DE_SmartStout_C_OnStartEffect) == 0x000008, "Wrong size on DE_SmartStout_C_OnStartEffect");
static_assert(offsetof(DE_SmartStout_C_OnStartEffect, Param_Character) == 0x000000, "Member 'DE_SmartStout_C_OnStartEffect::Param_Character' has a wrong offset!");

}
