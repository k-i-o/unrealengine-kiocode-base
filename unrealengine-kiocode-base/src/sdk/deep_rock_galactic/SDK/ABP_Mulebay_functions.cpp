#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Mulebay

#include "Basic.hpp"

#include "ABP_Mulebay_classes.hpp"
#include "ABP_Mulebay_parameters.hpp"


namespace SDK
{

// Function ABP_Mulebay.ABP_Mulebay_C.ExecuteUbergraph_ABP_Mulebay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Mulebay_C::ExecuteUbergraph_ABP_Mulebay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Mulebay_C", "ExecuteUbergraph_ABP_Mulebay");

	Params::ABP_Mulebay_C_ExecuteUbergraph_ABP_Mulebay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Mulebay.ABP_Mulebay_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Mulebay_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Mulebay_C", "AnimGraph");

	Params::ABP_Mulebay_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

