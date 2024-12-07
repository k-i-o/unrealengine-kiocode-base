#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_FlareGun_Projectile01

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "FSD_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C
// 0x0130 (0x0480 - 0x0350)
class APRJ_FlareGun_Projectile01_C final : public AFlareGunProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Lit_Fuse_Cue;                                      // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage1;                                           // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Arrow;                                             // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Shadow_3;                                // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Shadow_2;                                // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Shadow_1;                                // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect;                                     // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Dead;                                   // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_NoShadow;                               // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81; // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81; // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81; // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3284[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Light_Anim;                                        // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensity_Point;                              // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScaledEffect                          DamageEffect;                                      // 0x03D8(0x0010)(Edit, BlueprintVisible, NoDestructor)
	float                                         LightIntensity_Spot;                               // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFallToGround;                                     // 0x03EC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_3285[0x3];                                     // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             ImpactHit;                                         // 0x03F0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UAudioComponent*                        FlareBurnAudio;                                    // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnRep_bFallToGround();
	void SpawnImpact();
	void UpdateShadowRadius();
	void StartFadeOut(float* Time);
	void GetHealthBaseComponentFromActor(class AActor* Actor, class UHealthComponentBase** Health);
	void FallToGround();
	void Light_Anim__FinishedFunc();
	void Light_Anim__UpdateFunc();
	void OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void OnDroppodImpact(class ATeamTransport* DropPod);
	void HideAll();
	void OnFlareExtinguish();
	void OnUpdateShadowRadius();
	void ActivateFlare();
	void ExecuteUbergraph_PRJ_FlareGun_Projectile01(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PRJ_FlareGun_Projectile01_C">();
	}
	static class APRJ_FlareGun_Projectile01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APRJ_FlareGun_Projectile01_C>();
	}
};
static_assert(alignof(APRJ_FlareGun_Projectile01_C) == 0x000008, "Wrong alignment on APRJ_FlareGun_Projectile01_C");
static_assert(sizeof(APRJ_FlareGun_Projectile01_C) == 0x000480, "Wrong size on APRJ_FlareGun_Projectile01_C");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, UberGraphFrame) == 0x000350, "Member 'APRJ_FlareGun_Projectile01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Lit_Fuse_Cue) == 0x000358, "Member 'APRJ_FlareGun_Projectile01_C::Lit_Fuse_Cue' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Damage1) == 0x000360, "Member 'APRJ_FlareGun_Projectile01_C::Damage1' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Arrow) == 0x000368, "Member 'APRJ_FlareGun_Projectile01_C::Arrow' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, SpotLight_Shadow_3) == 0x000370, "Member 'APRJ_FlareGun_Projectile01_C::SpotLight_Shadow_3' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, SpotLight_Shadow_2) == 0x000378, "Member 'APRJ_FlareGun_Projectile01_C::SpotLight_Shadow_2' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, SpotLight_Shadow_1) == 0x000380, "Member 'APRJ_FlareGun_Projectile01_C::SpotLight_Shadow_1' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, TerrainDetect) == 0x000388, "Member 'APRJ_FlareGun_Projectile01_C::TerrainDetect' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, ParticleSystem) == 0x000390, "Member 'APRJ_FlareGun_Projectile01_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, StaticMesh) == 0x000398, "Member 'APRJ_FlareGun_Projectile01_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, PointLight_Dead) == 0x0003A0, "Member 'APRJ_FlareGun_Projectile01_C::PointLight_Dead' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, PointLight_NoShadow) == 0x0003A8, "Member 'APRJ_FlareGun_Projectile01_C::PointLight_NoShadow' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Box) == 0x0003B0, "Member 'APRJ_FlareGun_Projectile01_C::Box' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81) == 0x0003B8, "Member 'APRJ_FlareGun_Projectile01_C::Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81) == 0x0003BC, "Member 'APRJ_FlareGun_Projectile01_C::Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81) == 0x0003C0, "Member 'APRJ_FlareGun_Projectile01_C::Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Light_Anim) == 0x0003C8, "Member 'APRJ_FlareGun_Projectile01_C::Light_Anim' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, LightIntensity_Point) == 0x0003D0, "Member 'APRJ_FlareGun_Projectile01_C::LightIntensity_Point' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, Damage) == 0x0003D4, "Member 'APRJ_FlareGun_Projectile01_C::Damage' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, DamageEffect) == 0x0003D8, "Member 'APRJ_FlareGun_Projectile01_C::DamageEffect' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, LightIntensity_Spot) == 0x0003E8, "Member 'APRJ_FlareGun_Projectile01_C::LightIntensity_Spot' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, bFallToGround) == 0x0003EC, "Member 'APRJ_FlareGun_Projectile01_C::bFallToGround' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, ImpactHit) == 0x0003F0, "Member 'APRJ_FlareGun_Projectile01_C::ImpactHit' has a wrong offset!");
static_assert(offsetof(APRJ_FlareGun_Projectile01_C, FlareBurnAudio) == 0x000478, "Member 'APRJ_FlareGun_Projectile01_C::FlareBurnAudio' has a wrong offset!");

}

