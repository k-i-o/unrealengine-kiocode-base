#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_LockOnRifle

#include "Basic.hpp"

#include "WPN_LockOnRifle_classes.hpp"
#include "WPN_LockOnRifle_parameters.hpp"


namespace SDK
{

// Function WPN_LockOnRifle.WPN_LockOnRifle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_LockOnRifle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.LockingStarted_Event
// (BlueprintCallable, BlueprintEvent)

void AWPN_LockOnRifle_C::LockingStarted_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "LockingStarted_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.LockingStopped_Event
// (BlueprintCallable, BlueprintEvent)

void AWPN_LockOnRifle_C::LockingStopped_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "LockingStopped_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.CustomEvent1
// (Event, Public, BlueprintEvent)
// Parameters:
// class UItemUpgrade*                     Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LockOnRifle_C::CustomEvent1(const class UItemUpgrade* Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "CustomEvent1");

	Params::WPN_LockOnRifle_C_CustomEvent1 Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.Recieve_UpdateMeshses
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Param_IsFirstPerson                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_LockOnRifle_C::Recieve_UpdateMeshses(bool Param_IsFirstPerson)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "Recieve_UpdateMeshses");

	Params::WPN_LockOnRifle_C_Recieve_UpdateMeshses Parms{};

	Parms.Param_IsFirstPerson = Param_IsFirstPerson;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_LockOnRifle_C::RecieveEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "RecieveEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.OnSkinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkinEffect*                      Skin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LockOnRifle_C::OnSkinChanged(class USkinEffect* Skin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "OnSkinChanged");

	Params::WPN_LockOnRifle_C_OnSkinChanged Parms{};

	Parms.Skin = Skin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.Receive_ReloadBegin
// (Event, Public, BlueprintEvent)

void AWPN_LockOnRifle_C::Receive_ReloadBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "Receive_ReloadBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.Receive_ReloadEnd
// (Event, Public, BlueprintEvent)

void AWPN_LockOnRifle_C::Receive_ReloadEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "Receive_ReloadEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.ExecuteUbergraph_WPN_LockOnRifle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LockOnRifle_C::ExecuteUbergraph_WPN_LockOnRifle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "ExecuteUbergraph_WPN_LockOnRifle");

	Params::WPN_LockOnRifle_C_ExecuteUbergraph_WPN_LockOnRifle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LockOnRifle.WPN_LockOnRifle_C.GetGearStatEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWPN_LockOnRifle_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LockOnRifle_C", "GetGearStatEntry");

	Params::WPN_LockOnRifle_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}
