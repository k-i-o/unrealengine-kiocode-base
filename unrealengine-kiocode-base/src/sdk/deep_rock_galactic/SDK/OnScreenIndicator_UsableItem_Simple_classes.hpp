#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnScreenIndicator_UsableItem_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C
// 0x0038 (0x0298 - 0x0260)
class UOnScreenIndicator_UsableItem_Simple_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_HUD_BracketWindowSmall_C*        BasicWindow_BracketSmall;                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AdvancedLabel_C*                    KeyLabel;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_1;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerCharacter*                       Character;                                         // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  Item;                                              // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUsableAggregator*                      Aggregator;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple(int32 EntryPoint);
	void VisChanged(bool Param_IsVisible);
	void PreConstruct(bool IsDesignTime);
	void OnItemEquipped(class AItem* Param_Item);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnScreenIndicator_UsableItem_Simple_C">();
	}
	static class UOnScreenIndicator_UsableItem_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnScreenIndicator_UsableItem_Simple_C>();
	}
};
static_assert(alignof(UOnScreenIndicator_UsableItem_Simple_C) == 0x000008, "Wrong alignment on UOnScreenIndicator_UsableItem_Simple_C");
static_assert(sizeof(UOnScreenIndicator_UsableItem_Simple_C) == 0x000298, "Wrong size on UOnScreenIndicator_UsableItem_Simple_C");
static_assert(offsetof(UOnScreenIndicator_UsableItem_Simple_C, UberGraphFrame) == 0x000260, "Member 'UOnScreenIndicator_UsableItem_Simple_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_UsableItem_Simple_C, BasicWindow_BracketSmall) == 0x000268, "Member 'UOnScreenIndicator_UsableItem_Simple_C::BasicWindow_BracketSmall' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_UsableItem_Simple_C, KeyLabel) == 0x000270, "Member 'UOnScreenIndicator_UsableItem_Simple_C::KeyLabel' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_UsableItem_Simple_C, ProgressBar_1) == 0x000278, "Member 'UOnScreenIndicator_UsableItem_Simple_C::ProgressBar_1' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_UsableItem_Simple_C, Character) == 0x000280, "Member 'UOnScreenIndicator_UsableItem_Simple_C::Character' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_UsableItem_Simple_C, Item) == 0x000288, "Member 'UOnScreenIndicator_UsableItem_Simple_C::Item' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_UsableItem_Simple_C, Aggregator) == 0x000290, "Member 'UOnScreenIndicator_UsableItem_Simple_C::Aggregator' has a wrong offset!");

}
