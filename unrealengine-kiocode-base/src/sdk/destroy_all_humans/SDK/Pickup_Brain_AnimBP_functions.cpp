#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pickup_Brain_AnimBP

#include "Basic.hpp"

#include "Pickup_Brain_AnimBP_classes.hpp"
#include "Pickup_Brain_AnimBP_parameters.hpp"


namespace SDK
{

// Function Pickup_Brain_AnimBP.Pickup_Brain_AnimBP_C.ExecuteUbergraph_Pickup_Brain_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickup_Brain_AnimBP_C::ExecuteUbergraph_Pickup_Brain_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickup_Brain_AnimBP_C", "ExecuteUbergraph_Pickup_Brain_AnimBP");

	Params::Pickup_Brain_AnimBP_C_ExecuteUbergraph_Pickup_Brain_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

