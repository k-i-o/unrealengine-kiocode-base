#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimSharingTransitionHuman

#include "Basic.hpp"

#include "BP_AnimSharingTransitionHuman_classes.hpp"
#include "BP_AnimSharingTransitionHuman_parameters.hpp"


namespace SDK
{

// Function BP_AnimSharingTransitionHuman.BP_AnimSharingTransitionHuman_C.ExecuteUbergraph_BP_AnimSharingTransitionHuman
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AnimSharingTransitionHuman_C::ExecuteUbergraph_BP_AnimSharingTransitionHuman(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnimSharingTransitionHuman_C", "ExecuteUbergraph_BP_AnimSharingTransitionHuman");

	Params::BP_AnimSharingTransitionHuman_C_ExecuteUbergraph_BP_AnimSharingTransitionHuman Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
