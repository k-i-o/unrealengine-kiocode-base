#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleScreen_MemorialQuotes

#include "Basic.hpp"

#include "ConsoleScreen_MemorialQuotes_classes.hpp"
#include "ConsoleScreen_MemorialQuotes_parameters.hpp"


namespace SDK
{

// Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_MemorialQuotes_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConsoleScreen_MemorialQuotes_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C.ExecuteUbergraph_ConsoleScreen_MemorialQuotes
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsoleScreen_MemorialQuotes_C::ExecuteUbergraph_ConsoleScreen_MemorialQuotes(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConsoleScreen_MemorialQuotes_C", "ExecuteUbergraph_ConsoleScreen_MemorialQuotes");

	Params::ConsoleScreen_MemorialQuotes_C_ExecuteUbergraph_ConsoleScreen_MemorialQuotes Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

