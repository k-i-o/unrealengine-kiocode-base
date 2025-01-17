#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileQuantumDecontructor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectileQuantumDecontructor.BP_ProjectileQuantumDecontructor_C
// 0x0028 (0x06D0 - 0x06A8)
class ABP_ProjectileQuantumDecontructor_C final : public ABFGProjectile_QuantumDeconstructor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x06B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene1;                                            // 0x06B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ParticleEmissionscale_LerpParticle_Emission_C14B728544078B032DF0C8831B0D766C; // 0x06C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ParticleEmissionscale__Direction_C14B728544078B032DF0C8831B0D766C; // 0x06C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_215C[0x3];                                     // 0x06C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ParticleEmissionscale;                             // 0x06C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ProjectileQuantumDecontructor(int32 EntryPoint);
	void OnReturnToPool();
	void OnProjectileExplosion(const struct FVector& _vLocation, float _fRadius);
	void OnImpact(const struct FVector& _vLocation, const struct FVector& _vDirection, const struct FVector& _vNormal, class UPhysicalMaterial* _pMaterial);
	void ParticleEmissionscale__FinishedFunc();
	void ParticleEmissionscale__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileQuantumDecontructor_C">();
	}
	static class ABP_ProjectileQuantumDecontructor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileQuantumDecontructor_C>();
	}
};
static_assert(alignof(ABP_ProjectileQuantumDecontructor_C) == 0x000008, "Wrong alignment on ABP_ProjectileQuantumDecontructor_C");
static_assert(sizeof(ABP_ProjectileQuantumDecontructor_C) == 0x0006D0, "Wrong size on ABP_ProjectileQuantumDecontructor_C");
static_assert(offsetof(ABP_ProjectileQuantumDecontructor_C, UberGraphFrame) == 0x0006A8, "Member 'ABP_ProjectileQuantumDecontructor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileQuantumDecontructor_C, ParticleSystem) == 0x0006B0, "Member 'ABP_ProjectileQuantumDecontructor_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileQuantumDecontructor_C, Scene1) == 0x0006B8, "Member 'ABP_ProjectileQuantumDecontructor_C::Scene1' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileQuantumDecontructor_C, ParticleEmissionscale_LerpParticle_Emission_C14B728544078B032DF0C8831B0D766C) == 0x0006C0, "Member 'ABP_ProjectileQuantumDecontructor_C::ParticleEmissionscale_LerpParticle_Emission_C14B728544078B032DF0C8831B0D766C' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileQuantumDecontructor_C, ParticleEmissionscale__Direction_C14B728544078B032DF0C8831B0D766C) == 0x0006C4, "Member 'ABP_ProjectileQuantumDecontructor_C::ParticleEmissionscale__Direction_C14B728544078B032DF0C8831B0D766C' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileQuantumDecontructor_C, ParticleEmissionscale) == 0x0006C8, "Member 'ABP_ProjectileQuantumDecontructor_C::ParticleEmissionscale' has a wrong offset!");

}

