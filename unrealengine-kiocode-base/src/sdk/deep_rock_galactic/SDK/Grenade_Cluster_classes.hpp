#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_Cluster

#include "Basic.hpp"

#include "ITM_Grenade_Base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Grenade_Cluster.Grenade_Cluster_C
// 0x0028 (0x0388 - 0x0360)
class AGrenade_Cluster_C final : public AITM_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Grenade_Cluster_C;                  // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         GrenadeFragments;                                  // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521A[0x4];                                     // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ClusterBreakSound;                                 // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        ClusterBreakParticles;                             // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentClusterPitch;                               // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterEjectionForce;                              // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnExploded();
	void ExecuteUbergraph_Grenade_Cluster(int32 EntryPoint);

	void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Grenade_Cluster_C">();
	}
	static class AGrenade_Cluster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGrenade_Cluster_C>();
	}
};
static_assert(alignof(AGrenade_Cluster_C) == 0x000008, "Wrong alignment on AGrenade_Cluster_C");
static_assert(sizeof(AGrenade_Cluster_C) == 0x000388, "Wrong size on AGrenade_Cluster_C");
static_assert(offsetof(AGrenade_Cluster_C, UberGraphFrame_Grenade_Cluster_C) == 0x000360, "Member 'AGrenade_Cluster_C::UberGraphFrame_Grenade_Cluster_C' has a wrong offset!");
static_assert(offsetof(AGrenade_Cluster_C, GrenadeFragments) == 0x000368, "Member 'AGrenade_Cluster_C::GrenadeFragments' has a wrong offset!");
static_assert(offsetof(AGrenade_Cluster_C, ClusterBreakSound) == 0x000370, "Member 'AGrenade_Cluster_C::ClusterBreakSound' has a wrong offset!");
static_assert(offsetof(AGrenade_Cluster_C, ClusterBreakParticles) == 0x000378, "Member 'AGrenade_Cluster_C::ClusterBreakParticles' has a wrong offset!");
static_assert(offsetof(AGrenade_Cluster_C, CurrentClusterPitch) == 0x000380, "Member 'AGrenade_Cluster_C::CurrentClusterPitch' has a wrong offset!");
static_assert(offsetof(AGrenade_Cluster_C, ClusterEjectionForce) == 0x000384, "Member 'AGrenade_Cluster_C::ClusterEjectionForce' has a wrong offset!");

}
