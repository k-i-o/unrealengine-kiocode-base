#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LCD_MissionReadout_Data

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LCD_MissionReadout_Data.LCD_MissionReadout_Data_C
// 0x0048 (0x02A8 - 0x0260)
class ULCD_MissionReadout_Data_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             DATA_MissionName;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_MissionType;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Anomalies;                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Warnings;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisDesMutator_C*                   ITM_MisDesMutator;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisDesMutator_C*                   ITM_MisDesMutator_1;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_MissionIconBasic_C*         ITM_MisSel_MissionIconBasic;                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MissionReadOut_Base_C*              UI_MissionReadOut_Base;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetGeneratedMission(class UGeneratedMission* In_Mission);
	void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_LCD_MissionReadout_Data(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LCD_MissionReadout_Data_C">();
	}
	static class ULCD_MissionReadout_Data_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULCD_MissionReadout_Data_C>();
	}
};
static_assert(alignof(ULCD_MissionReadout_Data_C) == 0x000008, "Wrong alignment on ULCD_MissionReadout_Data_C");
static_assert(sizeof(ULCD_MissionReadout_Data_C) == 0x0002A8, "Wrong size on ULCD_MissionReadout_Data_C");
static_assert(offsetof(ULCD_MissionReadout_Data_C, UberGraphFrame) == 0x000260, "Member 'ULCD_MissionReadout_Data_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_Data_C, DATA_MissionName) == 0x000268, "Member 'ULCD_MissionReadout_Data_C::DATA_MissionName' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_Data_C, DATA_MissionType) == 0x000270, "Member 'ULCD_MissionReadout_Data_C::DATA_MissionType' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_Data_C, HorizontalBox_Anomalies) == 0x000278, "Member 'ULCD_MissionReadout_Data_C::HorizontalBox_Anomalies' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_Data_C, HorizontalBox_Warnings) == 0x000280, "Member 'ULCD_MissionReadout_Data_C::HorizontalBox_Warnings' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_Data_C, ITM_MisDesMutator) == 0x000288, "Member 'ULCD_MissionReadout_Data_C::ITM_MisDesMutator' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_Data_C, ITM_MisDesMutator_1) == 0x000290, "Member 'ULCD_MissionReadout_Data_C::ITM_MisDesMutator_1' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_Data_C, ITM_MisSel_MissionIconBasic) == 0x000298, "Member 'ULCD_MissionReadout_Data_C::ITM_MisSel_MissionIconBasic' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_Data_C, UI_MissionReadOut_Base) == 0x0002A0, "Member 'ULCD_MissionReadout_Data_C::UI_MissionReadOut_Base' has a wrong offset!");

}

