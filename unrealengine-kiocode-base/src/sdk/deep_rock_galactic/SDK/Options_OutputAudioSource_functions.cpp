#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_OutputAudioSource

#include "Basic.hpp"

#include "Options_OutputAudioSource_classes.hpp"
#include "Options_OutputAudioSource_parameters.hpp"


namespace SDK
{

// Function Options_OutputAudioSource.Options_OutputAudioSource_C.ExecuteUbergraph_Options_OutputAudioSource
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_OutputAudioSource_C::ExecuteUbergraph_Options_OutputAudioSource(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "ExecuteUbergraph_Options_OutputAudioSource");

	Params::Options_OutputAudioSource_C_ExecuteUbergraph_Options_OutputAudioSource Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_OutputAudioSource_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "PreConstruct");

	Params::Options_OutputAudioSource_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_OutputAudioSource_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.CheckForNewDevices
// (BlueprintCallable, BlueprintEvent)

void UOptions_OutputAudioSource_C::CheckForNewDevices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "CheckForNewDevices");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_OutputAudioSource_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");

	Params::Options_OutputAudioSource_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_OutputAudioSource_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	Params::Options_OutputAudioSource_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature Parms{};

	Parms.Value = std::move(Value);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_OutputAudioSource_C::ShowOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "ShowOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_OutputAudioSource_C::UINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "UINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_OutputAudioSource_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.FillAudioDevices
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptions_OutputAudioSource_C::FillAudioDevices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "FillAudioDevices");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.CheckForAudioDeviceFallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DeviceID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UOptions_OutputAudioSource_C::CheckForAudioDeviceFallback(const class FString& DeviceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "CheckForAudioDeviceFallback");

	Params::Options_OutputAudioSource_C_CheckForAudioDeviceFallback Parms{};

	Parms.DeviceID = std::move(DeviceID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_OutputAudioSource.Options_OutputAudioSource_C.GetToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UOptions_OutputAudioSource_C::GetToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_OutputAudioSource_C", "GetToolTipWidget");

	Params::Options_OutputAudioSource_C_GetToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

