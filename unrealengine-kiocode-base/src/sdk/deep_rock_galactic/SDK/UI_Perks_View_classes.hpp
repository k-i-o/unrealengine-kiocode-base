#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Perks_View

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "UI_KPI_Tab_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Perks_View.UI_Perks_View_C
// 0x0090 (0x02F0 - 0x0260)
class UUI_Perks_View_C final : public UUI_KPI_Tab_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoadoutHint;                                   // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               ButtonOkHint;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FirstPerkHeader;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        HintBlur;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PerkInfoBG;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PerkInfoOutline;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PerkPointsBG;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PerkPointsOutline;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PerksBG;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PerksOutline;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TierBox;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AvailablePerkPoints_C*              UI_AvailablePerkPoints;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Perks_Buy_C*                        UI_Perks_Buy;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Perks_Item_C*                       SelectedPerk;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPerkAsset*>                     AllPerks;                                          // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          FirstPerkPurchase;                                 // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetColors();
	void HandleMouseEvent(const struct FPointerEvent& InMouseEvent, bool InUp, bool* OutHandled);
	void HandleKeyEvent(const struct FKeyEvent& InKeyEvent, bool InUp, bool* OutHandled);
	void SelectPerkWidget(class UUI_Perks_Item_C* PerkWidget);
	void PreConstruct(bool IsDesignTime);
	void OnPerkClicked_Event(class UUI_Perks_Item_C* PerkWidget);
	void BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature();
	void BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void Toggle_Loadout_Hint(bool Visible);
	void Construct();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_UI_Perks_View(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Perks_View_C">();
	}
	static class UUI_Perks_View_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Perks_View_C>();
	}
};
static_assert(alignof(UUI_Perks_View_C) == 0x000008, "Wrong alignment on UUI_Perks_View_C");
static_assert(sizeof(UUI_Perks_View_C) == 0x0002F0, "Wrong size on UUI_Perks_View_C");
static_assert(offsetof(UUI_Perks_View_C, UberGraphFrame) == 0x000260, "Member 'UUI_Perks_View_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, AnimLoadoutHint) == 0x000268, "Member 'UUI_Perks_View_C::AnimLoadoutHint' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, ButtonOkHint) == 0x000270, "Member 'UUI_Perks_View_C::ButtonOkHint' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, FirstPerkHeader) == 0x000278, "Member 'UUI_Perks_View_C::FirstPerkHeader' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, HintBlur) == 0x000280, "Member 'UUI_Perks_View_C::HintBlur' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, PerkInfoBG) == 0x000288, "Member 'UUI_Perks_View_C::PerkInfoBG' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, PerkInfoOutline) == 0x000290, "Member 'UUI_Perks_View_C::PerkInfoOutline' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, PerkPointsBG) == 0x000298, "Member 'UUI_Perks_View_C::PerkPointsBG' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, PerkPointsOutline) == 0x0002A0, "Member 'UUI_Perks_View_C::PerkPointsOutline' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, PerksBG) == 0x0002A8, "Member 'UUI_Perks_View_C::PerksBG' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, PerksOutline) == 0x0002B0, "Member 'UUI_Perks_View_C::PerksOutline' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, TierBox) == 0x0002B8, "Member 'UUI_Perks_View_C::TierBox' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, UI_AvailablePerkPoints) == 0x0002C0, "Member 'UUI_Perks_View_C::UI_AvailablePerkPoints' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, UI_Perks_Buy) == 0x0002C8, "Member 'UUI_Perks_View_C::UI_Perks_Buy' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, SelectedPerk) == 0x0002D0, "Member 'UUI_Perks_View_C::SelectedPerk' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, AllPerks) == 0x0002D8, "Member 'UUI_Perks_View_C::AllPerks' has a wrong offset!");
static_assert(offsetof(UUI_Perks_View_C, FirstPerkPurchase) == 0x0002E8, "Member 'UUI_Perks_View_C::FirstPerkPurchase' has a wrong offset!");

}

