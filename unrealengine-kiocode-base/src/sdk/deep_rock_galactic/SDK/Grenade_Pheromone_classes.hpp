#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_Pheromone

#include "Basic.hpp"

#include "ITM_Grenade_Base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Grenade_Pheromone.Grenade_Pheromone_C
// 0x0028 (0x0388 - 0x0360)
class AGrenade_Pheromone_C final : public AITM_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Grenade_Pheromone_C;                // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AFSDPawn*>                       PheromoneTargets;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         MinGuaranteedTargets;                              // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AffectEveryNthTarget;                              // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectRadius;                                      // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnExploded();
	void ApplyPheromones();
	void ExecuteUbergraph_Grenade_Pheromone(int32 EntryPoint);

	void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Grenade_Pheromone_C">();
	}
	static class AGrenade_Pheromone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGrenade_Pheromone_C>();
	}
};
static_assert(alignof(AGrenade_Pheromone_C) == 0x000008, "Wrong alignment on AGrenade_Pheromone_C");
static_assert(sizeof(AGrenade_Pheromone_C) == 0x000388, "Wrong size on AGrenade_Pheromone_C");
static_assert(offsetof(AGrenade_Pheromone_C, UberGraphFrame_Grenade_Pheromone_C) == 0x000360, "Member 'AGrenade_Pheromone_C::UberGraphFrame_Grenade_Pheromone_C' has a wrong offset!");
static_assert(offsetof(AGrenade_Pheromone_C, PheromoneTargets) == 0x000368, "Member 'AGrenade_Pheromone_C::PheromoneTargets' has a wrong offset!");
static_assert(offsetof(AGrenade_Pheromone_C, MinGuaranteedTargets) == 0x000378, "Member 'AGrenade_Pheromone_C::MinGuaranteedTargets' has a wrong offset!");
static_assert(offsetof(AGrenade_Pheromone_C, AffectEveryNthTarget) == 0x00037C, "Member 'AGrenade_Pheromone_C::AffectEveryNthTarget' has a wrong offset!");
static_assert(offsetof(AGrenade_Pheromone_C, EffectRadius) == 0x000380, "Member 'AGrenade_Pheromone_C::EffectRadius' has a wrong offset!");

}
