#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_R800_GrenadePowerSuit_Indicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_R800_GrenadePowerSuit_Indicator.BP_R800_GrenadePowerSuit_Indicator_C
// 0x0050 (0x0498 - 0x0448)
class ABP_R800_GrenadePowerSuit_Indicator_C final : public ABFGEffectActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               PFX_Indicator;                                     // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        BG_Decal;                                          // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Hologram;                                          // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectAge;                                         // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Initialize;                                        // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      ControlCurve;                                      // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               M_Hologram;                                        // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               M_BG;                                              // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_R800_GrenadePowerSuit_Indicator(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_R800_GrenadePowerSuit_Indicator_C">();
	}
	static class ABP_R800_GrenadePowerSuit_Indicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_R800_GrenadePowerSuit_Indicator_C>();
	}
};
static_assert(alignof(ABP_R800_GrenadePowerSuit_Indicator_C) == 0x000008, "Wrong alignment on ABP_R800_GrenadePowerSuit_Indicator_C");
static_assert(sizeof(ABP_R800_GrenadePowerSuit_Indicator_C) == 0x000498, "Wrong size on ABP_R800_GrenadePowerSuit_Indicator_C");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, UberGraphFrame) == 0x000448, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, PFX_Indicator) == 0x000450, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::PFX_Indicator' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, BG_Decal) == 0x000458, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::BG_Decal' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, Hologram) == 0x000460, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::Hologram' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, DefaultSceneRoot) == 0x000468, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, Radius) == 0x000470, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::Radius' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, Duration) == 0x000474, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::Duration' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, EffectAge) == 0x000478, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::EffectAge' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, Initialize) == 0x00047C, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::Initialize' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, ControlCurve) == 0x000480, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::ControlCurve' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, M_Hologram) == 0x000488, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::M_Hologram' has a wrong offset!");
static_assert(offsetof(ABP_R800_GrenadePowerSuit_Indicator_C, M_BG) == 0x000490, "Member 'ABP_R800_GrenadePowerSuit_Indicator_C::M_BG' has a wrong offset!");

}
