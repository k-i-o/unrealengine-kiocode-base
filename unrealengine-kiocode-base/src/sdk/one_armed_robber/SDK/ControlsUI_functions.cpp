#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControlsUI

#include "Basic.hpp"

#include "ControlsUI_classes.hpp"
#include "ControlsUI_parameters.hpp"


namespace SDK
{

// Function ControlsUI.ControlsUI_C.ExecuteUbergraph_ControlsUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControlsUI_C::ExecuteUbergraph_ControlsUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsUI_C", "ExecuteUbergraph_ControlsUI");

	Params::ControlsUI_C_ExecuteUbergraph_ControlsUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlsUI.ControlsUI_C.BndEvt__ControlsUI_CloseButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UControlsUI_C::BndEvt__ControlsUI_CloseButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsUI_C", "BndEvt__ControlsUI_CloseButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ControlsUI.ControlsUI_C.BndEvt__ControlsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UControlsUI_C::BndEvt__ControlsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsUI_C", "BndEvt__ControlsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ControlsUI.ControlsUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControlsUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsUI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ControlsUI.ControlsUI_C.UpdateBinding
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                      InputChord                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    Axis_mapping_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping           Input_action                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInputAxisKeyMapping             Input_axis                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UControlsUI_C::UpdateBinding(const struct FInputChord& InputChord, bool Axis_mapping_, const struct FInputActionKeyMapping& Input_action, const struct FInputAxisKeyMapping& Input_axis)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlsUI_C", "UpdateBinding");

	Params::ControlsUI_C_UpdateBinding Parms{};

	Parms.InputChord = std::move(InputChord);
	Parms.Axis_mapping_ = Axis_mapping_;
	Parms.Input_action = std::move(Input_action);
	Parms.Input_axis = std::move(Input_axis);

	UObject::ProcessEvent(Func, &Parms);
}

}

