#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_OrderMenu_ItemSpecial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"
#include "ENUM_MenuColors_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C
// 0x0120 (0x03B0 - 0x0290)
class UUI_Bar_OrderMenu_ItemSpecial_C final : public USpaceRigBarMenuItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Idle;                                              // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Click;                                             // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BuyButton;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DrinkIconLeft;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DrinkIconRight;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DrinkNameLabel;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_387;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_389;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Frame;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RankBox;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RankHolder;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankIcon;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RankText;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_168;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Bar_DrinkCost_C*                    UI_Bar_DrinkCost;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Bar_LockWarning_C*                  UI_Bar_LockWarning;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Bar_PlayerRankWarning_C*            UI_Bar_PlayerRankWarning;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDrinksPurchased;                                 // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHover;                                           // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhover;                                         // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Selected;                                          // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanOrder;                                          // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B01[0x6];                                     // 0x036A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPurchaseDenied;                                  // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          NewVar_0;                                          // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B02[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDrinkUnlocked;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          AreBeersFree;                                      // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Param_Drink);
	void OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
	void OnUnhover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
	void OnPurchaseDenied__DelegateSignature();
	void OnSelected__DelegateSignature(class USpaceRigBarMenuItem* Item);
	void OnDrinkUnlocked__DelegateSignature(class UDrinkableDataAsset* Param_Drink);
	void ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDrinkable(class UDrinkableDataAsset* Drinkable);
	void TryUnlock();
	void BuyFailed();
	void OnHoverFinished();
	void Unselect();
	void Select();
	void OnPlayerProgressChanged(int32 Rank, int32 Stars);
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
	void OnCreditsChanged(int32 Credits);
	void Construct();
	void Yes_026492834E69A68487066993DA576F51();
	void No_026492834E69A68487066993DA576F51();
	void GetBorderColor(struct FLinearColor* OutputColor);
	void UpdateItemStatus();
	void GetTemporaryBuf(class UTemporaryBuff** buff);
	bool HasPlayerRank();
	class UDrinkableDataAsset* GetSelectedDrinkableType();

	bool IsInteractable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Bar_OrderMenu_ItemSpecial_C">();
	}
	static class UUI_Bar_OrderMenu_ItemSpecial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Bar_OrderMenu_ItemSpecial_C>();
	}
};
static_assert(alignof(UUI_Bar_OrderMenu_ItemSpecial_C) == 0x000008, "Wrong alignment on UUI_Bar_OrderMenu_ItemSpecial_C");
static_assert(sizeof(UUI_Bar_OrderMenu_ItemSpecial_C) == 0x0003B0, "Wrong size on UUI_Bar_OrderMenu_ItemSpecial_C");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, UberGraphFrame) == 0x000290, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Idle) == 0x000298, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Idle' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Click) == 0x0002A0, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Click' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Hover) == 0x0002A8, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Hover' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Basic_Menu_ColorBar) == 0x0002B0, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, BuyButton) == 0x0002B8, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::BuyButton' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, DrinkIconLeft) == 0x0002C0, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::DrinkIconLeft' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, DrinkIconRight) == 0x0002C8, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::DrinkIconRight' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, DrinkNameLabel) == 0x0002D0, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::DrinkNameLabel' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Image_387) == 0x0002D8, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Image_387' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Image_389) == 0x0002E0, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Image_389' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Img_Frame) == 0x0002E8, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Img_Frame' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Overlay_1) == 0x0002F0, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, RankBox) == 0x0002F8, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::RankBox' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, RankHolder) == 0x000300, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::RankHolder' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, RankIcon) == 0x000308, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::RankIcon' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, RankText) == 0x000310, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::RankText' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, TextBlock_168) == 0x000318, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::TextBlock_168' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, UI_Bar_DrinkCost) == 0x000320, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::UI_Bar_DrinkCost' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, UI_Bar_LockWarning) == 0x000328, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::UI_Bar_LockWarning' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, UI_Bar_PlayerRankWarning) == 0x000330, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::UI_Bar_PlayerRankWarning' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, OnDrinksPurchased) == 0x000338, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::OnDrinksPurchased' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, OnHover) == 0x000348, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::OnHover' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, OnUnhover) == 0x000358, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::OnUnhover' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, Selected) == 0x000368, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::Selected' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, CanOrder) == 0x000369, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::CanOrder' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, OnPurchaseDenied) == 0x000370, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::OnPurchaseDenied' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, OnSelected) == 0x000380, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, NewVar_0) == 0x000390, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, OnDrinkUnlocked) == 0x000398, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::OnDrinkUnlocked' has a wrong offset!");
static_assert(offsetof(UUI_Bar_OrderMenu_ItemSpecial_C, AreBeersFree) == 0x0003A8, "Member 'UUI_Bar_OrderMenu_ItemSpecial_C::AreBeersFree' has a wrong offset!");

}

