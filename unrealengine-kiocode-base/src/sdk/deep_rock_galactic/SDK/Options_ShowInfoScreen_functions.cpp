#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_ShowInfoScreen

#include "Basic.hpp"

#include "Options_ShowInfoScreen_classes.hpp"
#include "Options_ShowInfoScreen_parameters.hpp"


namespace SDK
{

// Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.ExecuteUbergraph_Options_ShowInfoScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_ShowInfoScreen_C::ExecuteUbergraph_Options_ShowInfoScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ShowInfoScreen_C", "ExecuteUbergraph_Options_ShowInfoScreen");

	Params::Options_ShowInfoScreen_C_ExecuteUbergraph_Options_ShowInfoScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_ShowInfoScreen_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ShowInfoScreen_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	Params::Options_ShowInfoScreen_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_ShowInfoScreen.Options_ShowInfoScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_ShowInfoScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_ShowInfoScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
