#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Farmer_01_PostAnimBP

#include "Basic.hpp"

#include "Farmer_01_PostAnimBP_classes.hpp"
#include "Farmer_01_PostAnimBP_parameters.hpp"


namespace SDK
{

// Function Farmer_01_PostAnimBP.Farmer_01_PostAnimBP_C.ExecuteUbergraph_Farmer_01_PostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFarmer_01_PostAnimBP_C::ExecuteUbergraph_Farmer_01_PostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Farmer_01_PostAnimBP_C", "ExecuteUbergraph_Farmer_01_PostAnimBP");

	Params::Farmer_01_PostAnimBP_C_ExecuteUbergraph_Farmer_01_PostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Farmer_01_PostAnimBP.Farmer_01_PostAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UFarmer_01_PostAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Farmer_01_PostAnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}
