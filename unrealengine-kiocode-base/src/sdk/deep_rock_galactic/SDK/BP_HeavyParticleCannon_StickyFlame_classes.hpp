#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeavyParticleCannon_StickyFlame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HeavyParticleCannon_StickyFlame.BP_HeavyParticleCannon_StickyFlame_C
// 0x0020 (0x02A0 - 0x0280)
class ABP_HeavyParticleCannon_StickyFlame_C final : public AStickyFlame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NG_Magma;                                          // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPathfinderCollisionComponent*          PathfinderCollision;                               // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HeavyParticleCannon_StickyFlame(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeavyParticleCannon_StickyFlame_C">();
	}
	static class ABP_HeavyParticleCannon_StickyFlame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HeavyParticleCannon_StickyFlame_C>();
	}
};
static_assert(alignof(ABP_HeavyParticleCannon_StickyFlame_C) == 0x000008, "Wrong alignment on ABP_HeavyParticleCannon_StickyFlame_C");
static_assert(sizeof(ABP_HeavyParticleCannon_StickyFlame_C) == 0x0002A0, "Wrong size on ABP_HeavyParticleCannon_StickyFlame_C");
static_assert(offsetof(ABP_HeavyParticleCannon_StickyFlame_C, UberGraphFrame) == 0x000280, "Member 'ABP_HeavyParticleCannon_StickyFlame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_StickyFlame_C, NG_Magma) == 0x000288, "Member 'ABP_HeavyParticleCannon_StickyFlame_C::NG_Magma' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_StickyFlame_C, PathfinderCollision) == 0x000290, "Member 'ABP_HeavyParticleCannon_StickyFlame_C::PathfinderCollision' has a wrong offset!");
static_assert(offsetof(ABP_HeavyParticleCannon_StickyFlame_C, Sphere) == 0x000298, "Member 'ABP_HeavyParticleCannon_StickyFlame_C::Sphere' has a wrong offset!");

}

