#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JetBootsBurnTrigger

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_JetBootsBurnTrigger.BP_JetBootsBurnTrigger_C
// 0x0018 (0x0238 - 0x0220)
class ABP_JetBootsBurnTrigger_C final : public AActor
{
public:
	class USphereComponent*                       Sphere;                                            // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStatusEffectTriggerComponent*          StatusEffectTrigger;                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_JetBootsBurnTrigger_C">();
	}
	static class ABP_JetBootsBurnTrigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_JetBootsBurnTrigger_C>();
	}
};
static_assert(alignof(ABP_JetBootsBurnTrigger_C) == 0x000008, "Wrong alignment on ABP_JetBootsBurnTrigger_C");
static_assert(sizeof(ABP_JetBootsBurnTrigger_C) == 0x000238, "Wrong size on ABP_JetBootsBurnTrigger_C");
static_assert(offsetof(ABP_JetBootsBurnTrigger_C, Sphere) == 0x000220, "Member 'ABP_JetBootsBurnTrigger_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_JetBootsBurnTrigger_C, StatusEffectTrigger) == 0x000228, "Member 'ABP_JetBootsBurnTrigger_C::StatusEffectTrigger' has a wrong offset!");
static_assert(offsetof(ABP_JetBootsBurnTrigger_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_JetBootsBurnTrigger_C::DefaultSceneRoot' has a wrong offset!");

}
