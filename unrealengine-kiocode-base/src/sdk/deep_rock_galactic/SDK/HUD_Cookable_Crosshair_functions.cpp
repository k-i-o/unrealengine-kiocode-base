#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Cookable_Crosshair

#include "Basic.hpp"

#include "HUD_Cookable_Crosshair_classes.hpp"
#include "HUD_Cookable_Crosshair_parameters.hpp"


namespace SDK
{

// Function HUD_Cookable_Crosshair.HUD_Cookable_Crosshair_C.ExecuteUbergraph_HUD_Cookable_Crosshair
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Cookable_Crosshair_C::ExecuteUbergraph_HUD_Cookable_Crosshair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Cookable_Crosshair_C", "ExecuteUbergraph_HUD_Cookable_Crosshair");

	Params::HUD_Cookable_Crosshair_C_ExecuteUbergraph_HUD_Cookable_Crosshair Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Cookable_Crosshair.HUD_Cookable_Crosshair_C.UpdateCookTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Cookable_Crosshair_C::UpdateCookTime(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Cookable_Crosshair_C", "UpdateCookTime");

	Params::HUD_Cookable_Crosshair_C_UpdateCookTime Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}

}
