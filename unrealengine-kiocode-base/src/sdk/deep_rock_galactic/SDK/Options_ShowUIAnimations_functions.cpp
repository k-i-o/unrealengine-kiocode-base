#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_ShowUIAnimations

#include "Basic.hpp"

#include "Options_ShowUIAnimations_classes.hpp"
#include "Options_ShowUIAnimations_parameters.hpp"


namespace SDK
{

// Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.ExecuteUbergraph_Options_ShowUIAnimations
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_ShowUIAnimations_C::ExecuteUbergraph_Options_ShowUIAnimations(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ShowUIAnimations_C", "ExecuteUbergraph_Options_ShowUIAnimations");

	Params::Options_ShowUIAnimations_C_ExecuteUbergraph_Options_ShowUIAnimations Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.OnGameUserSettingsChanged
// (BlueprintCallable, BlueprintEvent)

void UOptions_ShowUIAnimations_C::OnGameUserSettingsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ShowUIAnimations_C", "OnGameUserSettingsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_ShowUIAnimations_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ShowUIAnimations_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	Params::Options_ShowUIAnimations_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_ShowUIAnimations.Options_ShowUIAnimations_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_ShowUIAnimations_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ShowUIAnimations_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
