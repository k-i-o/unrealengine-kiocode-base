#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Popup_GearUpgrade_Buy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C
// 0x0068 (0x0308 - 0x02A0)
class UPopup_GearUpgrade_Buy_C final : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_MinimalWindow_C*            BasicWindow_Minimal;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBlurBackground_C*                      BlurBackground;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_No;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_Yes;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TEXT_Purchase;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TEXT_UpgradeName;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Cost;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemUpgrade*                           Upgrade;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Item;                                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        Player;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ShoutAudioComponent;                               // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasAllUpgradesForItem;                             // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Popup_GearUpgrade_Buy(int32 EntryPoint);
	void OnClosed();
	void Buy();
	void Back();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Show(class UClass* Param_Item, class UItemUpgrade* Param_Upgrade);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Popup_GearUpgrade_Buy_C">();
	}
	static class UPopup_GearUpgrade_Buy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPopup_GearUpgrade_Buy_C>();
	}
};
static_assert(alignof(UPopup_GearUpgrade_Buy_C) == 0x000008, "Wrong alignment on UPopup_GearUpgrade_Buy_C");
static_assert(sizeof(UPopup_GearUpgrade_Buy_C) == 0x000308, "Wrong size on UPopup_GearUpgrade_Buy_C");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, UberGraphFrame) == 0x0002A0, "Member 'UPopup_GearUpgrade_Buy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, BasicWindow_Minimal) == 0x0002A8, "Member 'UPopup_GearUpgrade_Buy_C::BasicWindow_Minimal' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, BlurBackground) == 0x0002B0, "Member 'UPopup_GearUpgrade_Buy_C::BlurBackground' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, BTN_No) == 0x0002B8, "Member 'UPopup_GearUpgrade_Buy_C::BTN_No' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, BTN_Yes) == 0x0002C0, "Member 'UPopup_GearUpgrade_Buy_C::BTN_Yes' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, TEXT_Purchase) == 0x0002C8, "Member 'UPopup_GearUpgrade_Buy_C::TEXT_Purchase' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, TEXT_UpgradeName) == 0x0002D0, "Member 'UPopup_GearUpgrade_Buy_C::TEXT_UpgradeName' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, VerticalBox_Cost) == 0x0002D8, "Member 'UPopup_GearUpgrade_Buy_C::VerticalBox_Cost' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, Upgrade) == 0x0002E0, "Member 'UPopup_GearUpgrade_Buy_C::Upgrade' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, Item) == 0x0002E8, "Member 'UPopup_GearUpgrade_Buy_C::Item' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, Player) == 0x0002F0, "Member 'UPopup_GearUpgrade_Buy_C::Player' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, ShoutAudioComponent) == 0x0002F8, "Member 'UPopup_GearUpgrade_Buy_C::ShoutAudioComponent' has a wrong offset!");
static_assert(offsetof(UPopup_GearUpgrade_Buy_C, HasAllUpgradesForItem) == 0x000300, "Member 'UPopup_GearUpgrade_Buy_C::HasAllUpgradesForItem' has a wrong offset!");

}
