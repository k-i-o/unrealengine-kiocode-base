#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_JobsEntryV2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WND_Jobs_Entry_Base_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WND_JobsEntryV2.WND_JobsEntryV2_C
// 0x0078 (0x0300 - 0x0288)
class UWND_JobsEntryV2_C final : public UWND_Jobs_Entry_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WND_JobsEntryV2_C;                  // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Assignment_Image;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Box_CampaignItems;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Main;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 I_BG2;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 I_BG2_2;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 I_O2;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_Prerequisites_C*                   ITM_Prerequisites;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJobs_List_Element_BG_CutCorner_C*      Jobs_List_Element_BG_CutCorner_1;                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Scaler;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PreReqOverlay;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_AssignmentName;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaign*                              Campaign;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFolded;                                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31F1[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DynMaterial;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetData(class UCampaign* Param_Campaign);
	bool CanStartCampaign(class UCampaign* InCampaign);
	bool VisibleAndEnabled(class UWidget* Widget);
	void SetInfo();
	bool IsActiveCampaign();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Refresh();
	void Event_Updated();
	void ExecuteUbergraph_WND_JobsEntryV2(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WND_JobsEntryV2_C">();
	}
	static class UWND_JobsEntryV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWND_JobsEntryV2_C>();
	}
};
static_assert(alignof(UWND_JobsEntryV2_C) == 0x000008, "Wrong alignment on UWND_JobsEntryV2_C");
static_assert(sizeof(UWND_JobsEntryV2_C) == 0x000300, "Wrong size on UWND_JobsEntryV2_C");
static_assert(offsetof(UWND_JobsEntryV2_C, UberGraphFrame_WND_JobsEntryV2_C) == 0x000288, "Member 'UWND_JobsEntryV2_C::UberGraphFrame_WND_JobsEntryV2_C' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, Assignment_Image) == 0x000290, "Member 'UWND_JobsEntryV2_C::Assignment_Image' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, Box_CampaignItems) == 0x000298, "Member 'UWND_JobsEntryV2_C::Box_CampaignItems' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, Button_Main) == 0x0002A0, "Member 'UWND_JobsEntryV2_C::Button_Main' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, I_BG2) == 0x0002A8, "Member 'UWND_JobsEntryV2_C::I_BG2' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, I_BG2_2) == 0x0002B0, "Member 'UWND_JobsEntryV2_C::I_BG2_2' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, I_O2) == 0x0002B8, "Member 'UWND_JobsEntryV2_C::I_O2' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, ITM_Prerequisites) == 0x0002C0, "Member 'UWND_JobsEntryV2_C::ITM_Prerequisites' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, Jobs_List_Element_BG_CutCorner_1) == 0x0002C8, "Member 'UWND_JobsEntryV2_C::Jobs_List_Element_BG_CutCorner_1' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, Overlay_Scaler) == 0x0002D0, "Member 'UWND_JobsEntryV2_C::Overlay_Scaler' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, PreReqOverlay) == 0x0002D8, "Member 'UWND_JobsEntryV2_C::PreReqOverlay' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, Text_AssignmentName) == 0x0002E0, "Member 'UWND_JobsEntryV2_C::Text_AssignmentName' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, Campaign) == 0x0002E8, "Member 'UWND_JobsEntryV2_C::Campaign' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, IsFolded) == 0x0002F0, "Member 'UWND_JobsEntryV2_C::IsFolded' has a wrong offset!");
static_assert(offsetof(UWND_JobsEntryV2_C, DynMaterial) == 0x0002F8, "Member 'UWND_JobsEntryV2_C::DynMaterial' has a wrong offset!");

}

