#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Controller_ForceFeedbackScale

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C
// 0x0010 (0x0270 - 0x0260)
class UOptions_Controller_ForceFeedbackScale_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Slider_C*                        Basic_Slider;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Options_Controller_ForceFeedbackScale(int32 EntryPoint);
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
	void ShowOptions();
	void UINeedsUpdate();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_Controller_ForceFeedbackScale_C">();
	}
	static class UOptions_Controller_ForceFeedbackScale_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_Controller_ForceFeedbackScale_C>();
	}
};
static_assert(alignof(UOptions_Controller_ForceFeedbackScale_C) == 0x000008, "Wrong alignment on UOptions_Controller_ForceFeedbackScale_C");
static_assert(sizeof(UOptions_Controller_ForceFeedbackScale_C) == 0x000270, "Wrong size on UOptions_Controller_ForceFeedbackScale_C");
static_assert(offsetof(UOptions_Controller_ForceFeedbackScale_C, UberGraphFrame) == 0x000260, "Member 'UOptions_Controller_ForceFeedbackScale_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_Controller_ForceFeedbackScale_C, Basic_Slider) == 0x000268, "Member 'UOptions_Controller_ForceFeedbackScale_C::Basic_Slider' has a wrong offset!");

}
