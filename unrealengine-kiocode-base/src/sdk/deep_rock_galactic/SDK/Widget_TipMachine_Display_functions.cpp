#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Widget_TipMachine_Display

#include "Basic.hpp"

#include "Widget_TipMachine_Display_classes.hpp"
#include "Widget_TipMachine_Display_parameters.hpp"


namespace SDK
{

// Function Widget_TipMachine_Display.Widget_TipMachine_Display_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TipMachine_Display_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_TipMachine_Display_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Widget_TipMachine_Display.Widget_TipMachine_Display_C.ExecuteUbergraph_Widget_TipMachine_Display
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TipMachine_Display_C::ExecuteUbergraph_Widget_TipMachine_Display(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_TipMachine_Display_C", "ExecuteUbergraph_Widget_TipMachine_Display");

	Params::Widget_TipMachine_Display_C_ExecuteUbergraph_Widget_TipMachine_Display Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

