#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_HDPlayerCharacter_SharedIK

#include "Basic.hpp"

#include "ABP_HDPlayerCharacter_SharedIK_classes.hpp"
#include "ABP_HDPlayerCharacter_SharedIK_parameters.hpp"


namespace SDK
{

// Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HDPlayerCharacter_SharedIK_C::ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HDPlayerCharacter_SharedIK_C", "ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK");

	Params::ABP_HDPlayerCharacter_SharedIK_C_ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_HDPlayerCharacter_SharedIK_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HDPlayerCharacter_SharedIK_C", "AnimGraph");

	Params::ABP_HDPlayerCharacter_SharedIK_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.HandIK
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InLocoPose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_HandIK                                           (Parm, OutParm, NoDestructor)

void UABP_HDPlayerCharacter_SharedIK_C::HandIK(const struct FPoseLink& InLocoPose, struct FPoseLink* Param_HandIK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HDPlayerCharacter_SharedIK_C", "HandIK");

	Params::ABP_HDPlayerCharacter_SharedIK_C_HandIK Parms{};

	Parms.InLocoPose = std::move(InLocoPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HandIK != nullptr)
		*Param_HandIK = std::move(Parms.Param_HandIK);
}


// Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.FootIK
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InLocoPose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_FootIK                                           (Parm, OutParm, NoDestructor)

void UABP_HDPlayerCharacter_SharedIK_C::FootIK(const struct FPoseLink& InLocoPose, struct FPoseLink* Param_FootIK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HDPlayerCharacter_SharedIK_C", "FootIK");

	Params::ABP_HDPlayerCharacter_SharedIK_C_FootIK Parms{};

	Parms.InLocoPose = std::move(InLocoPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FootIK != nullptr)
		*Param_FootIK = std::move(Parms.Param_FootIK);
}

}
