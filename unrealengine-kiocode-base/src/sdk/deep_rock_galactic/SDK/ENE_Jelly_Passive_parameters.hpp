#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ENE_Jelly_Passive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ENE_Jelly_Passive.ENE_Jelly_Passive_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ENE_Jelly_Passive_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature final
{
public:
	class UHealthComponentBase*                   HealthComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ENE_Jelly_Passive_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature) == 0x000008, "Wrong alignment on ENE_Jelly_Passive_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");
static_assert(sizeof(ENE_Jelly_Passive_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature) == 0x000008, "Wrong size on ENE_Jelly_Passive_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");
static_assert(offsetof(ENE_Jelly_Passive_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature, HealthComponent) == 0x000000, "Member 'ENE_Jelly_Passive_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature::HealthComponent' has a wrong offset!");

// Function ENE_Jelly_Passive.ENE_Jelly_Passive_C.ExecuteUbergraph_ENE_Jelly_Passive
// 0x0028 (0x0028 - 0x0000)
struct ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53BC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHealthComponentBase*                   K2Node_ComponentBoundEvent_HealthComponent;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BD[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive) == 0x000008, "Wrong alignment on ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive");
static_assert(sizeof(ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive) == 0x000028, "Wrong size on ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive");
static_assert(offsetof(ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive, EntryPoint) == 0x000000, "Member 'ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive::EntryPoint' has a wrong offset!");
static_assert(offsetof(ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive, K2Node_ComponentBoundEvent_HealthComponent) == 0x000008, "Member 'ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive::K2Node_ComponentBoundEvent_HealthComponent' has a wrong offset!");
static_assert(offsetof(ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000020, "Member 'ENE_Jelly_Passive_C_ExecuteUbergraph_ENE_Jelly_Passive::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

}
