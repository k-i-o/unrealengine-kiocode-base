#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_Crossbow

#include "Basic.hpp"

#include "WPN_Crossbow_classes.hpp"
#include "WPN_Crossbow_parameters.hpp"


namespace SDK
{

// Function WPN_Crossbow.WPN_Crossbow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Crossbow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Crossbow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Crossbow.WPN_Crossbow_C.UpdateRecallProgress
// (Event, Protected, BlueprintEvent)

void AWPN_Crossbow_C::UpdateRecallProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Crossbow_C", "UpdateRecallProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_Crossbow.WPN_Crossbow_C.SetAnimatedFPMeshComponentFromBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           AnimatedArrow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Crossbow_C::SetAnimatedFPMeshComponentFromBP(class AActor* AnimatedArrow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Crossbow_C", "SetAnimatedFPMeshComponentFromBP");

	Params::WPN_Crossbow_C_SetAnimatedFPMeshComponentFromBP Parms{};

	Parms.AnimatedArrow = AnimatedArrow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Crossbow.WPN_Crossbow_C.SetAnimatedTPMeshComponentFromBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           AnimatedArrow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Crossbow_C::SetAnimatedTPMeshComponentFromBP(class AActor* AnimatedArrow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Crossbow_C", "SetAnimatedTPMeshComponentFromBP");

	Params::WPN_Crossbow_C_SetAnimatedTPMeshComponentFromBP Parms{};

	Parms.AnimatedArrow = AnimatedArrow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Crossbow.WPN_Crossbow_C.ExecuteUbergraph_WPN_Crossbow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Crossbow_C::ExecuteUbergraph_WPN_Crossbow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Crossbow_C", "ExecuteUbergraph_WPN_Crossbow");

	Params::WPN_Crossbow_C_ExecuteUbergraph_WPN_Crossbow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_Crossbow.WPN_Crossbow_C.Get Reload Stat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGearStatEntry                   GearStatEntry                                          (Parm, OutParm)

void AWPN_Crossbow_C::Get_Reload_Stat(class AFSDPlayerState* PlayerState, struct FGearStatEntry* GearStatEntry) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Crossbow_C", "Get Reload Stat");

	Params::WPN_Crossbow_C_Get_Reload_Stat Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (GearStatEntry != nullptr)
		*GearStatEntry = std::move(Parms.GearStatEntry);
}


// Function WPN_Crossbow.WPN_Crossbow_C.GetEquippedSpecialArrow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState*                  Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Projectile                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_Crossbow_C::GetEquippedSpecialArrow(class AFSDPlayerState* Player, class UClass** Projectile) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Crossbow_C", "GetEquippedSpecialArrow");

	Params::WPN_Crossbow_C_GetEquippedSpecialArrow Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Projectile != nullptr)
		*Projectile = Parms.Projectile;
}


// Function WPN_Crossbow.WPN_Crossbow_C.GetGearStatEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWPN_Crossbow_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_Crossbow_C", "GetGearStatEntry");

	Params::WPN_Crossbow_C_GetGearStatEntry Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}
