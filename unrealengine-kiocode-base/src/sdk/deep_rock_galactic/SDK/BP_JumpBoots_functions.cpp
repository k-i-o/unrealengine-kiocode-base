#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JumpBoots

#include "Basic.hpp"

#include "BP_JumpBoots_classes.hpp"
#include "BP_JumpBoots_parameters.hpp"


namespace SDK
{

// Function BP_JumpBoots.BP_JumpBoots_C.ExecuteUbergraph_BP_JumpBoots
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JumpBoots_C::ExecuteUbergraph_BP_JumpBoots(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JumpBoots_C", "ExecuteUbergraph_BP_JumpBoots");

	Params::BP_JumpBoots_C_ExecuteUbergraph_BP_JumpBoots Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JumpBoots.BP_JumpBoots_C.Receive_ActivatePerk
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JumpBoots_C::Receive_ActivatePerk(class APlayerCharacter* Character, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JumpBoots_C", "Receive_ActivatePerk");

	Params::BP_JumpBoots_C_Receive_ActivatePerk Parms{};

	Parms.Character = Character;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

