#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_StatusScreen_PerkItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C
// 0x0050 (0x02B0 - 0x0260)
class UITM_StatusScreen_PerkItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ItemButton;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SelectionBorder;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PerkBackground_C*                   UI_PerkBackground;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PerkIcon_C*                         UI_PerkIcon;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ItemHovered;                                       // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ItemSelected;                                      // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31FC[0x6];                                     // 0x028A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkAsset*                             PerkAsset;                                         // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                             ClickAudio;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(class UITM_StatusScreen_PerkItem_C* Item);
	void ExecuteUbergraph_ITM_StatusScreen_PerkItem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Refresh();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Set_Selected(bool IsSelected);
	void Set_Perk(class UPerkAsset* Param_PerkAsset);
	class UWidget* Get_ItemButton_ToolTipWidget();

	void GetPerkAsset(class UPerkAsset** Param_PerkAsset) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_StatusScreen_PerkItem_C">();
	}
	static class UITM_StatusScreen_PerkItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_StatusScreen_PerkItem_C>();
	}
};
static_assert(alignof(UITM_StatusScreen_PerkItem_C) == 0x000008, "Wrong alignment on UITM_StatusScreen_PerkItem_C");
static_assert(sizeof(UITM_StatusScreen_PerkItem_C) == 0x0002B0, "Wrong size on UITM_StatusScreen_PerkItem_C");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, UberGraphFrame) == 0x000260, "Member 'UITM_StatusScreen_PerkItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, ItemButton) == 0x000268, "Member 'UITM_StatusScreen_PerkItem_C::ItemButton' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, SelectionBorder) == 0x000270, "Member 'UITM_StatusScreen_PerkItem_C::SelectionBorder' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, UI_PerkBackground) == 0x000278, "Member 'UITM_StatusScreen_PerkItem_C::UI_PerkBackground' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, UI_PerkIcon) == 0x000280, "Member 'UITM_StatusScreen_PerkItem_C::UI_PerkIcon' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, ItemHovered) == 0x000288, "Member 'UITM_StatusScreen_PerkItem_C::ItemHovered' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, ItemSelected) == 0x000289, "Member 'UITM_StatusScreen_PerkItem_C::ItemSelected' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, PerkAsset) == 0x000290, "Member 'UITM_StatusScreen_PerkItem_C::PerkAsset' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, OnClicked) == 0x000298, "Member 'UITM_StatusScreen_PerkItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UITM_StatusScreen_PerkItem_C, ClickAudio) == 0x0002A8, "Member 'UITM_StatusScreen_PerkItem_C::ClickAudio' has a wrong offset!");

}

