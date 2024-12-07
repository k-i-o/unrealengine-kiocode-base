#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_FullScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_FullScreen.Options_FullScreen_C
// 0x0020 (0x0280 - 0x0260)
class UOptions_FullScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_OptionSwitcher_C*                Basic_OptionSwitcher;                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_CheckBox_C*                      LockMouseCheckbox;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          FromWindowToFullscreen;                            // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Options_FullScreen(int32 EntryPoint);
	void BndEvt__LockMouseCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature(const class FText& Value, int32 Param_Index);
	void UINeedsUpdate();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_FullScreen_C">();
	}
	static class UOptions_FullScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_FullScreen_C>();
	}
};
static_assert(alignof(UOptions_FullScreen_C) == 0x000008, "Wrong alignment on UOptions_FullScreen_C");
static_assert(sizeof(UOptions_FullScreen_C) == 0x000280, "Wrong size on UOptions_FullScreen_C");
static_assert(offsetof(UOptions_FullScreen_C, UberGraphFrame) == 0x000260, "Member 'UOptions_FullScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_FullScreen_C, Basic_OptionSwitcher) == 0x000268, "Member 'UOptions_FullScreen_C::Basic_OptionSwitcher' has a wrong offset!");
static_assert(offsetof(UOptions_FullScreen_C, LockMouseCheckbox) == 0x000270, "Member 'UOptions_FullScreen_C::LockMouseCheckbox' has a wrong offset!");
static_assert(offsetof(UOptions_FullScreen_C, FromWindowToFullscreen) == 0x000278, "Member 'UOptions_FullScreen_C::FromWindowToFullscreen' has a wrong offset!");

}

