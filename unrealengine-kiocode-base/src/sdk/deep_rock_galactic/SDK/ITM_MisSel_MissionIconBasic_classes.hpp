#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_MissionIconBasic

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C
// 0x0068 (0x02C8 - 0x0260)
class UITM_MisSel_MissionIconBasic_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon_BG;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ICON_Frame;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ICON_MissionType;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ICON_Outline;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               IconSize;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       ToolTip;                                           // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ThickOutline;                                      // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DB6[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Size;                                              // 0x029C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Show_Frame;                                        // 0x02A0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	ENUM_MenuColors                               Frame_Color;                                       // 0x02A1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DB7[0x5];                                     // 0x02A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FObjectiveMissionIcon                  MissionIcon;                                       // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          DataSet;                                           // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ITM_MisSel_MissionIconBasic(int32 EntryPoint);
	void SetData(const struct FObjectiveMissionIcon& Param_MissionIcon);
	void PreConstruct(bool IsDesignTime);
	void SetMission(class UGeneratedMission* InMission);
	void SetSelected(bool InSelected);
	void SetTemplate(class UMissionTemplate* Template, bool UseSimpleIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MisSel_MissionIconBasic_C">();
	}
	static class UITM_MisSel_MissionIconBasic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MisSel_MissionIconBasic_C>();
	}
};
static_assert(alignof(UITM_MisSel_MissionIconBasic_C) == 0x000008, "Wrong alignment on UITM_MisSel_MissionIconBasic_C");
static_assert(sizeof(UITM_MisSel_MissionIconBasic_C) == 0x0002C8, "Wrong size on UITM_MisSel_MissionIconBasic_C");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, UberGraphFrame) == 0x000260, "Member 'UITM_MisSel_MissionIconBasic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, Icon_BG) == 0x000268, "Member 'UITM_MisSel_MissionIconBasic_C::Icon_BG' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, ICON_Frame) == 0x000270, "Member 'UITM_MisSel_MissionIconBasic_C::ICON_Frame' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, ICON_MissionType) == 0x000278, "Member 'UITM_MisSel_MissionIconBasic_C::ICON_MissionType' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, ICON_Outline) == 0x000280, "Member 'UITM_MisSel_MissionIconBasic_C::ICON_Outline' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, IconSize) == 0x000288, "Member 'UITM_MisSel_MissionIconBasic_C::IconSize' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, ToolTip) == 0x000290, "Member 'UITM_MisSel_MissionIconBasic_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, ThickOutline) == 0x000298, "Member 'UITM_MisSel_MissionIconBasic_C::ThickOutline' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, Size) == 0x00029C, "Member 'UITM_MisSel_MissionIconBasic_C::Size' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, Show_Frame) == 0x0002A0, "Member 'UITM_MisSel_MissionIconBasic_C::Show_Frame' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, Frame_Color) == 0x0002A1, "Member 'UITM_MisSel_MissionIconBasic_C::Frame_Color' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, Selected) == 0x0002A2, "Member 'UITM_MisSel_MissionIconBasic_C::Selected' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, MissionIcon) == 0x0002A8, "Member 'UITM_MisSel_MissionIconBasic_C::MissionIcon' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconBasic_C, DataSet) == 0x0002C0, "Member 'UITM_MisSel_MissionIconBasic_C::DataSet' has a wrong offset!");

}
