#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Armor_Gunner

#include "Basic.hpp"

#include "BP_Armor_Gunner_classes.hpp"
#include "BP_Armor_Gunner_parameters.hpp"


namespace SDK
{

// Function BP_Armor_Gunner.BP_Armor_Gunner_C.GetGearStatEntry
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Armor_Gunner_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Armor_Gunner_C", "GetGearStatEntry");

	Params::BP_Armor_Gunner_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}
