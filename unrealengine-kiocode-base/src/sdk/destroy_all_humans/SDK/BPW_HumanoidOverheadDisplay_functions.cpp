#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_HumanoidOverheadDisplay

#include "Basic.hpp"

#include "BPW_HumanoidOverheadDisplay_classes.hpp"
#include "BPW_HumanoidOverheadDisplay_parameters.hpp"


namespace SDK
{

// Function BPW_HumanoidOverheadDisplay.BPW_HumanoidOverheadDisplay_C.ExecuteUbergraph_BPW_HumanoidOverheadDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_HumanoidOverheadDisplay_C::ExecuteUbergraph_BPW_HumanoidOverheadDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_HumanoidOverheadDisplay_C", "ExecuteUbergraph_BPW_HumanoidOverheadDisplay");

	Params::BPW_HumanoidOverheadDisplay_C_ExecuteUbergraph_BPW_HumanoidOverheadDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_HumanoidOverheadDisplay.BPW_HumanoidOverheadDisplay_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// EBFGBehaviourState_NPC                  _eState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_HumanoidOverheadDisplay_C::UpdateState(EBFGBehaviourState_NPC _eState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_HumanoidOverheadDisplay_C", "UpdateState");

	Params::BPW_HumanoidOverheadDisplay_C_UpdateState Parms{};

	Parms._eState = _eState;

	UObject::ProcessEvent(Func, &Parms);
}

}
