#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_MouseX_Sensitivity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C
// 0x0048 (0x02A8 - 0x0260)
class UOptions_MouseX_Sensitivity_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BaseMid;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Slider_C*                        Basic_Slider;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ManualSensitivityInput;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                               SensitivityInput;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Togglemanualinput;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_ButtonText;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_207;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UseSpinboxInput;                                   // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C05[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentSpinboxValue;                               // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Options_MouseX_Sensitivity(int32 EntryPoint);
	void BndEvt__SensitivityInput_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__ToggleManualinput_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void ShowOptions();
	void UINeedsUpdate();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_MouseX_Sensitivity_C">();
	}
	static class UOptions_MouseX_Sensitivity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_MouseX_Sensitivity_C>();
	}
};
static_assert(alignof(UOptions_MouseX_Sensitivity_C) == 0x000008, "Wrong alignment on UOptions_MouseX_Sensitivity_C");
static_assert(sizeof(UOptions_MouseX_Sensitivity_C) == 0x0002A8, "Wrong size on UOptions_MouseX_Sensitivity_C");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, UberGraphFrame) == 0x000260, "Member 'UOptions_MouseX_Sensitivity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, BaseMid) == 0x000268, "Member 'UOptions_MouseX_Sensitivity_C::BaseMid' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, Basic_Slider) == 0x000270, "Member 'UOptions_MouseX_Sensitivity_C::Basic_Slider' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, ManualSensitivityInput) == 0x000278, "Member 'UOptions_MouseX_Sensitivity_C::ManualSensitivityInput' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, SensitivityInput) == 0x000280, "Member 'UOptions_MouseX_Sensitivity_C::SensitivityInput' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, Togglemanualinput) == 0x000288, "Member 'UOptions_MouseX_Sensitivity_C::Togglemanualinput' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, TXT_ButtonText) == 0x000290, "Member 'UOptions_MouseX_Sensitivity_C::TXT_ButtonText' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, WidgetSwitcher_207) == 0x000298, "Member 'UOptions_MouseX_Sensitivity_C::WidgetSwitcher_207' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, UseSpinboxInput) == 0x0002A0, "Member 'UOptions_MouseX_Sensitivity_C::UseSpinboxInput' has a wrong offset!");
static_assert(offsetof(UOptions_MouseX_Sensitivity_C, CurrentSpinboxValue) == 0x0002A4, "Member 'UOptions_MouseX_Sensitivity_C::CurrentSpinboxValue' has a wrong offset!");

}

