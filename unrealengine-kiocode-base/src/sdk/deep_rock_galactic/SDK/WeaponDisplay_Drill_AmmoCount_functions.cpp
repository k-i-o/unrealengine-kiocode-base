#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_Drill_AmmoCount

#include "Basic.hpp"

#include "WeaponDisplay_Drill_AmmoCount_classes.hpp"
#include "WeaponDisplay_Drill_AmmoCount_parameters.hpp"


namespace SDK
{

// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.AdjustProgressBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Drill_AmmoCount_C::AdjustProgressBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Drill_AmmoCount_C", "AdjustProgressBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Drill_AmmoCount_C::SetClipCount(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Drill_AmmoCount_C", "SetClipCount");

	Params::WeaponDisplay_Drill_AmmoCount_C_SetClipCount Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Drill_AmmoCount_C::SetTotalCount(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Drill_AmmoCount_C", "SetTotalCount");

	Params::WeaponDisplay_Drill_AmmoCount_C_SetTotalCount Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_Drill_AmmoCount_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Drill_AmmoCount_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Drill_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Drill_AmmoCount_C", "ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount");

	Params::WeaponDisplay_Drill_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
