#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnemyProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnemyProjectile.EnemyProjectile_C
// 0x0050 (0x02E0 - 0x0290)
class AEnemyProjectile_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      EnemyProjectileSplash_FX;                          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      EnemyProjectile_FX;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target;                                            // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EnemyProjectile(int32 EntryPoint);
	void Launch();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnemyProjectile_C">();
	}
	static class AEnemyProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEnemyProjectile_C>();
	}
};
static_assert(alignof(AEnemyProjectile_C) == 0x000008, "Wrong alignment on AEnemyProjectile_C");
static_assert(sizeof(AEnemyProjectile_C) == 0x0002E0, "Wrong size on AEnemyProjectile_C");
static_assert(offsetof(AEnemyProjectile_C, UberGraphFrame) == 0x000290, "Member 'AEnemyProjectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEnemyProjectile_C, ProjectileMovement) == 0x000298, "Member 'AEnemyProjectile_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(AEnemyProjectile_C, EnemyProjectileSplash_FX) == 0x0002A0, "Member 'AEnemyProjectile_C::EnemyProjectileSplash_FX' has a wrong offset!");
static_assert(offsetof(AEnemyProjectile_C, EnemyProjectile_FX) == 0x0002A8, "Member 'AEnemyProjectile_C::EnemyProjectile_FX' has a wrong offset!");
static_assert(offsetof(AEnemyProjectile_C, Sphere) == 0x0002B0, "Member 'AEnemyProjectile_C::Sphere' has a wrong offset!");
static_assert(offsetof(AEnemyProjectile_C, DefaultSceneRoot) == 0x0002B8, "Member 'AEnemyProjectile_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AEnemyProjectile_C, Target) == 0x0002C0, "Member 'AEnemyProjectile_C::Target' has a wrong offset!");
static_assert(offsetof(AEnemyProjectile_C, TargetActor) == 0x0002D8, "Member 'AEnemyProjectile_C::TargetActor' has a wrong offset!");

}
