#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_PasswordField

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Basic_PasswordField.Basic_PasswordField_C.OnTextChanged__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Basic_PasswordField_C_OnTextChanged__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Basic_PasswordField_C_OnTextChanged__DelegateSignature) == 0x000008, "Wrong alignment on Basic_PasswordField_C_OnTextChanged__DelegateSignature");
static_assert(sizeof(Basic_PasswordField_C_OnTextChanged__DelegateSignature) == 0x000018, "Wrong size on Basic_PasswordField_C_OnTextChanged__DelegateSignature");
static_assert(offsetof(Basic_PasswordField_C_OnTextChanged__DelegateSignature, Text) == 0x000000, "Member 'Basic_PasswordField_C_OnTextChanged__DelegateSignature::Text' has a wrong offset!");

// Function Basic_PasswordField.Basic_PasswordField_C.OnTextCommitted__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Basic_PasswordField_C_OnTextCommitted__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                         CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_PasswordField_C_OnTextCommitted__DelegateSignature) == 0x000008, "Wrong alignment on Basic_PasswordField_C_OnTextCommitted__DelegateSignature");
static_assert(sizeof(Basic_PasswordField_C_OnTextCommitted__DelegateSignature) == 0x000020, "Wrong size on Basic_PasswordField_C_OnTextCommitted__DelegateSignature");
static_assert(offsetof(Basic_PasswordField_C_OnTextCommitted__DelegateSignature, Text) == 0x000000, "Member 'Basic_PasswordField_C_OnTextCommitted__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(Basic_PasswordField_C_OnTextCommitted__DelegateSignature, CommitMethod) == 0x000018, "Member 'Basic_PasswordField_C_OnTextCommitted__DelegateSignature::CommitMethod' has a wrong offset!");

// Function Basic_PasswordField.Basic_PasswordField_C.ExecuteUbergraph_Basic_PasswordField
// 0x0050 (0x0050 - 0x0000)
struct Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EB6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0018(0x0018)(ConstParm)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0030(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField) == 0x000008, "Wrong alignment on Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField");
static_assert(sizeof(Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField) == 0x000050, "Wrong size on Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField");
static_assert(offsetof(Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField, EntryPoint) == 0x000000, "Member 'Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField, CallFunc_MenuColors_OutputColor) == 0x000008, "Member 'Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField, K2Node_ComponentBoundEvent_Text_1) == 0x000018, "Member 'Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField, K2Node_ComponentBoundEvent_Text) == 0x000030, "Member 'Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField, K2Node_ComponentBoundEvent_CommitMethod) == 0x000048, "Member 'Basic_PasswordField_C_ExecuteUbergraph_Basic_PasswordField::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");

// Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function Basic_PasswordField.Basic_PasswordField_C.BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'Basic_PasswordField_C_BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function Basic_PasswordField.Basic_PasswordField_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_PasswordField_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_PasswordField_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_PasswordField_C_PreConstruct");
static_assert(sizeof(Basic_PasswordField_C_PreConstruct) == 0x000001, "Wrong size on Basic_PasswordField_C_PreConstruct");
static_assert(offsetof(Basic_PasswordField_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_PasswordField_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_PasswordField.Basic_PasswordField_C.GetPasswordHint
// 0x0018 (0x0018 - 0x0000)
struct Basic_PasswordField_C_GetPasswordHint final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(Basic_PasswordField_C_GetPasswordHint) == 0x000008, "Wrong alignment on Basic_PasswordField_C_GetPasswordHint");
static_assert(sizeof(Basic_PasswordField_C_GetPasswordHint) == 0x000018, "Wrong size on Basic_PasswordField_C_GetPasswordHint");
static_assert(offsetof(Basic_PasswordField_C_GetPasswordHint, ReturnValue) == 0x000000, "Member 'Basic_PasswordField_C_GetPasswordHint::ReturnValue' has a wrong offset!");

// Function Basic_PasswordField.Basic_PasswordField_C.GetPassword
// 0x0030 (0x0030 - 0x0000)
struct Basic_PasswordField_C_GetPassword final
{
public:
	class FText                                   Password;                                          // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(Basic_PasswordField_C_GetPassword) == 0x000008, "Wrong alignment on Basic_PasswordField_C_GetPassword");
static_assert(sizeof(Basic_PasswordField_C_GetPassword) == 0x000030, "Wrong size on Basic_PasswordField_C_GetPassword");
static_assert(offsetof(Basic_PasswordField_C_GetPassword, Password) == 0x000000, "Member 'Basic_PasswordField_C_GetPassword::Password' has a wrong offset!");
static_assert(offsetof(Basic_PasswordField_C_GetPassword, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'Basic_PasswordField_C_GetPassword::CallFunc_GetText_ReturnValue' has a wrong offset!");

}

