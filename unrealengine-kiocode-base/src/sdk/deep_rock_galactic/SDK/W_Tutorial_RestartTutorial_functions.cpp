#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Tutorial_RestartTutorial

#include "Basic.hpp"

#include "W_Tutorial_RestartTutorial_classes.hpp"
#include "W_Tutorial_RestartTutorial_parameters.hpp"


namespace SDK
{

// Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.ExecuteUbergraph_W_Tutorial_RestartTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tutorial_RestartTutorial_C::ExecuteUbergraph_W_Tutorial_RestartTutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_RestartTutorial_C", "ExecuteUbergraph_W_Tutorial_RestartTutorial");

	Params::W_Tutorial_RestartTutorial_C_ExecuteUbergraph_W_Tutorial_RestartTutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.OnCloseTutorial
// (BlueprintCallable, BlueprintEvent)

void UW_Tutorial_RestartTutorial_C::OnCloseTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_RestartTutorial_C", "OnCloseTutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Tutorial_RestartTutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_RestartTutorial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Tutorial_RestartTutorial_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tutorial_RestartTutorial_C", "PreConstruct");

	Params::W_Tutorial_RestartTutorial_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

