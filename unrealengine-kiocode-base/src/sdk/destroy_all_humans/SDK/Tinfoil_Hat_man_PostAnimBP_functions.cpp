#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tinfoil_Hat_man_PostAnimBP

#include "Basic.hpp"

#include "Tinfoil_Hat_man_PostAnimBP_classes.hpp"
#include "Tinfoil_Hat_man_PostAnimBP_parameters.hpp"


namespace SDK
{

// Function Tinfoil_Hat_man_PostAnimBP.Tinfoil_Hat_man_PostAnimBP_C.ExecuteUbergraph_Tinfoil_Hat_man_PostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTinfoil_Hat_man_PostAnimBP_C::ExecuteUbergraph_Tinfoil_Hat_man_PostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tinfoil_Hat_man_PostAnimBP_C", "ExecuteUbergraph_Tinfoil_Hat_man_PostAnimBP");

	Params::Tinfoil_Hat_man_PostAnimBP_C_ExecuteUbergraph_Tinfoil_Hat_man_PostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tinfoil_Hat_man_PostAnimBP.Tinfoil_Hat_man_PostAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UTinfoil_Hat_man_PostAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tinfoil_Hat_man_PostAnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

