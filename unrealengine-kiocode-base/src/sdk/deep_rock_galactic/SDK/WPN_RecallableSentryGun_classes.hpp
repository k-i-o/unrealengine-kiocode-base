#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_RecallableSentryGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WPN_RecallableSentryGun.WPN_RecallableSentryGun_C
// 0x0010 (0x04B0 - 0x04A0)
class AWPN_RecallableSentryGun_C final : public ARecallableSentryGunItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ArcIndicatorActive;                                // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetArcIndicatorActive(bool Active);
	void BndEvt__WPN_RecallableSentryGun_ItemPlacer_K2Node_ComponentBoundEvent_0_MarkerDelegate__DelegateSignature(class AItemMarker* Marker);
	void ExecuteUbergraph_WPN_RecallableSentryGun(int32 EntryPoint);

	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPN_RecallableSentryGun_C">();
	}
	static class AWPN_RecallableSentryGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWPN_RecallableSentryGun_C>();
	}
};
static_assert(alignof(AWPN_RecallableSentryGun_C) == 0x000008, "Wrong alignment on AWPN_RecallableSentryGun_C");
static_assert(sizeof(AWPN_RecallableSentryGun_C) == 0x0004B0, "Wrong size on AWPN_RecallableSentryGun_C");
static_assert(offsetof(AWPN_RecallableSentryGun_C, UberGraphFrame) == 0x0004A0, "Member 'AWPN_RecallableSentryGun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWPN_RecallableSentryGun_C, ArcIndicatorActive) == 0x0004A8, "Member 'AWPN_RecallableSentryGun_C::ArcIndicatorActive' has a wrong offset!");

}

