#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Suburban_woman_01_PostAnimBP

#include "Basic.hpp"

#include "Suburban_woman_01_PostAnimBP_classes.hpp"
#include "Suburban_woman_01_PostAnimBP_parameters.hpp"


namespace SDK
{

// Function Suburban_woman_01_PostAnimBP.Suburban_woman_01_PostAnimBP_C.ExecuteUbergraph_Suburban_woman_01_PostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USuburban_woman_01_PostAnimBP_C::ExecuteUbergraph_Suburban_woman_01_PostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Suburban_woman_01_PostAnimBP_C", "ExecuteUbergraph_Suburban_woman_01_PostAnimBP");

	Params::Suburban_woman_01_PostAnimBP_C_ExecuteUbergraph_Suburban_woman_01_PostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Suburban_woman_01_PostAnimBP.Suburban_woman_01_PostAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void USuburban_woman_01_PostAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Suburban_woman_01_PostAnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

