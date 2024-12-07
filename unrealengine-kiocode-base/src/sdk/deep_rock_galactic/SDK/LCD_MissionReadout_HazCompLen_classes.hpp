#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LCD_MissionReadout_HazCompLen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C
// 0x00D8 (0x0338 - 0x0260)
class ULCD_MissionReadout_HazCompLen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget;                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_0;                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_1;                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_2;                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_3;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_4;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_5;                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_6;                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_7;                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_8;                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DropPod_DangerLevel_TextString_C* BP_DropPodScreenTextWidget_C_9;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ComplexityLevels;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_PlanetaryRegionName;                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           HazardLevels;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_41;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LenghtLevels;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Complexity;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Haz;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Length;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MissionReadOut_Base_C*              UI_MissionReadOut_Base;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_MissionData;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           Names;                                             // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Index_LCD_MissionReadout_HazCompLen_C;             // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimePassed;                                        // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MissionComplexity;                                 // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MissionLength;                                     // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AdjustCLBar(float InputPin);
	void AdjustBar(float InputPin);
	void SetGeneratedMission(class UGeneratedMission* In_Mission);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
	void ExecuteUbergraph_LCD_MissionReadout_HazCompLen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LCD_MissionReadout_HazCompLen_C">();
	}
	static class ULCD_MissionReadout_HazCompLen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULCD_MissionReadout_HazCompLen_C>();
	}
};
static_assert(alignof(ULCD_MissionReadout_HazCompLen_C) == 0x000008, "Wrong alignment on ULCD_MissionReadout_HazCompLen_C");
static_assert(sizeof(ULCD_MissionReadout_HazCompLen_C) == 0x000338, "Wrong size on ULCD_MissionReadout_HazCompLen_C");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, UberGraphFrame) == 0x000260, "Member 'ULCD_MissionReadout_HazCompLen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, Basic_Menu_ColorBar) == 0x000268, "Member 'ULCD_MissionReadout_HazCompLen_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget) == 0x000270, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_0) == 0x000278, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_0' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_1) == 0x000280, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_1' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_2) == 0x000288, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_2' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_3) == 0x000290, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_3' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_4) == 0x000298, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_4' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_5) == 0x0002A0, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_5' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_6) == 0x0002A8, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_6' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_7) == 0x0002B0, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_7' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_8) == 0x0002B8, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_8' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, BP_DropPodScreenTextWidget_C_9) == 0x0002C0, "Member 'ULCD_MissionReadout_HazCompLen_C::BP_DropPodScreenTextWidget_C_9' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, ComplexityLevels) == 0x0002C8, "Member 'ULCD_MissionReadout_HazCompLen_C::ComplexityLevels' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, DATA_PlanetaryRegionName) == 0x0002D0, "Member 'ULCD_MissionReadout_HazCompLen_C::DATA_PlanetaryRegionName' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, HazardLevels) == 0x0002D8, "Member 'ULCD_MissionReadout_HazCompLen_C::HazardLevels' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, Image_41) == 0x0002E0, "Member 'ULCD_MissionReadout_HazCompLen_C::Image_41' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, LenghtLevels) == 0x0002E8, "Member 'ULCD_MissionReadout_HazCompLen_C::LenghtLevels' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, ProgressBar_Complexity) == 0x0002F0, "Member 'ULCD_MissionReadout_HazCompLen_C::ProgressBar_Complexity' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, ProgressBar_Haz) == 0x0002F8, "Member 'ULCD_MissionReadout_HazCompLen_C::ProgressBar_Haz' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, ProgressBar_Length) == 0x000300, "Member 'ULCD_MissionReadout_HazCompLen_C::ProgressBar_Length' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, UI_MissionReadOut_Base) == 0x000308, "Member 'ULCD_MissionReadout_HazCompLen_C::UI_MissionReadOut_Base' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, VerticalBox_MissionData) == 0x000310, "Member 'ULCD_MissionReadout_HazCompLen_C::VerticalBox_MissionData' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, Names) == 0x000318, "Member 'ULCD_MissionReadout_HazCompLen_C::Names' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, Index_LCD_MissionReadout_HazCompLen_C) == 0x000328, "Member 'ULCD_MissionReadout_HazCompLen_C::Index_LCD_MissionReadout_HazCompLen_C' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, TimePassed) == 0x00032C, "Member 'ULCD_MissionReadout_HazCompLen_C::TimePassed' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, MissionComplexity) == 0x000330, "Member 'ULCD_MissionReadout_HazCompLen_C::MissionComplexity' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_HazCompLen_C, MissionLength) == 0x000334, "Member 'ULCD_MissionReadout_HazCompLen_C::MissionLength' has a wrong offset!");

}

