#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_HUD_BracketWindowSmall

#include "Basic.hpp"

#include "Basic_HUD_BracketWindowSmall_classes.hpp"
#include "Basic_HUD_BracketWindowSmall_parameters.hpp"


namespace SDK
{

// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_HUD_BracketWindowSmall_C::ExecuteUbergraph_Basic_HUD_BracketWindowSmall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_HUD_BracketWindowSmall_C", "ExecuteUbergraph_Basic_HUD_BracketWindowSmall");

	Params::Basic_HUD_BracketWindowSmall_C_ExecuteUbergraph_Basic_HUD_BracketWindowSmall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_HUD_BracketWindowSmall_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_HUD_BracketWindowSmall_C", "PreConstruct");

	Params::Basic_HUD_BracketWindowSmall_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENUM_MenuColors                         Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_HUD_BracketWindowSmall_C::SetEdgeColor(ENUM_MenuColors Input)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_HUD_BracketWindowSmall_C", "SetEdgeColor");

	Params::Basic_HUD_BracketWindowSmall_C_SetEdgeColor Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);
}

}
