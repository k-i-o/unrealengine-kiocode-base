#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Tab_Saves

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_Tab_Saves.Options_Tab_Saves_C
// 0x0040 (0x02A0 - 0x0260)
class UOptions_Tab_Saves_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMenu_SaveSlots_C*                      Menu_SaveSlots;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_ResetProgress_C*               Options_ResetProgress;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_RestoreSave_C*                 Options_RestoreSave;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        Reset_Progress;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        Restore_Save;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SettingsChanged;                                   // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SettingsChanged__DelegateSignature();
	void ExecuteUbergraph_Options_Tab_Saves(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_Tab_Saves_C">();
	}
	static class UOptions_Tab_Saves_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_Tab_Saves_C>();
	}
};
static_assert(alignof(UOptions_Tab_Saves_C) == 0x000008, "Wrong alignment on UOptions_Tab_Saves_C");
static_assert(sizeof(UOptions_Tab_Saves_C) == 0x0002A0, "Wrong size on UOptions_Tab_Saves_C");
static_assert(offsetof(UOptions_Tab_Saves_C, UberGraphFrame) == 0x000260, "Member 'UOptions_Tab_Saves_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Saves_C, Menu_SaveSlots) == 0x000268, "Member 'UOptions_Tab_Saves_C::Menu_SaveSlots' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Saves_C, Options_ResetProgress) == 0x000270, "Member 'UOptions_Tab_Saves_C::Options_ResetProgress' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Saves_C, Options_RestoreSave) == 0x000278, "Member 'UOptions_Tab_Saves_C::Options_RestoreSave' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Saves_C, Reset_Progress) == 0x000280, "Member 'UOptions_Tab_Saves_C::Reset_Progress' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Saves_C, Restore_Save) == 0x000288, "Member 'UOptions_Tab_Saves_C::Restore_Save' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Saves_C, SettingsChanged) == 0x000290, "Member 'UOptions_Tab_Saves_C::SettingsChanged' has a wrong offset!");

}
