#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Urban_Man_Crazy_PostAnimBP

#include "Basic.hpp"

#include "Urban_Man_Crazy_PostAnimBP_classes.hpp"
#include "Urban_Man_Crazy_PostAnimBP_parameters.hpp"


namespace SDK
{

// Function Urban_Man_Crazy_PostAnimBP.Urban_Man_Crazy_PostAnimBP_C.ExecuteUbergraph_Urban_Man_Crazy_PostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUrban_Man_Crazy_PostAnimBP_C::ExecuteUbergraph_Urban_Man_Crazy_PostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Urban_Man_Crazy_PostAnimBP_C", "ExecuteUbergraph_Urban_Man_Crazy_PostAnimBP");

	Params::Urban_Man_Crazy_PostAnimBP_C_ExecuteUbergraph_Urban_Man_Crazy_PostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Urban_Man_Crazy_PostAnimBP.Urban_Man_Crazy_PostAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UUrban_Man_Crazy_PostAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Urban_Man_Crazy_PostAnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}
