#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Crypo_PostProcess_AnimBP

#include "Basic.hpp"

#include "Crypo_PostProcess_AnimBP_classes.hpp"
#include "Crypo_PostProcess_AnimBP_parameters.hpp"


namespace SDK
{

// Function Crypo_PostProcess_AnimBP.Crypo_PostProcess_AnimBP_C.ExecuteUbergraph_Crypo_PostProcess_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrypo_PostProcess_AnimBP_C::ExecuteUbergraph_Crypo_PostProcess_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Crypo_PostProcess_AnimBP_C", "ExecuteUbergraph_Crypo_PostProcess_AnimBP");

	Params::Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Crypo_PostProcess_AnimBP.Crypo_PostProcess_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Crypo_PostProcess_AnimBP_AnimGraphNode_RigidBody_0A6838BB4E78054F63A832B62D3315DF
// (BlueprintEvent)

void UCrypo_PostProcess_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Crypo_PostProcess_AnimBP_AnimGraphNode_RigidBody_0A6838BB4E78054F63A832B62D3315DF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Crypo_PostProcess_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Crypo_PostProcess_AnimBP_AnimGraphNode_RigidBody_0A6838BB4E78054F63A832B62D3315DF");

	UObject::ProcessEvent(Func, nullptr);
}

}
