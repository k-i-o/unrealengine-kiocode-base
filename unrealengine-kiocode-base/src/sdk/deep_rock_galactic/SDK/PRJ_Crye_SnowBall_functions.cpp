#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_Crye_SnowBall

#include "Basic.hpp"

#include "PRJ_Crye_SnowBall_classes.hpp"
#include "PRJ_Crye_SnowBall_parameters.hpp"


namespace SDK
{

// Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.OnImpacted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                                    PredictedImpact                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APRJ_Crye_SnowBall_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_Crye_SnowBall_C", "OnImpacted");

	Params::PRJ_Crye_SnowBall_C_OnImpacted Parms{};

	Parms.PredictedImpact = PredictedImpact;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.ExecuteUbergraph_PRJ_Crye_SnowBall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APRJ_Crye_SnowBall_C::ExecuteUbergraph_PRJ_Crye_SnowBall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_Crye_SnowBall_C", "ExecuteUbergraph_PRJ_Crye_SnowBall");

	Params::PRJ_Crye_SnowBall_C_ExecuteUbergraph_PRJ_Crye_SnowBall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

