#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeavyParticleCannon_StickyFlame

#include "Basic.hpp"

#include "BP_HeavyParticleCannon_StickyFlame_classes.hpp"
#include "BP_HeavyParticleCannon_StickyFlame_parameters.hpp"


namespace SDK
{

// Function BP_HeavyParticleCannon_StickyFlame.BP_HeavyParticleCannon_StickyFlame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HeavyParticleCannon_StickyFlame_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeavyParticleCannon_StickyFlame_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeavyParticleCannon_StickyFlame.BP_HeavyParticleCannon_StickyFlame_C.ExecuteUbergraph_BP_HeavyParticleCannon_StickyFlame
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HeavyParticleCannon_StickyFlame_C::ExecuteUbergraph_BP_HeavyParticleCannon_StickyFlame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeavyParticleCannon_StickyFlame_C", "ExecuteUbergraph_BP_HeavyParticleCannon_StickyFlame");

	Params::BP_HeavyParticleCannon_StickyFlame_C_ExecuteUbergraph_BP_HeavyParticleCannon_StickyFlame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

