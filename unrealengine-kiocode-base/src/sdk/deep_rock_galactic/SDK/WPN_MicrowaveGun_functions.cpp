#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_MicrowaveGun

#include "Basic.hpp"

#include "WPN_MicrowaveGun_classes.hpp"
#include "WPN_MicrowaveGun_parameters.hpp"


namespace SDK
{

// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_MicrowaveGun_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_MicrowaveGun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 ItemOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_MicrowaveGun_C::AddedToInventory(class APlayerCharacter* ItemOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "AddedToInventory");

	Params::WPN_MicrowaveGun_C_AddedToInventory Parms{};

	Parms.ItemOwner = ItemOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.OnTemperatureChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Temperature                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Overheated                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_MicrowaveGun_C::OnTemperatureChanged(float Temperature, bool Param_Overheated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "OnTemperatureChanged");

	Params::WPN_MicrowaveGun_C_OnTemperatureChanged Parms{};

	Parms.Temperature = Temperature;
	Parms.Param_Overheated = Param_Overheated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.CustomEvent1
// (Event, Public, BlueprintEvent)
// Parameters:
// class UItemUpgrade*                     Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_MicrowaveGun_C::CustomEvent1(const class UItemUpgrade* Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "CustomEvent1");

	Params::WPN_MicrowaveGun_C_CustomEvent1 Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.Receive_IsFiringChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_MicrowaveGun_C::Receive_IsFiringChanged(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "Receive_IsFiringChanged");

	Params::WPN_MicrowaveGun_C_Receive_IsFiringChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.HeatUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   SmoothedTemperature                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_MicrowaveGun_C::HeatUpdated(float SmoothedTemperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "HeatUpdated");

	Params::WPN_MicrowaveGun_C_HeatUpdated Parms{};

	Parms.SmoothedTemperature = SmoothedTemperature;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.RecieveStopUsing
// (Event, Protected, BlueprintEvent)

void AWPN_MicrowaveGun_C::RecieveStopUsing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "RecieveStopUsing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHitEnemy                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_MicrowaveGun_C::BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature(const struct FVector& Location, const struct FVector& Normal, bool bHitEnemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature");

	Params::WPN_MicrowaveGun_C_BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature Parms{};

	Parms.Location = std::move(Location);
	Parms.Normal = std::move(Normal);
	Parms.bHitEnemy = bHitEnemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.OnStartCharacterOverheat_Event
// (BlueprintCallable, BlueprintEvent)

void AWPN_MicrowaveGun_C::OnStartCharacterOverheat_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "OnStartCharacterOverheat_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_MicrowaveGun_C::RecieveUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "RecieveUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.ExecuteUbergraph_WPN_MicrowaveGun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_MicrowaveGun_C::ExecuteUbergraph_WPN_MicrowaveGun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "ExecuteUbergraph_WPN_MicrowaveGun");

	Params::WPN_MicrowaveGun_C_ExecuteUbergraph_WPN_MicrowaveGun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.GetGearStatEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWPN_MicrowaveGun_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_MicrowaveGun_C", "GetGearStatEntry");

	Params::WPN_MicrowaveGun_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}
