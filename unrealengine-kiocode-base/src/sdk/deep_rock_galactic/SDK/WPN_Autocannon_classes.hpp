#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_Autocannon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WPN_Autocannon.WPN_Autocannon_C
// 0x0058 (0x08A0 - 0x0848)
class AWPN_Autocannon_C final : public AAutoCannon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0848(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      ParticleSystem;                                    // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWeaponImpactComponent*                 WeaponImpact;                                      // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonParticleSystemComponent*    FirstPersonParticleSystem;                         // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonPointLightComponent*        Light_MuzzleFlash;                                 // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonWidgetComponent*            Widget_Ammo;                                       // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCrosshairAggregator*                   CrosshairAggregator;                               // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitscanComponent*                      HitScan;                                           // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SplashDamage;                                      // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplashRadius;                                      // 0x0894(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x0898(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ShowCurentFireTime();
	void ReceiveBeginPlay();
	void RecieveUnequipped();
	void RecieveEquipped();
	void Receive_IsFiringChanged(bool NewValue);
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
	void RecieveFiredWeapon();
	void CustomEvent1(const class UItemUpgrade* Event);
	void ExecuteUbergraph_WPN_Autocannon(int32 EntryPoint);

	class FText RoundStatValue(const class FText& InText, const class FString& Suffix, bool KeepSign) const;
	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPN_Autocannon_C">();
	}
	static class AWPN_Autocannon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWPN_Autocannon_C>();
	}
};
static_assert(alignof(AWPN_Autocannon_C) == 0x000008, "Wrong alignment on AWPN_Autocannon_C");
static_assert(sizeof(AWPN_Autocannon_C) == 0x0008A0, "Wrong size on AWPN_Autocannon_C");
static_assert(offsetof(AWPN_Autocannon_C, UberGraphFrame) == 0x000848, "Member 'AWPN_Autocannon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, ParticleSystem) == 0x000850, "Member 'AWPN_Autocannon_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, WeaponImpact) == 0x000858, "Member 'AWPN_Autocannon_C::WeaponImpact' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, Damage) == 0x000860, "Member 'AWPN_Autocannon_C::Damage' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, FirstPersonParticleSystem) == 0x000868, "Member 'AWPN_Autocannon_C::FirstPersonParticleSystem' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, Light_MuzzleFlash) == 0x000870, "Member 'AWPN_Autocannon_C::Light_MuzzleFlash' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, Widget_Ammo) == 0x000878, "Member 'AWPN_Autocannon_C::Widget_Ammo' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, CrosshairAggregator) == 0x000880, "Member 'AWPN_Autocannon_C::CrosshairAggregator' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, HitScan) == 0x000888, "Member 'AWPN_Autocannon_C::HitScan' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, SplashDamage) == 0x000890, "Member 'AWPN_Autocannon_C::SplashDamage' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, SplashRadius) == 0x000894, "Member 'AWPN_Autocannon_C::SplashRadius' has a wrong offset!");
static_assert(offsetof(AWPN_Autocannon_C, StartTime) == 0x000898, "Member 'AWPN_Autocannon_C::StartTime' has a wrong offset!");

}
