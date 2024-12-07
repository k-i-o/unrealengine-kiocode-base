#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_GatlingGun_AmmoCount

#include "Basic.hpp"

#include "WeaponDisplay_GatlingGun_AmmoCount_classes.hpp"
#include "WeaponDisplay_GatlingGun_AmmoCount_parameters.hpp"


namespace SDK
{

// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AdjustPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_GatlingGun_AmmoCount_C::AdjustPercentage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "AdjustPercentage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AnimateClipCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_GatlingGun_AmmoCount_C::AnimateClipCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "AnimateClipCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AdjustProgressBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_GatlingGun_AmmoCount_C::AdjustProgressBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "AdjustProgressBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.Check AmmoLow
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_GatlingGun_AmmoCount_C::Check_AmmoLow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "Check AmmoLow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_GatlingGun_AmmoCount_C::SetTotalCount(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "SetTotalCount");

	Params::WeaponDisplay_GatlingGun_AmmoCount_C_SetTotalCount Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetMaxAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_GatlingGun_AmmoCount_C::SetMaxAmmo(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "SetMaxAmmo");

	Params::WeaponDisplay_GatlingGun_AmmoCount_C_SetMaxAmmo Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_GatlingGun_AmmoCount_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.OnAmmoLowFinished
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_GatlingGun_AmmoCount_C::OnAmmoLowFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "OnAmmoLowFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.InitializeAmmoWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                            OwningItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetComponent*                 WidgetComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_GatlingGun_AmmoCount_C::InitializeAmmoWidget(class AItem* OwningItem, class UWidgetComponent* WidgetComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "InitializeAmmoWidget");

	Params::WeaponDisplay_GatlingGun_AmmoCount_C_InitializeAmmoWidget Parms{};

	Parms.OwningItem = OwningItem;
	Parms.WidgetComp = WidgetComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_GatlingGun_AmmoCount_C::SetClipCount(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "SetClipCount");

	Params::WeaponDisplay_GatlingGun_AmmoCount_C_SetClipCount Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_GatlingGun_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_GatlingGun_AmmoCount_C", "ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount");

	Params::WeaponDisplay_GatlingGun_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

