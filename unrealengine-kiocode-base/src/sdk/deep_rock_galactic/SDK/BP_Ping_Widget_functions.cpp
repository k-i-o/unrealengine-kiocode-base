#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ping_Widget

#include "Basic.hpp"

#include "BP_Ping_Widget_classes.hpp"
#include "BP_Ping_Widget_parameters.hpp"


namespace SDK
{

// Function BP_Ping_Widget.BP_Ping_Widget_C.ExecuteUbergraph_BP_Ping_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ping_Widget_C::ExecuteUbergraph_BP_Ping_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ping_Widget_C", "ExecuteUbergraph_BP_Ping_Widget");

	Params::BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ping_Widget.BP_Ping_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Ping_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ping_Widget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
