#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_ShieldRegeneratorItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C
// 0x0018 (0x0500 - 0x04E8)
class AWPN_ShieldRegeneratorItem_C final : public AShieldGeneratorItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        RechargeAudio;                                     // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     RechargedMaterial;                                 // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateMaterial();
	void UserConstructionScript();
	void RecieveStartUsing();
	void ReceiveItemThrown(class AThrowableActor* ThrownActor);
	void ReceiveGeneratorRecharged();
	void ReceiveGeneratorRechargeProgress(float Progress);
	void BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32 Amount);
	void BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int32 Amount);
	void ReceiveGeneratorReturned();
	void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int32 EntryPoint);

	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPN_ShieldRegeneratorItem_C">();
	}
	static class AWPN_ShieldRegeneratorItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWPN_ShieldRegeneratorItem_C>();
	}
};
static_assert(alignof(AWPN_ShieldRegeneratorItem_C) == 0x000008, "Wrong alignment on AWPN_ShieldRegeneratorItem_C");
static_assert(sizeof(AWPN_ShieldRegeneratorItem_C) == 0x000500, "Wrong size on AWPN_ShieldRegeneratorItem_C");
static_assert(offsetof(AWPN_ShieldRegeneratorItem_C, UberGraphFrame) == 0x0004E8, "Member 'AWPN_ShieldRegeneratorItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWPN_ShieldRegeneratorItem_C, RechargeAudio) == 0x0004F0, "Member 'AWPN_ShieldRegeneratorItem_C::RechargeAudio' has a wrong offset!");
static_assert(offsetof(AWPN_ShieldRegeneratorItem_C, RechargedMaterial) == 0x0004F8, "Member 'AWPN_ShieldRegeneratorItem_C::RechargedMaterial' has a wrong offset!");

}
