#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_WarningAndMutator

#include "Basic.hpp"

#include "ITM_WarningAndMutator_classes.hpp"
#include "ITM_WarningAndMutator_parameters.hpp"


namespace SDK
{

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.WarningClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_WarningAndMutator_C::WarningClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_WarningAndMutator_C", "WarningClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.MutatorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_WarningAndMutator_C::MutatorClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_WarningAndMutator_C", "MutatorClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.ExecuteUbergraph_ITM_WarningAndMutator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_WarningAndMutator_C::ExecuteUbergraph_ITM_WarningAndMutator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_WarningAndMutator_C", "ExecuteUbergraph_ITM_WarningAndMutator");

	Params::ITM_WarningAndMutator_C_ExecuteUbergraph_ITM_WarningAndMutator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.CustomEvent_Mutator
// (BlueprintCallable, BlueprintEvent)

void UITM_WarningAndMutator_C::CustomEvent_Mutator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_WarningAndMutator_C", "CustomEvent_Mutator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.OnClicked_Even_Warning
// (BlueprintCallable, BlueprintEvent)

void UITM_WarningAndMutator_C::OnClicked_Even_Warning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_WarningAndMutator_C", "OnClicked_Even_Warning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission*                Mission                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_WarningAndMutator_C::Update(class UGeneratedMission* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_WarningAndMutator_C", "Update");

	Params::ITM_WarningAndMutator_C_Update Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);
}

}
