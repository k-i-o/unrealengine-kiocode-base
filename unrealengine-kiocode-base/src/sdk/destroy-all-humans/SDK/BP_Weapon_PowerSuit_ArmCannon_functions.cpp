#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_PowerSuit_ArmCannon

#include "Basic.hpp"

#include "BP_Weapon_PowerSuit_ArmCannon_classes.hpp"
#include "BP_Weapon_PowerSuit_ArmCannon_parameters.hpp"


namespace SDK
{

// Function BP_Weapon_PowerSuit_ArmCannon.BP_Weapon_PowerSuit_ArmCannon_C.ExecuteUbergraph_BP_Weapon_PowerSuit_ArmCannon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_PowerSuit_ArmCannon_C::ExecuteUbergraph_BP_Weapon_PowerSuit_ArmCannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_PowerSuit_ArmCannon_C", "ExecuteUbergraph_BP_Weapon_PowerSuit_ArmCannon");

	Params::BP_Weapon_PowerSuit_ArmCannon_C_ExecuteUbergraph_BP_Weapon_PowerSuit_ArmCannon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Weapon_PowerSuit_ArmCannon.BP_Weapon_PowerSuit_ArmCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_PowerSuit_ArmCannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_PowerSuit_ArmCannon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_PowerSuit_ArmCannon.BP_Weapon_PowerSuit_ArmCannon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_PowerSuit_ArmCannon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_PowerSuit_ArmCannon_C", "ReceiveTick");

	Params::BP_Weapon_PowerSuit_ArmCannon_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Weapon_PowerSuit_ArmCannon.BP_Weapon_PowerSuit_ArmCannon_C.OnStartedFire
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_PowerSuit_ArmCannon_C::OnStartedFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_PowerSuit_ArmCannon_C", "OnStartedFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_PowerSuit_ArmCannon.BP_Weapon_PowerSuit_ArmCannon_C.OnStoppedFire
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_PowerSuit_ArmCannon_C::OnStoppedFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_PowerSuit_ArmCannon_C", "OnStoppedFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_PowerSuit_ArmCannon.BP_Weapon_PowerSuit_ArmCannon_C.OnWeaponFire
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             _nSocketName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_PowerSuit_ArmCannon_C::OnWeaponFire(class FName _nSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_PowerSuit_ArmCannon_C", "OnWeaponFire");

	Params::BP_Weapon_PowerSuit_ArmCannon_C_OnWeaponFire Parms{};

	Parms._nSocketName = _nSocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Weapon_PowerSuit_ArmCannon.BP_Weapon_PowerSuit_ArmCannon_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Weapon_PowerSuit_ArmCannon_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_PowerSuit_ArmCannon_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_PowerSuit_ArmCannon.BP_Weapon_PowerSuit_ArmCannon_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Weapon_PowerSuit_ArmCannon_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_PowerSuit_ArmCannon_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
