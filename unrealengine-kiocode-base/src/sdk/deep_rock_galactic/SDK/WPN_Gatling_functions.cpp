#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_Gatling

#include "Basic.hpp"

#include "WPN_Gatling_classes.hpp"
#include "WPN_Gatling_parameters.hpp"


namespace SDK
{

// Function WPN_Gatling.WPN_Gatling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_Gatling_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.Receive_Overheated
// (Event, Protected, BlueprintEvent)

void AWPN_Gatling_C::Receive_Overheated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "Receive_Overheated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.Receive_IsFiringChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_Gatling_C::Receive_IsFiringChanged(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "Receive_IsFiringChanged");

	Params::WPN_Gatling_C_Receive_IsFiringChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Gatling.WPN_Gatling_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_Gatling_C::RecieveEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "RecieveEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_Gatling_C::RecieveUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "RecieveUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.All_SpawnHeatBurst
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWPN_Gatling_C::All_SpawnHeatBurst()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "All_SpawnHeatBurst");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.TriggerCriticalOverheat
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWPN_Gatling_C::TriggerCriticalOverheat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "TriggerCriticalOverheat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.OnTemperatureChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Temperature                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Overheated                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_Gatling_C::OnTemperatureChanged(float Temperature, bool Param_Overheated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "OnTemperatureChanged");

	Params::WPN_Gatling_C_OnTemperatureChanged Parms{};

	Parms.Temperature = Temperature;
	Parms.Param_Overheated = Param_Overheated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Gatling.WPN_Gatling_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Gatling_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.OnSkinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkinEffect*                      Skin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Gatling_C::OnSkinChanged(class USkinEffect* Skin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "OnSkinChanged");

	Params::WPN_Gatling_C_OnSkinChanged Parms{};

	Parms.Skin = Skin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Gatling.WPN_Gatling_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
// (BlueprintEvent)

void AWPN_Gatling_C::BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.CustomEvent1
// (Event, Public, BlueprintEvent)
// Parameters:
// class UItemUpgrade*                     Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Gatling_C::CustomEvent1(const class UItemUpgrade* Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "CustomEvent1");

	Params::WPN_Gatling_C_CustomEvent1 Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Gatling.WPN_Gatling_C.OnManualHeatReductionTriggered_Event_0
// (BlueprintCallable, BlueprintEvent)

void AWPN_Gatling_C::OnManualHeatReductionTriggered_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "OnManualHeatReductionTriggered_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Gatling.WPN_Gatling_C.ExecuteUbergraph_WPN_Gatling
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Gatling_C::ExecuteUbergraph_WPN_Gatling(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "ExecuteUbergraph_WPN_Gatling");

	Params::WPN_Gatling_C_ExecuteUbergraph_WPN_Gatling Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Gatling.WPN_Gatling_C.GetGearStatEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWPN_Gatling_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Gatling_C", "GetGearStatEntry");

	Params::WPN_Gatling_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}
