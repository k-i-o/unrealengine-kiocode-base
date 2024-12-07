#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CommunityGoalResult_ConsoleScreenV1

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C
// 0x0128 (0x03A8 - 0x0280)
class UITM_CommunityGoalResult_ConsoleScreenV1_C final : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               BronzeImage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               GoldImage;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageB;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageG;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageNT;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageS;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NoTierImage;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SilverImage;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TierTextBlock;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleTextBlock;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted_267;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x02F0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         TitleSize;                                         // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_349B[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            IconImage;                                         // 0x0310(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UCommunityGoalFaction*                  Faction;                                           // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              TierIconSize;                                      // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1(int32 EntryPoint);
	void SetResult(int32 Score, int32 Tier);
	void PreConstruct(bool IsDesignTime);
	void SetFaction(class UCommunityGoalFaction* Param_Faction);
	void UpdateIcon();
	void UpdateTitle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_CommunityGoalResult_ConsoleScreenV1_C">();
	}
	static class UITM_CommunityGoalResult_ConsoleScreenV1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_CommunityGoalResult_ConsoleScreenV1_C>();
	}
};
static_assert(alignof(UITM_CommunityGoalResult_ConsoleScreenV1_C) == 0x000008, "Wrong alignment on UITM_CommunityGoalResult_ConsoleScreenV1_C");
static_assert(sizeof(UITM_CommunityGoalResult_ConsoleScreenV1_C) == 0x0003A8, "Wrong size on UITM_CommunityGoalResult_ConsoleScreenV1_C");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, UberGraphFrame) == 0x000280, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, BronzeImage) == 0x000288, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::BronzeImage' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, GoldImage) == 0x000290, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::GoldImage' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, Icon) == 0x000298, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::Icon' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, ImageB) == 0x0002A0, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::ImageB' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, ImageG) == 0x0002A8, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::ImageG' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, ImageNT) == 0x0002B0, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::ImageNT' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, ImageS) == 0x0002B8, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::ImageS' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, NoTierImage) == 0x0002C0, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::NoTierImage' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, SilverImage) == 0x0002C8, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::SilverImage' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, TierTextBlock) == 0x0002D0, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::TierTextBlock' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, TitleTextBlock) == 0x0002D8, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::TitleTextBlock' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, UI_ImageTinted) == 0x0002E0, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::UI_ImageTinted' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, UI_ImageTinted_267) == 0x0002E8, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::UI_ImageTinted_267' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, Title) == 0x0002F0, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::Title' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, TitleSize) == 0x000308, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::TitleSize' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, IconImage) == 0x000310, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::IconImage' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, Faction) == 0x000398, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::Faction' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalResult_ConsoleScreenV1_C, TierIconSize) == 0x0003A0, "Member 'UITM_CommunityGoalResult_ConsoleScreenV1_C::TierIconSize' has a wrong offset!");

}

