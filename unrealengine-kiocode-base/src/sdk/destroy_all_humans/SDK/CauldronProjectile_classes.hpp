#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CauldronProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CauldronProjectile.CauldronProjectile_C
// 0x0050 (0x02E0 - 0x0290)
class ACauldronProjectile_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CauldronProjectileSplash_FX;                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CauldronProjectile_FX;                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target;                                            // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CauldronProjectile(int32 EntryPoint);
	void Launch();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CauldronProjectile_C">();
	}
	static class ACauldronProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACauldronProjectile_C>();
	}
};
static_assert(alignof(ACauldronProjectile_C) == 0x000008, "Wrong alignment on ACauldronProjectile_C");
static_assert(sizeof(ACauldronProjectile_C) == 0x0002E0, "Wrong size on ACauldronProjectile_C");
static_assert(offsetof(ACauldronProjectile_C, UberGraphFrame) == 0x000290, "Member 'ACauldronProjectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACauldronProjectile_C, Sphere) == 0x000298, "Member 'ACauldronProjectile_C::Sphere' has a wrong offset!");
static_assert(offsetof(ACauldronProjectile_C, CauldronProjectileSplash_FX) == 0x0002A0, "Member 'ACauldronProjectile_C::CauldronProjectileSplash_FX' has a wrong offset!");
static_assert(offsetof(ACauldronProjectile_C, ProjectileMovement) == 0x0002A8, "Member 'ACauldronProjectile_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ACauldronProjectile_C, CauldronProjectile_FX) == 0x0002B0, "Member 'ACauldronProjectile_C::CauldronProjectile_FX' has a wrong offset!");
static_assert(offsetof(ACauldronProjectile_C, DefaultSceneRoot) == 0x0002B8, "Member 'ACauldronProjectile_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACauldronProjectile_C, Target) == 0x0002C0, "Member 'ACauldronProjectile_C::Target' has a wrong offset!");
static_assert(offsetof(ACauldronProjectile_C, TargetActor) == 0x0002D8, "Member 'ACauldronProjectile_C::TargetActor' has a wrong offset!");

}

