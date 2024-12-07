#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AutoReloadPerkActivation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C
// 0x0020 (0x0050 - 0x0030)
class UBP_AutoReloadPerkActivation_C final : public UFloatPerkActivation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryComponent*                    Inventory;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3224[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       Character;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AutoReloadPerkActivation(int32 EntryPoint);
	void OnItemEquipped_Event_0(class AItem* Item);
	void Receive_ActivatePerk(class APlayerCharacter* Param_Character, float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AutoReloadPerkActivation_C">();
	}
	static class UBP_AutoReloadPerkActivation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AutoReloadPerkActivation_C>();
	}
};
static_assert(alignof(UBP_AutoReloadPerkActivation_C) == 0x000008, "Wrong alignment on UBP_AutoReloadPerkActivation_C");
static_assert(sizeof(UBP_AutoReloadPerkActivation_C) == 0x000050, "Wrong size on UBP_AutoReloadPerkActivation_C");
static_assert(offsetof(UBP_AutoReloadPerkActivation_C, UberGraphFrame) == 0x000030, "Member 'UBP_AutoReloadPerkActivation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AutoReloadPerkActivation_C, Inventory) == 0x000038, "Member 'UBP_AutoReloadPerkActivation_C::Inventory' has a wrong offset!");
static_assert(offsetof(UBP_AutoReloadPerkActivation_C, Duration) == 0x000040, "Member 'UBP_AutoReloadPerkActivation_C::Duration' has a wrong offset!");
static_assert(offsetof(UBP_AutoReloadPerkActivation_C, Character) == 0x000048, "Member 'UBP_AutoReloadPerkActivation_C::Character' has a wrong offset!");

}

