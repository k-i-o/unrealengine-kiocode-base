#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TextField_Screen_SeeThrough

#include "Basic.hpp"

#include "BP_TextField_Screen_SeeThrough_classes.hpp"
#include "BP_TextField_Screen_SeeThrough_parameters.hpp"


namespace SDK
{

// Function BP_TextField_Screen_SeeThrough.BP_TextField_Screen_SeeThrough_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TextField_Screen_SeeThrough_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextField_Screen_SeeThrough_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextField_Screen_SeeThrough.BP_TextField_Screen_SeeThrough_C.ExecuteUbergraph_BP_TextField_Screen_SeeThrough
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TextField_Screen_SeeThrough_C::ExecuteUbergraph_BP_TextField_Screen_SeeThrough(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextField_Screen_SeeThrough_C", "ExecuteUbergraph_BP_TextField_Screen_SeeThrough");

	Params::BP_TextField_Screen_SeeThrough_C_ExecuteUbergraph_BP_TextField_Screen_SeeThrough Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
