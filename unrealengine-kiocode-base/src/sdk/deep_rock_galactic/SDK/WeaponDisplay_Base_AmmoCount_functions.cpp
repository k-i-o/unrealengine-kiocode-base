#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_Base_AmmoCount

#include "Basic.hpp"

#include "WeaponDisplay_Base_AmmoCount_classes.hpp"
#include "WeaponDisplay_Base_AmmoCount_parameters.hpp"


namespace SDK
{

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "ExecuteUbergraph_WeaponDisplay_Base_AmmoCount");

	Params::WeaponDisplay_Base_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Base_AmmoCount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnItemEquipped
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::OnItemEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "OnItemEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnItemUnequipped
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::OnItemUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "OnItemUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::Reload_Time_Tick(float Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "Reload Time Tick");

	Params::WeaponDisplay_Base_AmmoCount_C_Reload_Time_Tick Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::Total_Ammo_left_changed(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "Total Ammo left changed");

	Params::WeaponDisplay_Base_AmmoCount_C_Total_Ammo_left_changed Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::Max_Ammo_Changed(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "Max Ammo Changed");

	Params::WeaponDisplay_Base_AmmoCount_C_Max_Ammo_Changed Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::OnReloadComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "OnReloadComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::OnReloadStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "OnReloadStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.InitializeAmmoWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                            OwningItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetComponent*                 WidgetComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::InitializeAmmoWidget(class AItem* OwningItem, class UWidgetComponent* WidgetComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "InitializeAmmoWidget");

	Params::WeaponDisplay_Base_AmmoCount_C_InitializeAmmoWidget Parms{};

	Parms.OwningItem = OwningItem;
	Parms.WidgetComp = WidgetComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::OnTotalAmountChange(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "OnTotalAmountChange");

	Params::WeaponDisplay_Base_AmmoCount_C_OnTotalAmountChange Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::OnCarriedAmountChanged(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "OnCarriedAmountChanged");

	Params::WeaponDisplay_Base_AmmoCount_C_OnCarriedAmountChanged Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::OnClipAmountChanged(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "OnClipAmountChanged");

	Params::WeaponDisplay_Base_AmmoCount_C_OnClipAmountChanged Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::OnTotalAmountChanged(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "OnTotalAmountChanged");

	Params::WeaponDisplay_Base_AmmoCount_C_OnTotalAmountChanged Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::SetClipCount(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "SetClipCount");

	Params::WeaponDisplay_Base_AmmoCount_C_SetClipCount Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::SetTotalCount(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "SetTotalCount");

	Params::WeaponDisplay_Base_AmmoCount_C_SetTotalCount Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::RequestRedraw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "RequestRedraw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_Base_AmmoCount_C::SetMaxAmmo(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_Base_AmmoCount_C", "SetMaxAmmo");

	Params::WeaponDisplay_Base_AmmoCount_C_SetMaxAmmo Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

