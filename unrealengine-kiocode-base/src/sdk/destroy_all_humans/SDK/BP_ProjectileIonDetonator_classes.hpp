#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileIonDetonator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectileIonDetonator.BP_ProjectileIonDetonator_C
// 0x0038 (0x0760 - 0x0728)
class ABP_ProjectileIonDetonator_C final : public ABFGProjectile_IonDetonator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ProjectileTrail;                                   // 0x0730(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0738(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnExploded;                                        // 0x0748(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnExploded__DelegateSignature();
	void ExecuteUbergraph_BP_ProjectileIonDetonator(int32 EntryPoint);
	void OnProjectileExplosion(const struct FVector& _vLocation, float _fRadius);
	void OnProjectileBounce(const struct FHitResult& _vHitResult);
	void HandleExplosion(const struct FVector& _vLocation, float _fRadius);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileIonDetonator_C">();
	}
	static class ABP_ProjectileIonDetonator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileIonDetonator_C>();
	}
};
static_assert(alignof(ABP_ProjectileIonDetonator_C) == 0x000008, "Wrong alignment on ABP_ProjectileIonDetonator_C");
static_assert(sizeof(ABP_ProjectileIonDetonator_C) == 0x000760, "Wrong size on ABP_ProjectileIonDetonator_C");
static_assert(offsetof(ABP_ProjectileIonDetonator_C, UberGraphFrame) == 0x000728, "Member 'ABP_ProjectileIonDetonator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileIonDetonator_C, ProjectileTrail) == 0x000730, "Member 'ABP_ProjectileIonDetonator_C::ProjectileTrail' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileIonDetonator_C, Sphere) == 0x000738, "Member 'ABP_ProjectileIonDetonator_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileIonDetonator_C, Other) == 0x000740, "Member 'ABP_ProjectileIonDetonator_C::Other' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileIonDetonator_C, OnExploded) == 0x000748, "Member 'ABP_ProjectileIonDetonator_C::OnExploded' has a wrong offset!");

}

