#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_DualMPs

#include "Basic.hpp"

#include "WPN_DualMPs_classes.hpp"
#include "WPN_DualMPs_parameters.hpp"


namespace SDK
{

// Function WPN_DualMPs.WPN_DualMPs_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_DualMPs_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DualMPs_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DualMPs.WPN_DualMPs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_DualMPs_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DualMPs_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DualMPs.WPN_DualMPs_C.ExecuteUbergraph_WPN_DualMPs
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_DualMPs_C::ExecuteUbergraph_WPN_DualMPs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DualMPs_C", "ExecuteUbergraph_WPN_DualMPs");

	Params::WPN_DualMPs_C_ExecuteUbergraph_WPN_DualMPs Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_DualMPs.WPN_DualMPs_C.GetGearStatEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWPN_DualMPs_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DualMPs_C", "GetGearStatEntry");

	Params::WPN_DualMPs_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}

