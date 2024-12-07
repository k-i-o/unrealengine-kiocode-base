#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_WeeklyMissionOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C
// 0x0080 (0x02E0 - 0x0260)
class UITM_WeeklyMissionOverlay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Checkmark;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DeadlineTimer;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 I_Background;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Checkmark;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_Prerequisites_C*                   ITM_Prerequisites;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_TimeText_C*                        ITM_TimeText;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobs_List_Element_BG_CutCorner_C*      Jobs_List_Element_BG_CutCorner_1;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline_1;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Headline;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Timer;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Assignment;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Type;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaign*                              Campaign;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeeklyTimerCampaignRequirement*        Requirement;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void SetData(class UCampaign* Param_Campaign, const class FText& Headline, bool ShowTimer, bool AllRequirementsMet);
	void Update_Time();
	void SetInvalid(class UCampaign* Param_Campaign);
	void ExecuteUbergraph_ITM_WeeklyMissionOverlay(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_WeeklyMissionOverlay_C">();
	}
	static class UITM_WeeklyMissionOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_WeeklyMissionOverlay_C>();
	}
};
static_assert(alignof(UITM_WeeklyMissionOverlay_C) == 0x000008, "Wrong alignment on UITM_WeeklyMissionOverlay_C");
static_assert(sizeof(UITM_WeeklyMissionOverlay_C) == 0x0002E0, "Wrong size on UITM_WeeklyMissionOverlay_C");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, UberGraphFrame) == 0x000260, "Member 'UITM_WeeklyMissionOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, Border_Checkmark) == 0x000268, "Member 'UITM_WeeklyMissionOverlay_C::Border_Checkmark' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, DeadlineTimer) == 0x000270, "Member 'UITM_WeeklyMissionOverlay_C::DeadlineTimer' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, I_Background) == 0x000278, "Member 'UITM_WeeklyMissionOverlay_C::I_Background' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, Image_Checkmark) == 0x000280, "Member 'UITM_WeeklyMissionOverlay_C::Image_Checkmark' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, ITM_Prerequisites) == 0x000288, "Member 'UITM_WeeklyMissionOverlay_C::ITM_Prerequisites' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, ITM_TimeText) == 0x000290, "Member 'UITM_WeeklyMissionOverlay_C::ITM_TimeText' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, Jobs_List_Element_BG_CutCorner_1) == 0x000298, "Member 'UITM_WeeklyMissionOverlay_C::Jobs_List_Element_BG_CutCorner_1' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, Outline) == 0x0002A0, "Member 'UITM_WeeklyMissionOverlay_C::Outline' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, Outline_1) == 0x0002A8, "Member 'UITM_WeeklyMissionOverlay_C::Outline_1' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, Text_Headline) == 0x0002B0, "Member 'UITM_WeeklyMissionOverlay_C::Text_Headline' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, TextBlock_Timer) == 0x0002B8, "Member 'UITM_WeeklyMissionOverlay_C::TextBlock_Timer' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, VerticalBox_Assignment) == 0x0002C0, "Member 'UITM_WeeklyMissionOverlay_C::VerticalBox_Assignment' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, WidgetSwitcher_Type) == 0x0002C8, "Member 'UITM_WeeklyMissionOverlay_C::WidgetSwitcher_Type' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, Campaign) == 0x0002D0, "Member 'UITM_WeeklyMissionOverlay_C::Campaign' has a wrong offset!");
static_assert(offsetof(UITM_WeeklyMissionOverlay_C, Requirement) == 0x0002D8, "Member 'UITM_WeeklyMissionOverlay_C::Requirement' has a wrong offset!");

}

