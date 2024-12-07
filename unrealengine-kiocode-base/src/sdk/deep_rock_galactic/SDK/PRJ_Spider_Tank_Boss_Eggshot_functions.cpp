#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_Spider_Tank_Boss_Eggshot

#include "Basic.hpp"

#include "PRJ_Spider_Tank_Boss_Eggshot_classes.hpp"
#include "PRJ_Spider_Tank_Boss_Eggshot_parameters.hpp"


namespace SDK
{

// Function PRJ_Spider_Tank_Boss_Eggshot.PRJ_Spider_Tank_Boss_Eggshot_C.OnImpacted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                                    PredictedImpact                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APRJ_Spider_Tank_Boss_Eggshot_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_Spider_Tank_Boss_Eggshot_C", "OnImpacted");

	Params::PRJ_Spider_Tank_Boss_Eggshot_C_OnImpacted Parms{};

	Parms.PredictedImpact = PredictedImpact;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_Spider_Tank_Boss_Eggshot.PRJ_Spider_Tank_Boss_Eggshot_C.ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APRJ_Spider_Tank_Boss_Eggshot_C::ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_Spider_Tank_Boss_Eggshot_C", "ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot");

	Params::PRJ_Spider_Tank_Boss_Eggshot_C_ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

