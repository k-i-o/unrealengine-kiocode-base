#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnoM

#include "Basic.hpp"

#include "KnoM_classes.hpp"
#include "KnoM_parameters.hpp"


namespace SDK
{

// Function knoM.knoM_C.ExecuteUbergraph_knoM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKnoM_C::ExecuteUbergraph_knoM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("knoM_C", "ExecuteUbergraph_knoM");

	Params::KnoM_C_ExecuteUbergraph_knoM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function knoM.knoM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AKnoM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("knoM_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function knoM.knoM_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKnoM_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("knoM_C", "ReceiveTick");

	Params::KnoM_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

