#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_DailyDealOnTerminal

#include "Basic.hpp"

#include "WND_DailyDealOnTerminal_classes.hpp"
#include "WND_DailyDealOnTerminal_parameters.hpp"


namespace SDK
{

// Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_DailyDealOnTerminal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_DailyDealOnTerminal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.OnCreditsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Credits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_DailyDealOnTerminal_C::OnCreditsChanged(int32 Credits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_DailyDealOnTerminal_C", "OnCreditsChanged");

	Params::WND_DailyDealOnTerminal_C_OnCreditsChanged Parms{};

	Parms.Credits = Credits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.UpdateDealText
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWND_DailyDealOnTerminal_C::UpdateDealText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_DailyDealOnTerminal_C", "UpdateDealText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.ExecuteUbergraph_WND_DailyDealOnTerminal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_DailyDealOnTerminal_C::ExecuteUbergraph_WND_DailyDealOnTerminal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_DailyDealOnTerminal_C", "ExecuteUbergraph_WND_DailyDealOnTerminal");

	Params::WND_DailyDealOnTerminal_C_ExecuteUbergraph_WND_DailyDealOnTerminal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

