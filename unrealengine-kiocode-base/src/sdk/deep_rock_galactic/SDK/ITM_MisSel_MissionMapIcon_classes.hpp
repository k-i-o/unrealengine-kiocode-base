#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_MissionMapIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EMissionSelection_Mode_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C
// 0x00D0 (0x0330 - 0x0260)
class UITM_MisSel_MissionMapIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Click;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_HostPrivate;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_HostPublic;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_Join;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_Solo;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Selection;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_MinimalWindow_C*            ButtonWindow;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SeasonChallengeIcon_C*             ChallengeIcon;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Content;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ICON_TargetDot;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_MissionIconBasic_C*         ITEM_MissionSelection_MissionIconBasic;            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_Campaign_Icon_C*                   ITM_Campaign_Icon;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MutatorIcon_C*                     ITM_MutatorIcon;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MutatorIcon_C*                     ITM_MutatorIcon_1;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Anomalies;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Warnings;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MissionMapIcon_LevelLock_C*        WDG_LevelLock;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MissionMapIcon_Objective_C*        WDG_Resource;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MissionMap_Icon_BG_C*              WindowBG;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGeneratedMission*                      Mission;                                           // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_MisSel_FullBiome_C*                BiomeController;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Tint_MissionIconColor;                             // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetMutators(class UGeneratedMission* Target);
	void SetButtonState(class UBasic_ButtonScalable2_C* Button, bool Enabled, EMissionSelection_Mode Mode);
	void ShouldEnableSoloButton(bool* Show);
	void ShouldEnableHostButton(bool* Show);
	void ShouldEnableJoinButton(bool* Show);
	void GetPlayerController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig);
	void SelectOptions();
	void GetActiveSelectionMode(EMissionSelection_Mode* NewParam);
	void GetNumberOfActiveMissions(TArray<struct FBlueprintSessionResult>& Array, int32* Sessions);
	bool HasMission();
	void SetData(class UGeneratedMission* Param_Mission, class UITM_MisSel_FullBiome_C* Param_BiomeController);
	void Reset();
	void Unselect();
	void Construct();
	void ServerUpdate();
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature();
	void OnTeamMemberCampaignMissionChangedEvent();
	void ShowChallengeIcon(bool InHighlight, class UTexture2D* Icon, const struct FLinearColor& Color);
	void ClickFromCode();
	void ExecuteUbergraph_ITM_MisSel_MissionMapIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MisSel_MissionMapIcon_C">();
	}
	static class UITM_MisSel_MissionMapIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MisSel_MissionMapIcon_C>();
	}
};
static_assert(alignof(UITM_MisSel_MissionMapIcon_C) == 0x000008, "Wrong alignment on UITM_MisSel_MissionMapIcon_C");
static_assert(sizeof(UITM_MisSel_MissionMapIcon_C) == 0x000330, "Wrong size on UITM_MisSel_MissionMapIcon_C");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, UberGraphFrame) == 0x000260, "Member 'UITM_MisSel_MissionMapIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, Click) == 0x000268, "Member 'UITM_MisSel_MissionMapIcon_C::Click' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, Hover) == 0x000270, "Member 'UITM_MisSel_MissionMapIcon_C::Hover' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, BTN_HostPrivate) == 0x000278, "Member 'UITM_MisSel_MissionMapIcon_C::BTN_HostPrivate' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, BTN_HostPublic) == 0x000280, "Member 'UITM_MisSel_MissionMapIcon_C::BTN_HostPublic' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, BTN_Join) == 0x000288, "Member 'UITM_MisSel_MissionMapIcon_C::BTN_Join' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, BTN_Solo) == 0x000290, "Member 'UITM_MisSel_MissionMapIcon_C::BTN_Solo' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, Button_Selection) == 0x000298, "Member 'UITM_MisSel_MissionMapIcon_C::Button_Selection' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, ButtonWindow) == 0x0002A0, "Member 'UITM_MisSel_MissionMapIcon_C::ButtonWindow' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, ChallengeIcon) == 0x0002A8, "Member 'UITM_MisSel_MissionMapIcon_C::ChallengeIcon' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, Content) == 0x0002B0, "Member 'UITM_MisSel_MissionMapIcon_C::Content' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, ICON_TargetDot) == 0x0002B8, "Member 'UITM_MisSel_MissionMapIcon_C::ICON_TargetDot' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, ITEM_MissionSelection_MissionIconBasic) == 0x0002C0, "Member 'UITM_MisSel_MissionMapIcon_C::ITEM_MissionSelection_MissionIconBasic' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, ITM_Campaign_Icon) == 0x0002C8, "Member 'UITM_MisSel_MissionMapIcon_C::ITM_Campaign_Icon' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, ITM_MisSel_DotMarker_CaveDifficulty) == 0x0002D0, "Member 'UITM_MisSel_MissionMapIcon_C::ITM_MisSel_DotMarker_CaveDifficulty' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, ITM_MutatorIcon) == 0x0002D8, "Member 'UITM_MisSel_MissionMapIcon_C::ITM_MutatorIcon' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, ITM_MutatorIcon_1) == 0x0002E0, "Member 'UITM_MisSel_MissionMapIcon_C::ITM_MutatorIcon_1' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, VerticalBox_Anomalies) == 0x0002E8, "Member 'UITM_MisSel_MissionMapIcon_C::VerticalBox_Anomalies' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, VerticalBox_Warnings) == 0x0002F0, "Member 'UITM_MisSel_MissionMapIcon_C::VerticalBox_Warnings' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, WDG_LevelLock) == 0x0002F8, "Member 'UITM_MisSel_MissionMapIcon_C::WDG_LevelLock' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, WDG_Resource) == 0x000300, "Member 'UITM_MisSel_MissionMapIcon_C::WDG_Resource' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, WindowBG) == 0x000308, "Member 'UITM_MisSel_MissionMapIcon_C::WindowBG' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, Mission) == 0x000310, "Member 'UITM_MisSel_MissionMapIcon_C::Mission' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, BiomeController) == 0x000318, "Member 'UITM_MisSel_MissionMapIcon_C::BiomeController' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionMapIcon_C, Tint_MissionIconColor) == 0x000320, "Member 'UITM_MisSel_MissionMapIcon_C::Tint_MissionIconColor' has a wrong offset!");

}
