#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_PhotosensitivityMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_PhotosensitivityMode.Options_PhotosensitivityMode_C
// 0x0010 (0x0270 - 0x0260)
class UOptions_PhotosensitivityMode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_CheckBox_C*                      Basic_CheckBox;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Options_PhotosensitivityMode(int32 EntryPoint);
	void OnGameUserSettingsChanged();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_PhotosensitivityMode_C">();
	}
	static class UOptions_PhotosensitivityMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_PhotosensitivityMode_C>();
	}
};
static_assert(alignof(UOptions_PhotosensitivityMode_C) == 0x000008, "Wrong alignment on UOptions_PhotosensitivityMode_C");
static_assert(sizeof(UOptions_PhotosensitivityMode_C) == 0x000270, "Wrong size on UOptions_PhotosensitivityMode_C");
static_assert(offsetof(UOptions_PhotosensitivityMode_C, UberGraphFrame) == 0x000260, "Member 'UOptions_PhotosensitivityMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_PhotosensitivityMode_C, Basic_CheckBox) == 0x000268, "Member 'UOptions_PhotosensitivityMode_C::Basic_CheckBox' has a wrong offset!");

}

