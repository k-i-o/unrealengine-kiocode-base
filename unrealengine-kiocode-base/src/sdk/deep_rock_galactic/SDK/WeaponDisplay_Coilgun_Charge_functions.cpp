#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_Coilgun_Charge

#include "Basic.hpp"

#include "WeaponDisplay_Coilgun_Charge_classes.hpp"
#include "WeaponDisplay_Coilgun_Charge_parameters.hpp"


namespace SDK
{

// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Coilgun_Charge_C::SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Coilgun_Charge_C::SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.AmmoCountDownTick
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Coilgun_Charge_C::AmmoCountDownTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "AmmoCountDownTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SetChargeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ChargeValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Overheated                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Ready                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    FullCharge                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponDisplay_Coilgun_Charge_C::SetChargeValue(float ChargeValue, bool Overheated, bool Ready, bool FullCharge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "SetChargeValue");

	Params::WeaponDisplay_Coilgun_Charge_C_SetChargeValue Parms{};

	Parms.ChargeValue = ChargeValue;
	Parms.Overheated = Overheated;
	Parms.Ready = Ready;
	Parms.FullCharge = FullCharge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_Coilgun_Charge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponDisplay_Coilgun_Charge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "PreConstruct");

	Params::WeaponDisplay_Coilgun_Charge_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.Total Ammo left changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Coilgun_Charge_C::Total_Ammo_left_changed(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "Total Ammo left changed");

	Params::WeaponDisplay_Coilgun_Charge_C_Total_Ammo_left_changed Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWeaponDisplay_Coilgun_Charge_C::WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.ExecuteUbergraph_WeaponDisplay_Coilgun_Charge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Coilgun_Charge_C::ExecuteUbergraph_WeaponDisplay_Coilgun_Charge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Coilgun_Charge_C", "ExecuteUbergraph_WeaponDisplay_Coilgun_Charge");

	Params::WeaponDisplay_Coilgun_Charge_C_ExecuteUbergraph_WeaponDisplay_Coilgun_Charge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
