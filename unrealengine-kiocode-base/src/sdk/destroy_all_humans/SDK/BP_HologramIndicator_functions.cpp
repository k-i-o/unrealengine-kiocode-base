#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HologramIndicator

#include "Basic.hpp"

#include "BP_HologramIndicator_classes.hpp"
#include "BP_HologramIndicator_parameters.hpp"


namespace SDK
{

// Function BP_HologramIndicator.BP_HologramIndicator_C.ExecuteUbergraph_BP_HologramIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HologramIndicator_C::ExecuteUbergraph_BP_HologramIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HologramIndicator_C", "ExecuteUbergraph_BP_HologramIndicator");

	Params::BP_HologramIndicator_C_ExecuteUbergraph_BP_HologramIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HologramIndicator.BP_HologramIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HologramIndicator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HologramIndicator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HologramIndicator.BP_HologramIndicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HologramIndicator_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HologramIndicator_C", "ReceiveTick");

	Params::BP_HologramIndicator_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

