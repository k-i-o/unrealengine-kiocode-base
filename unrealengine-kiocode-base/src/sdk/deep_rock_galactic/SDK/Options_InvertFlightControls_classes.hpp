#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_InvertFlightControls

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_InvertFlightControls.Options_InvertFlightControls_C
// 0x0018 (0x0278 - 0x0260)
class UOptions_InvertFlightControls_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_CheckBox_C*                      Basic_CheckBox;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        Basic_Option;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Options_InvertFlightControls(int32 EntryPoint);
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_InvertFlightControls_C">();
	}
	static class UOptions_InvertFlightControls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_InvertFlightControls_C>();
	}
};
static_assert(alignof(UOptions_InvertFlightControls_C) == 0x000008, "Wrong alignment on UOptions_InvertFlightControls_C");
static_assert(sizeof(UOptions_InvertFlightControls_C) == 0x000278, "Wrong size on UOptions_InvertFlightControls_C");
static_assert(offsetof(UOptions_InvertFlightControls_C, UberGraphFrame) == 0x000260, "Member 'UOptions_InvertFlightControls_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_InvertFlightControls_C, Basic_CheckBox) == 0x000268, "Member 'UOptions_InvertFlightControls_C::Basic_CheckBox' has a wrong offset!");
static_assert(offsetof(UOptions_InvertFlightControls_C, Basic_Option) == 0x000270, "Member 'UOptions_InvertFlightControls_C::Basic_Option' has a wrong offset!");

}
