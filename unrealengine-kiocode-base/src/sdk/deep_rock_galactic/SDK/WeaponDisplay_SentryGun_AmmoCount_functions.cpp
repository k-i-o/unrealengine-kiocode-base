#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_SentryGun_AmmoCount

#include "Basic.hpp"

#include "WeaponDisplay_SentryGun_AmmoCount_classes.hpp"
#include "WeaponDisplay_SentryGun_AmmoCount_parameters.hpp"


namespace SDK
{

// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.SetSentry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASentryGun*                       SentryGun                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_SentryGun_AmmoCount_C::SetSentry(class ASentryGun* SentryGun)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_SentryGun_AmmoCount_C", "SetSentry");

	Params::WeaponDisplay_SentryGun_AmmoCount_C_SetSentry Parms{};

	Parms.SentryGun = SentryGun;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.OnAmmoCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_AmmoCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Change                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_SentryGun_AmmoCount_C::OnAmmoCountChanged(int32 Param_AmmoCount, int32 Change)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_SentryGun_AmmoCount_C", "OnAmmoCountChanged");

	Params::WeaponDisplay_SentryGun_AmmoCount_C_OnAmmoCountChanged Parms{};

	Parms.Param_AmmoCount = Param_AmmoCount;
	Parms.Change = Change;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_SentryGun_AmmoCount_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_SentryGun_AmmoCount_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_SentryGun_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_SentryGun_AmmoCount_C", "ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount");

	Params::WeaponDisplay_SentryGun_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

