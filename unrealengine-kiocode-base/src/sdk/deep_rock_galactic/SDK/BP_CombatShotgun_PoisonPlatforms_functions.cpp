#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CombatShotgun_PoisonPlatforms

#include "Basic.hpp"

#include "BP_CombatShotgun_PoisonPlatforms_classes.hpp"
#include "BP_CombatShotgun_PoisonPlatforms_parameters.hpp"


namespace SDK
{

// Function BP_CombatShotgun_PoisonPlatforms.BP_CombatShotgun_PoisonPlatforms_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CombatShotgun_PoisonPlatforms_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatShotgun_PoisonPlatforms_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CombatShotgun_PoisonPlatforms.BP_CombatShotgun_PoisonPlatforms_C.ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatShotgun_PoisonPlatforms_C::ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CombatShotgun_PoisonPlatforms_C", "ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms");

	Params::BP_CombatShotgun_PoisonPlatforms_C_ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

