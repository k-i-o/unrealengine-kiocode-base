#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsMenuItem_Checkbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Checkbox.WBP_OptionsMenuItem_Checkbox_C
// 0x0068 (0x0298 - 0x0230)
class UWBP_OptionsMenuItem_Checkbox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Checkbox_C*                        OptionCBox;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionText;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0248(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             CheckStateChanged;                                 // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             CheckStateChangedBool;                             // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   TextDescription;                                   // 0x0280(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState);
	void CheckStateChangedBool__DelegateSignature(bool bChecked);
	void ExecuteUbergraph_WBP_OptionsMenuItem_Checkbox(int32 EntryPoint);
	void BndEvt__OptionCBox_K2Node_ComponentBoundEvent_1_CheckStateChangedBool__DelegateSignature(bool bChecked);
	void BndEvt__OptionCBox_K2Node_ComponentBoundEvent_0_CheckStateChanged__DelegateSignature(ECheckBoxState CheckedState);
	void PreConstruct(bool IsDesignTime);
	void GetCheckedState(ECheckBoxState* CheckedState);
	void IsChecked(bool* bChecked);
	void SetIsChecked(bool bChecked);
	void SetCheckedState(ECheckBoxState NewCheckedState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionsMenuItem_Checkbox_C">();
	}
	static class UWBP_OptionsMenuItem_Checkbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionsMenuItem_Checkbox_C>();
	}
};
static_assert(alignof(UWBP_OptionsMenuItem_Checkbox_C) == 0x000008, "Wrong alignment on UWBP_OptionsMenuItem_Checkbox_C");
static_assert(sizeof(UWBP_OptionsMenuItem_Checkbox_C) == 0x000298, "Wrong size on UWBP_OptionsMenuItem_Checkbox_C");
static_assert(offsetof(UWBP_OptionsMenuItem_Checkbox_C, UberGraphFrame) == 0x000230, "Member 'UWBP_OptionsMenuItem_Checkbox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Checkbox_C, OptionCBox) == 0x000238, "Member 'UWBP_OptionsMenuItem_Checkbox_C::OptionCBox' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Checkbox_C, OptionText) == 0x000240, "Member 'UWBP_OptionsMenuItem_Checkbox_C::OptionText' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Checkbox_C, Text) == 0x000248, "Member 'UWBP_OptionsMenuItem_Checkbox_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Checkbox_C, CheckStateChanged) == 0x000260, "Member 'UWBP_OptionsMenuItem_Checkbox_C::CheckStateChanged' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Checkbox_C, CheckStateChangedBool) == 0x000270, "Member 'UWBP_OptionsMenuItem_Checkbox_C::CheckStateChangedBool' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Checkbox_C, TextDescription) == 0x000280, "Member 'UWBP_OptionsMenuItem_Checkbox_C::TextDescription' has a wrong offset!");

}
