#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_MicroMissile_Mine_Head

#include "Basic.hpp"

#include "PRJ_MicroMissile_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C
// 0x00D8 (0x04B8 - 0x03E0)
class APRJ_MicroMissile_Mine_Head_C final : public APRJ_MicroMissile_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PRJ_MicroMissile_Mine_Head_C;       // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          HitCollider;                                       // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEnemyHealthComponent*                  HealthComponent;                                   // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Trigger_Sphere;                                    // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Triggered;                                         // 0x0400(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_39D0[0x3];                                     // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             LastHitResult;                                     // 0x0404(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         LifeTime;                                          // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  EnemyTag;                                          // 0x0490(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         MineExplosionRadiusMultiplier;                     // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MineExplosionDamageMultiplier;                     // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnRep_Triggered();
	void UserConstructionScript();
	void BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void TriggerExplosion();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* Param_HealthComponent);
	void OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult);
	void ExecuteUbergraph_PRJ_MicroMissile_Mine_Head(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PRJ_MicroMissile_Mine_Head_C">();
	}
	static class APRJ_MicroMissile_Mine_Head_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APRJ_MicroMissile_Mine_Head_C>();
	}
};
static_assert(alignof(APRJ_MicroMissile_Mine_Head_C) == 0x000008, "Wrong alignment on APRJ_MicroMissile_Mine_Head_C");
static_assert(sizeof(APRJ_MicroMissile_Mine_Head_C) == 0x0004B8, "Wrong size on APRJ_MicroMissile_Mine_Head_C");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, UberGraphFrame_PRJ_MicroMissile_Mine_Head_C) == 0x0003E0, "Member 'APRJ_MicroMissile_Mine_Head_C::UberGraphFrame_PRJ_MicroMissile_Mine_Head_C' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, HitCollider) == 0x0003E8, "Member 'APRJ_MicroMissile_Mine_Head_C::HitCollider' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, HealthComponent) == 0x0003F0, "Member 'APRJ_MicroMissile_Mine_Head_C::HealthComponent' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, Trigger_Sphere) == 0x0003F8, "Member 'APRJ_MicroMissile_Mine_Head_C::Trigger_Sphere' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, Triggered) == 0x000400, "Member 'APRJ_MicroMissile_Mine_Head_C::Triggered' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, LastHitResult) == 0x000404, "Member 'APRJ_MicroMissile_Mine_Head_C::LastHitResult' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, LifeTime) == 0x00048C, "Member 'APRJ_MicroMissile_Mine_Head_C::LifeTime' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, EnemyTag) == 0x000490, "Member 'APRJ_MicroMissile_Mine_Head_C::EnemyTag' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, MineExplosionRadiusMultiplier) == 0x0004B0, "Member 'APRJ_MicroMissile_Mine_Head_C::MineExplosionRadiusMultiplier' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_Mine_Head_C, MineExplosionDamageMultiplier) == 0x0004B4, "Member 'APRJ_MicroMissile_Mine_Head_C::MineExplosionDamageMultiplier' has a wrong offset!");

}
