#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_GameServerName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_GameServerName.Options_GameServerName_C
// 0x0010 (0x0270 - 0x0260)
class UOptions_GameServerName_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_TextInputField_C*                Basic_TextInputField;                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Options_GameServerName(int32 EntryPoint);
	void UpdateName(const class FString& NewValue);
	void BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(const class FText& Text, uint8 CommitMethod);
	void Construct();
	void ShowOptions();
	void UINeedsUpdate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_GameServerName_C">();
	}
	static class UOptions_GameServerName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_GameServerName_C>();
	}
};
static_assert(alignof(UOptions_GameServerName_C) == 0x000008, "Wrong alignment on UOptions_GameServerName_C");
static_assert(sizeof(UOptions_GameServerName_C) == 0x000270, "Wrong size on UOptions_GameServerName_C");
static_assert(offsetof(UOptions_GameServerName_C, UberGraphFrame) == 0x000260, "Member 'UOptions_GameServerName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_GameServerName_C, Basic_TextInputField) == 0x000268, "Member 'UOptions_GameServerName_C::Basic_TextInputField' has a wrong offset!");

}

