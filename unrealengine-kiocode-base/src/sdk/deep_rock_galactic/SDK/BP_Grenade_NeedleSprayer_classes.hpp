#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Grenade_NeedleSprayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C
// 0x0050 (0x0350 - 0x0300)
class ABP_Grenade_NeedleSprayer_C final : public ANeedleSprayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    SpotLightCloseShadowCast;                          // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFSDAudioComponent*                     GrenadeStart;                                      // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFSDAudioComponent*                     GrenadeStop;                                       // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_LightProjection;                                // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPathfinderCollisionComponent*          PathfinderCollision;                               // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitscanComponent*                      HitScan;                                           // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void OnSpinningChanged(bool IsSpinning);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Grenade_NeedleSprayer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Grenade_NeedleSprayer_C">();
	}
	static class ABP_Grenade_NeedleSprayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Grenade_NeedleSprayer_C>();
	}
};
static_assert(alignof(ABP_Grenade_NeedleSprayer_C) == 0x000010, "Wrong alignment on ABP_Grenade_NeedleSprayer_C");
static_assert(sizeof(ABP_Grenade_NeedleSprayer_C) == 0x000350, "Wrong size on ABP_Grenade_NeedleSprayer_C");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, UberGraphFrame) == 0x000300, "Member 'ABP_Grenade_NeedleSprayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, SpotLightCloseShadowCast) == 0x000308, "Member 'ABP_Grenade_NeedleSprayer_C::SpotLightCloseShadowCast' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, GrenadeStart) == 0x000310, "Member 'ABP_Grenade_NeedleSprayer_C::GrenadeStart' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, GrenadeStop) == 0x000318, "Member 'ABP_Grenade_NeedleSprayer_C::GrenadeStop' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, SpotLight) == 0x000320, "Member 'ABP_Grenade_NeedleSprayer_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, SM_LightProjection) == 0x000328, "Member 'ABP_Grenade_NeedleSprayer_C::SM_LightProjection' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, PathfinderCollision) == 0x000330, "Member 'ABP_Grenade_NeedleSprayer_C::PathfinderCollision' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, HitScan) == 0x000338, "Member 'ABP_Grenade_NeedleSprayer_C::HitScan' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_NeedleSprayer_C, Damage) == 0x000340, "Member 'ABP_Grenade_NeedleSprayer_C::Damage' has a wrong offset!");

}

