#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_KPI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WND_KPI.WND_KPI_C
// 0x0070 (0x0310 - 0x02A0)
class UWND_KPI_C final : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_0;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonTab_C*                     BTN_Milestones;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonTab_C*                     BTN_Perks;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonTab_C*                     BTN_Statistics;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MainHeader;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMENU_SpaceRigTemplate_C*               MENU_TopBar;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TabSwitcher;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Milestone_View_C*                   VIEW_Milestones;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Perks_View_C*                       VIEW_Perks;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MissionStats_View_C*                VIEW_Statistics;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonTab_C*                     ActiveTabButton;                                   // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_KPI_Tab_C*                          ActiveTabContent;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SelectNextTab(int32 Direction);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SelectTab(class UBasic_ButtonTab_C* Button, class UUI_KPI_Tab_C* Content);
	void BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
	void BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void SelectStatistics();
	void BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature(bool HasClaimable);
	void Close_Window();
	void OnShown();
	void PreConstruct(bool IsDesignTime);
	void Selectperks();
	void ExecuteUbergraph_WND_KPI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WND_KPI_C">();
	}
	static class UWND_KPI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWND_KPI_C>();
	}
};
static_assert(alignof(UWND_KPI_C) == 0x000008, "Wrong alignment on UWND_KPI_C");
static_assert(sizeof(UWND_KPI_C) == 0x000310, "Wrong size on UWND_KPI_C");
static_assert(offsetof(UWND_KPI_C, UberGraphFrame) == 0x0002A0, "Member 'UWND_KPI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, Basic_Menu_ColorBar) == 0x0002A8, "Member 'UWND_KPI_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, Border_0) == 0x0002B0, "Member 'UWND_KPI_C::Border_0' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, BTN_Milestones) == 0x0002B8, "Member 'UWND_KPI_C::BTN_Milestones' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, BTN_Perks) == 0x0002C0, "Member 'UWND_KPI_C::BTN_Perks' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, BTN_Statistics) == 0x0002C8, "Member 'UWND_KPI_C::BTN_Statistics' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, MainHeader) == 0x0002D0, "Member 'UWND_KPI_C::MainHeader' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, MENU_TopBar) == 0x0002D8, "Member 'UWND_KPI_C::MENU_TopBar' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, TabSwitcher) == 0x0002E0, "Member 'UWND_KPI_C::TabSwitcher' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, VIEW_Milestones) == 0x0002E8, "Member 'UWND_KPI_C::VIEW_Milestones' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, VIEW_Perks) == 0x0002F0, "Member 'UWND_KPI_C::VIEW_Perks' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, VIEW_Statistics) == 0x0002F8, "Member 'UWND_KPI_C::VIEW_Statistics' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, ActiveTabButton) == 0x000300, "Member 'UWND_KPI_C::ActiveTabButton' has a wrong offset!");
static_assert(offsetof(UWND_KPI_C, ActiveTabContent) == 0x000308, "Member 'UWND_KPI_C::ActiveTabContent' has a wrong offset!");

}
