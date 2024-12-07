#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_CryoSpray_Ammo

#include "Basic.hpp"

#include "WeaponDisplay_CryoSpray_Ammo_classes.hpp"
#include "WeaponDisplay_CryoSpray_Ammo_parameters.hpp"


namespace SDK
{

// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Set Progress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_CryoSpray_Ammo_C::Set_Progress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_CryoSpray_Ammo_C", "Set Progress");

	Params::WeaponDisplay_CryoSpray_Ammo_C_Set_Progress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                            Param_Item                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_CryoSpray_Ammo_C::Init(class AItem* Param_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_CryoSpray_Ammo_C", "Init");

	Params::WeaponDisplay_CryoSpray_Ammo_C_Init Parms{};

	Parms.Param_Item = Param_Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.OnItemUnequipped
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_CryoSpray_Ammo_C::OnItemUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_CryoSpray_Ammo_C", "OnItemUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.OnItemEquipped
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_CryoSpray_Ammo_C::OnItemEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_CryoSpray_Ammo_C", "OnItemEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponDisplay_CryoSpray_Ammo_C::ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponDisplay_CryoSpray_Ammo_C", "ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo");

	Params::WeaponDisplay_CryoSpray_Ammo_C_ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

