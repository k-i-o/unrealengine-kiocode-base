#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadLevelWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadLevelWidget.LoadLevelWidget_C
// 0x0038 (0x02B8 - 0x0280)
class ULoadLevelWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableText*                          InputLevel;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LoadDefaultButton;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LoadLastLevelButton;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LoadLevelButton;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 LastLevelName;                                     // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__LoadLevelWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LoadLevelWidget_LoadDefaultButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LoadLevelWidget_LoadLastLevelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_LoadLevelWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadLevelWidget_C">();
	}
	static class ULoadLevelWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadLevelWidget_C>();
	}
};
static_assert(alignof(ULoadLevelWidget_C) == 0x000008, "Wrong alignment on ULoadLevelWidget_C");
static_assert(sizeof(ULoadLevelWidget_C) == 0x0002B8, "Wrong size on ULoadLevelWidget_C");
static_assert(offsetof(ULoadLevelWidget_C, UberGraphFrame) == 0x000280, "Member 'ULoadLevelWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadLevelWidget_C, InputLevel) == 0x000288, "Member 'ULoadLevelWidget_C::InputLevel' has a wrong offset!");
static_assert(offsetof(ULoadLevelWidget_C, LoadDefaultButton) == 0x000290, "Member 'ULoadLevelWidget_C::LoadDefaultButton' has a wrong offset!");
static_assert(offsetof(ULoadLevelWidget_C, LoadLastLevelButton) == 0x000298, "Member 'ULoadLevelWidget_C::LoadLastLevelButton' has a wrong offset!");
static_assert(offsetof(ULoadLevelWidget_C, LoadLevelButton) == 0x0002A0, "Member 'ULoadLevelWidget_C::LoadLevelButton' has a wrong offset!");
static_assert(offsetof(ULoadLevelWidget_C, LastLevelName) == 0x0002A8, "Member 'ULoadLevelWidget_C::LastLevelName' has a wrong offset!");

}
