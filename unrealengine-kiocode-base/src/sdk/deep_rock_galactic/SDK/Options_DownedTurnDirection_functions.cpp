#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_DownedTurnDirection

#include "Basic.hpp"

#include "Options_DownedTurnDirection_classes.hpp"
#include "Options_DownedTurnDirection_parameters.hpp"


namespace SDK
{

// Function Options_DownedTurnDirection.Options_DownedTurnDirection_C.ExecuteUbergraph_Options_DownedTurnDirection
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_DownedTurnDirection_C::ExecuteUbergraph_Options_DownedTurnDirection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_DownedTurnDirection_C", "ExecuteUbergraph_Options_DownedTurnDirection");

	Params::Options_DownedTurnDirection_C_ExecuteUbergraph_Options_DownedTurnDirection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_DownedTurnDirection.Options_DownedTurnDirection_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_DownedTurnDirection_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_DownedTurnDirection_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	Params::Options_DownedTurnDirection_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_DownedTurnDirection.Options_DownedTurnDirection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_DownedTurnDirection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_DownedTurnDirection_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
