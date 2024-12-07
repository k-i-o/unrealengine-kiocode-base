#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WormholeLocation_Base

#include "Basic.hpp"

#include "BP_WormholeLocation_Base_classes.hpp"
#include "BP_WormholeLocation_Base_parameters.hpp"


namespace SDK
{

// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.ExecuteUbergraph_BP_WormholeLocation_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WormholeLocation_Base_C::ExecuteUbergraph_BP_WormholeLocation_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WormholeLocation_Base_C", "ExecuteUbergraph_BP_WormholeLocation_Base");

	Params::BP_WormholeLocation_Base_C_ExecuteUbergraph_BP_WormholeLocation_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerLeaveLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WormholeLocation_Base_C::OnPlayerLeaveLocation(class APlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WormholeLocation_Base_C", "OnPlayerLeaveLocation");

	Params::BP_WormholeLocation_Base_C_OnPlayerLeaveLocation Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerEnterLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WormholeLocation_Base_C::OnPlayerEnterLocation(class APlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WormholeLocation_Base_C", "OnPlayerEnterLocation");

	Params::BP_WormholeLocation_Base_C_OnPlayerEnterLocation Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}

}

