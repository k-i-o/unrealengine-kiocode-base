#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_MissionBar_Normal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WND_MissionBar_Normal.WND_MissionBar_Normal_C
// 0x0118 (0x0378 - 0x0260)
class UWND_MissionBar_Normal_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ANIM_AssignmentIcon_Throb;                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Intro;                                        // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AssignmentIcon;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AssignmentIconGlow;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               AssignmentIconHolder;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar_C_0;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar_C_1;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ResourceIcon_C*                  Basic_ResourceIcon;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ResourceIcon_C*                  Basic_ResourceIcon_0;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_0;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_1;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_2;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_3;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BottomBorder;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_HazardLevelName;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_MissionName;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_MissionType;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_PlanetaryRegionName;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_DotMarker_MissionLength_C*  ITM_MisSel_DotMarker_MissionLength;                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_MissionIconBasic_C*         ITM_MisSel_MissionIconBasic;                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MissionBar_Warning_C*              ITM_MissionBar_MutatorDescription;                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MissionBar_Warning_C*              ITM_MissionBar_Warning;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MtopBG;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MissionBar_Objective_C*            PrimaryObjective;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MissionBar_Objective_C*            SecondaryObjective;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_CampaignWarning;                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TopBorder;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopSlantL;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopSlantR;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HazPlus_Row_C*                      UI_HazPlusRow;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_Mutators;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_Warnings;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WND_MissionBar_Normal(int32 EntryPoint);
	void OnDifficultyChanged_Event_0(const struct FGameDifficulty& Setting);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetGeneratedMission(class UGeneratedMission* InMission);
	void CampaignChecks(class UGeneratedMission* Mission, bool* CampaignMission, bool* AreRestrictionsMet);
	void SetDifficultyData(struct FGameDifficulty& Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WND_MissionBar_Normal_C">();
	}
	static class UWND_MissionBar_Normal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWND_MissionBar_Normal_C>();
	}
};
static_assert(alignof(UWND_MissionBar_Normal_C) == 0x000008, "Wrong alignment on UWND_MissionBar_Normal_C");
static_assert(sizeof(UWND_MissionBar_Normal_C) == 0x000378, "Wrong size on UWND_MissionBar_Normal_C");
static_assert(offsetof(UWND_MissionBar_Normal_C, UberGraphFrame) == 0x000260, "Member 'UWND_MissionBar_Normal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, ANIM_AssignmentIcon_Throb) == 0x000268, "Member 'UWND_MissionBar_Normal_C::ANIM_AssignmentIcon_Throb' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, ANIM_Intro) == 0x000270, "Member 'UWND_MissionBar_Normal_C::ANIM_Intro' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, AssignmentIcon) == 0x000278, "Member 'UWND_MissionBar_Normal_C::AssignmentIcon' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, AssignmentIconGlow) == 0x000280, "Member 'UWND_MissionBar_Normal_C::AssignmentIconGlow' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, AssignmentIconHolder) == 0x000288, "Member 'UWND_MissionBar_Normal_C::AssignmentIconHolder' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Basic_Menu_ColorBar) == 0x000290, "Member 'UWND_MissionBar_Normal_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Basic_Menu_ColorBar_C_0) == 0x000298, "Member 'UWND_MissionBar_Normal_C::Basic_Menu_ColorBar_C_0' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Basic_Menu_ColorBar_C_1) == 0x0002A0, "Member 'UWND_MissionBar_Normal_C::Basic_Menu_ColorBar_C_1' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Basic_ResourceIcon) == 0x0002A8, "Member 'UWND_MissionBar_Normal_C::Basic_ResourceIcon' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Basic_ResourceIcon_0) == 0x0002B0, "Member 'UWND_MissionBar_Normal_C::Basic_ResourceIcon_0' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Border_0) == 0x0002B8, "Member 'UWND_MissionBar_Normal_C::Border_0' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Border_1) == 0x0002C0, "Member 'UWND_MissionBar_Normal_C::Border_1' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Border_2) == 0x0002C8, "Member 'UWND_MissionBar_Normal_C::Border_2' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, Border_3) == 0x0002D0, "Member 'UWND_MissionBar_Normal_C::Border_3' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, BottomBorder) == 0x0002D8, "Member 'UWND_MissionBar_Normal_C::BottomBorder' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, DATA_HazardLevelName) == 0x0002E0, "Member 'UWND_MissionBar_Normal_C::DATA_HazardLevelName' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, DATA_MissionName) == 0x0002E8, "Member 'UWND_MissionBar_Normal_C::DATA_MissionName' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, DATA_MissionType) == 0x0002F0, "Member 'UWND_MissionBar_Normal_C::DATA_MissionType' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, DATA_PlanetaryRegionName) == 0x0002F8, "Member 'UWND_MissionBar_Normal_C::DATA_PlanetaryRegionName' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, ITM_MisSel_DotMarker_CaveDifficulty) == 0x000300, "Member 'UWND_MissionBar_Normal_C::ITM_MisSel_DotMarker_CaveDifficulty' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, ITM_MisSel_DotMarker_MissionLength) == 0x000308, "Member 'UWND_MissionBar_Normal_C::ITM_MisSel_DotMarker_MissionLength' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, ITM_MisSel_MissionIconBasic) == 0x000310, "Member 'UWND_MissionBar_Normal_C::ITM_MisSel_MissionIconBasic' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, ITM_MissionBar_MutatorDescription) == 0x000318, "Member 'UWND_MissionBar_Normal_C::ITM_MissionBar_MutatorDescription' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, ITM_MissionBar_Warning) == 0x000320, "Member 'UWND_MissionBar_Normal_C::ITM_MissionBar_Warning' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, MtopBG) == 0x000328, "Member 'UWND_MissionBar_Normal_C::MtopBG' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, PrimaryObjective) == 0x000330, "Member 'UWND_MissionBar_Normal_C::PrimaryObjective' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, SecondaryObjective) == 0x000338, "Member 'UWND_MissionBar_Normal_C::SecondaryObjective' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, TextBlock_CampaignWarning) == 0x000340, "Member 'UWND_MissionBar_Normal_C::TextBlock_CampaignWarning' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, TopBorder) == 0x000348, "Member 'UWND_MissionBar_Normal_C::TopBorder' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, TopSlantL) == 0x000350, "Member 'UWND_MissionBar_Normal_C::TopSlantL' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, TopSlantR) == 0x000358, "Member 'UWND_MissionBar_Normal_C::TopSlantR' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, UI_HazPlusRow) == 0x000360, "Member 'UWND_MissionBar_Normal_C::UI_HazPlusRow' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, VBox_Mutators) == 0x000368, "Member 'UWND_MissionBar_Normal_C::VBox_Mutators' has a wrong offset!");
static_assert(offsetof(UWND_MissionBar_Normal_C, VBox_Warnings) == 0x000370, "Member 'UWND_MissionBar_Normal_C::VBox_Warnings' has a wrong offset!");

}
