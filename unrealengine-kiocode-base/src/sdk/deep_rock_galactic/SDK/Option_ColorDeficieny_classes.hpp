#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Option_ColorDeficieny

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Option_ColorDeficieny.Option_ColorDeficieny_C
// 0x0050 (0x02B0 - 0x0260)
class UOption_ColorDeficieny_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ImageIntro;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Option_C*                        Basic_Option;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_DeficiencyOutline;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ColorDeficiency_Collapsed;                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_ColorDeficiency;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Severity_Box;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Slider_C*                        Severity_Slider;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Severity_Text;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_OptionSwitcher_C*                Type_Selector;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Option_ColorDeficieny(int32 EntryPoint);
	void BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_3_OnHoveringEnd__DelegateSignature();
	void BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringBegin__DelegateSignature();
	void BndEvt__Option_ColorDeficieny_Severity_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent);
	void BndEvt__Option_ColorDeficieny_Type_Selector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32 Param_Index);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void ApplyAndSave();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Option_ColorDeficieny_C">();
	}
	static class UOption_ColorDeficieny_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOption_ColorDeficieny_C>();
	}
};
static_assert(alignof(UOption_ColorDeficieny_C) == 0x000008, "Wrong alignment on UOption_ColorDeficieny_C");
static_assert(sizeof(UOption_ColorDeficieny_C) == 0x0002B0, "Wrong size on UOption_ColorDeficieny_C");
static_assert(offsetof(UOption_ColorDeficieny_C, UberGraphFrame) == 0x000260, "Member 'UOption_ColorDeficieny_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, ImageIntro) == 0x000268, "Member 'UOption_ColorDeficieny_C::ImageIntro' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, Basic_Option) == 0x000270, "Member 'UOption_ColorDeficieny_C::Basic_Option' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, Border_DeficiencyOutline) == 0x000278, "Member 'UOption_ColorDeficieny_C::Border_DeficiencyOutline' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, Image_ColorDeficiency_Collapsed) == 0x000280, "Member 'UOption_ColorDeficieny_C::Image_ColorDeficiency_Collapsed' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, ScaleBox_ColorDeficiency) == 0x000288, "Member 'UOption_ColorDeficieny_C::ScaleBox_ColorDeficiency' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, Severity_Box) == 0x000290, "Member 'UOption_ColorDeficieny_C::Severity_Box' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, Severity_Slider) == 0x000298, "Member 'UOption_ColorDeficieny_C::Severity_Slider' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, Severity_Text) == 0x0002A0, "Member 'UOption_ColorDeficieny_C::Severity_Text' has a wrong offset!");
static_assert(offsetof(UOption_ColorDeficieny_C, Type_Selector) == 0x0002A8, "Member 'UOption_ColorDeficieny_C::Type_Selector' has a wrong offset!");

}
