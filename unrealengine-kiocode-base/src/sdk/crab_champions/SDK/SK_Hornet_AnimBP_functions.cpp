#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Hornet_AnimBP

#include "Basic.hpp"

#include "SK_Hornet_AnimBP_classes.hpp"
#include "SK_Hornet_AnimBP_parameters.hpp"


namespace SDK
{

// Function SK_Hornet_AnimBP.SK_Hornet_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void USK_Hornet_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Hornet_AnimBP_C", "AnimGraph");

	Params::SK_Hornet_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function SK_Hornet_AnimBP.SK_Hornet_AnimBP_C.ExecuteUbergraph_SK_Hornet_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Hornet_AnimBP_C::ExecuteUbergraph_SK_Hornet_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Hornet_AnimBP_C", "ExecuteUbergraph_SK_Hornet_AnimBP");

	Params::SK_Hornet_AnimBP_C_ExecuteUbergraph_SK_Hornet_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
