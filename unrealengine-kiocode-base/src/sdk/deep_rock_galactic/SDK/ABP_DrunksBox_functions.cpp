#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DrunksBox

#include "Basic.hpp"

#include "ABP_DrunksBox_classes.hpp"
#include "ABP_DrunksBox_parameters.hpp"


namespace SDK
{

// Function ABP_DrunksBox.ABP_DrunksBox_C.ExecuteUbergraph_ABP_DrunksBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DrunksBox_C::ExecuteUbergraph_ABP_DrunksBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DrunksBox_C", "ExecuteUbergraph_ABP_DrunksBox");

	Params::ABP_DrunksBox_C_ExecuteUbergraph_ABP_DrunksBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_DrunksBox.ABP_DrunksBox_C.OnStateChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   Param_State                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DrunksBox_C::OnStateChanged_Event_0(uint8 Param_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DrunksBox_C", "OnStateChanged_Event_0");

	Params::ABP_DrunksBox_C_OnStateChanged_Event_0 Parms{};

	Parms.Param_State = Param_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_DrunksBox.ABP_DrunksBox_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_DrunksBox_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DrunksBox_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_DrunksBox.ABP_DrunksBox_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C
// (BlueprintEvent)

void UABP_DrunksBox_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DrunksBox_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_DrunksBox.ABP_DrunksBox_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60
// (BlueprintEvent)

void UABP_DrunksBox_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DrunksBox_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_DrunksBox.ABP_DrunksBox_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_DrunksBox_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DrunksBox_C", "AnimGraph");

	Params::ABP_DrunksBox_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}
