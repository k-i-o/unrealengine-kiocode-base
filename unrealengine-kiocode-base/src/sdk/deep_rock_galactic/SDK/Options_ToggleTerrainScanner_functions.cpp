#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_ToggleTerrainScanner

#include "Basic.hpp"

#include "Options_ToggleTerrainScanner_classes.hpp"
#include "Options_ToggleTerrainScanner_parameters.hpp"


namespace SDK
{

// Function Options_ToggleTerrainScanner.Options_ToggleTerrainScanner_C.ExecuteUbergraph_Options_ToggleTerrainScanner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_ToggleTerrainScanner_C::ExecuteUbergraph_Options_ToggleTerrainScanner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ToggleTerrainScanner_C", "ExecuteUbergraph_Options_ToggleTerrainScanner");

	Params::Options_ToggleTerrainScanner_C_ExecuteUbergraph_Options_ToggleTerrainScanner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_ToggleTerrainScanner.Options_ToggleTerrainScanner_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_ToggleTerrainScanner_C::ShowOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ToggleTerrainScanner_C", "ShowOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_ToggleTerrainScanner.Options_ToggleTerrainScanner_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_ToggleTerrainScanner_C::UINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ToggleTerrainScanner_C", "UINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_ToggleTerrainScanner.Options_ToggleTerrainScanner_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_ToggleTerrainScanner_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ToggleTerrainScanner_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	Params::Options_ToggleTerrainScanner_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_ToggleTerrainScanner.Options_ToggleTerrainScanner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_ToggleTerrainScanner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ToggleTerrainScanner_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
