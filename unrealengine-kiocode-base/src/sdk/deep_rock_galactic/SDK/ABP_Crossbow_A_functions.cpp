#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Crossbow_A

#include "Basic.hpp"

#include "ABP_Crossbow_A_classes.hpp"
#include "ABP_Crossbow_A_parameters.hpp"


namespace SDK
{

// Function ABP_Crossbow_A.ABP_Crossbow_A_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Crossbow_A_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Crossbow_A_C", "AnimGraph");

	Params::ABP_Crossbow_A_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_Crossbow_A.ABP_Crossbow_A_C.ExecuteUbergraph_ABP_Crossbow_A
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Crossbow_A_C::ExecuteUbergraph_ABP_Crossbow_A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Crossbow_A_C", "ExecuteUbergraph_ABP_Crossbow_A");

	Params::ABP_Crossbow_A_C_ExecuteUbergraph_ABP_Crossbow_A Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

