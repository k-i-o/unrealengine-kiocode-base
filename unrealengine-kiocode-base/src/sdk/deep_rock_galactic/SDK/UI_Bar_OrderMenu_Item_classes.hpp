#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_OrderMenu_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"
#include "ENUM_MenuColors_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C
// 0x0100 (0x0390 - 0x0290)
class UUI_Bar_OrderMenu_Item_C final : public USpaceRigBarMenuItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Click;                                             // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_0;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_101;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BuyButton;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DrinkIcon;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DrinkNameLabel;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ICON_BeerLicense;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              OrderSpecialEdition;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_3;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SpecialEditionBox;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Bar_DrinkCost_C*                    UI_Bar_DrinkCost;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Bar_LockWarning_C*                  UI_Bar_LockWarning;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Bar_PlayerRankWarning_C*            UI_Bar_PlayerRankWarning;                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Bar_SupporterLabel_C*               UI_Bar_SupporterLabel;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDrinksPurchased;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHover;                                           // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhover;                                         // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Selected;                                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanOrder;                                          // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B24[0x6];                                     // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPurchaseDenied;                                  // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          AreBeersFree;                                      // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B25[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDrinkUnlocked;                                   // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDrinkableTypeChanged;                            // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Param_Drink);
	void OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
	void OnUnhover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
	void OnPurchaseDenied__DelegateSignature();
	void OnSelected__DelegateSignature(class USpaceRigBarMenuItem* Item);
	void OnDrinkUnlocked__DelegateSignature(class UDrinkableDataAsset* Param_Drink);
	void OnDrinkableTypeChanged__DelegateSignature();
	void ExecuteUbergraph_UI_Bar_OrderMenu_Item(int32 EntryPoint);
	void Set_Drinkable_Visuals();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void OnCreditsChanged(int32 Credits);
	void OnUnlockAnimFinished_Event();
	void TryUnlock();
	void BuyFailed();
	void OnHoverFinished();
	void Unselect();
	void Select();
	void OnPlayerProgressChanged(int32 Rank, int32 Stars);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature();
	void Yes_0F2CD82B4BA6006B33BED8B78B16B74B();
	void No_0F2CD82B4BA6006B33BED8B78B16B74B();
	void GetBorderColor(struct FLinearColor* OutputColor);
	void UpdateItem();
	void GetTemporaryBuf(class UTemporaryBuff** buff);
	bool HasPlayerRank();
	bool AreBeersFreee();
	class UDrinkableDataAsset* GetSelectedDrinkableType();

	bool IsInteractable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Bar_OrderMenu_Item_C">();
	}
	static class UUI_Bar_OrderMenu_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Bar_OrderMenu_Item_C>();
	}
};
static_assert(alignof(UUI_Bar_OrderMenu_Item_C) == 0x000008, "Wrong alignment on UUI_Bar_OrderMenu_Item_C");
static_assert(sizeof(UUI_Bar_OrderMenu_Item_C) == 0x000390, "Wrong size on UUI_Bar_OrderMenu_Item_C");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, UberGraphFrame) == 0x000290, "Member 'UUI_Bar_OrderMenu_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, Click) == 0x000298, "Member 'UUI_Bar_OrderMenu_Item_C::Click' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, Hover) == 0x0002A0, "Member 'UUI_Bar_OrderMenu_Item_C::Hover' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, Border_0) == 0x0002A8, "Member 'UUI_Bar_OrderMenu_Item_C::Border_0' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, Border_101) == 0x0002B0, "Member 'UUI_Bar_OrderMenu_Item_C::Border_101' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, BuyButton) == 0x0002B8, "Member 'UUI_Bar_OrderMenu_Item_C::BuyButton' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, DrinkIcon) == 0x0002C0, "Member 'UUI_Bar_OrderMenu_Item_C::DrinkIcon' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, DrinkNameLabel) == 0x0002C8, "Member 'UUI_Bar_OrderMenu_Item_C::DrinkNameLabel' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, ICON_BeerLicense) == 0x0002D0, "Member 'UUI_Bar_OrderMenu_Item_C::ICON_BeerLicense' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, OrderSpecialEdition) == 0x0002D8, "Member 'UUI_Bar_OrderMenu_Item_C::OrderSpecialEdition' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, SizeBox_3) == 0x0002E0, "Member 'UUI_Bar_OrderMenu_Item_C::SizeBox_3' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, SpecialEditionBox) == 0x0002E8, "Member 'UUI_Bar_OrderMenu_Item_C::SpecialEditionBox' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, UI_Bar_DrinkCost) == 0x0002F0, "Member 'UUI_Bar_OrderMenu_Item_C::UI_Bar_DrinkCost' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, UI_Bar_LockWarning) == 0x0002F8, "Member 'UUI_Bar_OrderMenu_Item_C::UI_Bar_LockWarning' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, UI_Bar_PlayerRankWarning) == 0x000300, "Member 'UUI_Bar_OrderMenu_Item_C::UI_Bar_PlayerRankWarning' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, UI_Bar_SupporterLabel) == 0x000308, "Member 'UUI_Bar_OrderMenu_Item_C::UI_Bar_SupporterLabel' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, OnDrinksPurchased) == 0x000310, "Member 'UUI_Bar_OrderMenu_Item_C::OnDrinksPurchased' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, OnHover) == 0x000320, "Member 'UUI_Bar_OrderMenu_Item_C::OnHover' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, OnUnhover) == 0x000330, "Member 'UUI_Bar_OrderMenu_Item_C::OnUnhover' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, Selected) == 0x000340, "Member 'UUI_Bar_OrderMenu_Item_C::Selected' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, CanOrder) == 0x000341, "Member 'UUI_Bar_OrderMenu_Item_C::CanOrder' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, OnPurchaseDenied) == 0x000348, "Member 'UUI_Bar_OrderMenu_Item_C::OnPurchaseDenied' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, OnSelected) == 0x000358, "Member 'UUI_Bar_OrderMenu_Item_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, AreBeersFree) == 0x000368, "Member 'UUI_Bar_OrderMenu_Item_C::AreBeersFree' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, OnDrinkUnlocked) == 0x000370, "Member 'UUI_Bar_OrderMenu_Item_C::OnDrinkUnlocked' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_Item_C, OnDrinkableTypeChanged) == 0x000380, "Member 'UUI_Bar_OrderMenu_Item_C::OnDrinkableTypeChanged' has a wrong offset!");

}
