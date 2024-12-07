#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionStat_PreviewItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C
// 0x0050 (0x02B0 - 0x0260)
class UUI_MissionStat_PreviewItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_MaskedImage_C*                      ClassIcon;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MaskedImage_C*                      ClassIcon_BG;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MaskedImage_C*                      ClassIcon_BG_1;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           StatProgressBarVert;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ValueText;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionStat*                           MissionStat;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterID*                     CharacterID;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         TargetPct;                                         // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimTime;                                          // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetMissionStat(class UMissionStat* Param_MissionStat);
	void ExecuteUbergraph_UI_MissionStat_PreviewItem(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MissionStat_PreviewItem_C">();
	}
	static class UUI_MissionStat_PreviewItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MissionStat_PreviewItem_C>();
	}
};
static_assert(alignof(UUI_MissionStat_PreviewItem_C) == 0x000008, "Wrong alignment on UUI_MissionStat_PreviewItem_C");
static_assert(sizeof(UUI_MissionStat_PreviewItem_C) == 0x0002B0, "Wrong size on UUI_MissionStat_PreviewItem_C");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, UberGraphFrame) == 0x000260, "Member 'UUI_MissionStat_PreviewItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, ClassIcon) == 0x000268, "Member 'UUI_MissionStat_PreviewItem_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, ClassIcon_BG) == 0x000270, "Member 'UUI_MissionStat_PreviewItem_C::ClassIcon_BG' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, ClassIcon_BG_1) == 0x000278, "Member 'UUI_MissionStat_PreviewItem_C::ClassIcon_BG_1' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, StatProgressBarVert) == 0x000280, "Member 'UUI_MissionStat_PreviewItem_C::StatProgressBarVert' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, TitleText) == 0x000288, "Member 'UUI_MissionStat_PreviewItem_C::TitleText' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, ValueText) == 0x000290, "Member 'UUI_MissionStat_PreviewItem_C::ValueText' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, MissionStat) == 0x000298, "Member 'UUI_MissionStat_PreviewItem_C::MissionStat' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, CharacterID) == 0x0002A0, "Member 'UUI_MissionStat_PreviewItem_C::CharacterID' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, TargetPct) == 0x0002A8, "Member 'UUI_MissionStat_PreviewItem_C::TargetPct' has a wrong offset!");
static_assert(offsetof(UUI_MissionStat_PreviewItem_C, AnimTime) == 0x0002AC, "Member 'UUI_MissionStat_PreviewItem_C::AnimTime' has a wrong offset!");

}

