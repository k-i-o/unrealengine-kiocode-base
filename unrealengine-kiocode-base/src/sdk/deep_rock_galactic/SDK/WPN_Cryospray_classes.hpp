#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_Cryospray

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WPN_Cryospray.WPN_Cryospray_C
// 0x0068 (0x0978 - 0x0910)
class AWPN_Cryospray_C final : public ACryosprayItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0910(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        AudioPressurerising;                               // 0x0918(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonPointLightComponent*        GaugeLight;                                        // 0x0920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonStaticMeshComponent*        FirstPersonStaticMesh;                             // 0x0928(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonStaticMeshComponent*        FP_Widget_Shooting_Gauge;                          // 0x0930(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonParticleSystemComponent*    PressureVent_Particle;                             // 0x0938(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonWidgetComponent*            FPwidget_Ammo;                                     // 0x0940(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCrosshairAggregator*                   CrosshairAggregator;                               // 0x0948(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   MuzzleLight;                                       // 0x0950(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_CryoSpray_Ammo_C*        UI_Ammo;                                           // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ChargeInstance;                                    // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        LaunchProjectileParticlesFP;                       // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        LaunchProjectileParticlesTP;                       // 0x0970(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32 Amount);
	void Update_Ammo_Display();
	void ReceiveRepressurisingChanged(bool Value);
	void RecieveEquipped();
	void RecieveUnequipped();
	void Toggle_RepressurerisingFX(bool On);
	void OnProjectileLaunched(const struct FVector& Location);
	void ReceiveBeginPlay();
	void OnPreProjectileLaunch();
	void CustomEvent1(const class UItemUpgrade* Event);
	void ExecuteUbergraph_WPN_Cryospray(int32 EntryPoint);

	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPN_Cryospray_C">();
	}
	static class AWPN_Cryospray_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWPN_Cryospray_C>();
	}
};
static_assert(alignof(AWPN_Cryospray_C) == 0x000008, "Wrong alignment on AWPN_Cryospray_C");
static_assert(sizeof(AWPN_Cryospray_C) == 0x000978, "Wrong size on AWPN_Cryospray_C");
static_assert(offsetof(AWPN_Cryospray_C, UberGraphFrame) == 0x000910, "Member 'AWPN_Cryospray_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, AudioPressurerising) == 0x000918, "Member 'AWPN_Cryospray_C::AudioPressurerising' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, GaugeLight) == 0x000920, "Member 'AWPN_Cryospray_C::GaugeLight' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, FirstPersonStaticMesh) == 0x000928, "Member 'AWPN_Cryospray_C::FirstPersonStaticMesh' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, FP_Widget_Shooting_Gauge) == 0x000930, "Member 'AWPN_Cryospray_C::FP_Widget_Shooting_Gauge' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, PressureVent_Particle) == 0x000938, "Member 'AWPN_Cryospray_C::PressureVent_Particle' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, FPwidget_Ammo) == 0x000940, "Member 'AWPN_Cryospray_C::FPwidget_Ammo' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, CrosshairAggregator) == 0x000948, "Member 'AWPN_Cryospray_C::CrosshairAggregator' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, MuzzleLight) == 0x000950, "Member 'AWPN_Cryospray_C::MuzzleLight' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, UI_Ammo) == 0x000958, "Member 'AWPN_Cryospray_C::UI_Ammo' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, ChargeInstance) == 0x000960, "Member 'AWPN_Cryospray_C::ChargeInstance' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, LaunchProjectileParticlesFP) == 0x000968, "Member 'AWPN_Cryospray_C::LaunchProjectileParticlesFP' has a wrong offset!");
static_assert(offsetof(AWPN_Cryospray_C, LaunchProjectileParticlesTP) == 0x000970, "Member 'AWPN_Cryospray_C::LaunchProjectileParticlesTP' has a wrong offset!");

}
