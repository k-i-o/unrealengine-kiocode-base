#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_PreventDuplicateCharacters

#include "Basic.hpp"

#include "ITM_PreventDuplicateCharacters_classes.hpp"
#include "ITM_PreventDuplicateCharacters_parameters.hpp"


namespace SDK
{

// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.ExecuteUbergraph_ITM_PreventDuplicateCharacters
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_PreventDuplicateCharacters_C::ExecuteUbergraph_ITM_PreventDuplicateCharacters(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PreventDuplicateCharacters_C", "ExecuteUbergraph_ITM_PreventDuplicateCharacters");

	Params::ITM_PreventDuplicateCharacters_C_ExecuteUbergraph_ITM_PreventDuplicateCharacters Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.UpdateState
// (BlueprintCallable, BlueprintEvent)

void UITM_PreventDuplicateCharacters_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PreventDuplicateCharacters_C", "UpdateState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_PreventDuplicateCharacters_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PreventDuplicateCharacters_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature");

	Params::ITM_PreventDuplicateCharacters_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}

}
