#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weekly_Deadline_Timer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Weekly_Deadline_Timer.Weekly_Deadline_Timer_C
// 0x0038 (0x0298 - 0x0260)
class UWeekly_Deadline_Timer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 I_Background;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 I_Outline;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_TimeText_C*                        ITM_TimeText;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Headline;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaign*                              Campaign;                                          // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeeklyTimerCampaignRequirement*        Requirement;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void SetData(class UCampaign* Param_Campaign);
	void Update_Time();
	void ExecuteUbergraph_Weekly_Deadline_Timer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Weekly_Deadline_Timer_C">();
	}
	static class UWeekly_Deadline_Timer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeekly_Deadline_Timer_C>();
	}
};
static_assert(alignof(UWeekly_Deadline_Timer_C) == 0x000008, "Wrong alignment on UWeekly_Deadline_Timer_C");
static_assert(sizeof(UWeekly_Deadline_Timer_C) == 0x000298, "Wrong size on UWeekly_Deadline_Timer_C");
static_assert(offsetof(UWeekly_Deadline_Timer_C, UberGraphFrame) == 0x000260, "Member 'UWeekly_Deadline_Timer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeekly_Deadline_Timer_C, I_Background) == 0x000268, "Member 'UWeekly_Deadline_Timer_C::I_Background' has a wrong offset!");
static_assert(offsetof(UWeekly_Deadline_Timer_C, I_Outline) == 0x000270, "Member 'UWeekly_Deadline_Timer_C::I_Outline' has a wrong offset!");
static_assert(offsetof(UWeekly_Deadline_Timer_C, ITM_TimeText) == 0x000278, "Member 'UWeekly_Deadline_Timer_C::ITM_TimeText' has a wrong offset!");
static_assert(offsetof(UWeekly_Deadline_Timer_C, TextBlock_Headline) == 0x000280, "Member 'UWeekly_Deadline_Timer_C::TextBlock_Headline' has a wrong offset!");
static_assert(offsetof(UWeekly_Deadline_Timer_C, Campaign) == 0x000288, "Member 'UWeekly_Deadline_Timer_C::Campaign' has a wrong offset!");
static_assert(offsetof(UWeekly_Deadline_Timer_C, Requirement) == 0x000290, "Member 'UWeekly_Deadline_Timer_C::Requirement' has a wrong offset!");

}
