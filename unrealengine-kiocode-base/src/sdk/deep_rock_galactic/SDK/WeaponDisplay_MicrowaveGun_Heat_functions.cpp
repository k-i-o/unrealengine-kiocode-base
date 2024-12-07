#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_MicrowaveGun_Heat

#include "Basic.hpp"

#include "WeaponDisplay_MicrowaveGun_Heat_classes.hpp"
#include "WeaponDisplay_MicrowaveGun_Heat_parameters.hpp"


namespace SDK
{

// Function WeaponDisplay_MicrowaveGun_Heat.WeaponDisplay_MicrowaveGun_Heat_C.SetHeatValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HeatPercentage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Overheated                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponDisplay_MicrowaveGun_Heat_C::SetHeatValue(float HeatPercentage, bool Overheated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_MicrowaveGun_Heat_C", "SetHeatValue");

	Params::WeaponDisplay_MicrowaveGun_Heat_C_SetHeatValue Parms{};

	Parms.HeatPercentage = HeatPercentage;
	Parms.Overheated = Overheated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_MicrowaveGun_Heat.WeaponDisplay_MicrowaveGun_Heat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_MicrowaveGun_Heat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_MicrowaveGun_Heat_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_MicrowaveGun_Heat.WeaponDisplay_MicrowaveGun_Heat_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                            Param_Item                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_MicrowaveGun_Heat_C::Init(class AItem* Param_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_MicrowaveGun_Heat_C", "Init");

	Params::WeaponDisplay_MicrowaveGun_Heat_C_Init Parms{};

	Parms.Param_Item = Param_Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_MicrowaveGun_Heat.WeaponDisplay_MicrowaveGun_Heat_C.OnEquipped
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_MicrowaveGun_Heat_C::OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_MicrowaveGun_Heat_C", "OnEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_MicrowaveGun_Heat.WeaponDisplay_MicrowaveGun_Heat_C.OnUnEquipped
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_MicrowaveGun_Heat_C::OnUnEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_MicrowaveGun_Heat_C", "OnUnEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_MicrowaveGun_Heat.WeaponDisplay_MicrowaveGun_Heat_C.ExecuteUbergraph_WeaponDisplay_MicrowaveGun_Heat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_MicrowaveGun_Heat_C::ExecuteUbergraph_WeaponDisplay_MicrowaveGun_Heat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_MicrowaveGun_Heat_C", "ExecuteUbergraph_WeaponDisplay_MicrowaveGun_Heat");

	Params::WeaponDisplay_MicrowaveGun_Heat_C_ExecuteUbergraph_WeaponDisplay_MicrowaveGun_Heat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

