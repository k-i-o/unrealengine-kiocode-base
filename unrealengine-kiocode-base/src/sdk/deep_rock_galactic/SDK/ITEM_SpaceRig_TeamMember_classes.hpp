#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITEM_SpaceRig_TeamMember

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C
// 0x00E0 (0x0340 - 0x0260)
class UITEM_SpaceRig_TeamMember_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_CharacterLevel;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_CharacterName;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PlayerName;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PlayerRank;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MaskedImage_C*                      CharIcon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassLevel;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_CharacterLevel;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Host;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_PlayerRank;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_SonyTeamLeader;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             IncomingPlayerNameTxt;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerIconBG;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerIconBorder;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      PlayerOnHisWayIndicator;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerRank;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PlayerSpeaking_C*                   PlayerSpeaking_Incoming;                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PlayerSpeaking_C*                   PlayerSpeaking_Normal;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_RetirementBadge_C*                 PromotionBadge;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        StateSwitcher;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_CharacterName;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_PlayerName;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_NameTags_C*                         UI_NameTags;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_NameTags_C*                         UI_NameTags_C_0;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerCharacter*                       PlayerCharacter;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        PlayerState;                                       // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Update(class APlayerCharacter* Character, class AFSDPlayerState* Player);
	void SetPlayerName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITEM_SpaceRig_TeamMember_C">();
	}
	static class UITEM_SpaceRig_TeamMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITEM_SpaceRig_TeamMember_C>();
	}
};
static_assert(alignof(UITEM_SpaceRig_TeamMember_C) == 0x000008, "Wrong alignment on UITEM_SpaceRig_TeamMember_C");
static_assert(sizeof(UITEM_SpaceRig_TeamMember_C) == 0x000340, "Wrong size on UITEM_SpaceRig_TeamMember_C");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, UberGraphFrame) == 0x000260, "Member 'UITEM_SpaceRig_TeamMember_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Border_CharacterLevel) == 0x000268, "Member 'UITEM_SpaceRig_TeamMember_C::Border_CharacterLevel' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Border_CharacterName) == 0x000270, "Member 'UITEM_SpaceRig_TeamMember_C::Border_CharacterName' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Border_PlayerName) == 0x000278, "Member 'UITEM_SpaceRig_TeamMember_C::Border_PlayerName' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Border_PlayerRank) == 0x000280, "Member 'UITEM_SpaceRig_TeamMember_C::Border_PlayerRank' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, CharIcon) == 0x000288, "Member 'UITEM_SpaceRig_TeamMember_C::CharIcon' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, ClassLevel) == 0x000290, "Member 'UITEM_SpaceRig_TeamMember_C::ClassLevel' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Icon_CharacterLevel) == 0x000298, "Member 'UITEM_SpaceRig_TeamMember_C::Icon_CharacterLevel' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Icon_Host) == 0x0002A0, "Member 'UITEM_SpaceRig_TeamMember_C::Icon_Host' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Icon_PlayerRank) == 0x0002A8, "Member 'UITEM_SpaceRig_TeamMember_C::Icon_PlayerRank' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Icon_SonyTeamLeader) == 0x0002B0, "Member 'UITEM_SpaceRig_TeamMember_C::Icon_SonyTeamLeader' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Image_0) == 0x0002B8, "Member 'UITEM_SpaceRig_TeamMember_C::Image_0' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, IncomingPlayerNameTxt) == 0x0002C0, "Member 'UITEM_SpaceRig_TeamMember_C::IncomingPlayerNameTxt' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, Overlay_0) == 0x0002C8, "Member 'UITEM_SpaceRig_TeamMember_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PlayerIconBG) == 0x0002D0, "Member 'UITEM_SpaceRig_TeamMember_C::PlayerIconBG' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PlayerIconBorder) == 0x0002D8, "Member 'UITEM_SpaceRig_TeamMember_C::PlayerIconBorder' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PlayerOnHisWayIndicator) == 0x0002E0, "Member 'UITEM_SpaceRig_TeamMember_C::PlayerOnHisWayIndicator' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PlayerRank) == 0x0002E8, "Member 'UITEM_SpaceRig_TeamMember_C::PlayerRank' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PlayerSpeaking_Incoming) == 0x0002F0, "Member 'UITEM_SpaceRig_TeamMember_C::PlayerSpeaking_Incoming' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PlayerSpeaking_Normal) == 0x0002F8, "Member 'UITEM_SpaceRig_TeamMember_C::PlayerSpeaking_Normal' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PromotionBadge) == 0x000300, "Member 'UITEM_SpaceRig_TeamMember_C::PromotionBadge' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, StateSwitcher) == 0x000308, "Member 'UITEM_SpaceRig_TeamMember_C::StateSwitcher' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, TXT_CharacterName) == 0x000310, "Member 'UITEM_SpaceRig_TeamMember_C::TXT_CharacterName' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, TXT_PlayerName) == 0x000318, "Member 'UITEM_SpaceRig_TeamMember_C::TXT_PlayerName' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, UI_NameTags) == 0x000320, "Member 'UITEM_SpaceRig_TeamMember_C::UI_NameTags' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, UI_NameTags_C_0) == 0x000328, "Member 'UITEM_SpaceRig_TeamMember_C::UI_NameTags_C_0' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PlayerCharacter) == 0x000330, "Member 'UITEM_SpaceRig_TeamMember_C::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_TeamMember_C, PlayerState) == 0x000338, "Member 'UITEM_SpaceRig_TeamMember_C::PlayerState' has a wrong offset!");

}
