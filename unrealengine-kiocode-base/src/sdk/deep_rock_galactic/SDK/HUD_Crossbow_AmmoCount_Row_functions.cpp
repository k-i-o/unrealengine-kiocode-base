#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Crossbow_AmmoCount_Row

#include "Basic.hpp"

#include "HUD_Crossbow_AmmoCount_Row_classes.hpp"
#include "HUD_Crossbow_AmmoCount_Row_parameters.hpp"


namespace SDK
{

// Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetIsActiveArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Inactive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Crossbow_AmmoCount_Row_C::SetIsActiveArrow(bool Inactive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crossbow_AmmoCount_Row_C", "SetIsActiveArrow");

	Params::HUD_Crossbow_AmmoCount_Row_C_SetIsActiveArrow Parms{};

	Parms.Inactive = Inactive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetAmmoCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmmoCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Crossbow_AmmoCount_Row_C::SetAmmoCount(int32 InAmmoCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crossbow_AmmoCount_Row_C", "SetAmmoCount");

	Params::HUD_Crossbow_AmmoCount_Row_C_SetAmmoCount Parms{};

	Parms.InAmmoCount = InAmmoCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Crossbow_AmmoCount_Row_C::SetIcon(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crossbow_AmmoCount_Row_C", "SetIcon");

	Params::HUD_Crossbow_AmmoCount_Row_C_SetIcon Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Crossbow_AmmoCount_Row_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crossbow_AmmoCount_Row_C", "PreConstruct");

	Params::HUD_Crossbow_AmmoCount_Row_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Crossbow_AmmoCount_Row_C::ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crossbow_AmmoCount_Row_C", "ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row");

	Params::HUD_Crossbow_AmmoCount_Row_C_ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

