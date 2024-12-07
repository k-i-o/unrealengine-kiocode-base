#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Grenade_HE_Base

#include "Basic.hpp"

#include "ITM_Grenade_HE_Base_classes.hpp"
#include "ITM_Grenade_HE_Base_parameters.hpp"


namespace SDK
{

// Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.OnExploded
// (Event, Protected, BlueprintEvent)

void AITM_Grenade_HE_Base_C::OnExploded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Grenade_HE_Base_C", "OnExploded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.ExecuteUbergraph_ITM_Grenade_HE_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AITM_Grenade_HE_Base_C::ExecuteUbergraph_ITM_Grenade_HE_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Grenade_HE_Base_C", "ExecuteUbergraph_ITM_Grenade_HE_Base");

	Params::ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.AddGearStateEntries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AITM_Grenade_HE_Base_C::AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Grenade_HE_Base_C", "AddGearStateEntries");

	Params::ITM_Grenade_HE_Base_C_AddGearStateEntries Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}

