#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUD_Mothership

#include "Basic.hpp"

#include "BP_HUD_Mothership_classes.hpp"
#include "BP_HUD_Mothership_parameters.hpp"


namespace SDK
{

// Function BP_HUD_Mothership.BP_HUD_Mothership_C.ExecuteUbergraph_BP_HUD_Mothership
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUD_Mothership_C::ExecuteUbergraph_BP_HUD_Mothership(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUD_Mothership_C", "ExecuteUbergraph_BP_HUD_Mothership");

	Params::BP_HUD_Mothership_C_ExecuteUbergraph_BP_HUD_Mothership Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HUD_Mothership.BP_HUD_Mothership_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUD_Mothership_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUD_Mothership_C", "ReceiveEndPlay");

	Params::BP_HUD_Mothership_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HUD_Mothership.BP_HUD_Mothership_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HUD_Mothership_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUD_Mothership_C", "ReceiveTick");

	Params::BP_HUD_Mothership_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HUD_Mothership.BP_HUD_Mothership_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HUD_Mothership_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUD_Mothership_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HUD_Mothership.BP_HUD_Mothership_C.ShouldShow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HUD_Mothership_C::ShouldShow(bool* Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HUD_Mothership_C", "ShouldShow");

	Params::BP_HUD_Mothership_C_ShouldShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;
}

}
