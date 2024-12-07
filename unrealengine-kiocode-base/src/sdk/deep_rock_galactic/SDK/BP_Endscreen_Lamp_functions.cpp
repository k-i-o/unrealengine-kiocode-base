#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Endscreen_Lamp

#include "Basic.hpp"

#include "BP_Endscreen_Lamp_classes.hpp"
#include "BP_Endscreen_Lamp_parameters.hpp"


namespace SDK
{

// Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ExecuteUbergraph_BP_Endscreen_Lamp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Endscreen_Lamp_C::ExecuteUbergraph_BP_Endscreen_Lamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Endscreen_Lamp_C", "ExecuteUbergraph_BP_Endscreen_Lamp");

	Params::BP_Endscreen_Lamp_C_ExecuteUbergraph_BP_Endscreen_Lamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Endscreen_Lamp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Endscreen_Lamp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Endscreen_Lamp_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Endscreen_Lamp_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UpdateLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Endscreen_Lamp_C::UpdateLights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Endscreen_Lamp_C", "UpdateLights");

	UObject::ProcessEvent(Func, nullptr);
}

}

