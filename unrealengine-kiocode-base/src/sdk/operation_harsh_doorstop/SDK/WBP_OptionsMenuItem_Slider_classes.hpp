#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsMenuItem_Slider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C
// 0x0130 (0x0360 - 0x0230)
class UWBP_OptionsMenuItem_Slider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTBSlider*                              OptionSlider;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionText;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SliderValueText;                                   // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0250(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   TextDescription;                                   // 0x0268(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                         InitialValue;                                      // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_19A3[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ValueChanged;                                      // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         ValueMin;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         ValueMax;                                          // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         ValueStepSize;                                     // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_19A4[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<float, class FText>                      SpecialValues;                                     // 0x02A8(0x0050)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bStepValuesOnly;                                   // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bMouseUsesStep;                                    // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn)
	bool                                          bSnapToStepValue;                                  // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_19A5[0x1];                                     // 0x02FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextIntegralDigitsMin;                             // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TextIntegralDigitsMax;                             // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TextFractionalDigitsMin;                           // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TextFractionalDigitsMax;                           // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bTextUsesGrouping;                                 // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	ERoundingMode                                 TextRoundingMode;                                  // 0x030D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_19A6[0x2];                                     // 0x030E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TextSuffix;                                        // 0x0310(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   TextPrefix;                                        // 0x0328(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FMargin                                SliderPadding;                                     // 0x0340(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FMargin                                OptionTextPadding;                                 // 0x0350(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_WBP_OptionsMenuItem_Slider(int32 EntryPoint);
	void BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void PreConstruct(bool IsDesignTime);
	void GetValue(float* Value);
	void SetValue(float InValue);
	void IsLocked(bool* bOutLocked);
	void SetLocked(bool bInLocked);
	void SetNormalizedValue(float InNormValue);
	void GetNormalizedValue(float* ValueNormalized);
	void UpdateSliderText(float NewValue);
	void SetValueMin(float NewMin);
	void SetValueMax(float NewMax);
	void SetValueStepSize(float NewStepSize);
	void SetMouseUsesStep(bool bInMouseUsesStep);
	void DoesMouseUseStep(bool* bOutMouseUsesStep);
	void SetValueInternal(float InValue, bool bDirectSet);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionsMenuItem_Slider_C">();
	}
	static class UWBP_OptionsMenuItem_Slider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionsMenuItem_Slider_C>();
	}
};
static_assert(alignof(UWBP_OptionsMenuItem_Slider_C) == 0x000008, "Wrong alignment on UWBP_OptionsMenuItem_Slider_C");
static_assert(sizeof(UWBP_OptionsMenuItem_Slider_C) == 0x000360, "Wrong size on UWBP_OptionsMenuItem_Slider_C");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, UberGraphFrame) == 0x000230, "Member 'UWBP_OptionsMenuItem_Slider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, OptionSlider) == 0x000238, "Member 'UWBP_OptionsMenuItem_Slider_C::OptionSlider' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, OptionText) == 0x000240, "Member 'UWBP_OptionsMenuItem_Slider_C::OptionText' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, SliderValueText) == 0x000248, "Member 'UWBP_OptionsMenuItem_Slider_C::SliderValueText' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, Text) == 0x000250, "Member 'UWBP_OptionsMenuItem_Slider_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, TextDescription) == 0x000268, "Member 'UWBP_OptionsMenuItem_Slider_C::TextDescription' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, InitialValue) == 0x000280, "Member 'UWBP_OptionsMenuItem_Slider_C::InitialValue' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, ValueChanged) == 0x000288, "Member 'UWBP_OptionsMenuItem_Slider_C::ValueChanged' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, ValueMin) == 0x000298, "Member 'UWBP_OptionsMenuItem_Slider_C::ValueMin' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, ValueMax) == 0x00029C, "Member 'UWBP_OptionsMenuItem_Slider_C::ValueMax' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, ValueStepSize) == 0x0002A0, "Member 'UWBP_OptionsMenuItem_Slider_C::ValueStepSize' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, SpecialValues) == 0x0002A8, "Member 'UWBP_OptionsMenuItem_Slider_C::SpecialValues' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, bStepValuesOnly) == 0x0002F8, "Member 'UWBP_OptionsMenuItem_Slider_C::bStepValuesOnly' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, bMouseUsesStep) == 0x0002F9, "Member 'UWBP_OptionsMenuItem_Slider_C::bMouseUsesStep' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, bSnapToStepValue) == 0x0002FA, "Member 'UWBP_OptionsMenuItem_Slider_C::bSnapToStepValue' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, TextIntegralDigitsMin) == 0x0002FC, "Member 'UWBP_OptionsMenuItem_Slider_C::TextIntegralDigitsMin' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, TextIntegralDigitsMax) == 0x000300, "Member 'UWBP_OptionsMenuItem_Slider_C::TextIntegralDigitsMax' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, TextFractionalDigitsMin) == 0x000304, "Member 'UWBP_OptionsMenuItem_Slider_C::TextFractionalDigitsMin' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, TextFractionalDigitsMax) == 0x000308, "Member 'UWBP_OptionsMenuItem_Slider_C::TextFractionalDigitsMax' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, bTextUsesGrouping) == 0x00030C, "Member 'UWBP_OptionsMenuItem_Slider_C::bTextUsesGrouping' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, TextRoundingMode) == 0x00030D, "Member 'UWBP_OptionsMenuItem_Slider_C::TextRoundingMode' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, TextSuffix) == 0x000310, "Member 'UWBP_OptionsMenuItem_Slider_C::TextSuffix' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, TextPrefix) == 0x000328, "Member 'UWBP_OptionsMenuItem_Slider_C::TextPrefix' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, SliderPadding) == 0x000340, "Member 'UWBP_OptionsMenuItem_Slider_C::SliderPadding' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsMenuItem_Slider_C, OptionTextPadding) == 0x000350, "Member 'UWBP_OptionsMenuItem_Slider_C::OptionTextPadding' has a wrong offset!");

}
