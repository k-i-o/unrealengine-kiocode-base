#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OxygenRich

#include "Basic.hpp"

#include "BP_OxygenRich_classes.hpp"
#include "BP_OxygenRich_parameters.hpp"


namespace SDK
{

// Function BP_OxygenRich.BP_OxygenRich_C.ExecuteUbergraph_BP_OxygenRich
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OxygenRich_C::ExecuteUbergraph_BP_OxygenRich(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OxygenRich_C", "ExecuteUbergraph_BP_OxygenRich");

	Params::BP_OxygenRich_C_ExecuteUbergraph_BP_OxygenRich Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OxygenRich.BP_OxygenRich_C.PlayerSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OxygenRich_C::PlayerSpawned(class APlayerCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OxygenRich_C", "PlayerSpawned");

	Params::BP_OxygenRich_C_PlayerSpawned Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OxygenRich.BP_OxygenRich_C.StartLogic
// (Event, Protected, BlueprintEvent)

void UBP_OxygenRich_C::StartLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OxygenRich_C", "StartLogic");

	UObject::ProcessEvent(Func, nullptr);
}

}
