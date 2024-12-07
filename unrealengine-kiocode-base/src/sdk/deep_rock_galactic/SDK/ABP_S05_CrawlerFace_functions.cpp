#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_S05_CrawlerFace

#include "Basic.hpp"

#include "ABP_S05_CrawlerFace_classes.hpp"
#include "ABP_S05_CrawlerFace_parameters.hpp"


namespace SDK
{

// Function ABP_S05_CrawlerFace.ABP_S05_CrawlerFace_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_S05_CrawlerFace_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_S05_CrawlerFace_C", "AnimGraph");

	Params::ABP_S05_CrawlerFace_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_S05_CrawlerFace.ABP_S05_CrawlerFace_C.ExecuteUbergraph_ABP_S05_CrawlerFace
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_S05_CrawlerFace_C::ExecuteUbergraph_ABP_S05_CrawlerFace(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_S05_CrawlerFace_C", "ExecuteUbergraph_ABP_S05_CrawlerFace");

	Params::ABP_S05_CrawlerFace_C_ExecuteUbergraph_ABP_S05_CrawlerFace Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

