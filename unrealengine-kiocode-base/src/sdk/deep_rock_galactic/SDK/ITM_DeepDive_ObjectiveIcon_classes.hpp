#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDive_ObjectiveIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C
// 0x0030 (0x0290 - 0x0260)
class UITM_DeepDive_ObjectiveIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_MissionIcon_C*              Icon_MissionTemplate;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_MissionMainBG;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_MissionSecondaryBG;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_MissionIcon_C*              ITM_MisSel_MissionIcon_C_0;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetData(class UGeneratedMission* InMission);
	void SetObjectiveIcon(class UUI_MaskedImage_C* Icon, class UClass* Objective);
	void SetTemplateIcon(class UITM_MisSel_MissionIcon_C* Icon, class UMissionTemplate* InMissionTemplate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_DeepDive_ObjectiveIcon_C">();
	}
	static class UITM_DeepDive_ObjectiveIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_DeepDive_ObjectiveIcon_C>();
	}
};
static_assert(alignof(UITM_DeepDive_ObjectiveIcon_C) == 0x000008, "Wrong alignment on UITM_DeepDive_ObjectiveIcon_C");
static_assert(sizeof(UITM_DeepDive_ObjectiveIcon_C) == 0x000290, "Wrong size on UITM_DeepDive_ObjectiveIcon_C");
static_assert(offsetof(UITM_DeepDive_ObjectiveIcon_C, UberGraphFrame) == 0x000260, "Member 'UITM_DeepDive_ObjectiveIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_DeepDive_ObjectiveIcon_C, BG) == 0x000268, "Member 'UITM_DeepDive_ObjectiveIcon_C::BG' has a wrong offset!");
static_assert(offsetof(UITM_DeepDive_ObjectiveIcon_C, Icon_MissionTemplate) == 0x000270, "Member 'UITM_DeepDive_ObjectiveIcon_C::Icon_MissionTemplate' has a wrong offset!");
static_assert(offsetof(UITM_DeepDive_ObjectiveIcon_C, IMG_MissionMainBG) == 0x000278, "Member 'UITM_DeepDive_ObjectiveIcon_C::IMG_MissionMainBG' has a wrong offset!");
static_assert(offsetof(UITM_DeepDive_ObjectiveIcon_C, IMG_MissionSecondaryBG) == 0x000280, "Member 'UITM_DeepDive_ObjectiveIcon_C::IMG_MissionSecondaryBG' has a wrong offset!");
static_assert(offsetof(UITM_DeepDive_ObjectiveIcon_C, ITM_MisSel_MissionIcon_C_0) == 0x000288, "Member 'UITM_DeepDive_ObjectiveIcon_C::ITM_MisSel_MissionIcon_C_0' has a wrong offset!");

}

