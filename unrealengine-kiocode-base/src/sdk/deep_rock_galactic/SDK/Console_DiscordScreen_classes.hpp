#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Console_DiscordScreen

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Console_DiscordScreen.Console_DiscordScreen_C
// 0x01E8 (0x0448 - 0x0260)
class UConsole_DiscordScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Disappear;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CreditsBlinkAnimation;                             // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LogoAnimation;                                     // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Menu_LargeWindowWithHeader_C*    Basic_Menu_LargeWindowWithHeader;                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClaimReward;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           COLLECT;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CollectTextLabel;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleScreen_Notification_C*          ConsoleScreen_Notification;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      CreditsBlink;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CreditsPanel;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CommunityGoal_ConsoleScreenV2_C*   CurrentProgress;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           FreeBeers;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_Community_Console_ClaimReward_C*   ITM_Community_Console_ClaimReward;                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CommunityGoalRecruitment_ConsoleScreenV1_C* ITM_CommunityGoalRecruitment_ConsoleScreenV1;      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_FactionLogo_C*                     ITM_FactionLogo;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_FactionLogo_C*                     ITM_FactionLogo_C_1;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_FactionLogo_C*                     ITM_FactionLogo_C_2;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           JOIN;                                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             JoinTextLabel;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LOADING;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MainWidgetSwitcher;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_Console_DiscordScreen_C;                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Online;                                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Progress;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RECRUITMENT;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SELECTFACTION;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SydicateLogoBox;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Total;                                             // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C* TotalProgress;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      Twitch_Loading;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted_C_2;                                // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PlayerController_SpaceRig_C*        Player;                                            // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeSinceLastUpdate;                               // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUserIn;                                          // 0x03AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B5F[0x3];                                     // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentPresence;                                   // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentMember;                                     // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousPresence;                                  // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousMember;                                    // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeSinceLoadStarted;                              // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoading;                                         // 0x03C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B60[0x3];                                     // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LoadingTime;                                       // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B61[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   JoinText;                                          // 0x03D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   CollectText;                                       // 0x03E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DoneText;                                          // 0x0400(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          State;                                             // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B62[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ScreenChanged;                                     // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UCommunityGoalFaction*>          FactionData;                                       // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ECommunityUIState                             CurrentState;                                      // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ScreenChanged__DelegateSignature();
	void ExecuteUbergraph_Console_DiscordScreen(int32 EntryPoint);
	void OnGoalInitialized();
	void OnCheckUI();
	void OnCGSData(bool StateReceived);
	void OnFactionsDataRecievedEvent(const TArray<class FString>& Goals, const TArray<float>& Values, const TArray<int32>& Members);
	void RequestUserInByTime();
	void TimedUserRequest(float Time);
	void Stop();
	void Init();
	void PreConstruct(bool IsDesignTime);
	void Do_Running_Text(const class FText& Text, int32 Param_Index, class UTextBlock* Target);
	void UserInServer(bool IsInServer);
	void UpdateUI(const struct FDiscordServerData& DiscordServerCount);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void RefreshUI();
	void StartLoad(float Param_LoadingTime);
	void ClearTextLabels();
	void CreditsOn();
	void LogoOn();
	void SetScreen(bool Appear, bool Force);
	void SetUsable(bool Usable);
	void FactionLogosOn();
	void StopAllLogos();
	void Set_Goals(TArray<class FString>& Goals, TArray<float>& Values, TArray<int32>& Members);
	void MinersUnionTier(float* DSMUTier);
	void Update_Content_Switcher_Content();
	void Handle_Community_Goal_Content_state();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Console_DiscordScreen_C">();
	}
	static class UConsole_DiscordScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsole_DiscordScreen_C>();
	}
};
static_assert(alignof(UConsole_DiscordScreen_C) == 0x000008, "Wrong alignment on UConsole_DiscordScreen_C");
static_assert(sizeof(UConsole_DiscordScreen_C) == 0x000448, "Wrong size on UConsole_DiscordScreen_C");
static_assert(offsetof(UConsole_DiscordScreen_C, UberGraphFrame) == 0x000260, "Member 'UConsole_DiscordScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Disappear) == 0x000268, "Member 'UConsole_DiscordScreen_C::Disappear' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CreditsBlinkAnimation) == 0x000270, "Member 'UConsole_DiscordScreen_C::CreditsBlinkAnimation' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, LogoAnimation) == 0x000278, "Member 'UConsole_DiscordScreen_C::LogoAnimation' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Basic_Menu_LargeWindowWithHeader) == 0x000280, "Member 'UConsole_DiscordScreen_C::Basic_Menu_LargeWindowWithHeader' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, ClaimReward) == 0x000288, "Member 'UConsole_DiscordScreen_C::ClaimReward' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, COLLECT) == 0x000290, "Member 'UConsole_DiscordScreen_C::COLLECT' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CollectTextLabel) == 0x000298, "Member 'UConsole_DiscordScreen_C::CollectTextLabel' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, ConsoleScreen_Notification) == 0x0002A0, "Member 'UConsole_DiscordScreen_C::ConsoleScreen_Notification' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CreditsBlink) == 0x0002A8, "Member 'UConsole_DiscordScreen_C::CreditsBlink' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CreditsPanel) == 0x0002B0, "Member 'UConsole_DiscordScreen_C::CreditsPanel' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CurrentProgress) == 0x0002B8, "Member 'UConsole_DiscordScreen_C::CurrentProgress' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, FreeBeers) == 0x0002C0, "Member 'UConsole_DiscordScreen_C::FreeBeers' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Image_1) == 0x0002C8, "Member 'UConsole_DiscordScreen_C::Image_1' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Image_2) == 0x0002D0, "Member 'UConsole_DiscordScreen_C::Image_2' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Image_3) == 0x0002D8, "Member 'UConsole_DiscordScreen_C::Image_3' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, ITM_Community_Console_ClaimReward) == 0x0002E0, "Member 'UConsole_DiscordScreen_C::ITM_Community_Console_ClaimReward' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, ITM_CommunityGoalRecruitment_ConsoleScreenV1) == 0x0002E8, "Member 'UConsole_DiscordScreen_C::ITM_CommunityGoalRecruitment_ConsoleScreenV1' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, ITM_FactionLogo) == 0x0002F0, "Member 'UConsole_DiscordScreen_C::ITM_FactionLogo' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, ITM_FactionLogo_C_1) == 0x0002F8, "Member 'UConsole_DiscordScreen_C::ITM_FactionLogo_C_1' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, ITM_FactionLogo_C_2) == 0x000300, "Member 'UConsole_DiscordScreen_C::ITM_FactionLogo_C_2' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, JOIN) == 0x000308, "Member 'UConsole_DiscordScreen_C::JOIN' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, JoinTextLabel) == 0x000310, "Member 'UConsole_DiscordScreen_C::JoinTextLabel' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, LOADING) == 0x000318, "Member 'UConsole_DiscordScreen_C::LOADING' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, MainWidgetSwitcher) == 0x000320, "Member 'UConsole_DiscordScreen_C::MainWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Name_Console_DiscordScreen_C) == 0x000328, "Member 'UConsole_DiscordScreen_C::Name_Console_DiscordScreen_C' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Online) == 0x000330, "Member 'UConsole_DiscordScreen_C::Online' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Progress) == 0x000338, "Member 'UConsole_DiscordScreen_C::Progress' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, RECRUITMENT) == 0x000340, "Member 'UConsole_DiscordScreen_C::RECRUITMENT' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, SELECTFACTION) == 0x000348, "Member 'UConsole_DiscordScreen_C::SELECTFACTION' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, SydicateLogoBox) == 0x000350, "Member 'UConsole_DiscordScreen_C::SydicateLogoBox' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, TextBlock_0) == 0x000358, "Member 'UConsole_DiscordScreen_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, TextBlock_1) == 0x000360, "Member 'UConsole_DiscordScreen_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, TextBlock_2) == 0x000368, "Member 'UConsole_DiscordScreen_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, TextBlock_3) == 0x000370, "Member 'UConsole_DiscordScreen_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Total) == 0x000378, "Member 'UConsole_DiscordScreen_C::Total' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, TotalProgress) == 0x000380, "Member 'UConsole_DiscordScreen_C::TotalProgress' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Twitch_Loading) == 0x000388, "Member 'UConsole_DiscordScreen_C::Twitch_Loading' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, UI_ImageTinted) == 0x000390, "Member 'UConsole_DiscordScreen_C::UI_ImageTinted' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, UI_ImageTinted_C_2) == 0x000398, "Member 'UConsole_DiscordScreen_C::UI_ImageTinted_C_2' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, Player) == 0x0003A0, "Member 'UConsole_DiscordScreen_C::Player' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, TimeSinceLastUpdate) == 0x0003A8, "Member 'UConsole_DiscordScreen_C::TimeSinceLastUpdate' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, IsUserIn) == 0x0003AC, "Member 'UConsole_DiscordScreen_C::IsUserIn' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CurrentPresence) == 0x0003B0, "Member 'UConsole_DiscordScreen_C::CurrentPresence' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CurrentMember) == 0x0003B4, "Member 'UConsole_DiscordScreen_C::CurrentMember' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, PreviousPresence) == 0x0003B8, "Member 'UConsole_DiscordScreen_C::PreviousPresence' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, PreviousMember) == 0x0003BC, "Member 'UConsole_DiscordScreen_C::PreviousMember' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, TimeSinceLoadStarted) == 0x0003C0, "Member 'UConsole_DiscordScreen_C::TimeSinceLoadStarted' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, IsLoading) == 0x0003C4, "Member 'UConsole_DiscordScreen_C::IsLoading' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, LoadingTime) == 0x0003C8, "Member 'UConsole_DiscordScreen_C::LoadingTime' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, JoinText) == 0x0003D0, "Member 'UConsole_DiscordScreen_C::JoinText' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CollectText) == 0x0003E8, "Member 'UConsole_DiscordScreen_C::CollectText' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, DoneText) == 0x000400, "Member 'UConsole_DiscordScreen_C::DoneText' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, State) == 0x000418, "Member 'UConsole_DiscordScreen_C::State' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, ScreenChanged) == 0x000420, "Member 'UConsole_DiscordScreen_C::ScreenChanged' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, FactionData) == 0x000430, "Member 'UConsole_DiscordScreen_C::FactionData' has a wrong offset!");
static_assert(offsetof(UConsole_DiscordScreen_C, CurrentState) == 0x000440, "Member 'UConsole_DiscordScreen_C::CurrentState' has a wrong offset!");

}
