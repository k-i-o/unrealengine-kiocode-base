#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Crossbow_Projectile_Stuck_Chemical

#include "Basic.hpp"

#include "BP_Crossbow_Projectile_Stuck_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Crossbow_Projectile_Stuck_Chemical.BP_Crossbow_Projectile_Stuck_Chemical_C
// 0x0020 (0x0318 - 0x02F8)
class ABP_Crossbow_Projectile_Stuck_Chemical_C final : public ABP_Crossbow_Projectile_Stuck_C
{
public:
	class UNiagaraComponent*                      ChemicalParticles;                                 // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCrossbowStuckProjectileEffectExploding* EffectExploding;                                   // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileExplosion*                   ProjectileExplosion;                               // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Crossbow_Projectile_Stuck_Chemical_C">();
	}
	static class ABP_Crossbow_Projectile_Stuck_Chemical_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Crossbow_Projectile_Stuck_Chemical_C>();
	}
};
static_assert(alignof(ABP_Crossbow_Projectile_Stuck_Chemical_C) == 0x000008, "Wrong alignment on ABP_Crossbow_Projectile_Stuck_Chemical_C");
static_assert(sizeof(ABP_Crossbow_Projectile_Stuck_Chemical_C) == 0x000318, "Wrong size on ABP_Crossbow_Projectile_Stuck_Chemical_C");
static_assert(offsetof(ABP_Crossbow_Projectile_Stuck_Chemical_C, ChemicalParticles) == 0x0002F8, "Member 'ABP_Crossbow_Projectile_Stuck_Chemical_C::ChemicalParticles' has a wrong offset!");
static_assert(offsetof(ABP_Crossbow_Projectile_Stuck_Chemical_C, EffectExploding) == 0x000300, "Member 'ABP_Crossbow_Projectile_Stuck_Chemical_C::EffectExploding' has a wrong offset!");
static_assert(offsetof(ABP_Crossbow_Projectile_Stuck_Chemical_C, ProjectileExplosion) == 0x000308, "Member 'ABP_Crossbow_Projectile_Stuck_Chemical_C::ProjectileExplosion' has a wrong offset!");
static_assert(offsetof(ABP_Crossbow_Projectile_Stuck_Chemical_C, Damage) == 0x000310, "Member 'ABP_Crossbow_Projectile_Stuck_Chemical_C::Damage' has a wrong offset!");

}
