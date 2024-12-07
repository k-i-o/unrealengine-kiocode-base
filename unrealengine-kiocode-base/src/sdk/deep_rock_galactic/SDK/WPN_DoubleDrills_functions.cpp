#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_DoubleDrills

#include "Basic.hpp"

#include "WPN_DoubleDrills_classes.hpp"
#include "WPN_DoubleDrills_parameters.hpp"


namespace SDK
{

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USceneComponent* AWPN_DoubleDrills_C::GetHeatingAudioSceneComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "GetHeatingAudioSceneComponent");

	Params::WPN_DoubleDrills_C_GetHeatingAudioSceneComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Temperature                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Overheated                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_DoubleDrills_C::OnTemperatureChanged(float Temperature, bool Param_Overheated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "OnTemperatureChanged");

	Params::WPN_DoubleDrills_C_OnTemperatureChanged Parms{};

	Parms.Temperature = Temperature;
	Parms.Param_Overheated = Param_Overheated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV
// (BlueprintCallable, BlueprintEvent)

void AWPN_DoubleDrills_C::Increase_FOV()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "Increase FOV");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV
// (BlueprintCallable, BlueprintEvent)

void AWPN_DoubleDrills_C::Decrease_FOV()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "Decrease FOV");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 ItemOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_DoubleDrills_C::AddedToInventory(class APlayerCharacter* ItemOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "AddedToInventory");

	Params::WPN_DoubleDrills_C_AddedToInventory Parms{};

	Parms.ItemOwner = ItemOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage
// (Event, Public, BlueprintEvent)

void AWPN_DoubleDrills_C::BP_OnDrillDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "BP_OnDrillDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling
// (Event, Public, BlueprintEvent)

void AWPN_DoubleDrills_C::OnStartDrilling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "OnStartDrilling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling
// (Event, Public, BlueprintEvent)

void AWPN_DoubleDrills_C::OnStopDrilling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "OnStopDrilling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated
// (Event, Protected, BlueprintEvent)

void AWPN_DoubleDrills_C::Receive_Overheated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "Receive_Overheated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_DoubleDrills_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AWPN_DoubleDrills_C::Gunsling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "Gunsling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem
// (Event, Protected, BlueprintEvent)

void AWPN_DoubleDrills_C::RecieveCycledItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "RecieveCycledItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_DoubleDrills_C::ExecuteUbergraph_WPN_DoubleDrills(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "ExecuteUbergraph_WPN_DoubleDrills");

	Params::WPN_DoubleDrills_C_ExecuteUbergraph_WPN_DoubleDrills Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWPN_DoubleDrills_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_DoubleDrills_C", "GetGearStatEntry");

	Params::WPN_DoubleDrills_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}

