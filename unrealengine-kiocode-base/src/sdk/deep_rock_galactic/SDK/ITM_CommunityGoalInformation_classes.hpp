#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CommunityGoalInformation

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C
// 0x0120 (0x03A0 - 0x0280)
class UITM_CommunityGoalInformation_C final : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar_C_1;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      Border;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                FactionIconToolTip;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GoalText;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           InfoBox;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalResourceBar_C*            UI_HorizontalResourceBar;                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted_267;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconImage;                                         // 0x02F8(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UCommunityGoal*                         CurrentGoal;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunityGoalFaction*                  Faction;                                           // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsShowingCurrentPlayerFaction;                     // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FA4[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UITM_FactionToolTip_C*                  FactionToolTip;                                    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITM_CommunityGoalInformation(int32 EntryPoint);
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void SetFactionAndGoal(class UCommunityGoalFaction* Param_Faction, class UCommunityGoal* Goal);
	void CheckFaction();
	void SetGoal(class UCommunityGoal* Goal);
	void PreConstruct(bool IsDesignTime);
	void ResetAnim();
	void SetFaction(class UCommunityGoalFaction* Param_Faction);
	void UpdateIcon();
	void SetResourceBox(int32 Tier);
	void DoFactionToolTip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_CommunityGoalInformation_C">();
	}
	static class UITM_CommunityGoalInformation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_CommunityGoalInformation_C>();
	}
};
static_assert(alignof(UITM_CommunityGoalInformation_C) == 0x000008, "Wrong alignment on UITM_CommunityGoalInformation_C");
static_assert(sizeof(UITM_CommunityGoalInformation_C) == 0x0003A0, "Wrong size on UITM_CommunityGoalInformation_C");
static_assert(offsetof(UITM_CommunityGoalInformation_C, UberGraphFrame) == 0x000280, "Member 'UITM_CommunityGoalInformation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, Basic_Menu_ColorBar) == 0x000288, "Member 'UITM_CommunityGoalInformation_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, Basic_Menu_ColorBar_C_1) == 0x000290, "Member 'UITM_CommunityGoalInformation_C::Basic_Menu_ColorBar_C_1' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, Border) == 0x000298, "Member 'UITM_CommunityGoalInformation_C::Border' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, FactionIconToolTip) == 0x0002A0, "Member 'UITM_CommunityGoalInformation_C::FactionIconToolTip' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, GoalText) == 0x0002A8, "Member 'UITM_CommunityGoalInformation_C::GoalText' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, Icon) == 0x0002B0, "Member 'UITM_CommunityGoalInformation_C::Icon' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, InfoBox) == 0x0002B8, "Member 'UITM_CommunityGoalInformation_C::InfoBox' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, TextBlock_0) == 0x0002C0, "Member 'UITM_CommunityGoalInformation_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, TitleText) == 0x0002C8, "Member 'UITM_CommunityGoalInformation_C::TitleText' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, UI_HorizontalResourceBar) == 0x0002D0, "Member 'UITM_CommunityGoalInformation_C::UI_HorizontalResourceBar' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, UI_ImageTinted_267) == 0x0002D8, "Member 'UITM_CommunityGoalInformation_C::UI_ImageTinted_267' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, Title) == 0x0002E0, "Member 'UITM_CommunityGoalInformation_C::Title' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, IconImage) == 0x0002F8, "Member 'UITM_CommunityGoalInformation_C::IconImage' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, CurrentGoal) == 0x000380, "Member 'UITM_CommunityGoalInformation_C::CurrentGoal' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, Faction) == 0x000388, "Member 'UITM_CommunityGoalInformation_C::Faction' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, IsShowingCurrentPlayerFaction) == 0x000390, "Member 'UITM_CommunityGoalInformation_C::IsShowingCurrentPlayerFaction' has a wrong offset!");
static_assert(offsetof(UITM_CommunityGoalInformation_C, FactionToolTip) == 0x000398, "Member 'UITM_CommunityGoalInformation_C::FactionToolTip' has a wrong offset!");

}

