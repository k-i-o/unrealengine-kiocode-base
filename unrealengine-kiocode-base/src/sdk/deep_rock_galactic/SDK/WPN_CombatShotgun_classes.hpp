#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_CombatShotgun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WPN_CombatShotgun.WPN_CombatShotgun_C
// 0x0048 (0x07D8 - 0x0790)
class AWPN_CombatShotgun_C final : public AAutoShotgun
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonStaticMeshComponent*        FirstPersonStaticMesh;                             // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonWidgetComponent*            FirstPersonWidget;                                 // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   MuzzlePointLight;                                  // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCrosshairAggregator*                   CrosshairAggregator;                               // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMultiHitscanComponent*                 MultiHitscan;                                      // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPumpAction;                                      // 0x07C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ECC[0x3];                                     // 0x07C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PumpDelay;                                         // 0x07CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           PumpActionTimer;                                   // 0x07D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void OnNotifyEnd_4B7DB4F44E81366933E16CAB9B80C557(class FName NotifyName);
	void OnNotifyBegin_4B7DB4F44E81366933E16CAB9B80C557(class FName NotifyName);
	void OnInterrupted_4B7DB4F44E81366933E16CAB9B80C557(class FName NotifyName);
	void OnBlendOut_4B7DB4F44E81366933E16CAB9B80C557(class FName NotifyName);
	void OnCompleted_4B7DB4F44E81366933E16CAB9B80C557(class FName NotifyName);
	void ReceiveBeginPlay();
	void CustomEvent1(const class UItemUpgrade* Event);
	void AddPoisonToPlatform(const struct FHitResult& Hit, bool AlwaysPenetrate);
	void RecieveFiredWeapon();
	void RecieveUnequipped();
	void PumpAction();
	void ExecuteUbergraph_WPN_CombatShotgun(int32 EntryPoint);

	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPN_CombatShotgun_C">();
	}
	static class AWPN_CombatShotgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWPN_CombatShotgun_C>();
	}
};
static_assert(alignof(AWPN_CombatShotgun_C) == 0x000008, "Wrong alignment on AWPN_CombatShotgun_C");
static_assert(sizeof(AWPN_CombatShotgun_C) == 0x0007D8, "Wrong size on AWPN_CombatShotgun_C");
static_assert(offsetof(AWPN_CombatShotgun_C, UberGraphFrame) == 0x000790, "Member 'AWPN_CombatShotgun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, FirstPersonStaticMesh) == 0x000798, "Member 'AWPN_CombatShotgun_C::FirstPersonStaticMesh' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, FirstPersonWidget) == 0x0007A0, "Member 'AWPN_CombatShotgun_C::FirstPersonWidget' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, Damage) == 0x0007A8, "Member 'AWPN_CombatShotgun_C::Damage' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, MuzzlePointLight) == 0x0007B0, "Member 'AWPN_CombatShotgun_C::MuzzlePointLight' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, CrosshairAggregator) == 0x0007B8, "Member 'AWPN_CombatShotgun_C::CrosshairAggregator' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, MultiHitscan) == 0x0007C0, "Member 'AWPN_CombatShotgun_C::MultiHitscan' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, IsPumpAction) == 0x0007C8, "Member 'AWPN_CombatShotgun_C::IsPumpAction' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, PumpDelay) == 0x0007CC, "Member 'AWPN_CombatShotgun_C::PumpDelay' has a wrong offset!");
static_assert(offsetof(AWPN_CombatShotgun_C, PumpActionTimer) == 0x0007D0, "Member 'AWPN_CombatShotgun_C::PumpActionTimer' has a wrong offset!");

}
