#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_LoadOut_PerksEquip_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ENUM_MenuColors_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C
// 0x0080 (0x02E0 - 0x0260)
class UITM_LoadOut_PerksEquip_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                FrameBorder;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLocked;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ItemButton;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SelectionBorder;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PerkIcon_C*                         UI_PerkIcon;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ItemHovered;                                       // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ItemSelected;                                      // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ItemLocked;                                        // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_409B[0x5];                                     // 0x02A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkAsset*                             PerkAsset;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShowBorder;                                        // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_409C[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ClickAudio;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsRetirementIcon;                                  // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_409D[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CharacterClass;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(class UITM_LoadOut_PerksEquip_Item_C* Item);
	void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item(int32 EntryPoint);
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Set_Selected(bool IsSelected);
	void Set_Perk(class UPerkAsset* Param_PerkAsset);
	void Refresh();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void IsItemLocked(bool* Param_ItemLocked);
	class UWidget* CreateToolTip();

	void GetPerkAsset(class UPerkAsset** Param_PerkAsset) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_LoadOut_PerksEquip_Item_C">();
	}
	static class UITM_LoadOut_PerksEquip_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_LoadOut_PerksEquip_Item_C>();
	}
};
static_assert(alignof(UITM_LoadOut_PerksEquip_Item_C) == 0x000008, "Wrong alignment on UITM_LoadOut_PerksEquip_Item_C");
static_assert(sizeof(UITM_LoadOut_PerksEquip_Item_C) == 0x0002E0, "Wrong size on UITM_LoadOut_PerksEquip_Item_C");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, UberGraphFrame) == 0x000260, "Member 'UITM_LoadOut_PerksEquip_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, Background) == 0x000268, "Member 'UITM_LoadOut_PerksEquip_Item_C::Background' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, FrameBorder) == 0x000270, "Member 'UITM_LoadOut_PerksEquip_Item_C::FrameBorder' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, IconLocked) == 0x000278, "Member 'UITM_LoadOut_PerksEquip_Item_C::IconLocked' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, IconSwitcher) == 0x000280, "Member 'UITM_LoadOut_PerksEquip_Item_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, ItemButton) == 0x000288, "Member 'UITM_LoadOut_PerksEquip_Item_C::ItemButton' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, SelectionBorder) == 0x000290, "Member 'UITM_LoadOut_PerksEquip_Item_C::SelectionBorder' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, UI_PerkIcon) == 0x000298, "Member 'UITM_LoadOut_PerksEquip_Item_C::UI_PerkIcon' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, ItemHovered) == 0x0002A0, "Member 'UITM_LoadOut_PerksEquip_Item_C::ItemHovered' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, ItemSelected) == 0x0002A1, "Member 'UITM_LoadOut_PerksEquip_Item_C::ItemSelected' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, ItemLocked) == 0x0002A2, "Member 'UITM_LoadOut_PerksEquip_Item_C::ItemLocked' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, PerkAsset) == 0x0002A8, "Member 'UITM_LoadOut_PerksEquip_Item_C::PerkAsset' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, OnClicked) == 0x0002B0, "Member 'UITM_LoadOut_PerksEquip_Item_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, ShowBorder) == 0x0002C0, "Member 'UITM_LoadOut_PerksEquip_Item_C::ShowBorder' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, ClickAudio) == 0x0002C8, "Member 'UITM_LoadOut_PerksEquip_Item_C::ClickAudio' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, IsRetirementIcon) == 0x0002D0, "Member 'UITM_LoadOut_PerksEquip_Item_C::IsRetirementIcon' has a wrong offset!");
static_assert(offsetof(UITM_LoadOut_PerksEquip_Item_C, CharacterClass) == 0x0002D8, "Member 'UITM_LoadOut_PerksEquip_Item_C::CharacterClass' has a wrong offset!");

}

