#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_Pistol_AmmoCount2

#include "Basic.hpp"

#include "WeaponDisplay_Pistol_AmmoCount2_classes.hpp"
#include "WeaponDisplay_Pistol_AmmoCount2_parameters.hpp"


namespace SDK
{

// Function WeaponDisplay_Pistol_AmmoCount2.WeaponDisplay_Pistol_AmmoCount2_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Pistol_AmmoCount2_C::SetTotalCount(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Pistol_AmmoCount2_C", "SetTotalCount");

	Params::WeaponDisplay_Pistol_AmmoCount2_C_SetTotalCount Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Pistol_AmmoCount2.WeaponDisplay_Pistol_AmmoCount2_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Pistol_AmmoCount2_C::SetClipCount(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Pistol_AmmoCount2_C", "SetClipCount");

	Params::WeaponDisplay_Pistol_AmmoCount2_C_SetClipCount Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Pistol_AmmoCount2.WeaponDisplay_Pistol_AmmoCount2_C.ExecuteUbergraph_WeaponDisplay_Pistol_AmmoCount2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Pistol_AmmoCount2_C::ExecuteUbergraph_WeaponDisplay_Pistol_AmmoCount2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Pistol_AmmoCount2_C", "ExecuteUbergraph_WeaponDisplay_Pistol_AmmoCount2");

	Params::WeaponDisplay_Pistol_AmmoCount2_C_ExecuteUbergraph_WeaponDisplay_Pistol_AmmoCount2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

