#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDWIdget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AbilitySlots_structs.hpp"
#include "MissionTypes_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUDWIdget.HUDWIdget_C
// 0x0148 (0x03C8 - 0x0280)
class UHUDWIdget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowDeathScreen;                                   // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SetWholeHudVisibilityAnim;                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowMission;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideTurnButton;                                    // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideCharDetails;                                   // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharDetails_C*                         CharDetails;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharSideBar_C*                         CharSideBar;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharSideBar_C*                         CharSideBar_1;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharSideBar_C*                         CharSideBar_2;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharSideBar_C*                         CharSideBar_3;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCombatLog_C*                           CombatLog;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTurnButton_C*                       EndTurnButton;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FadeObject;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MainMenubutton;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MainMenuText;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                QuestButton;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           QuestCanvas;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestImage;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             QuestText;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             QuestTitle;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                RestartLevel;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RestartText;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TurnCounter;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TurnCounterText;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTurnDisplayer_C*                       TurnDisplayer;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class AAlliedCharacter_C*>             Characters;                                        // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          CanSelectChars;                                    // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258F[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCharSideBar_C*>                 CharSideBars;                                      // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        DefaultSize;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HighlightedSize;                                   // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeOutTime;                                       // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentFadeOutTime;                                // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeUntilStartFadeOut;                             // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HudVisible;                                        // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TurnButtonVisible;                                 // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HadCharSelected;                                   // 0x03AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2590[0x5];                                     // 0x03AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture*>                       CharIcons;                                         // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ShowQuest;                                         // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMissionTypes                                 Mission;                                           // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__HUDWIdget_MainMenubutton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HUDWIdget_QuestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HUDWIdget_QuestButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HUDWIdget_QuestButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HUDWIdget_RestartLevel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void EnsureOnlyShowWhenSelectedChar();
	void ExecuteUbergraph_HUDWIdget(int32 EntryPoint);
	void Minimize_All_Sidebars();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void PreConstruct(bool IsDesignTime);
	void SelectCharacterByIndex(int32 ID);
	void Set_Ability_Visibility_Anim(EAbilitySlots Which, bool Param_Visibility);
	void SetCharacterIndex(int32 Param_Index, class AAlliedCharacter_C* Character);
	void SetCharSidebar(class UCharSideBar_C* Which);
	void SetCharSideBarVisibility(ESlateVisibility MainChar, ESlateVisibility Minion1, ESlateVisibility Minion2, ESlateVisibility Minion3);
	void SetCharState(class UCharSideBar_C* Target, bool State);
	void SetHUDVisibility(bool Visible, bool Force_);
	void SetMissionText(EMissionTypes Param_Mission);
	void SetTurnButtonVisibility(bool Visible);
	void SetWholeHudVisibility(bool Visible_);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TranslateThis();
	void UpdateHealth(double Percentage, int32 CharIdx);
	void UpdateSideBar(int32 CharID);
	void UpdateTurnsText(int32 TurnsLeft);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUDWIdget_C">();
	}
	static class UHUDWIdget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUDWIdget_C>();
	}
};
static_assert(alignof(UHUDWIdget_C) == 0x000008, "Wrong alignment on UHUDWIdget_C");
static_assert(sizeof(UHUDWIdget_C) == 0x0003C8, "Wrong size on UHUDWIdget_C");
static_assert(offsetof(UHUDWIdget_C, UberGraphFrame) == 0x000280, "Member 'UHUDWIdget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, ShowDeathScreen) == 0x000288, "Member 'UHUDWIdget_C::ShowDeathScreen' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, SetWholeHudVisibilityAnim) == 0x000290, "Member 'UHUDWIdget_C::SetWholeHudVisibilityAnim' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, ShowMission) == 0x000298, "Member 'UHUDWIdget_C::ShowMission' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, HideTurnButton) == 0x0002A0, "Member 'UHUDWIdget_C::HideTurnButton' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, HideCharDetails) == 0x0002A8, "Member 'UHUDWIdget_C::HideCharDetails' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CanvasPanel) == 0x0002B0, "Member 'UHUDWIdget_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CharDetails) == 0x0002B8, "Member 'UHUDWIdget_C::CharDetails' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CharSideBar) == 0x0002C0, "Member 'UHUDWIdget_C::CharSideBar' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CharSideBar_1) == 0x0002C8, "Member 'UHUDWIdget_C::CharSideBar_1' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CharSideBar_2) == 0x0002D0, "Member 'UHUDWIdget_C::CharSideBar_2' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CharSideBar_3) == 0x0002D8, "Member 'UHUDWIdget_C::CharSideBar_3' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CombatLog) == 0x0002E0, "Member 'UHUDWIdget_C::CombatLog' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, EndTurnButton) == 0x0002E8, "Member 'UHUDWIdget_C::EndTurnButton' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, FadeObject) == 0x0002F0, "Member 'UHUDWIdget_C::FadeObject' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, MainMenubutton) == 0x0002F8, "Member 'UHUDWIdget_C::MainMenubutton' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, MainMenuText) == 0x000300, "Member 'UHUDWIdget_C::MainMenuText' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, QuestButton) == 0x000308, "Member 'UHUDWIdget_C::QuestButton' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, QuestCanvas) == 0x000310, "Member 'UHUDWIdget_C::QuestCanvas' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, QuestImage) == 0x000318, "Member 'UHUDWIdget_C::QuestImage' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, QuestText) == 0x000320, "Member 'UHUDWIdget_C::QuestText' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, QuestTitle) == 0x000328, "Member 'UHUDWIdget_C::QuestTitle' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, RestartLevel) == 0x000330, "Member 'UHUDWIdget_C::RestartLevel' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, RestartText) == 0x000338, "Member 'UHUDWIdget_C::RestartText' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, TurnCounter) == 0x000340, "Member 'UHUDWIdget_C::TurnCounter' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, TurnCounterText) == 0x000348, "Member 'UHUDWIdget_C::TurnCounterText' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, TurnDisplayer) == 0x000350, "Member 'UHUDWIdget_C::TurnDisplayer' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, Characters) == 0x000358, "Member 'UHUDWIdget_C::Characters' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CanSelectChars) == 0x000368, "Member 'UHUDWIdget_C::CanSelectChars' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CharSideBars) == 0x000370, "Member 'UHUDWIdget_C::CharSideBars' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, DefaultSize) == 0x000380, "Member 'UHUDWIdget_C::DefaultSize' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, HighlightedSize) == 0x000388, "Member 'UHUDWIdget_C::HighlightedSize' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, FadeOutTime) == 0x000390, "Member 'UHUDWIdget_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CurrentFadeOutTime) == 0x000398, "Member 'UHUDWIdget_C::CurrentFadeOutTime' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, TimeUntilStartFadeOut) == 0x0003A0, "Member 'UHUDWIdget_C::TimeUntilStartFadeOut' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, HudVisible) == 0x0003A8, "Member 'UHUDWIdget_C::HudVisible' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, TurnButtonVisible) == 0x0003A9, "Member 'UHUDWIdget_C::TurnButtonVisible' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, HadCharSelected) == 0x0003AA, "Member 'UHUDWIdget_C::HadCharSelected' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, CharIcons) == 0x0003B0, "Member 'UHUDWIdget_C::CharIcons' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, ShowQuest) == 0x0003C0, "Member 'UHUDWIdget_C::ShowQuest' has a wrong offset!");
static_assert(offsetof(UHUDWIdget_C, Mission) == 0x0003C1, "Member 'UHUDWIdget_C::Mission' has a wrong offset!");

}
