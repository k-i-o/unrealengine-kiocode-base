#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_DetPack_Detonator

#include "Basic.hpp"

#include "WPN_DetPack_Detonator_classes.hpp"
#include "WPN_DetPack_Detonator_parameters.hpp"


namespace SDK
{

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_DetPack_Detonator_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DetPack_Detonator_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveStartUsing
// (Event, Protected, BlueprintEvent)

void AWPN_DetPack_Detonator_C::RecieveStartUsing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DetPack_Detonator_C", "RecieveStartUsing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_DetPack_Detonator_C::RecieveEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DetPack_Detonator_C", "RecieveEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ReceiveResupply
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Percentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_DetPack_Detonator_C::ReceiveResupply(float Percentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DetPack_Detonator_C", "ReceiveResupply");

	Params::WPN_DetPack_Detonator_C_ReceiveResupply Parms{};

	Parms.Percentage = Percentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.Receive_OnRep_IsDetonatorOut
// (Event, Protected, BlueprintEvent)

void AWPN_DetPack_Detonator_C::Receive_OnRep_IsDetonatorOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DetPack_Detonator_C", "Receive_OnRep_IsDetonatorOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ExecuteUbergraph_WPN_DetPack_Detonator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_DetPack_Detonator_C::ExecuteUbergraph_WPN_DetPack_Detonator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DetPack_Detonator_C", "ExecuteUbergraph_WPN_DetPack_Detonator");

	Params::WPN_DetPack_Detonator_C_ExecuteUbergraph_WPN_DetPack_Detonator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.GetGearStatEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWPN_DetPack_Detonator_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DetPack_Detonator_C", "GetGearStatEntry");

	Params::WPN_DetPack_Detonator_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}
