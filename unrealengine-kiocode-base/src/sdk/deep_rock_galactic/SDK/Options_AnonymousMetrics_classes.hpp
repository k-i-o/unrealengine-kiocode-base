#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_AnonymousMetrics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_AnonymousMetrics.Options_AnonymousMetrics_C
// 0x0018 (0x0278 - 0x0260)
class UOptions_AnonymousMetrics_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_CheckBox_C*                      Basic_CheckBox;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PreviousStatus;                                    // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Options_AnonymousMetrics(int32 EntryPoint);
	void OnAnonymousMetricsChanged(bool AllowAnonymousMetrics);
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_AnonymousMetrics_C">();
	}
	static class UOptions_AnonymousMetrics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_AnonymousMetrics_C>();
	}
};
static_assert(alignof(UOptions_AnonymousMetrics_C) == 0x000008, "Wrong alignment on UOptions_AnonymousMetrics_C");
static_assert(sizeof(UOptions_AnonymousMetrics_C) == 0x000278, "Wrong size on UOptions_AnonymousMetrics_C");
static_assert(offsetof(UOptions_AnonymousMetrics_C, UberGraphFrame) == 0x000260, "Member 'UOptions_AnonymousMetrics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_AnonymousMetrics_C, Basic_CheckBox) == 0x000268, "Member 'UOptions_AnonymousMetrics_C::Basic_CheckBox' has a wrong offset!");
static_assert(offsetof(UOptions_AnonymousMetrics_C, PreviousStatus) == 0x000270, "Member 'UOptions_AnonymousMetrics_C::PreviousStatus' has a wrong offset!");

}

