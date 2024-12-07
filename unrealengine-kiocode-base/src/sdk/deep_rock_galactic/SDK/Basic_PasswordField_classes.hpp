#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_PasswordField

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_PasswordField.Basic_PasswordField_C
// 0x0050 (0x02B0 - 0x0260)
class UBasic_PasswordField_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       ServerPassword;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ServerPasswordBorder;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HintText;                                          // 0x0278(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnTextChanged;                                     // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTextCommitted;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTextChanged__DelegateSignature(const class FText& Text);
	void OnTextCommitted__DelegateSignature(const class FText& Text, uint8 CommitMethod);
	void ExecuteUbergraph_Basic_PasswordField(int32 EntryPoint);
	void BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void PreConstruct(bool IsDesignTime);
	class FText GetPasswordHint();
	void GetPassword(class FText* Password);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_PasswordField_C">();
	}
	static class UBasic_PasswordField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_PasswordField_C>();
	}
};
static_assert(alignof(UBasic_PasswordField_C) == 0x000008, "Wrong alignment on UBasic_PasswordField_C");
static_assert(sizeof(UBasic_PasswordField_C) == 0x0002B0, "Wrong size on UBasic_PasswordField_C");
static_assert(offsetof(UBasic_PasswordField_C, UberGraphFrame) == 0x000260, "Member 'UBasic_PasswordField_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_PasswordField_C, ServerPassword) == 0x000268, "Member 'UBasic_PasswordField_C::ServerPassword' has a wrong offset!");
static_assert(offsetof(UBasic_PasswordField_C, ServerPasswordBorder) == 0x000270, "Member 'UBasic_PasswordField_C::ServerPasswordBorder' has a wrong offset!");
static_assert(offsetof(UBasic_PasswordField_C, HintText) == 0x000278, "Member 'UBasic_PasswordField_C::HintText' has a wrong offset!");
static_assert(offsetof(UBasic_PasswordField_C, OnTextChanged) == 0x000290, "Member 'UBasic_PasswordField_C::OnTextChanged' has a wrong offset!");
static_assert(offsetof(UBasic_PasswordField_C, OnTextCommitted) == 0x0002A0, "Member 'UBasic_PasswordField_C::OnTextCommitted' has a wrong offset!");

}

