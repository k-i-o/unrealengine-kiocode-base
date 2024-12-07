#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_Cryocannon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PRJ_Cryocannon.PRJ_Cryocannon_C
// 0x0040 (0x0380 - 0x0340)
class APRJ_Cryocannon_C final : public AProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       DamageImpact;                                      // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       DamageGraze;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileExplosion*                   ProjectileExplosion;                               // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Die();
	void ExecuteUbergraph_PRJ_Cryocannon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PRJ_Cryocannon_C">();
	}
	static class APRJ_Cryocannon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APRJ_Cryocannon_C>();
	}
};
static_assert(alignof(APRJ_Cryocannon_C) == 0x000008, "Wrong alignment on APRJ_Cryocannon_C");
static_assert(sizeof(APRJ_Cryocannon_C) == 0x000380, "Wrong size on APRJ_Cryocannon_C");
static_assert(offsetof(APRJ_Cryocannon_C, UberGraphFrame) == 0x000340, "Member 'APRJ_Cryocannon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APRJ_Cryocannon_C, RotatingMovement) == 0x000348, "Member 'APRJ_Cryocannon_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(APRJ_Cryocannon_C, DamageImpact) == 0x000350, "Member 'APRJ_Cryocannon_C::DamageImpact' has a wrong offset!");
static_assert(offsetof(APRJ_Cryocannon_C, Sphere) == 0x000358, "Member 'APRJ_Cryocannon_C::Sphere' has a wrong offset!");
static_assert(offsetof(APRJ_Cryocannon_C, StaticMesh) == 0x000360, "Member 'APRJ_Cryocannon_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(APRJ_Cryocannon_C, DamageGraze) == 0x000368, "Member 'APRJ_Cryocannon_C::DamageGraze' has a wrong offset!");
static_assert(offsetof(APRJ_Cryocannon_C, ProjectileExplosion) == 0x000370, "Member 'APRJ_Cryocannon_C::ProjectileExplosion' has a wrong offset!");
static_assert(offsetof(APRJ_Cryocannon_C, ParticleSystem) == 0x000378, "Member 'APRJ_Cryocannon_C::ParticleSystem' has a wrong offset!");

}

