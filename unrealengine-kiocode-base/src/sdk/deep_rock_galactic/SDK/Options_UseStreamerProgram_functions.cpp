#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_UseStreamerProgram

#include "Basic.hpp"

#include "Options_UseStreamerProgram_classes.hpp"
#include "Options_UseStreamerProgram_parameters.hpp"


namespace SDK
{

// Function Options_UseStreamerProgram.Options_UseStreamerProgram_C.ExecuteUbergraph_Options_UseStreamerProgram
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_UseStreamerProgram_C::ExecuteUbergraph_Options_UseStreamerProgram(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_UseStreamerProgram_C", "ExecuteUbergraph_Options_UseStreamerProgram");

	Params::Options_UseStreamerProgram_C_ExecuteUbergraph_Options_UseStreamerProgram Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_UseStreamerProgram.Options_UseStreamerProgram_C.SettingsChanged
// (BlueprintCallable, BlueprintEvent)

void UOptions_UseStreamerProgram_C::SettingsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_UseStreamerProgram_C", "SettingsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_UseStreamerProgram.Options_UseStreamerProgram_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_UseStreamerProgram_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_UseStreamerProgram_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	Params::Options_UseStreamerProgram_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_UseStreamerProgram.Options_UseStreamerProgram_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_UseStreamerProgram_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_UseStreamerProgram_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

