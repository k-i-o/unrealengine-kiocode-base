#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_ChargeBlaster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WPN_ChargeBlaster.WPN_ChargeBlaster_C
// 0x00D8 (0x0900 - 0x0828)
class AWPN_ChargeBlaster_C final : public AChargedWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0828(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        ChargeBlaster_Overheat_Cue;                        // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ChargeBlaster_SpinUp_Cue;                          // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AC_ChargeLevel;                                    // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonWidgetComponent*            Widget_ChargeNew;                                  // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonStaticMeshComponent*        FirstPersonStaticMesh2;                            // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonWidgetComponent*            Widget_Ammo;                                       // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonWidgetComponent*            Widget_HeatNew;                                    // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonStaticMeshComponent*        FirstPersonStaticMesh1;                            // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonStaticMeshComponent*        FirstPersonStaticMesh;                             // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonParticleSystemComponent*    FirstPersonParticleSystem_Arc;                     // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonParticleSystemComponent*    FirstPersonParticleSystem_Right;                   // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonParticleSystemComponent*    FirstPersonParticleSystem_Left;                    // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargedProjectileLauncherComponent*    ChargedProjectileLauncher;                         // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   MuzzlePointLight;                                  // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCrosshairAggregator*                   CrosshairAggregator;                               // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_ChargeBlaster_Charge_C*  ChargeUI;                                          // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_ChargeBlaster_Heat_C*    OverheatUI;                                        // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI;                                            // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChargeLevel;                                       // 0x08C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5019[0x4];                                     // 0x08C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        AC_Heat;                                           // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TemperatureAudio;                                  // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OverheatedAudio;                                   // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AC_ChargeLevel_0;                                  // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AC_ChargeSpinUp;                                   // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               OverheatEmitterInstance;                           // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SlideParameter;                                    // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Fade_Out_if_Valid(class UAudioComponent*& AC);
	void HandleHeatAudio();
	void HandleChargeAudio(float Charge);
	void UserConstructionScript();
	void OnHeatChanged_Event_0(float Charge);
	void ChargeChanged(float Charge);
	void RecieveUnequipped();
	void ReceiveOverheatedChanged(bool IsOverheated);
	void OnSkinChanged(class USkinEffect* Skin);
	void AddedToInventory(class APlayerCharacter* ItemOwner);
	void RecieveFiredWeapon();
	void ExecuteUbergraph_WPN_ChargeBlaster(int32 EntryPoint);

	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPN_ChargeBlaster_C">();
	}
	static class AWPN_ChargeBlaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWPN_ChargeBlaster_C>();
	}
};
static_assert(alignof(AWPN_ChargeBlaster_C) == 0x000008, "Wrong alignment on AWPN_ChargeBlaster_C");
static_assert(sizeof(AWPN_ChargeBlaster_C) == 0x000900, "Wrong size on AWPN_ChargeBlaster_C");
static_assert(offsetof(AWPN_ChargeBlaster_C, UberGraphFrame) == 0x000828, "Member 'AWPN_ChargeBlaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, ChargeBlaster_Overheat_Cue) == 0x000830, "Member 'AWPN_ChargeBlaster_C::ChargeBlaster_Overheat_Cue' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, ChargeBlaster_SpinUp_Cue) == 0x000838, "Member 'AWPN_ChargeBlaster_C::ChargeBlaster_SpinUp_Cue' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, AC_ChargeLevel) == 0x000840, "Member 'AWPN_ChargeBlaster_C::AC_ChargeLevel' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, Widget_ChargeNew) == 0x000848, "Member 'AWPN_ChargeBlaster_C::Widget_ChargeNew' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, FirstPersonStaticMesh2) == 0x000850, "Member 'AWPN_ChargeBlaster_C::FirstPersonStaticMesh2' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, Widget_Ammo) == 0x000858, "Member 'AWPN_ChargeBlaster_C::Widget_Ammo' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, Widget_HeatNew) == 0x000860, "Member 'AWPN_ChargeBlaster_C::Widget_HeatNew' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, FirstPersonStaticMesh1) == 0x000868, "Member 'AWPN_ChargeBlaster_C::FirstPersonStaticMesh1' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, FirstPersonStaticMesh) == 0x000870, "Member 'AWPN_ChargeBlaster_C::FirstPersonStaticMesh' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, FirstPersonParticleSystem_Arc) == 0x000878, "Member 'AWPN_ChargeBlaster_C::FirstPersonParticleSystem_Arc' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, FirstPersonParticleSystem_Right) == 0x000880, "Member 'AWPN_ChargeBlaster_C::FirstPersonParticleSystem_Right' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, FirstPersonParticleSystem_Left) == 0x000888, "Member 'AWPN_ChargeBlaster_C::FirstPersonParticleSystem_Left' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, ChargedProjectileLauncher) == 0x000890, "Member 'AWPN_ChargeBlaster_C::ChargedProjectileLauncher' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, MuzzlePointLight) == 0x000898, "Member 'AWPN_ChargeBlaster_C::MuzzlePointLight' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, CrosshairAggregator) == 0x0008A0, "Member 'AWPN_ChargeBlaster_C::CrosshairAggregator' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, ChargeUI) == 0x0008A8, "Member 'AWPN_ChargeBlaster_C::ChargeUI' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, OverheatUI) == 0x0008B0, "Member 'AWPN_ChargeBlaster_C::OverheatUI' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, AmmoUI) == 0x0008B8, "Member 'AWPN_ChargeBlaster_C::AmmoUI' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, ChargeLevel) == 0x0008C0, "Member 'AWPN_ChargeBlaster_C::ChargeLevel' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, AC_Heat) == 0x0008C8, "Member 'AWPN_ChargeBlaster_C::AC_Heat' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, TemperatureAudio) == 0x0008D0, "Member 'AWPN_ChargeBlaster_C::TemperatureAudio' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, OverheatedAudio) == 0x0008D8, "Member 'AWPN_ChargeBlaster_C::OverheatedAudio' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, AC_ChargeLevel_0) == 0x0008E0, "Member 'AWPN_ChargeBlaster_C::AC_ChargeLevel_0' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, AC_ChargeSpinUp) == 0x0008E8, "Member 'AWPN_ChargeBlaster_C::AC_ChargeSpinUp' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, OverheatEmitterInstance) == 0x0008F0, "Member 'AWPN_ChargeBlaster_C::OverheatEmitterInstance' has a wrong offset!");
static_assert(offsetof(AWPN_ChargeBlaster_C, SlideParameter) == 0x0008F8, "Member 'AWPN_ChargeBlaster_C::SlideParameter' has a wrong offset!");

}

