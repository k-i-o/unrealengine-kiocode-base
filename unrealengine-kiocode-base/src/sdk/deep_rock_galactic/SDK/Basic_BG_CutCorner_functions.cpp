#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_BG_CutCorner

#include "Basic.hpp"

#include "Basic_BG_CutCorner_classes.hpp"
#include "Basic_BG_CutCorner_parameters.hpp"


namespace SDK
{

// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.ExecuteUbergraph_Basic_BG_CutCorner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BG_CutCorner_C::ExecuteUbergraph_Basic_BG_CutCorner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_C", "ExecuteUbergraph_Basic_BG_CutCorner");

	Params::Basic_BG_CutCorner_C_ExecuteUbergraph_Basic_BG_CutCorner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.SetBorderColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BG_CutCorner_C::SetBorderColor(const struct FLinearColor& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_C", "SetBorderColor");

	Params::Basic_BG_CutCorner_C_SetBorderColor Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_BG_CutCorner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_C", "PreConstruct");

	Params::Basic_BG_CutCorner_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
