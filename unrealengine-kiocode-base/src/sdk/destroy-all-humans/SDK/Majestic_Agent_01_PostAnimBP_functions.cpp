#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Majestic_Agent_01_PostAnimBP

#include "Basic.hpp"

#include "Majestic_Agent_01_PostAnimBP_classes.hpp"
#include "Majestic_Agent_01_PostAnimBP_parameters.hpp"


namespace SDK
{

// Function Majestic_Agent_01_PostAnimBP.Majestic_Agent_01_PostAnimBP_C.ExecuteUbergraph_Majestic_Agent_01_PostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMajestic_Agent_01_PostAnimBP_C::ExecuteUbergraph_Majestic_Agent_01_PostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Majestic_Agent_01_PostAnimBP_C", "ExecuteUbergraph_Majestic_Agent_01_PostAnimBP");

	Params::Majestic_Agent_01_PostAnimBP_C_ExecuteUbergraph_Majestic_Agent_01_PostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Majestic_Agent_01_PostAnimBP.Majestic_Agent_01_PostAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UMajestic_Agent_01_PostAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Majestic_Agent_01_PostAnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}
