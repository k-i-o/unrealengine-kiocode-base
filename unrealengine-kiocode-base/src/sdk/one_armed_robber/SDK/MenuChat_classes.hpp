#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuChat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MenuChat.MenuChat_C
// 0x0028 (0x0288 - 0x0260)
class UMenuChat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ChatMessages;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_269;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URobberGI_C*                            As_Robber_GI;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MenuChat(int32 EntryPoint);
	void UpdateChats();
	void BndEvt__MenuChat_EditableTextBox_269_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void NewChat();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuChat_C">();
	}
	static class UMenuChat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuChat_C>();
	}
};
static_assert(alignof(UMenuChat_C) == 0x000008, "Wrong alignment on UMenuChat_C");
static_assert(sizeof(UMenuChat_C) == 0x000288, "Wrong size on UMenuChat_C");
static_assert(offsetof(UMenuChat_C, UberGraphFrame) == 0x000260, "Member 'UMenuChat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMenuChat_C, ChatMessages) == 0x000268, "Member 'UMenuChat_C::ChatMessages' has a wrong offset!");
static_assert(offsetof(UMenuChat_C, EditableTextBox_269) == 0x000270, "Member 'UMenuChat_C::EditableTextBox_269' has a wrong offset!");
static_assert(offsetof(UMenuChat_C, As_Robber_GI) == 0x000278, "Member 'UMenuChat_C::As_Robber_GI' has a wrong offset!");
static_assert(offsetof(UMenuChat_C, As_Robber_Controller) == 0x000280, "Member 'UMenuChat_C::As_Robber_Controller' has a wrong offset!");

}
