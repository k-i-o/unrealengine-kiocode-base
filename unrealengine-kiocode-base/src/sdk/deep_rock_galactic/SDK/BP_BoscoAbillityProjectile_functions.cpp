#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BoscoAbillityProjectile

#include "Basic.hpp"

#include "BP_BoscoAbillityProjectile_classes.hpp"
#include "BP_BoscoAbillityProjectile_parameters.hpp"


namespace SDK
{

// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.OnImpacted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                                    PredictedImpact                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BoscoAbillityProjectile_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoscoAbillityProjectile_C", "OnImpacted");

	Params::BP_BoscoAbillityProjectile_C_OnImpacted Parms{};

	Parms.PredictedImpact = PredictedImpact;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoscoAbillityProjectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoscoAbillityProjectile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ExecuteUbergraph_BP_BoscoAbillityProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoscoAbillityProjectile_C::ExecuteUbergraph_BP_BoscoAbillityProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoscoAbillityProjectile_C", "ExecuteUbergraph_BP_BoscoAbillityProjectile");

	Params::BP_BoscoAbillityProjectile_C_ExecuteUbergraph_BP_BoscoAbillityProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

