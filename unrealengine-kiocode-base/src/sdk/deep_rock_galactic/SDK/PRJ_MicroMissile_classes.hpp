#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_MicroMissile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PRJ_MicroMissile.PRJ_MicroMissile_C
// 0x00A0 (0x03E0 - 0x0340)
class APRJ_MicroMissile_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Particle_Exhaust;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_Exhaust_HighVelocity;                     // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Light_DistanceIndicator;                           // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Light_Exhaust;                                     // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_Trail;                                    // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   UnstableFuelMixIndicator;                          // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MicroMissileProjectileLoop_Cue;                    // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MeshRocket;                                        // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileExplosion*                   ProjectileExplosion;                               // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Brightness_243709694A5DDD44F4F9208FBF929C26; // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Height_243709694A5DDD44F4F9208FBF929C26; // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_243709694A5DDD44F4F9208FBF929C26; // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5397[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeToTarget;                                      // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasNitroglycerinCompound;                          // 0x03B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5398[0x3];                                     // 0x03B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxLifetime;                                       // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentLifetime;                                   // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasBuckOC;                                         // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NoHoming;                                          // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5399[0x2];                                     // 0x03C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DeltaSeconds;                                      // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlinkStarted;                                      // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539A[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlinkInterval;                                     // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlive;                                           // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539B[0x3];                                     // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HomingDelayAmount;                                 // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NitroglycerinDamageIncrease;                       // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NitroglycerinMaxIncreaseTicks;                     // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StopMissile();
	void IncreaseDamage();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UnstableFuelMixUpdate();
	void StartLightIntensityIncrease();
	void StartBlink();
	void OnUpgradeElementAdded(class UProjectileUpgradeElement* Element);
	void TurnUpLightIndicator();
	void OnInitialized();
	void CountSeconds();
	void Explode(const struct FHitResult& HitResult);
	void Impact(const struct FHitResult& HitResult);
	void OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult);
	void KillMissile();
	void ExecuteUbergraph_PRJ_MicroMissile(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PRJ_MicroMissile_C">();
	}
	static class APRJ_MicroMissile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APRJ_MicroMissile_C>();
	}
};
static_assert(alignof(APRJ_MicroMissile_C) == 0x000008, "Wrong alignment on APRJ_MicroMissile_C");
static_assert(sizeof(APRJ_MicroMissile_C) == 0x0003E0, "Wrong size on APRJ_MicroMissile_C");
static_assert(offsetof(APRJ_MicroMissile_C, UberGraphFrame) == 0x000340, "Member 'APRJ_MicroMissile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Particle_Exhaust) == 0x000348, "Member 'APRJ_MicroMissile_C::Particle_Exhaust' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Particle_Exhaust_HighVelocity) == 0x000350, "Member 'APRJ_MicroMissile_C::Particle_Exhaust_HighVelocity' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Light_DistanceIndicator) == 0x000358, "Member 'APRJ_MicroMissile_C::Light_DistanceIndicator' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Light_Exhaust) == 0x000360, "Member 'APRJ_MicroMissile_C::Light_Exhaust' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Particle_Trail) == 0x000368, "Member 'APRJ_MicroMissile_C::Particle_Trail' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, UnstableFuelMixIndicator) == 0x000370, "Member 'APRJ_MicroMissile_C::UnstableFuelMixIndicator' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, MicroMissileProjectileLoop_Cue) == 0x000378, "Member 'APRJ_MicroMissile_C::MicroMissileProjectileLoop_Cue' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, MeshRocket) == 0x000380, "Member 'APRJ_MicroMissile_C::MeshRocket' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, ProjectileExplosion) == 0x000388, "Member 'APRJ_MicroMissile_C::ProjectileExplosion' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Damage) == 0x000390, "Member 'APRJ_MicroMissile_C::Damage' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Timeline_0_Brightness_243709694A5DDD44F4F9208FBF929C26) == 0x000398, "Member 'APRJ_MicroMissile_C::Timeline_0_Brightness_243709694A5DDD44F4F9208FBF929C26' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Timeline_0_Height_243709694A5DDD44F4F9208FBF929C26) == 0x00039C, "Member 'APRJ_MicroMissile_C::Timeline_0_Height_243709694A5DDD44F4F9208FBF929C26' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Timeline_0__Direction_243709694A5DDD44F4F9208FBF929C26) == 0x0003A0, "Member 'APRJ_MicroMissile_C::Timeline_0__Direction_243709694A5DDD44F4F9208FBF929C26' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, Timeline_0) == 0x0003A8, "Member 'APRJ_MicroMissile_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, TimeToTarget) == 0x0003B0, "Member 'APRJ_MicroMissile_C::TimeToTarget' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, HasNitroglycerinCompound) == 0x0003B4, "Member 'APRJ_MicroMissile_C::HasNitroglycerinCompound' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, MaxLifetime) == 0x0003B8, "Member 'APRJ_MicroMissile_C::MaxLifetime' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, CurrentLifetime) == 0x0003BC, "Member 'APRJ_MicroMissile_C::CurrentLifetime' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, HasBuckOC) == 0x0003C0, "Member 'APRJ_MicroMissile_C::HasBuckOC' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, NoHoming) == 0x0003C1, "Member 'APRJ_MicroMissile_C::NoHoming' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, DeltaSeconds) == 0x0003C4, "Member 'APRJ_MicroMissile_C::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, BlinkStarted) == 0x0003C8, "Member 'APRJ_MicroMissile_C::BlinkStarted' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, BlinkInterval) == 0x0003CC, "Member 'APRJ_MicroMissile_C::BlinkInterval' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, IsAlive) == 0x0003D0, "Member 'APRJ_MicroMissile_C::IsAlive' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, HomingDelayAmount) == 0x0003D4, "Member 'APRJ_MicroMissile_C::HomingDelayAmount' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, NitroglycerinDamageIncrease) == 0x0003D8, "Member 'APRJ_MicroMissile_C::NitroglycerinDamageIncrease' has a wrong offset!");
static_assert(offsetof(APRJ_MicroMissile_C, NitroglycerinMaxIncreaseTicks) == 0x0003DC, "Member 'APRJ_MicroMissile_C::NitroglycerinMaxIncreaseTicks' has a wrong offset!");

}
