#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Setting_ShowSandboxLabel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Setting_ShowSandboxLabel.Setting_ShowSandboxLabel_C
// 0x0018 (0x0278 - 0x0260)
class USetting_ShowSandboxLabel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_CheckBox_C*                      Basic_CheckBox;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         TextWidth;                                         // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Setting_ShowSandboxLabel(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Setting_ShowSandboxLabel_C">();
	}
	static class USetting_ShowSandboxLabel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USetting_ShowSandboxLabel_C>();
	}
};
static_assert(alignof(USetting_ShowSandboxLabel_C) == 0x000008, "Wrong alignment on USetting_ShowSandboxLabel_C");
static_assert(sizeof(USetting_ShowSandboxLabel_C) == 0x000278, "Wrong size on USetting_ShowSandboxLabel_C");
static_assert(offsetof(USetting_ShowSandboxLabel_C, UberGraphFrame) == 0x000260, "Member 'USetting_ShowSandboxLabel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USetting_ShowSandboxLabel_C, Basic_CheckBox) == 0x000268, "Member 'USetting_ShowSandboxLabel_C::Basic_CheckBox' has a wrong offset!");
static_assert(offsetof(USetting_ShowSandboxLabel_C, TextWidth) == 0x000270, "Member 'USetting_ShowSandboxLabel_C::TextWidth' has a wrong offset!");

}

