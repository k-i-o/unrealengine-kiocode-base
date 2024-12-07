#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_GrenadeAxe

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PRJ_GrenadeAxe.PRJ_GrenadeAxe_C
// 0x0110 (0x0450 - 0x0340)
class APRJ_GrenadeAxe_C final : public AProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDamageComponent*                       SmallShitDamage;                                   // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       KillSmallShits_Sphere;                             // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       BounceDamage;                                      // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       FullDamage;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Trail;                                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh_Front;                                        // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MyStartLocation;                                   // 0x0380(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MyImpactVelocity;                                  // 0x038C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewVar_0;                                          // 0x0398(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4636[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         AlreadyHitList;                                    // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                HitNormal;                                         // 0x03B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x03C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AThrownGrenadeItem*                     AxeGrenadeItem;                                    // 0x03D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 HitActor;                                          // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    HitComponent;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanRetrieve;                                       // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4637[0x3];                                     // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   HitBone;                                           // 0x03EC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanAttach;                                         // 0x03F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PassThroughTarget;                                 // 0x03F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HitTerrain;                                        // 0x03F6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ForceDischarge;                                    // 0x03F7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFSDPhysicalMaterial*                   HitPhysMat;                                        // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class AActor*>                           SmallShitsHitArray;                                // 0x0400(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult);
	void Discharge(class AActor* Param_HitActor, class UPrimitiveComponent* Param_HitComponent, const struct FVector& Param_HitLocation, class UFSDPhysicalMaterial* Param_HitPhysMat);
	void BluntDamage();
	void BndEvt__KillSmallShits_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnInitialized();
	void ExecuteUbergraph_PRJ_GrenadeAxe(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PRJ_GrenadeAxe_C">();
	}
	static class APRJ_GrenadeAxe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APRJ_GrenadeAxe_C>();
	}
};
static_assert(alignof(APRJ_GrenadeAxe_C) == 0x000008, "Wrong alignment on APRJ_GrenadeAxe_C");
static_assert(sizeof(APRJ_GrenadeAxe_C) == 0x000450, "Wrong size on APRJ_GrenadeAxe_C");
static_assert(offsetof(APRJ_GrenadeAxe_C, UberGraphFrame) == 0x000340, "Member 'APRJ_GrenadeAxe_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, SmallShitDamage) == 0x000348, "Member 'APRJ_GrenadeAxe_C::SmallShitDamage' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, KillSmallShits_Sphere) == 0x000350, "Member 'APRJ_GrenadeAxe_C::KillSmallShits_Sphere' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, BounceDamage) == 0x000358, "Member 'APRJ_GrenadeAxe_C::BounceDamage' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, FullDamage) == 0x000360, "Member 'APRJ_GrenadeAxe_C::FullDamage' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, RotatingMovement) == 0x000368, "Member 'APRJ_GrenadeAxe_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, Trail) == 0x000370, "Member 'APRJ_GrenadeAxe_C::Trail' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, Mesh_Front) == 0x000378, "Member 'APRJ_GrenadeAxe_C::Mesh_Front' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, MyStartLocation) == 0x000380, "Member 'APRJ_GrenadeAxe_C::MyStartLocation' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, MyImpactVelocity) == 0x00038C, "Member 'APRJ_GrenadeAxe_C::MyImpactVelocity' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, NewVar_0) == 0x000398, "Member 'APRJ_GrenadeAxe_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, AlreadyHitList) == 0x0003A8, "Member 'APRJ_GrenadeAxe_C::AlreadyHitList' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, HitNormal) == 0x0003B8, "Member 'APRJ_GrenadeAxe_C::HitNormal' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, HitLocation) == 0x0003C4, "Member 'APRJ_GrenadeAxe_C::HitLocation' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, AxeGrenadeItem) == 0x0003D0, "Member 'APRJ_GrenadeAxe_C::AxeGrenadeItem' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, HitActor) == 0x0003D8, "Member 'APRJ_GrenadeAxe_C::HitActor' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, HitComponent) == 0x0003E0, "Member 'APRJ_GrenadeAxe_C::HitComponent' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, CanRetrieve) == 0x0003E8, "Member 'APRJ_GrenadeAxe_C::CanRetrieve' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, HitBone) == 0x0003EC, "Member 'APRJ_GrenadeAxe_C::HitBone' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, CanAttach) == 0x0003F4, "Member 'APRJ_GrenadeAxe_C::CanAttach' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, PassThroughTarget) == 0x0003F5, "Member 'APRJ_GrenadeAxe_C::PassThroughTarget' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, HitTerrain) == 0x0003F6, "Member 'APRJ_GrenadeAxe_C::HitTerrain' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, ForceDischarge) == 0x0003F7, "Member 'APRJ_GrenadeAxe_C::ForceDischarge' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, HitPhysMat) == 0x0003F8, "Member 'APRJ_GrenadeAxe_C::HitPhysMat' has a wrong offset!");
static_assert(offsetof(APRJ_GrenadeAxe_C, SmallShitsHitArray) == 0x000400, "Member 'APRJ_GrenadeAxe_C::SmallShitsHitArray' has a wrong offset!");

}

