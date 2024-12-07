#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_DisableMasterEQ

#include "Basic.hpp"

#include "Options_DisableMasterEQ_classes.hpp"
#include "Options_DisableMasterEQ_parameters.hpp"


namespace SDK
{

// Function Options_DisableMasterEQ.Options_DisableMasterEQ_C.ExecuteUbergraph_Options_DisableMasterEQ
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_DisableMasterEQ_C::ExecuteUbergraph_Options_DisableMasterEQ(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_DisableMasterEQ_C", "ExecuteUbergraph_Options_DisableMasterEQ");

	Params::Options_DisableMasterEQ_C_ExecuteUbergraph_Options_DisableMasterEQ Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_DisableMasterEQ.Options_DisableMasterEQ_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_DisableMasterEQ_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_DisableMasterEQ_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature");

	Params::Options_DisableMasterEQ_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_DisableMasterEQ.Options_DisableMasterEQ_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_DisableMasterEQ_C::ShowOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_DisableMasterEQ_C", "ShowOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_DisableMasterEQ.Options_DisableMasterEQ_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_DisableMasterEQ_C::UINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_DisableMasterEQ_C", "UINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_DisableMasterEQ.Options_DisableMasterEQ_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_DisableMasterEQ_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_DisableMasterEQ_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

