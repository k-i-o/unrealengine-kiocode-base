#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerController_SpaceRig

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SR_PlayerControllerBase_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C
// 0x0170 (0x0910 - 0x07A0)
class ABP_PlayerController_SpaceRig_C final : public ABP_SR_PlayerControllerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerController_SpaceRig_C;     // 0x07A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWindowWidget*                          ServerBrowser;                                     // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMENU_Loadout_C*                        Loadout;                                           // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEscapeMenuWindow*                      Options;                                           // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowWidget*                          MissionSelect;                                     // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OldCounter;                                        // 0x07C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394F[0x4];                                     // 0x07CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUserWidget*>                    Widgets;                                           // 0x07D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPopup_GearUpgrade_Buy_C*               PopUp_BuyUpgrade;                                  // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x07E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CharacterPossed;                                   // 0x07F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3950[0x3];                                     // 0x07F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnToggleHUD;                                       // 0x07F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWindowWidget*                          CharCustomization;                                 // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowWidget*                          Crafting;                                          // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowWidget*                          Popup_Crafting;                                    // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowingReconnectcontroller;                        // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsHUDVisible;                                      // 0x0821(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3951[0x6];                                     // 0x0822(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USCREEN_CharacterSelection_Clean_C*     CharacterSelection;                                // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasShownCharacterSelector;                         // 0x0830(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3952[0x7];                                     // 0x0831(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWindowWidget*                          ReconnectController;                               // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowWidget*                          NetworkError;                                      // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowWidget*                          Trading;                                           // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowWidget*                          Cheat;                                             // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowWidget*                          Jobs;                                              // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWND_AssignmentMissionComplete_C*       C;                                                 // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowWidget*                          RetirementPopup_0;                                 // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMENU_UpgradeScreen_C*                  ItemUpgrade;                                       // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EscapeMenuEnabled;                                 // 0x0878(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3953[0x7];                                     // 0x0879(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWindowWidget*                          Bosco;                                             // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Medbay_speech_counter;                             // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time_between_shouts;                               // 0x088C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MixerConfettiTime;                                 // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3954[0x4];                                     // 0x0894(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScaledEffect                          MixerConfetti;                                     // 0x0898(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class UFSDAchievement*                        SelfControlAchievement;                            // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasKickedABarrel;                                  // 0x08B0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3955[0x7];                                     // 0x08B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDAchievement*                        MugInHoopAchievement;                              // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDAchievement*                        DiscJockeyAchievement;                             // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanUseInstantUsableDiscord;                        // 0x08C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3956[0x7];                                     // 0x08C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWindowWidget*                          DeepDives;                                         // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSoftObjectPath>                UIToAsyncLoad;                                     // 0x08D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnOpenedEscapeMenu;                                // 0x08E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CheatCounter;                                      // 0x08F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3957[0x4];                                     // 0x08FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCheatRequested;                                  // 0x0900(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnToggleHUD__DelegateSignature();
	void OnOpenedEscapeMenu__DelegateSignature();
	void OnCheatRequested__DelegateSignature();
	void ExecuteUbergraph_BP_PlayerController_SpaceRig(int32 EntryPoint);
	void CustomEvent_0();
	void OnGravityChanged(float CurrentGravity, float Change);
	void ShowReconnect(bool Show);
	void DoCountDown(float NewTime);
	void OnMissionTimerChanged(float NewTime);
	void OnHostTimerChanged(float NewTime);
	void OnCharacterSelected();
	void Back_Event_0();
	void Setup_Jukebox_Sound_Mix();
	void OpenStandaloneMinersManualPage(EMinersManualSinglePage Page);
	void OpenStandaloneMinersManual(EMinersManualSection Section, const struct FGuid& ID);
	void ShowEscapeMenu();
	void OnPlayer(class AFSDPlayerState* Param_PlayerState);
	void OnPackageMounted(bool Sandbox);
	void OnRestartSpacerig(bool Yes, bool CreateModdedSave);
	void OnRestartGame(bool Yes, bool CreateModdedSave);
	void ReloadSpacerig();
	void ShowForgeWorkshop();
	void ShowCharacterSelectionBackground(bool ResetToDefaultWeapon, ECharselectionCameraLocation CameraLocation);
	void On_Prompt(bool Yes);
	void PromptLaunchTutorial();
	void LaunchTutorial();
	void ShowLookAtConsole();
	void Server_PopLooatAtAffliction();
	void Reset_Player_Scale_On_Clients();
	void Reset_Player_Location();
	void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled);
	void SetHasShownCharacterSelector(bool HasShown);
	void OpenSpacerigConsole(class ABP_BaseSpaceRigConsole_C* Console);
	void ShowDeepDives();
	void SetUsableDiscord(bool Usable);
	void HandleDiscordConsole(class ABP_DiscordConsole_C* DiscordConsole);
	void PlayerPlayedEntireSong();
	void PlayerThrewMugInHoop();
	void OnDroppodLeave();
	void OnPlayerSpawnBegin(int32 PlayerId);
	void ShowBoscoUpgrades();
	void ShowItemUpgradeScreen(class UClass* CharacterClass, class UClass* ItemClass, EItemCategory ItemCategory);
	void ShowJobs();
	void Deduct_Credits_On_Client(int32 Amount);
	void OrderBarRound(class ASpaceRigBar* Bar, class UDrinkableDataAsset* Drink);
	void OnRoundSelected_Event(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
	void ShowBarMenu(class ASpaceRigBar* Bar);
	void ShowCheatMenu();
	void ShowWindowByClass(class UClass* WindowClass, int32 ZOrder);
	void ShowTrading();
	void ShowNetworkError();
	void OnLastWindowClosed();
	void OnFirstWindowOpened();
	void ShowReconnectController();
	void OpenCharacterSelector(bool OpenVideo, bool AllowBack);
	void ShowFirstCharacterSelect();
	void SpawnPlayer();
	void ShowCustomizationAndWorld();
	void ShowCraftingAndWorld();
	void ShowCharacterScreenAndWorld();
	void ShowCrafting();
	void ShowCharCustomization();
	void ReceiveBeginPlay();
	void OnCharacterPossesd(class APawn* Param_Pawn);
	void ReceiveDestroyed();
	void ShowBuyItemPopup(class UClass* Item, class UItemUpgrade* Upgrade);
	void RecieveOnControllerReady();
	void ControllerReady();
	void ShowCharacterSelect();
	void RecievePreClientTravel();
	void PlayerChangeCharacter(class UPlayerCharacterID* NewCharacter);
	void Client_OpenMap();
	void ShowMissionSelect();
	void ShowServerBrowser();
	void OnSuccess_FD5D0BC24D561288D20ABE9353DBA180();
	void OnFailure_FD5D0BC24D561288D20ABE9353DBA180();
	void InpActEvt_Home_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A();
	void OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A();
	void OnLoaded_0C1A95084D16C934A469CF8C3B445101(TSubclassOf<class UObject> Loaded);
	void InpActEvt_CtrlPlusAlt_H_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_MapTool_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_CallDonkey_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_MenuButton_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_5(const struct FKey& Key);
	void CreateUI();
	void ChangeCharacter(class UPlayerCharacterID* NewCharacter);
	void AddWidget(class UUserWidget*& Widget, int32 ZOrder, ESlateVisibility InVisibility);
	void SelectLastPlayedCharacter();
	void ChangeHUDVisible(bool Param_IsHUDVisible, EHUDVisibilityReason Reason);
	bool HUDVisible();
	void PreloadAssets();
	void GetCrafting(class UWindowWidget** Widget);
	void GetPopupCrafting(class UWindowWidget** Widget);
	void GetMissionSelect(class UWindowWidget** Widget);
	void Change_Savegame();
	void ModdedSavegameCheck();
	void ResetCheats();

	class UEscapeMenuWindow* GetEscapeMenu() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerController_SpaceRig_C">();
	}
	static class ABP_PlayerController_SpaceRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerController_SpaceRig_C>();
	}
};
static_assert(alignof(ABP_PlayerController_SpaceRig_C) == 0x000008, "Wrong alignment on ABP_PlayerController_SpaceRig_C");
static_assert(sizeof(ABP_PlayerController_SpaceRig_C) == 0x000910, "Wrong size on ABP_PlayerController_SpaceRig_C");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, UberGraphFrame_BP_PlayerController_SpaceRig_C) == 0x0007A0, "Member 'ABP_PlayerController_SpaceRig_C::UberGraphFrame_BP_PlayerController_SpaceRig_C' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, ServerBrowser) == 0x0007A8, "Member 'ABP_PlayerController_SpaceRig_C::ServerBrowser' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Loadout) == 0x0007B0, "Member 'ABP_PlayerController_SpaceRig_C::Loadout' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Options) == 0x0007B8, "Member 'ABP_PlayerController_SpaceRig_C::Options' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, MissionSelect) == 0x0007C0, "Member 'ABP_PlayerController_SpaceRig_C::MissionSelect' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, OldCounter) == 0x0007C8, "Member 'ABP_PlayerController_SpaceRig_C::OldCounter' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Widgets) == 0x0007D0, "Member 'ABP_PlayerController_SpaceRig_C::Widgets' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, PopUp_BuyUpgrade) == 0x0007E0, "Member 'ABP_PlayerController_SpaceRig_C::PopUp_BuyUpgrade' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, StartLocation) == 0x0007E8, "Member 'ABP_PlayerController_SpaceRig_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, CharacterPossed) == 0x0007F4, "Member 'ABP_PlayerController_SpaceRig_C::CharacterPossed' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, OnToggleHUD) == 0x0007F8, "Member 'ABP_PlayerController_SpaceRig_C::OnToggleHUD' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, CharCustomization) == 0x000808, "Member 'ABP_PlayerController_SpaceRig_C::CharCustomization' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Crafting) == 0x000810, "Member 'ABP_PlayerController_SpaceRig_C::Crafting' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Popup_Crafting) == 0x000818, "Member 'ABP_PlayerController_SpaceRig_C::Popup_Crafting' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, ShowingReconnectcontroller) == 0x000820, "Member 'ABP_PlayerController_SpaceRig_C::ShowingReconnectcontroller' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, IsHUDVisible) == 0x000821, "Member 'ABP_PlayerController_SpaceRig_C::IsHUDVisible' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, CharacterSelection) == 0x000828, "Member 'ABP_PlayerController_SpaceRig_C::CharacterSelection' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, HasShownCharacterSelector) == 0x000830, "Member 'ABP_PlayerController_SpaceRig_C::HasShownCharacterSelector' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, ReconnectController) == 0x000838, "Member 'ABP_PlayerController_SpaceRig_C::ReconnectController' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, NetworkError) == 0x000840, "Member 'ABP_PlayerController_SpaceRig_C::NetworkError' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Trading) == 0x000848, "Member 'ABP_PlayerController_SpaceRig_C::Trading' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Cheat) == 0x000850, "Member 'ABP_PlayerController_SpaceRig_C::Cheat' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Jobs) == 0x000858, "Member 'ABP_PlayerController_SpaceRig_C::Jobs' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, C) == 0x000860, "Member 'ABP_PlayerController_SpaceRig_C::C' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, RetirementPopup_0) == 0x000868, "Member 'ABP_PlayerController_SpaceRig_C::RetirementPopup_0' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, ItemUpgrade) == 0x000870, "Member 'ABP_PlayerController_SpaceRig_C::ItemUpgrade' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, EscapeMenuEnabled) == 0x000878, "Member 'ABP_PlayerController_SpaceRig_C::EscapeMenuEnabled' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Bosco) == 0x000880, "Member 'ABP_PlayerController_SpaceRig_C::Bosco' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Medbay_speech_counter) == 0x000888, "Member 'ABP_PlayerController_SpaceRig_C::Medbay_speech_counter' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, Time_between_shouts) == 0x00088C, "Member 'ABP_PlayerController_SpaceRig_C::Time_between_shouts' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, MixerConfettiTime) == 0x000890, "Member 'ABP_PlayerController_SpaceRig_C::MixerConfettiTime' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, MixerConfetti) == 0x000898, "Member 'ABP_PlayerController_SpaceRig_C::MixerConfetti' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, SelfControlAchievement) == 0x0008A8, "Member 'ABP_PlayerController_SpaceRig_C::SelfControlAchievement' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, HasKickedABarrel) == 0x0008B0, "Member 'ABP_PlayerController_SpaceRig_C::HasKickedABarrel' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, MugInHoopAchievement) == 0x0008B8, "Member 'ABP_PlayerController_SpaceRig_C::MugInHoopAchievement' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, DiscJockeyAchievement) == 0x0008C0, "Member 'ABP_PlayerController_SpaceRig_C::DiscJockeyAchievement' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, CanUseInstantUsableDiscord) == 0x0008C8, "Member 'ABP_PlayerController_SpaceRig_C::CanUseInstantUsableDiscord' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, DeepDives) == 0x0008D0, "Member 'ABP_PlayerController_SpaceRig_C::DeepDives' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, UIToAsyncLoad) == 0x0008D8, "Member 'ABP_PlayerController_SpaceRig_C::UIToAsyncLoad' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, OnOpenedEscapeMenu) == 0x0008E8, "Member 'ABP_PlayerController_SpaceRig_C::OnOpenedEscapeMenu' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, CheatCounter) == 0x0008F8, "Member 'ABP_PlayerController_SpaceRig_C::CheatCounter' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_SpaceRig_C, OnCheatRequested) == 0x000900, "Member 'ABP_PlayerController_SpaceRig_C::OnCheatRequested' has a wrong offset!");

}

