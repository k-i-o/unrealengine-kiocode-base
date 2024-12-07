#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Controller_ForceFeedbackScale

#include "Basic.hpp"

#include "Options_Controller_ForceFeedbackScale_classes.hpp"
#include "Options_Controller_ForceFeedbackScale_parameters.hpp"


namespace SDK
{

// Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.ExecuteUbergraph_Options_Controller_ForceFeedbackScale
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_Controller_ForceFeedbackScale_C::ExecuteUbergraph_Options_Controller_ForceFeedbackScale(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Controller_ForceFeedbackScale_C", "ExecuteUbergraph_Options_Controller_ForceFeedbackScale");

	Params::Options_Controller_ForceFeedbackScale_C_ExecuteUbergraph_Options_Controller_ForceFeedbackScale Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_Controller_ForceFeedbackScale_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Controller_ForceFeedbackScale_C", "BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");

	Params::Options_Controller_ForceFeedbackScale_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_Controller_ForceFeedbackScale_C::ShowOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Controller_ForceFeedbackScale_C", "ShowOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Controller_ForceFeedbackScale_C::UINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Controller_ForceFeedbackScale_C", "UINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Controller_ForceFeedbackScale.Options_Controller_ForceFeedbackScale_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Controller_ForceFeedbackScale_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Controller_ForceFeedbackScale_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

