#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_CheckBox

#include "Basic.hpp"

#include "Basic_CheckBox_classes.hpp"
#include "Basic_CheckBox_parameters.hpp"


namespace SDK
{

// Function Basic_CheckBox.Basic_CheckBox_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsChecked                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_CheckBox_C::OnCheckStateChanged__DelegateSignature(bool Param_IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "OnCheckStateChanged__DelegateSignature");

	Params::Basic_CheckBox_C_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.Param_IsChecked = Param_IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.ExecuteUbergraph_Basic_CheckBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_CheckBox_C::ExecuteUbergraph_Basic_CheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "ExecuteUbergraph_Basic_CheckBox");

	Params::Basic_CheckBox_C_ExecuteUbergraph_Basic_CheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_CheckBox_C::OnClicked(bool InChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "OnClicked");

	Params::Basic_CheckBox_C_OnClicked Parms{};

	Parms.InChecked = InChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.ClickButton
// (BlueprintCallable, BlueprintEvent)

void UBasic_CheckBox_C::ClickButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "ClickButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Basic_CheckBox.Basic_CheckBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_CheckBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "PreConstruct");

	Params::Basic_CheckBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_CheckBox_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_CheckBox_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_CheckBox_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Basic_CheckBox.Basic_CheckBox_C.GetIsChecked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBasic_CheckBox_C::GetIsChecked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "GetIsChecked");

	Params::Basic_CheckBox_C_GetIsChecked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Basic_CheckBox.Basic_CheckBox_C.SetIsChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsChecked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_CheckBox_C::SetIsChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "SetIsChecked");

	Params::Basic_CheckBox_C_SetIsChecked Parms{};

	Parms.InIsChecked = InIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InUpperCase                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_CheckBox_C::SetText(const class FText& InText, bool InUpperCase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "SetText");

	Params::Basic_CheckBox_C_SetText Parms{};

	Parms.InText = std::move(InText);
	Parms.InUpperCase = InUpperCase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.GetUpperCased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_UpperCase                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_CheckBox_C::GetUpperCased(bool* Param_UpperCase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "GetUpperCased");

	Params::Basic_CheckBox_C_GetUpperCased Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_UpperCase != nullptr)
		*Param_UpperCase = Parms.Param_UpperCase;
}


// Function Basic_CheckBox.Basic_CheckBox_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECheckBoxState                          InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_CheckBox_C::SetState(ECheckBoxState InState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "SetState");

	Params::Basic_CheckBox_C_SetState Parms{};

	Parms.InState = InState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.GetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECheckBoxState                          Param_State                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_CheckBox_C::GetState(ECheckBoxState* Param_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "GetState");

	Params::Basic_CheckBox_C_GetState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_State != nullptr)
		*Param_State = Parms.Param_State;
}


// Function Basic_CheckBox.Basic_CheckBox_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_CheckBox_C::SetSize(float InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "SetSize");

	Params::Basic_CheckBox_C_SetSize Parms{};

	Parms.InSize = InSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_CheckBox_C::SetHovered(bool InHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "SetHovered");

	Params::Basic_CheckBox_C_SetHovered Parms{};

	Parms.InHovered = InHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_CheckBox.Basic_CheckBox_C.SetTextWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InWidthOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_CheckBox_C::SetTextWidth(float InWidthOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_CheckBox_C", "SetTextWidth");

	Params::Basic_CheckBox_C_SetTextWidth Parms{};

	Parms.InWidthOverride = InWidthOverride;

	UObject::ProcessEvent(Func, &Parms);
}

}
