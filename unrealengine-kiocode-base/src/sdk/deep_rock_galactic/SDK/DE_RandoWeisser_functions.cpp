#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DE_RandoWeisser

#include "Basic.hpp"

#include "DE_RandoWeisser_classes.hpp"
#include "DE_RandoWeisser_parameters.hpp"


namespace SDK
{

// Function DE_RandoWeisser.DE_RandoWeisser_C.ExecuteUbergraph_DE_RandoWeisser
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDE_RandoWeisser_C::ExecuteUbergraph_DE_RandoWeisser(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_RandoWeisser_C", "ExecuteUbergraph_DE_RandoWeisser");

	Params::DE_RandoWeisser_C_ExecuteUbergraph_DE_RandoWeisser Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DE_RandoWeisser.DE_RandoWeisser_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_RandoWeisser_C::OnStopEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_RandoWeisser_C", "OnStopEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DE_RandoWeisser.DE_RandoWeisser_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Param_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDE_RandoWeisser_C::OnStartEffect(class APlayerCharacter* Param_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DE_RandoWeisser_C", "OnStartEffect");

	Params::DE_RandoWeisser_C_OnStartEffect Parms{};

	Parms.Param_Character = Param_Character;

	UObject::ProcessEvent(Func, &Parms);
}

}
