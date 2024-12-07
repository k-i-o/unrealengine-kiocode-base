#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Damage_Cloud_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C
// 0x0048 (0x0268 - 0x0220)
class ABP_Damage_Cloud_Base_C : public AGasCloud
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStatusEffectTriggerComponent*          StatusEffectTrigger;                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               AcidCloud;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerGrowth_Size_1DEB14DB4E8233F87D25DBAB1B0C1325; // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TriggerGrowth__Direction_1DEB14DB4E8233F87D25DBAB1B0C1325; // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53F6[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TriggerGrowth;                                     // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LifeTime;                                          // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ParticleDeactivationAdvance;                       // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerRadius;                                     // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateSphereRadius(float InSphereRadius);
	void UserConstructionScript();
	void TriggerGrowth__FinishedFunc();
	void TriggerGrowth__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Damage_Cloud_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Damage_Cloud_Base_C">();
	}
	static class ABP_Damage_Cloud_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Damage_Cloud_Base_C>();
	}
};
static_assert(alignof(ABP_Damage_Cloud_Base_C) == 0x000008, "Wrong alignment on ABP_Damage_Cloud_Base_C");
static_assert(sizeof(ABP_Damage_Cloud_Base_C) == 0x000268, "Wrong size on ABP_Damage_Cloud_Base_C");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, UberGraphFrame) == 0x000220, "Member 'ABP_Damage_Cloud_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, StatusEffectTrigger) == 0x000228, "Member 'ABP_Damage_Cloud_Base_C::StatusEffectTrigger' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, AcidCloud) == 0x000230, "Member 'ABP_Damage_Cloud_Base_C::AcidCloud' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, Sphere) == 0x000238, "Member 'ABP_Damage_Cloud_Base_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_Damage_Cloud_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, TriggerGrowth_Size_1DEB14DB4E8233F87D25DBAB1B0C1325) == 0x000248, "Member 'ABP_Damage_Cloud_Base_C::TriggerGrowth_Size_1DEB14DB4E8233F87D25DBAB1B0C1325' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, TriggerGrowth__Direction_1DEB14DB4E8233F87D25DBAB1B0C1325) == 0x00024C, "Member 'ABP_Damage_Cloud_Base_C::TriggerGrowth__Direction_1DEB14DB4E8233F87D25DBAB1B0C1325' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, TriggerGrowth) == 0x000250, "Member 'ABP_Damage_Cloud_Base_C::TriggerGrowth' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, LifeTime) == 0x000258, "Member 'ABP_Damage_Cloud_Base_C::LifeTime' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, ParticleDeactivationAdvance) == 0x00025C, "Member 'ABP_Damage_Cloud_Base_C::ParticleDeactivationAdvance' has a wrong offset!");
static_assert(offsetof(ABP_Damage_Cloud_Base_C, TriggerRadius) == 0x000260, "Member 'ABP_Damage_Cloud_Base_C::TriggerRadius' has a wrong offset!");

}

