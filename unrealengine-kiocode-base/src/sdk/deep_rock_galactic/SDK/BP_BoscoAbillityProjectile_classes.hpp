#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BoscoAbillityProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C
// 0x0038 (0x0378 - 0x0340)
class ABP_BoscoAbillityProjectile_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   Light_Exhaust;                                     // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_Trail;                                    // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_Exhaust;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MeshRocket;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileExplosion*                   ProjectileExplosion;                               // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BoscoAbillityProjectile(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BoscoAbillityProjectile_C">();
	}
	static class ABP_BoscoAbillityProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BoscoAbillityProjectile_C>();
	}
};
static_assert(alignof(ABP_BoscoAbillityProjectile_C) == 0x000008, "Wrong alignment on ABP_BoscoAbillityProjectile_C");
static_assert(sizeof(ABP_BoscoAbillityProjectile_C) == 0x000378, "Wrong size on ABP_BoscoAbillityProjectile_C");
static_assert(offsetof(ABP_BoscoAbillityProjectile_C, UberGraphFrame) == 0x000340, "Member 'ABP_BoscoAbillityProjectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BoscoAbillityProjectile_C, Light_Exhaust) == 0x000348, "Member 'ABP_BoscoAbillityProjectile_C::Light_Exhaust' has a wrong offset!");
static_assert(offsetof(ABP_BoscoAbillityProjectile_C, Particle_Trail) == 0x000350, "Member 'ABP_BoscoAbillityProjectile_C::Particle_Trail' has a wrong offset!");
static_assert(offsetof(ABP_BoscoAbillityProjectile_C, Particle_Exhaust) == 0x000358, "Member 'ABP_BoscoAbillityProjectile_C::Particle_Exhaust' has a wrong offset!");
static_assert(offsetof(ABP_BoscoAbillityProjectile_C, MeshRocket) == 0x000360, "Member 'ABP_BoscoAbillityProjectile_C::MeshRocket' has a wrong offset!");
static_assert(offsetof(ABP_BoscoAbillityProjectile_C, ProjectileExplosion) == 0x000368, "Member 'ABP_BoscoAbillityProjectile_C::ProjectileExplosion' has a wrong offset!");
static_assert(offsetof(ABP_BoscoAbillityProjectile_C, Damage) == 0x000370, "Member 'ABP_BoscoAbillityProjectile_C::Damage' has a wrong offset!");

}
