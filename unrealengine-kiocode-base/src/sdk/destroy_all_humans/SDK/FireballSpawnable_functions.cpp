#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FireballSpawnable

#include "Basic.hpp"

#include "FireballSpawnable_classes.hpp"
#include "FireballSpawnable_parameters.hpp"


namespace SDK
{

// Function FireballSpawnable.FireballSpawnable_C.ExecuteUbergraph_FireballSpawnable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireballSpawnable_C::ExecuteUbergraph_FireballSpawnable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballSpawnable_C", "ExecuteUbergraph_FireballSpawnable");

	Params::FireballSpawnable_C_ExecuteUbergraph_FireballSpawnable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireballSpawnable.FireballSpawnable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFireballSpawnable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballSpawnable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireballSpawnable.FireballSpawnable_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireballSpawnable_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballSpawnable_C", "ReceiveTick");

	Params::FireballSpawnable_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

