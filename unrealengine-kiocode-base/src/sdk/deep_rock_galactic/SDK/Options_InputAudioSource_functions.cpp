#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_InputAudioSource

#include "Basic.hpp"

#include "Options_InputAudioSource_classes.hpp"
#include "Options_InputAudioSource_parameters.hpp"


namespace SDK
{

// Function Options_InputAudioSource.Options_InputAudioSource_C.ExecuteUbergraph_Options_InputAudioSource
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_InputAudioSource_C::ExecuteUbergraph_Options_InputAudioSource(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "ExecuteUbergraph_Options_InputAudioSource");

	Params::Options_InputAudioSource_C_ExecuteUbergraph_Options_InputAudioSource Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.ReenableSlider
// (BlueprintCallable, BlueprintEvent)

void UOptions_InputAudioSource_C::ReenableSlider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "ReenableSlider");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_InputAudioSource_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "Tick");

	Params::Options_InputAudioSource_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_InputAudioSource_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.CheckForNewDevices
// (BlueprintCallable, BlueprintEvent)

void UOptions_InputAudioSource_C::CheckForNewDevices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "CheckForNewDevices");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_InputAudioSource_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	Params::Options_InputAudioSource_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature Parms{};

	Parms.Value = std::move(Value);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_InputAudioSource_C::ShowOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "ShowOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_InputAudioSource_C::UINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "UINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_InputAudioSource_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.FillAudioDevices
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptions_InputAudioSource_C::FillAudioDevices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "FillAudioDevices");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_InputAudioSource.Options_InputAudioSource_C.GetMicAmplitudeSliderTooltip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UOptions_InputAudioSource_C::GetMicAmplitudeSliderTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_InputAudioSource_C", "GetMicAmplitudeSliderTooltip");

	Params::Options_InputAudioSource_C_GetMicAmplitudeSliderTooltip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
