#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITEM_SpaceRig_PlayerRank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C
// 0x0058 (0x02D8 - 0x0280)
class UITEM_SpaceRig_PlayerRank_C final : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_NameDivider2;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PlayerName;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PlayerRank;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataCredits;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UICON_Rank_C*                           ICON_Rank;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_139;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_TopBar_ResourceCounter_C*          ITM_TopBar_ResourceCounter;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerRank;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_PlayerName;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_NameTags_C*                         UI_NameTags;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITEM_SpaceRig_PlayerRank(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnPlayerProgressChanged(class AFSDPlayerState* PlayerState, const struct FPlayerProgress& Progress);
	void OnCreditsChanged_Event();
	void Update();
	void Construct();
	void SetPlayerName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITEM_SpaceRig_PlayerRank_C">();
	}
	static class UITEM_SpaceRig_PlayerRank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITEM_SpaceRig_PlayerRank_C>();
	}
};
static_assert(alignof(UITEM_SpaceRig_PlayerRank_C) == 0x000008, "Wrong alignment on UITEM_SpaceRig_PlayerRank_C");
static_assert(sizeof(UITEM_SpaceRig_PlayerRank_C) == 0x0002D8, "Wrong size on UITEM_SpaceRig_PlayerRank_C");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, UberGraphFrame) == 0x000280, "Member 'UITEM_SpaceRig_PlayerRank_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, Border_NameDivider2) == 0x000288, "Member 'UITEM_SpaceRig_PlayerRank_C::Border_NameDivider2' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, Border_PlayerName) == 0x000290, "Member 'UITEM_SpaceRig_PlayerRank_C::Border_PlayerName' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, Border_PlayerRank) == 0x000298, "Member 'UITEM_SpaceRig_PlayerRank_C::Border_PlayerRank' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, DataCredits) == 0x0002A0, "Member 'UITEM_SpaceRig_PlayerRank_C::DataCredits' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, ICON_Rank) == 0x0002A8, "Member 'UITEM_SpaceRig_PlayerRank_C::ICON_Rank' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, Image_139) == 0x0002B0, "Member 'UITEM_SpaceRig_PlayerRank_C::Image_139' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, ITM_TopBar_ResourceCounter) == 0x0002B8, "Member 'UITEM_SpaceRig_PlayerRank_C::ITM_TopBar_ResourceCounter' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, PlayerRank) == 0x0002C0, "Member 'UITEM_SpaceRig_PlayerRank_C::PlayerRank' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, TXT_PlayerName) == 0x0002C8, "Member 'UITEM_SpaceRig_PlayerRank_C::TXT_PlayerName' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_PlayerRank_C, UI_NameTags) == 0x0002D0, "Member 'UITEM_SpaceRig_PlayerRank_C::UI_NameTags' has a wrong offset!");

}
