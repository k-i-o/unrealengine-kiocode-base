#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFE_PowerAttack

#include "Basic.hpp"

#include "AFE_PowerAttack_classes.hpp"
#include "AFE_PowerAttack_parameters.hpp"


namespace SDK
{

// Function AFE_PowerAttack.AFE_PowerAttack_C.ExecuteUbergraph_AFE_PowerAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAFE_PowerAttack_C::ExecuteUbergraph_AFE_PowerAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AFE_PowerAttack_C", "ExecuteUbergraph_AFE_PowerAttack");

	Params::AFE_PowerAttack_C_ExecuteUbergraph_AFE_PowerAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveEndEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPawnAfflictionComponent*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAFE_PowerAttack_C::ReceiveEndEffect(class UPawnAfflictionComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AFE_PowerAttack_C", "ReceiveEndEffect");

	Params::AFE_PowerAttack_C_ReceiveEndEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveBeginEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPawnAfflictionComponent*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAFE_PowerAttack_C::ReceiveBeginEffect(class UPawnAfflictionComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AFE_PowerAttack_C", "ReceiveBeginEffect");

	Params::AFE_PowerAttack_C_ReceiveBeginEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}
