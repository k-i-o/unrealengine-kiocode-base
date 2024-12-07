#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_CoilGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WPN_CoilGun.WPN_CoilGun_C
// 0x0160 (0x0C10 - 0x0AB0)
class AWPN_CoilGun_C final : public ACoilGun
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFSDAudioComponent*                     CoilGunChargeGlow;                                 // 0x0AB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFSDAudioComponent*                     CoilGunCharge;                                     // 0x0AC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonWidgetComponent*            Widget_ChargeNew;                                  // 0x0AC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0AD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       FireExplosionDamage;                               // 0x0AD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAllPiercingHitscanComponent*           AllPiercingHitscan;                                // 0x0AE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AC_ChargeLevel;                                    // 0x0AE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   MuzzlePointLight;                                  // 0x0AF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCrosshairAggregator*                   CrosshairAggregator;                               // 0x0AF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeTimeline_ChargeFade_C49992004992D09AEFEFFF997C5FEA5C; // 0x0B00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeTimeline_SoundFade_C49992004992D09AEFEFFF997C5FEA5C; // 0x0B04(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeTimeline_LightFade_C49992004992D09AEFEFFF997C5FEA5C; // 0x0B08(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeTimeline__Direction_C49992004992D09AEFEFFF997C5FEA5C; // 0x0B0C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485E[0x3];                                     // 0x0B0D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeTimeline;                                      // 0x0B10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_Coilgun_Charge_C*        ChargeUI;                                          // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_ChargeBlaster_Heat_C*    OverheatUI;                                        // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI;                                            // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChargeLevel;                                       // 0x0B30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485F[0x4];                                     // 0x0B34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        AC_Heat;                                           // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TemperatureAudio;                                  // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OverheatedAudio;                                   // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AC_ChargeSpinUp;                                   // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               OverheatEmitterInstance;                           // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChargeReached;                                     // 0x0B60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4860[0x4];                                     // 0x0B64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               BrokeShieldBoostParticles;                         // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BrokeShieldBoostSound;                             // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRuntimeFloatCurve                     HeatMaterialCurve;                                 // 0x0B78(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                        AC_Heat_0;                                         // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasFearTrail;                                      // 0x0C08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void FadeOutIfValid(class UAudioComponent*& AC);
	void HandleHeatAudio();
	void HandleChargeAudio(float Charge);
	void UserConstructionScript();
	void FadeTimeline__FinishedFunc();
	void FadeTimeline__UpdateFunc();
	void RecieveUnequipped();
	void ReceiveOverheatedChanged(bool IsOverheated);
	void OnSkinChanged(class USkinEffect* Skin);
	void AddedToInventory(class APlayerCharacter* ItemOwner);
	void OnFireKill(class AActor* Target);
	void RecieveStartedCharging();
	void RecieveStoppedCharging(float Param_ChargeProgress);
	void ReceiveBeginPlay();
	void OnChargeChanged_Event_0(float Charge);
	void OnShieldBrokeBoostStopped();
	void OnShieldBrokenBoost();
	void Receive_Overheated();
	void All_PlayFireKillEffects(const struct FVector_NetQuantize& Location);
	void ExecuteUbergraph_WPN_CoilGun(int32 EntryPoint);

	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPN_CoilGun_C">();
	}
	static class AWPN_CoilGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWPN_CoilGun_C>();
	}
};
static_assert(alignof(AWPN_CoilGun_C) == 0x000008, "Wrong alignment on AWPN_CoilGun_C");
static_assert(sizeof(AWPN_CoilGun_C) == 0x000C10, "Wrong size on AWPN_CoilGun_C");
static_assert(offsetof(AWPN_CoilGun_C, UberGraphFrame) == 0x000AB0, "Member 'AWPN_CoilGun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, CoilGunChargeGlow) == 0x000AB8, "Member 'AWPN_CoilGun_C::CoilGunChargeGlow' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, CoilGunCharge) == 0x000AC0, "Member 'AWPN_CoilGun_C::CoilGunCharge' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, Widget_ChargeNew) == 0x000AC8, "Member 'AWPN_CoilGun_C::Widget_ChargeNew' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, Scene) == 0x000AD0, "Member 'AWPN_CoilGun_C::Scene' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, FireExplosionDamage) == 0x000AD8, "Member 'AWPN_CoilGun_C::FireExplosionDamage' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, AllPiercingHitscan) == 0x000AE0, "Member 'AWPN_CoilGun_C::AllPiercingHitscan' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, AC_ChargeLevel) == 0x000AE8, "Member 'AWPN_CoilGun_C::AC_ChargeLevel' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, MuzzlePointLight) == 0x000AF0, "Member 'AWPN_CoilGun_C::MuzzlePointLight' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, CrosshairAggregator) == 0x000AF8, "Member 'AWPN_CoilGun_C::CrosshairAggregator' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, FadeTimeline_ChargeFade_C49992004992D09AEFEFFF997C5FEA5C) == 0x000B00, "Member 'AWPN_CoilGun_C::FadeTimeline_ChargeFade_C49992004992D09AEFEFFF997C5FEA5C' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, FadeTimeline_SoundFade_C49992004992D09AEFEFFF997C5FEA5C) == 0x000B04, "Member 'AWPN_CoilGun_C::FadeTimeline_SoundFade_C49992004992D09AEFEFFF997C5FEA5C' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, FadeTimeline_LightFade_C49992004992D09AEFEFFF997C5FEA5C) == 0x000B08, "Member 'AWPN_CoilGun_C::FadeTimeline_LightFade_C49992004992D09AEFEFFF997C5FEA5C' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, FadeTimeline__Direction_C49992004992D09AEFEFFF997C5FEA5C) == 0x000B0C, "Member 'AWPN_CoilGun_C::FadeTimeline__Direction_C49992004992D09AEFEFFF997C5FEA5C' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, FadeTimeline) == 0x000B10, "Member 'AWPN_CoilGun_C::FadeTimeline' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, ChargeUI) == 0x000B18, "Member 'AWPN_CoilGun_C::ChargeUI' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, OverheatUI) == 0x000B20, "Member 'AWPN_CoilGun_C::OverheatUI' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, AmmoUI) == 0x000B28, "Member 'AWPN_CoilGun_C::AmmoUI' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, ChargeLevel) == 0x000B30, "Member 'AWPN_CoilGun_C::ChargeLevel' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, AC_Heat) == 0x000B38, "Member 'AWPN_CoilGun_C::AC_Heat' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, TemperatureAudio) == 0x000B40, "Member 'AWPN_CoilGun_C::TemperatureAudio' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, OverheatedAudio) == 0x000B48, "Member 'AWPN_CoilGun_C::OverheatedAudio' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, AC_ChargeSpinUp) == 0x000B50, "Member 'AWPN_CoilGun_C::AC_ChargeSpinUp' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, OverheatEmitterInstance) == 0x000B58, "Member 'AWPN_CoilGun_C::OverheatEmitterInstance' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, ChargeReached) == 0x000B60, "Member 'AWPN_CoilGun_C::ChargeReached' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, BrokeShieldBoostParticles) == 0x000B68, "Member 'AWPN_CoilGun_C::BrokeShieldBoostParticles' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, BrokeShieldBoostSound) == 0x000B70, "Member 'AWPN_CoilGun_C::BrokeShieldBoostSound' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, HeatMaterialCurve) == 0x000B78, "Member 'AWPN_CoilGun_C::HeatMaterialCurve' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, AC_Heat_0) == 0x000C00, "Member 'AWPN_CoilGun_C::AC_Heat_0' has a wrong offset!");
static_assert(offsetof(AWPN_CoilGun_C, HasFearTrail) == 0x000C08, "Member 'AWPN_CoilGun_C::HasFearTrail' has a wrong offset!");

}

