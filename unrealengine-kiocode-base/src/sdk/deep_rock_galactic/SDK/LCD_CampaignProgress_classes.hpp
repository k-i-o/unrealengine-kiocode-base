#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LCD_CampaignProgress

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LCD_CampaignProgress.LCD_CampaignProgress_C
// 0x0018 (0x0278 - 0x0260)
class ULCD_CampaignProgress_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_41;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CampaignProgress_Small_C*          ITM_CampaignProgress_Small;                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void OnCampaignChanged_Event_0();
	void ExecuteUbergraph_LCD_CampaignProgress(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LCD_CampaignProgress_C">();
	}
	static class ULCD_CampaignProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULCD_CampaignProgress_C>();
	}
};
static_assert(alignof(ULCD_CampaignProgress_C) == 0x000008, "Wrong alignment on ULCD_CampaignProgress_C");
static_assert(sizeof(ULCD_CampaignProgress_C) == 0x000278, "Wrong size on ULCD_CampaignProgress_C");
static_assert(offsetof(ULCD_CampaignProgress_C, UberGraphFrame) == 0x000260, "Member 'ULCD_CampaignProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULCD_CampaignProgress_C, Image_41) == 0x000268, "Member 'ULCD_CampaignProgress_C::Image_41' has a wrong offset!");
static_assert(offsetof(ULCD_CampaignProgress_C, ITM_CampaignProgress_Small) == 0x000270, "Member 'ULCD_CampaignProgress_C::ITM_CampaignProgress_Small' has a wrong offset!");

}

