#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleScreen_PickAxe

#include "Basic.hpp"

#include "ConsoleScreen_PickAxe_classes.hpp"
#include "ConsoleScreen_PickAxe_parameters.hpp"


namespace SDK
{

// Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_PickAxe_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConsoleScreen_PickAxe_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.OnItemUINotificationChange
// (BlueprintCallable, BlueprintEvent)

void UConsoleScreen_PickAxe_C::OnItemUINotificationChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConsoleScreen_PickAxe_C", "OnItemUINotificationChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.ExecuteUbergraph_ConsoleScreen_PickAxe
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsoleScreen_PickAxe_C::ExecuteUbergraph_ConsoleScreen_PickAxe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConsoleScreen_PickAxe_C", "ExecuteUbergraph_ConsoleScreen_PickAxe");

	Params::ConsoleScreen_PickAxe_C_ExecuteUbergraph_ConsoleScreen_PickAxe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
