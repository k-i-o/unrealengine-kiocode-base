#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_HUD_Element

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_HUD_Element.Options_HUD_Element_C
// 0x0038 (0x0298 - 0x0260)
class UOptions_HUD_Element_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Option_C*                        Basic_Option;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_OptionSwitcher_C*                Basic_OptionSwitcher;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DotsBox;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<EHUDVisibilityMode>                    AvailableModes;                                    // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UHUDVisibilityGroup*                    VisibilityGroup;                                   // 0x0290(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Options_HUD_Element(int32 EntryPoint);
	void OnModeChanged_Event(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
	void Construct();
	void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature();
	void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32 Param_Index);
	void PreConstruct(bool IsDesignTime);
	void SetupOptions();
	void UpdateDots();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_HUD_Element_C">();
	}
	static class UOptions_HUD_Element_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_HUD_Element_C>();
	}
};
static_assert(alignof(UOptions_HUD_Element_C) == 0x000008, "Wrong alignment on UOptions_HUD_Element_C");
static_assert(sizeof(UOptions_HUD_Element_C) == 0x000298, "Wrong size on UOptions_HUD_Element_C");
static_assert(offsetof(UOptions_HUD_Element_C, UberGraphFrame) == 0x000260, "Member 'UOptions_HUD_Element_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_HUD_Element_C, Basic_Option) == 0x000268, "Member 'UOptions_HUD_Element_C::Basic_Option' has a wrong offset!");
static_assert(offsetof(UOptions_HUD_Element_C, Basic_OptionSwitcher) == 0x000270, "Member 'UOptions_HUD_Element_C::Basic_OptionSwitcher' has a wrong offset!");
static_assert(offsetof(UOptions_HUD_Element_C, DotsBox) == 0x000278, "Member 'UOptions_HUD_Element_C::DotsBox' has a wrong offset!");
static_assert(offsetof(UOptions_HUD_Element_C, AvailableModes) == 0x000280, "Member 'UOptions_HUD_Element_C::AvailableModes' has a wrong offset!");
static_assert(offsetof(UOptions_HUD_Element_C, VisibilityGroup) == 0x000290, "Member 'UOptions_HUD_Element_C::VisibilityGroup' has a wrong offset!");

}
