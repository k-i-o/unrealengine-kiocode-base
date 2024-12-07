#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FallingState

#include "Basic.hpp"

#include "BP_FallingState_classes.hpp"
#include "BP_FallingState_parameters.hpp"


namespace SDK
{

// Function BP_FallingState.BP_FallingState_C.ExecuteUbergraph_BP_FallingState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FallingState_C::ExecuteUbergraph_BP_FallingState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FallingState_C", "ExecuteUbergraph_BP_FallingState");

	Params::BP_FallingState_C_ExecuteUbergraph_BP_FallingState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Param_IsActive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FallingState_C::ReceiveHoverBootsActiveChanged(bool Param_IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FallingState_C", "ReceiveHoverBootsActiveChanged");

	Params::BP_FallingState_C_ReceiveHoverBootsActiveChanged Parms{};

	Parms.Param_IsActive = Param_IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FallingState_C::ReceiveHoverBootsTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FallingState_C", "ReceiveHoverBootsTick");

	Params::BP_FallingState_C_ReceiveHoverBootsTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FallingState.BP_FallingState_C.ShowJumpBootsActivation
// (Event, Protected, BlueprintEvent)

void UBP_FallingState_C::ShowJumpBootsActivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FallingState_C", "ShowJumpBootsActivation");

	UObject::ProcessEvent(Func, nullptr);
}

}

