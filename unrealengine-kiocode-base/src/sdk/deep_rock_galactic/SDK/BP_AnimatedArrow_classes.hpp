#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimatedArrow

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimatedArrow.BP_AnimatedArrow_C
// 0x0050 (0x0270 - 0x0220)
class ABP_AnimatedArrow_C final : public AActor
{
public:
	class UAudioComponent*                        CrossBowProjectileVariant_Cue;                     // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonNiagaraComponent*           CryoEffectParticleFP;                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonNiagaraComponent*           ElectricEffectParticleFP;                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FireEffectParticleTP;                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ElectricEffectParticleTP;                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CryoEffectParticleTP;                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonNiagaraComponent*           FireEffectParticleFP;                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TPMesh;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonStaticMeshComponent*        FPMesh;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimatedArrow_C">();
	}
	static class ABP_AnimatedArrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AnimatedArrow_C>();
	}
};
static_assert(alignof(ABP_AnimatedArrow_C) == 0x000008, "Wrong alignment on ABP_AnimatedArrow_C");
static_assert(sizeof(ABP_AnimatedArrow_C) == 0x000270, "Wrong size on ABP_AnimatedArrow_C");
static_assert(offsetof(ABP_AnimatedArrow_C, CrossBowProjectileVariant_Cue) == 0x000220, "Member 'ABP_AnimatedArrow_C::CrossBowProjectileVariant_Cue' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, CryoEffectParticleFP) == 0x000228, "Member 'ABP_AnimatedArrow_C::CryoEffectParticleFP' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, ElectricEffectParticleFP) == 0x000230, "Member 'ABP_AnimatedArrow_C::ElectricEffectParticleFP' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, FireEffectParticleTP) == 0x000238, "Member 'ABP_AnimatedArrow_C::FireEffectParticleTP' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, ElectricEffectParticleTP) == 0x000240, "Member 'ABP_AnimatedArrow_C::ElectricEffectParticleTP' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, CryoEffectParticleTP) == 0x000248, "Member 'ABP_AnimatedArrow_C::CryoEffectParticleTP' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, FireEffectParticleFP) == 0x000250, "Member 'ABP_AnimatedArrow_C::FireEffectParticleFP' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, TPMesh) == 0x000258, "Member 'ABP_AnimatedArrow_C::TPMesh' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, FPMesh) == 0x000260, "Member 'ABP_AnimatedArrow_C::FPMesh' has a wrong offset!");
static_assert(offsetof(ABP_AnimatedArrow_C, Scene) == 0x000268, "Member 'ABP_AnimatedArrow_C::Scene' has a wrong offset!");

}

