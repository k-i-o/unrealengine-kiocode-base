#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_ResetIfDead

#include "Basic.hpp"

#include "BTTask_ResetIfDead_classes.hpp"
#include "BTTask_ResetIfDead_parameters.hpp"


namespace SDK
{

// Function BTTask_ResetIfDead.BTTask_ResetIfDead_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_ResetIfDead_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_ResetIfDead_C", "ReceiveExecute");

	Params::BTTask_ResetIfDead_C_ReceiveExecute Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_ResetIfDead.BTTask_ResetIfDead_C.ExecuteUbergraph_BTTask_ResetIfDead
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_ResetIfDead_C::ExecuteUbergraph_BTTask_ResetIfDead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_ResetIfDead_C", "ExecuteUbergraph_BTTask_ResetIfDead");

	Params::BTTask_ResetIfDead_C_ExecuteUbergraph_BTTask_ResetIfDead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
