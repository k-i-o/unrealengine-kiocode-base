#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Loadout_PerksEquip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C
// 0x0038 (0x0298 - 0x0260)
class UITM_Loadout_PerksEquip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           ActiveSlotsBox;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_Loadout_PerksEquip_Selection_C*    ITM_Loadout_PerksEquip_Selection;                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PassiveSlotsBox;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PerkStar;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerCharacterID*                     CharacterClass;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_LoadOut_PerksEquip_Slot_C*         SelectedSlot;                                      // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITM_Loadout_PerksEquip(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset);
	void Set_Character_Class(class UPlayerCharacterID* CharacterID);
	void UpdateEquippedPerks();
	void GetEquippedPerkAt(int32 Param_Index, const TArray<class UPerkAsset*>& TargetArray, class UPerkAsset** Perk);
	class UWidget* Get_PerkStar_ToolTipWidget_0();
	void UpdateSlots();
	void CreateSlots(class UVerticalBox* InSlotsBox, class UPlayerCharacterID* InCharacter, EPerkUsageType InType);
	void SelectSlot(class UITM_LoadOut_PerksEquip_Slot_C* InSlot);
	void GetEquippedPerksByType(class UPlayerCharacterID* InCharacterClass, EPerkUsageType InType, TArray<class UPerkAsset*>* OutPerks);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_Loadout_PerksEquip_C">();
	}
	static class UITM_Loadout_PerksEquip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_Loadout_PerksEquip_C>();
	}
};
static_assert(alignof(UITM_Loadout_PerksEquip_C) == 0x000008, "Wrong alignment on UITM_Loadout_PerksEquip_C");
static_assert(sizeof(UITM_Loadout_PerksEquip_C) == 0x000298, "Wrong size on UITM_Loadout_PerksEquip_C");
static_assert(offsetof(UITM_Loadout_PerksEquip_C, UberGraphFrame) == 0x000260, "Member 'UITM_Loadout_PerksEquip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_Loadout_PerksEquip_C, ActiveSlotsBox) == 0x000268, "Member 'UITM_Loadout_PerksEquip_C::ActiveSlotsBox' has a wrong offset!");
static_assert(offsetof(UITM_Loadout_PerksEquip_C, ITM_Loadout_PerksEquip_Selection) == 0x000270, "Member 'UITM_Loadout_PerksEquip_C::ITM_Loadout_PerksEquip_Selection' has a wrong offset!");
static_assert(offsetof(UITM_Loadout_PerksEquip_C, PassiveSlotsBox) == 0x000278, "Member 'UITM_Loadout_PerksEquip_C::PassiveSlotsBox' has a wrong offset!");
static_assert(offsetof(UITM_Loadout_PerksEquip_C, PerkStar) == 0x000280, "Member 'UITM_Loadout_PerksEquip_C::PerkStar' has a wrong offset!");
static_assert(offsetof(UITM_Loadout_PerksEquip_C, CharacterClass) == 0x000288, "Member 'UITM_Loadout_PerksEquip_C::CharacterClass' has a wrong offset!");
static_assert(offsetof(UITM_Loadout_PerksEquip_C, SelectedSlot) == 0x000290, "Member 'UITM_Loadout_PerksEquip_C::SelectedSlot' has a wrong offset!");

}
