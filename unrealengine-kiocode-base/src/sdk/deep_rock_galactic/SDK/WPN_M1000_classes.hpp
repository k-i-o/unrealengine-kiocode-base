#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_M1000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WPN_M1000.WPN_M1000_C
// 0x0038 (0x0908 - 0x08D0)
class AWPN_M1000_C final : public ABoltActionWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonWidgetComponent*            FirstPersonWidget;                                 // 0x08D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x08E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   MuzzleLight;                                       // 0x08E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitscanComponent*                      HitScan;                                           // 0x08F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCrosshairAggregator*                   CrosshairAggregator;                               // 0x08F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CanLaserPoint;                                     // 0x0900(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Recieve_UpdateMeshses(bool Param_IsFirstPerson);
	void RecieveEquipped();
	void CustomEvent1(const class UItemUpgrade* Event);
	void BndEvt__WPN_M1000_Damage_K2Node_ComponentBoundEvent_1_OnEnemyDamagedDelegate__DelegateSignature(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysicalMaterial);
	void ExecuteUbergraph_WPN_M1000(int32 EntryPoint);

	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPN_M1000_C">();
	}
	static class AWPN_M1000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWPN_M1000_C>();
	}
};
static_assert(alignof(AWPN_M1000_C) == 0x000008, "Wrong alignment on AWPN_M1000_C");
static_assert(sizeof(AWPN_M1000_C) == 0x000908, "Wrong size on AWPN_M1000_C");
static_assert(offsetof(AWPN_M1000_C, UberGraphFrame) == 0x0008D0, "Member 'AWPN_M1000_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWPN_M1000_C, FirstPersonWidget) == 0x0008D8, "Member 'AWPN_M1000_C::FirstPersonWidget' has a wrong offset!");
static_assert(offsetof(AWPN_M1000_C, Damage) == 0x0008E0, "Member 'AWPN_M1000_C::Damage' has a wrong offset!");
static_assert(offsetof(AWPN_M1000_C, MuzzleLight) == 0x0008E8, "Member 'AWPN_M1000_C::MuzzleLight' has a wrong offset!");
static_assert(offsetof(AWPN_M1000_C, HitScan) == 0x0008F0, "Member 'AWPN_M1000_C::HitScan' has a wrong offset!");
static_assert(offsetof(AWPN_M1000_C, CrosshairAggregator) == 0x0008F8, "Member 'AWPN_M1000_C::CrosshairAggregator' has a wrong offset!");
static_assert(offsetof(AWPN_M1000_C, CanLaserPoint) == 0x000900, "Member 'AWPN_M1000_C::CanLaserPoint' has a wrong offset!");

}

