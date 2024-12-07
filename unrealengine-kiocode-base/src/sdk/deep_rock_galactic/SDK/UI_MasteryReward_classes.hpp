#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MasteryReward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MasteryReward.UI_MasteryReward_C
// 0x0050 (0x02B0 - 0x0260)
class UUI_MasteryReward_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ICON_GearFiller;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ICON_GearOutline;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SkinIcon_C*                        ITM_SkinIcon;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Weapon_Icon;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Bonus;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Description;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUnlockReward*                          Reward;                                            // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUpgradableGearComponent*               ItemGearComponent;                                 // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_MasteryReward(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MasteryReward_C">();
	}
	static class UUI_MasteryReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MasteryReward_C>();
	}
};
static_assert(alignof(UUI_MasteryReward_C) == 0x000008, "Wrong alignment on UUI_MasteryReward_C");
static_assert(sizeof(UUI_MasteryReward_C) == 0x0002B0, "Wrong size on UUI_MasteryReward_C");
static_assert(offsetof(UUI_MasteryReward_C, UberGraphFrame) == 0x000260, "Member 'UUI_MasteryReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, ICON_GearFiller) == 0x000268, "Member 'UUI_MasteryReward_C::ICON_GearFiller' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, ICON_GearOutline) == 0x000270, "Member 'UUI_MasteryReward_C::ICON_GearOutline' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, ITM_SkinIcon) == 0x000278, "Member 'UUI_MasteryReward_C::ITM_SkinIcon' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, Overlay_0) == 0x000280, "Member 'UUI_MasteryReward_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, SizeBox_Weapon_Icon) == 0x000288, "Member 'UUI_MasteryReward_C::SizeBox_Weapon_Icon' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, TextBlock_Bonus) == 0x000290, "Member 'UUI_MasteryReward_C::TextBlock_Bonus' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, TextBlock_Description) == 0x000298, "Member 'UUI_MasteryReward_C::TextBlock_Description' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, Reward) == 0x0002A0, "Member 'UUI_MasteryReward_C::Reward' has a wrong offset!");
static_assert(offsetof(UUI_MasteryReward_C, ItemGearComponent) == 0x0002A8, "Member 'UUI_MasteryReward_C::ItemGearComponent' has a wrong offset!");

}

