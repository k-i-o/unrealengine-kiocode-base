#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_WallSaw

#include "Basic.hpp"

#include "Grenade_WallSaw_classes.hpp"
#include "Grenade_WallSaw_parameters.hpp"


namespace SDK
{

// Function Grenade_WallSaw.Grenade_WallSaw_C.GetDurationBeforeExpiration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Param_Duration                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_WallSaw_C::GetDurationBeforeExpiration(float* Param_Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_WallSaw_C", "GetDurationBeforeExpiration");

	Params::Grenade_WallSaw_C_GetDurationBeforeExpiration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Duration != nullptr)
		*Param_Duration = Parms.Param_Duration;
}


// Function Grenade_WallSaw.Grenade_WallSaw_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrenade_WallSaw_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_WallSaw_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_WallSaw.Grenade_WallSaw_C.OnExploded
// (Event, Protected, BlueprintEvent)

void AGrenade_WallSaw_C::OnExploded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_WallSaw_C", "OnExploded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_WallSaw.Grenade_WallSaw_C.ExecuteUbergraph_Grenade_WallSaw
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_WallSaw_C::ExecuteUbergraph_Grenade_WallSaw(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_WallSaw_C", "ExecuteUbergraph_Grenade_WallSaw");

	Params::Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grenade_WallSaw.Grenade_WallSaw_C.AddGearStateEntries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGrenade_WallSaw_C::AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_WallSaw_C", "AddGearStateEntries");

	Params::Grenade_WallSaw_C_AddGearStateEntries Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}
