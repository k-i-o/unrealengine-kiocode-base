#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_ControlLayout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_ControlLayout.Options_ControlLayout_C
// 0x0020 (0x0280 - 0x0260)
class UOptions_ControlLayout_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Controller;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Keyboard_QWERTY;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Input;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Options_ControlLayout(int32 EntryPoint);
	void OnInputSourceChanged(EFSDInputSource InputSource);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_ControlLayout_C">();
	}
	static class UOptions_ControlLayout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_ControlLayout_C>();
	}
};
static_assert(alignof(UOptions_ControlLayout_C) == 0x000008, "Wrong alignment on UOptions_ControlLayout_C");
static_assert(sizeof(UOptions_ControlLayout_C) == 0x000280, "Wrong size on UOptions_ControlLayout_C");
static_assert(offsetof(UOptions_ControlLayout_C, UberGraphFrame) == 0x000260, "Member 'UOptions_ControlLayout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_ControlLayout_C, Image_Controller) == 0x000268, "Member 'UOptions_ControlLayout_C::Image_Controller' has a wrong offset!");
static_assert(offsetof(UOptions_ControlLayout_C, Image_Keyboard_QWERTY) == 0x000270, "Member 'UOptions_ControlLayout_C::Image_Keyboard_QWERTY' has a wrong offset!");
static_assert(offsetof(UOptions_ControlLayout_C, WidgetSwitcher_Input) == 0x000278, "Member 'UOptions_ControlLayout_C::WidgetSwitcher_Input' has a wrong offset!");

}
