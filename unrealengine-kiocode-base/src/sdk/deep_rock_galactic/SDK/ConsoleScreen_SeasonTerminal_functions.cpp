#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleScreen_SeasonTerminal

#include "Basic.hpp"

#include "ConsoleScreen_SeasonTerminal_classes.hpp"
#include "ConsoleScreen_SeasonTerminal_parameters.hpp"


namespace SDK
{

// Function ConsoleScreen_SeasonTerminal.ConsoleScreen_SeasonTerminal_C.ExecuteUbergraph_ConsoleScreen_SeasonTerminal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsoleScreen_SeasonTerminal_C::ExecuteUbergraph_ConsoleScreen_SeasonTerminal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConsoleScreen_SeasonTerminal_C", "ExecuteUbergraph_ConsoleScreen_SeasonTerminal");

	Params::ConsoleScreen_SeasonTerminal_C_ExecuteUbergraph_ConsoleScreen_SeasonTerminal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConsoleScreen_SeasonTerminal.ConsoleScreen_SeasonTerminal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_SeasonTerminal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConsoleScreen_SeasonTerminal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

