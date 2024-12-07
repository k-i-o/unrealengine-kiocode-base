#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_SonyInputMotionAxisMappingOption

#include "Basic.hpp"

#include "Options_SonyInputMotionAxisMappingOption_classes.hpp"
#include "Options_SonyInputMotionAxisMappingOption_parameters.hpp"


namespace SDK
{

// Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.ExecuteUbergraph_Options_SonyInputMotionAxisMappingOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_SonyInputMotionAxisMappingOption_C::ExecuteUbergraph_Options_SonyInputMotionAxisMappingOption(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_SonyInputMotionAxisMappingOption_C", "ExecuteUbergraph_Options_SonyInputMotionAxisMappingOption");

	Params::Options_SonyInputMotionAxisMappingOption_C_ExecuteUbergraph_Options_SonyInputMotionAxisMappingOption Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_SonyInputMotionAxisMappingOption_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(const class FText& Value, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_SonyInputMotionAxisMappingOption_C", "BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature");

	Params::Options_SonyInputMotionAxisMappingOption_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature Parms{};

	Parms.Value = std::move(Value);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.ShowUI
// (BlueprintCallable, BlueprintEvent)

void UOptions_SonyInputMotionAxisMappingOption_C::ShowUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_SonyInputMotionAxisMappingOption_C", "ShowUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_SonyInputMotionAxisMappingOption_C::UINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_SonyInputMotionAxisMappingOption_C", "UINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_SonyInputMotionAxisMappingOption.Options_SonyInputMotionAxisMappingOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_SonyInputMotionAxisMappingOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_SonyInputMotionAxisMappingOption_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

