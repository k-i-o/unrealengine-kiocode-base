#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CauldronAnimBP

#include "Basic.hpp"

#include "CauldronAnimBP_classes.hpp"
#include "CauldronAnimBP_parameters.hpp"


namespace SDK
{

// Function CauldronAnimBP.CauldronAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UCauldronAnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimGraph");

	Params::CauldronAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_AttackAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_AttackAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_AttackAnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_attackCharge
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_attackCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_attackCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_attackMovement
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_attackMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_attackMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_attackSpash
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_attackSpash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_attackSpash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_boilingWater
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_boilingWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_boilingWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_cauldronDamage
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_cauldronDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_cauldronDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_CauldronWalk_01
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_CauldronWalk_01()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_CauldronWalk_01");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_CauldronWalk_02
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_CauldronWalk_02()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_CauldronWalk_02");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_Desintegrate
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_Desintegrate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_Desintegrate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_Die
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_Die()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_Die");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_GetDamaged
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_GetDamaged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_GetDamaged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_LaunchProjectile
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_LaunchProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_LaunchProjectile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_OverflowFinished
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_OverflowFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_OverflowFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_OverflowStart
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_OverflowStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_OverflowStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.AnimNotify_SpinLoop
// (BlueprintCallable, BlueprintEvent)

void UCauldronAnimBP_C::AnimNotify_SpinLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "AnimNotify_SpinLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCauldronAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "BlueprintUpdateAnimation");

	Params::CauldronAnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CauldronAnimBP.CauldronAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_314475E24425C2849B5526B01D8940BE
// (BlueprintEvent)

void UCauldronAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_314475E24425C2849B5526B01D8940BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_314475E24425C2849B5526B01D8940BE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_3237736C4CFD983249AAAABCF3D90ABC
// (BlueprintEvent)

void UCauldronAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_3237736C4CFD983249AAAABCF3D90ABC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_3237736C4CFD983249AAAABCF3D90ABC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_34BCA6154B56A5884ABE6993303A7BBB
// (BlueprintEvent)

void UCauldronAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_34BCA6154B56A5884ABE6993303A7BBB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_34BCA6154B56A5884ABE6993303A7BBB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_3C958E2B46180FE04BC82EAE2AE62CF6
// (BlueprintEvent)

void UCauldronAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_3C958E2B46180FE04BC82EAE2AE62CF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_3C958E2B46180FE04BC82EAE2AE62CF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_A656DD9C41D9BCCE7F20E38B18C7E8B2
// (BlueprintEvent)

void UCauldronAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_A656DD9C41D9BCCE7F20E38B18C7E8B2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_A656DD9C41D9BCCE7F20E38B18C7E8B2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_B91FA0AB44593D76DD549597FF5B2158
// (BlueprintEvent)

void UCauldronAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_B91FA0AB44593D76DD549597FF5B2158()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_B91FA0AB44593D76DD549597FF5B2158");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_E5797AD44C7846CE3D81A998F1A9A34C
// (BlueprintEvent)

void UCauldronAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_E5797AD44C7846CE3D81A998F1A9A34C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CauldronAnimBP_AnimGraphNode_TransitionResult_E5797AD44C7846CE3D81A998F1A9A34C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauldronAnimBP.CauldronAnimBP_C.ExecuteUbergraph_CauldronAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCauldronAnimBP_C::ExecuteUbergraph_CauldronAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauldronAnimBP_C", "ExecuteUbergraph_CauldronAnimBP");

	Params::CauldronAnimBP_C_ExecuteUbergraph_CauldronAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
