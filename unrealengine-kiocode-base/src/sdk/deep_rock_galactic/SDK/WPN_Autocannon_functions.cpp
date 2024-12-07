#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_Autocannon

#include "Basic.hpp"

#include "WPN_Autocannon_classes.hpp"
#include "WPN_Autocannon_parameters.hpp"


namespace SDK
{

// Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_Autocannon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Autocannon.WPN_Autocannon_C.ShowCurentFireTime
// (BlueprintCallable, BlueprintEvent)

void AWPN_Autocannon_C::ShowCurentFireTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "ShowCurentFireTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Autocannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_Autocannon_C::RecieveUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "RecieveUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_Autocannon_C::RecieveEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "RecieveEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_Autocannon_C::Receive_IsFiringChanged(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "Receive_IsFiringChanged");

	Params::WPN_Autocannon_C_Receive_IsFiringChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
// (BlueprintEvent)

void AWPN_Autocannon_C::BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Autocannon.WPN_Autocannon_C.RecieveFiredWeapon
// (Event, Protected, BlueprintEvent)

void AWPN_Autocannon_C::RecieveFiredWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "RecieveFiredWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Autocannon.WPN_Autocannon_C.CustomEvent1
// (Event, Public, BlueprintEvent)
// Parameters:
// class UItemUpgrade*                     Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Autocannon_C::CustomEvent1(const class UItemUpgrade* Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "CustomEvent1");

	Params::WPN_Autocannon_C_CustomEvent1 Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Autocannon_C::ExecuteUbergraph_WPN_Autocannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "ExecuteUbergraph_WPN_Autocannon");

	Params::WPN_Autocannon_C_ExecuteUbergraph_WPN_Autocannon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Autocannon.WPN_Autocannon_C.RoundStatValue
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           Suffix                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    KeepSign                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AWPN_Autocannon_C::RoundStatValue(const class FText& InText, const class FString& Suffix, bool KeepSign) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "RoundStatValue");

	Params::WPN_Autocannon_C_RoundStatValue Parms{};

	Parms.InText = std::move(InText);
	Parms.Suffix = std::move(Suffix);
	Parms.KeepSign = KeepSign;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWPN_Autocannon_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Autocannon_C", "GetGearStatEntry");

	Params::WPN_Autocannon_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}

