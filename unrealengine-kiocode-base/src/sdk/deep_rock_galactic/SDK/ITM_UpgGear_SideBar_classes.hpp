#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_UpgGear_SideBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C
// 0x00C0 (0x0320 - 0x0260)
class UITM_UpgGear_SideBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Collapse;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           BuyBox;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ContentSwitcher;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Header_Text;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_Overclocks_Equip_C*                ITM_Loadout_Overclocks_Equip;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MasteryBar_C*                      MasteryBar;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_FlatButton_C*                    PurchaseButton;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PurchaseDescription;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalResourceBar_C*            UI_HorizontalResourceBar;                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           UnlockBox;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           UpgradeBox;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           UpgradeGearRows;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 CharacterClass;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ItemClass;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUpgradableGearComponent*               Upgradable;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_Popup_YesNoPrompt_C*             YesNoPrompt;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 Category;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C0A[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemPurchased;                                   // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDialogDataAsset*                       ShoutUpgradePurchased;                             // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         CompactModeProgress;                               // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C0B[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnToggleCollapsed;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnItemPurchased__DelegateSignature();
	void OnToggleCollapsed__DelegateSignature();
	void ExecuteUbergraph_ITM_UpgGear_SideBar(int32 EntryPoint);
	void BndEvt__ITM_UpgGear_SideBar_Button_Collapse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void UpgradePurchased(class UITM_UpgGear_TierRow_C* Row);
	void BuyConfirmation(bool Yes);
	void BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
	void SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C* Prompt);
	void SetItem(class UClass*& InCharacterClass, class UClass*& InItemClass, EItemCategory& InCategory);
	void SetUpgradePurchasedShout(class UDialogDataAsset* Param_ShoutUpgradePurchased);
	void SetCompactModeProgress(float InValue);
	void SetActivePage(class UWidget* Widget);
	bool IsUpgrading();
	class UWidget* Get_Button_Collapse_ToolTip();
	bool GetCanCollapse();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_UpgGear_SideBar_C">();
	}
	static class UITM_UpgGear_SideBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_UpgGear_SideBar_C>();
	}
};
static_assert(alignof(UITM_UpgGear_SideBar_C) == 0x000008, "Wrong alignment on UITM_UpgGear_SideBar_C");
static_assert(sizeof(UITM_UpgGear_SideBar_C) == 0x000320, "Wrong size on UITM_UpgGear_SideBar_C");
static_assert(offsetof(UITM_UpgGear_SideBar_C, UberGraphFrame) == 0x000260, "Member 'UITM_UpgGear_SideBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, Button_Collapse) == 0x000268, "Member 'UITM_UpgGear_SideBar_C::Button_Collapse' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, BuyBox) == 0x000270, "Member 'UITM_UpgGear_SideBar_C::BuyBox' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, ContentSwitcher) == 0x000278, "Member 'UITM_UpgGear_SideBar_C::ContentSwitcher' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, Header_Text) == 0x000280, "Member 'UITM_UpgGear_SideBar_C::Header_Text' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, ITM_Loadout_Overclocks_Equip) == 0x000288, "Member 'UITM_UpgGear_SideBar_C::ITM_Loadout_Overclocks_Equip' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, MasteryBar) == 0x000290, "Member 'UITM_UpgGear_SideBar_C::MasteryBar' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, PurchaseButton) == 0x000298, "Member 'UITM_UpgGear_SideBar_C::PurchaseButton' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, PurchaseDescription) == 0x0002A0, "Member 'UITM_UpgGear_SideBar_C::PurchaseDescription' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, UI_HorizontalResourceBar) == 0x0002A8, "Member 'UITM_UpgGear_SideBar_C::UI_HorizontalResourceBar' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, UnlockBox) == 0x0002B0, "Member 'UITM_UpgGear_SideBar_C::UnlockBox' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, UpgradeBox) == 0x0002B8, "Member 'UITM_UpgGear_SideBar_C::UpgradeBox' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, UpgradeGearRows) == 0x0002C0, "Member 'UITM_UpgGear_SideBar_C::UpgradeGearRows' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, CharacterClass) == 0x0002C8, "Member 'UITM_UpgGear_SideBar_C::CharacterClass' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, ItemClass) == 0x0002D0, "Member 'UITM_UpgGear_SideBar_C::ItemClass' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, Upgradable) == 0x0002D8, "Member 'UITM_UpgGear_SideBar_C::Upgradable' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, YesNoPrompt) == 0x0002E0, "Member 'UITM_UpgGear_SideBar_C::YesNoPrompt' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, Category) == 0x0002E8, "Member 'UITM_UpgGear_SideBar_C::Category' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, OnItemPurchased) == 0x0002F0, "Member 'UITM_UpgGear_SideBar_C::OnItemPurchased' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, ShoutUpgradePurchased) == 0x000300, "Member 'UITM_UpgGear_SideBar_C::ShoutUpgradePurchased' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, CompactModeProgress) == 0x000308, "Member 'UITM_UpgGear_SideBar_C::CompactModeProgress' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_C, OnToggleCollapsed) == 0x000310, "Member 'UITM_UpgGear_SideBar_C::OnToggleCollapsed' has a wrong offset!");

}
