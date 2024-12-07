#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WidgetGravitySwitch

#include "Basic.hpp"

#include "WidgetGravitySwitch_classes.hpp"
#include "WidgetGravitySwitch_parameters.hpp"


namespace SDK
{

// Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetGravitySwitch_C::SetColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetGravitySwitch_C", "SetColor");

	Params::WidgetGravitySwitch_C_SetColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewName                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidgetGravitySwitch_C::SetPlayerName(const class FText& NewName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WidgetGravitySwitch_C", "SetPlayerName");

	Params::WidgetGravitySwitch_C_SetPlayerName Parms{};

	Parms.NewName = std::move(NewName);

	UObject::ProcessEvent(Func, &Parms);
}

}

