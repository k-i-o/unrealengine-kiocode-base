#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DualMachinePistols

#include "Basic.hpp"

#include "ABP_DualMachinePistols_classes.hpp"
#include "ABP_DualMachinePistols_parameters.hpp"


namespace SDK
{

// Function ABP_DualMachinePistols.ABP_DualMachinePistols_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_DualMachinePistols_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DualMachinePistols_C", "AnimGraph");

	Params::ABP_DualMachinePistols_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_DualMachinePistols.ABP_DualMachinePistols_C.ExecuteUbergraph_ABP_DualMachinePistols
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DualMachinePistols_C::ExecuteUbergraph_ABP_DualMachinePistols(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DualMachinePistols_C", "ExecuteUbergraph_ABP_DualMachinePistols");

	Params::ABP_DualMachinePistols_C_ExecuteUbergraph_ABP_DualMachinePistols Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
