#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DE_BlackoutStout

#include "Basic.hpp"

#include "DE_BlackoutStout_classes.hpp"
#include "DE_BlackoutStout_parameters.hpp"


namespace SDK
{

// Function DE_BlackoutStout.DE_BlackoutStout_C.ExecuteUbergraph_DE_BlackoutStout
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDE_BlackoutStout_C::ExecuteUbergraph_DE_BlackoutStout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_BlackoutStout_C", "ExecuteUbergraph_DE_BlackoutStout");

	Params::DE_BlackoutStout_C_ExecuteUbergraph_DE_BlackoutStout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DE_BlackoutStout.DE_BlackoutStout_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_BlackoutStout_C::OnStopEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_BlackoutStout_C", "OnStopEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DE_BlackoutStout.DE_BlackoutStout_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDE_BlackoutStout_C::OnStartEffect(class APlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_BlackoutStout_C", "OnStartEffect");

	Params::DE_BlackoutStout_C_OnStartEffect Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}

}
