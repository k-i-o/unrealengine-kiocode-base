#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_TabPlayerList_InteractableV2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C
// 0x0080 (0x0300 - 0x0280)
class UHUD_TabPlayerList_InteractableV2_C final : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_InviteFriends1;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_InviteFriends2;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_InviteFriends3;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_InviteFriend;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_TabPlayerListEntry_InteractableV2_C* HUD_TabPlayerListEntry_Interactable1;              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AdvancedLabel_C*                    LabelInviteFriend;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ParentPanel;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PlayersPanel;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_InviteFriends1;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_InviteFriends2;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_InviteFriends3;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_InviteButtons;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_IsInMission;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UButton*>                        InviteButtons;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_HUD_TabPlayerList_InteractableV2(int32 EntryPoint);
	void BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void InviteFriends();
	void BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
	void OnPlayerJoined_Event(class AFSDPlayerState* PlayerState);
	void Update();
	void AddPlayer(class AFSDPlayerState* Player);
	void Construct();
	void OnSuccess_BB3F54234323B8FC909E35A9D25E3656();
	void OnFailure_BB3F54234323B8FC909E35A9D25E3656();
	void FindPlayerList(TArray<class AFSDPlayerState*>* OutPlayers);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_TabPlayerList_InteractableV2_C">();
	}
	static class UHUD_TabPlayerList_InteractableV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_TabPlayerList_InteractableV2_C>();
	}
};
static_assert(alignof(UHUD_TabPlayerList_InteractableV2_C) == 0x000008, "Wrong alignment on UHUD_TabPlayerList_InteractableV2_C");
static_assert(sizeof(UHUD_TabPlayerList_InteractableV2_C) == 0x000300, "Wrong size on UHUD_TabPlayerList_InteractableV2_C");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, UberGraphFrame) == 0x000280, "Member 'UHUD_TabPlayerList_InteractableV2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, Button_InviteFriends1) == 0x000288, "Member 'UHUD_TabPlayerList_InteractableV2_C::Button_InviteFriends1' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, Button_InviteFriends2) == 0x000290, "Member 'UHUD_TabPlayerList_InteractableV2_C::Button_InviteFriends2' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, Button_InviteFriends3) == 0x000298, "Member 'UHUD_TabPlayerList_InteractableV2_C::Button_InviteFriends3' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, HorizontalBox_InviteFriend) == 0x0002A0, "Member 'UHUD_TabPlayerList_InteractableV2_C::HorizontalBox_InviteFriend' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, HUD_TabPlayerListEntry_Interactable1) == 0x0002A8, "Member 'UHUD_TabPlayerList_InteractableV2_C::HUD_TabPlayerListEntry_Interactable1' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, LabelInviteFriend) == 0x0002B0, "Member 'UHUD_TabPlayerList_InteractableV2_C::LabelInviteFriend' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, ParentPanel) == 0x0002B8, "Member 'UHUD_TabPlayerList_InteractableV2_C::ParentPanel' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, PlayersPanel) == 0x0002C0, "Member 'UHUD_TabPlayerList_InteractableV2_C::PlayersPanel' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, SizeBox_InviteFriends1) == 0x0002C8, "Member 'UHUD_TabPlayerList_InteractableV2_C::SizeBox_InviteFriends1' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, SizeBox_InviteFriends2) == 0x0002D0, "Member 'UHUD_TabPlayerList_InteractableV2_C::SizeBox_InviteFriends2' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, SizeBox_InviteFriends3) == 0x0002D8, "Member 'UHUD_TabPlayerList_InteractableV2_C::SizeBox_InviteFriends3' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, Spacer_InviteButtons) == 0x0002E0, "Member 'UHUD_TabPlayerList_InteractableV2_C::Spacer_InviteButtons' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, Spacer_IsInMission) == 0x0002E8, "Member 'UHUD_TabPlayerList_InteractableV2_C::Spacer_IsInMission' has a wrong offset!");
static_assert(offsetof(UHUD_TabPlayerList_InteractableV2_C, InviteButtons) == 0x0002F0, "Member 'UHUD_TabPlayerList_InteractableV2_C::InviteButtons' has a wrong offset!");

}
