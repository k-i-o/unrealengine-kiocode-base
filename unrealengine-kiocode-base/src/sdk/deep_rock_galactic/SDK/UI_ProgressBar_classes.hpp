#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ProgressBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ProgressBar.UI_ProgressBar_C
// 0x01E0 (0x0440 - 0x0260)
class UUI_ProgressBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimEase;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           InternalProgressBar;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Percent;                                           // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationProgress;                                 // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationStart;                                    // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEasingFunc                                   EaseMethod;                                        // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D0E[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendExp;                                          // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Steps;                                             // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProgressBarStyle                      Style;                                             // 0x0290(0x01A0)(Edit, BlueprintVisible)
	struct FLinearColor                           FillColorAndOpacity;                               // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetStyle(const struct FProgressBarStyle& InStyle);
	void GetPercent(float* OutPercent);
	void SetPercent(float InPercent, float InEaseDuration, bool ForceEase);
	void SetAnimationProgress(float Param_AnimationProgress);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ProgressBar(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ProgressBar_C">();
	}
	static class UUI_ProgressBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ProgressBar_C>();
	}
};
static_assert(alignof(UUI_ProgressBar_C) == 0x000008, "Wrong alignment on UUI_ProgressBar_C");
static_assert(sizeof(UUI_ProgressBar_C) == 0x000440, "Wrong size on UUI_ProgressBar_C");
static_assert(offsetof(UUI_ProgressBar_C, UberGraphFrame) == 0x000260, "Member 'UUI_ProgressBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, AnimEase) == 0x000268, "Member 'UUI_ProgressBar_C::AnimEase' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, InternalProgressBar) == 0x000270, "Member 'UUI_ProgressBar_C::InternalProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, Percent) == 0x000278, "Member 'UUI_ProgressBar_C::Percent' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, AnimationProgress) == 0x00027C, "Member 'UUI_ProgressBar_C::AnimationProgress' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, AnimationStart) == 0x000280, "Member 'UUI_ProgressBar_C::AnimationStart' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, EaseMethod) == 0x000284, "Member 'UUI_ProgressBar_C::EaseMethod' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, BlendExp) == 0x000288, "Member 'UUI_ProgressBar_C::BlendExp' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, Steps) == 0x00028C, "Member 'UUI_ProgressBar_C::Steps' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, Style) == 0x000290, "Member 'UUI_ProgressBar_C::Style' has a wrong offset!");
static_assert(offsetof(UUI_ProgressBar_C, FillColorAndOpacity) == 0x000430, "Member 'UUI_ProgressBar_C::FillColorAndOpacity' has a wrong offset!");

}
