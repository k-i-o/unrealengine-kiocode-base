#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Screen_DiscordScreen

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Screen_DiscordScreen.Screen_DiscordScreen_C
// 0x0170 (0x03D0 - 0x0260)
class UScreen_DiscordScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_MinimalWindow_C*            Basic_Menu_MinimalWindow;                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable_C*                ClaimRewardButton;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleScreen_Notification_C*          ConsoleScreen_Notification;                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ContentSwitcher;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CommunityGoalFactionSelection_C*   ITM_CommunityGoalFactionSelection;                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CommunityGoalProgress_C*           ITM_CommunityGoalProgress;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CommunityGoalRecruitment_C*        ITM_CommunityGoalRecruitment;                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CommunityGoalReward_C*             ITM_CommunityGoalReward;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CommunityGoalReward_C*             ITM_CommunityGoalReward_162;                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LOADING;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Progress;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RECRUITMENT;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Reward;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SELECTFACTION;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      Twitch_Loading;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ScreenChanged;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   CCTitle;                                           // 0x0300(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   CCText;                                            // 0x0318(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DDTitle;                                           // 0x0330(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DDText;                                            // 0x0348(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MMTitle;                                           // 0x0360(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MMText;                                            // 0x0378(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Faction;                                           // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A7E[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UITM_CommunityGoal_C*>           GoalsArray;                                        // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                           GoalStateTimer;                                    // 0x03A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	ECommunityUIState                             CurrentState;                                      // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommunityUIState                             LastState;                                         // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRecruitmentPeriod;                               // 0x03B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A7F[0x5];                                     // 0x03B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCommunityGoalFaction*>          FactionData;                                       // 0x03B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          IsGoalPeriod;                                      // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ScreenChanged__DelegateSignature(ECommunityUIState Param_CurrentState, ECommunityUIState PreviousState);
	void ExecuteUbergraph_Screen_DiscordScreen(int32 EntryPoint);
	void OnGoalInitialized();
	void Refresh_Ui();
	void OnFactionChangedEvent();
	void BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
	void ResetFactionCheckState();
	void Destruct();
	void RequestData();
	void OnCGSDataReceivedEvent(bool StateReceived);
	void OnFactionsDataRecievedEvent(const TArray<class FString>& Goals, const TArray<float>& Values, const TArray<int32>& Members);
	void RegisterEvents();
	void CheckState();
	void PreConstruct(bool IsDesignTime);
	void Do_Running_Text(const class FText& Text, int32 Param_Index, class UTextBlock* Target);
	void Construct();
	void TestCommunityGoals();
	void SetGoals(TArray<class FString>& Goals, TArray<float>& Values, TArray<int32>& Members);
	void SetGoalState(bool IsGoal, bool IsRecruitment);
	void CurrentPlayerFaction(class UCommunityGoalFaction** Current_Faction);
	void BuildRewardUI();
	void MinersUnionTier(float* DSMUTier);
	void AwardRewards();
	void SetResult(class UITM_CommunityGoalResult_C* ResultUI, int32 FactionID);
	void RefreshCurrentState();
	void BuildProgressUI(bool ForceRefresh);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Screen_DiscordScreen_C">();
	}
	static class UScreen_DiscordScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScreen_DiscordScreen_C>();
	}
};
static_assert(alignof(UScreen_DiscordScreen_C) == 0x000008, "Wrong alignment on UScreen_DiscordScreen_C");
static_assert(sizeof(UScreen_DiscordScreen_C) == 0x0003D0, "Wrong size on UScreen_DiscordScreen_C");
static_assert(offsetof(UScreen_DiscordScreen_C, UberGraphFrame) == 0x000260, "Member 'UScreen_DiscordScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, Basic_Menu_MinimalWindow) == 0x000268, "Member 'UScreen_DiscordScreen_C::Basic_Menu_MinimalWindow' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ClaimRewardButton) == 0x000270, "Member 'UScreen_DiscordScreen_C::ClaimRewardButton' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ConsoleScreen_Notification) == 0x000278, "Member 'UScreen_DiscordScreen_C::ConsoleScreen_Notification' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ContentSwitcher) == 0x000280, "Member 'UScreen_DiscordScreen_C::ContentSwitcher' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ITM_CommunityGoalFactionSelection) == 0x000288, "Member 'UScreen_DiscordScreen_C::ITM_CommunityGoalFactionSelection' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ITM_CommunityGoalProgress) == 0x000290, "Member 'UScreen_DiscordScreen_C::ITM_CommunityGoalProgress' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ITM_CommunityGoalRecruitment) == 0x000298, "Member 'UScreen_DiscordScreen_C::ITM_CommunityGoalRecruitment' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ITM_CommunityGoalReward) == 0x0002A0, "Member 'UScreen_DiscordScreen_C::ITM_CommunityGoalReward' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ITM_CommunityGoalReward_162) == 0x0002A8, "Member 'UScreen_DiscordScreen_C::ITM_CommunityGoalReward_162' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, LOADING) == 0x0002B0, "Member 'UScreen_DiscordScreen_C::LOADING' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, Progress) == 0x0002B8, "Member 'UScreen_DiscordScreen_C::Progress' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, RECRUITMENT) == 0x0002C0, "Member 'UScreen_DiscordScreen_C::RECRUITMENT' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, Reward) == 0x0002C8, "Member 'UScreen_DiscordScreen_C::Reward' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, SELECTFACTION) == 0x0002D0, "Member 'UScreen_DiscordScreen_C::SELECTFACTION' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, TextBlock_0) == 0x0002D8, "Member 'UScreen_DiscordScreen_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, TextBlock_2) == 0x0002E0, "Member 'UScreen_DiscordScreen_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, Twitch_Loading) == 0x0002E8, "Member 'UScreen_DiscordScreen_C::Twitch_Loading' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, ScreenChanged) == 0x0002F0, "Member 'UScreen_DiscordScreen_C::ScreenChanged' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, CCTitle) == 0x000300, "Member 'UScreen_DiscordScreen_C::CCTitle' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, CCText) == 0x000318, "Member 'UScreen_DiscordScreen_C::CCText' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, DDTitle) == 0x000330, "Member 'UScreen_DiscordScreen_C::DDTitle' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, DDText) == 0x000348, "Member 'UScreen_DiscordScreen_C::DDText' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, MMTitle) == 0x000360, "Member 'UScreen_DiscordScreen_C::MMTitle' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, MMText) == 0x000378, "Member 'UScreen_DiscordScreen_C::MMText' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, Faction) == 0x000390, "Member 'UScreen_DiscordScreen_C::Faction' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, GoalsArray) == 0x000398, "Member 'UScreen_DiscordScreen_C::GoalsArray' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, GoalStateTimer) == 0x0003A8, "Member 'UScreen_DiscordScreen_C::GoalStateTimer' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, CurrentState) == 0x0003B0, "Member 'UScreen_DiscordScreen_C::CurrentState' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, LastState) == 0x0003B1, "Member 'UScreen_DiscordScreen_C::LastState' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, IsRecruitmentPeriod) == 0x0003B2, "Member 'UScreen_DiscordScreen_C::IsRecruitmentPeriod' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, FactionData) == 0x0003B8, "Member 'UScreen_DiscordScreen_C::FactionData' has a wrong offset!");
static_assert(offsetof(UScreen_DiscordScreen_C, IsGoalPeriod) == 0x0003C8, "Member 'UScreen_DiscordScreen_C::IsGoalPeriod' has a wrong offset!");

}

