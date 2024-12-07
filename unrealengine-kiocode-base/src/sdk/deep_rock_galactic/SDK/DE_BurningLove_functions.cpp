#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DE_BurningLove

#include "Basic.hpp"

#include "DE_BurningLove_classes.hpp"
#include "DE_BurningLove_parameters.hpp"


namespace SDK
{

// Function DE_BurningLove.DE_BurningLove_C.ExecuteUbergraph_DE_BurningLove
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDE_BurningLove_C::ExecuteUbergraph_DE_BurningLove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_BurningLove_C", "ExecuteUbergraph_DE_BurningLove");

	Params::DE_BurningLove_C_ExecuteUbergraph_DE_BurningLove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DE_BurningLove.DE_BurningLove_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_BurningLove_C::OnStopEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_BurningLove_C", "OnStopEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DE_BurningLove.DE_BurningLove_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Param_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDE_BurningLove_C::OnStartEffect(class APlayerCharacter* Param_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_BurningLove_C", "OnStartEffect");

	Params::DE_BurningLove_C_OnStartEffect Parms{};

	Parms.Param_Character = Param_Character;

	UObject::ProcessEvent(Func, &Parms);
}

}

