#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LockOn_TargetCounter

#include "Basic.hpp"

#include "UI_LockOn_TargetCounter_classes.hpp"
#include "UI_LockOn_TargetCounter_parameters.hpp"


namespace SDK
{

// Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_LockOn_TargetCounter_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LockOn_TargetCounter_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LockOn_TargetCounter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LockOn_TargetCounter_C", "PreConstruct");

	Params::UI_LockOn_TargetCounter_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.SetOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LockOn_TargetCounter_C::SetOn(bool InIsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LockOn_TargetCounter_C", "SetOn");

	Params::UI_LockOn_TargetCounter_C_SetOn Parms{};

	Parms.InIsOn = InIsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.Ping
// (BlueprintCallable, BlueprintEvent)

void UUI_LockOn_TargetCounter_C::Ping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LockOn_TargetCounter_C", "Ping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.ExecuteUbergraph_UI_LockOn_TargetCounter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LockOn_TargetCounter_C::ExecuteUbergraph_UI_LockOn_TargetCounter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LockOn_TargetCounter_C", "ExecuteUbergraph_UI_LockOn_TargetCounter");

	Params::UI_LockOn_TargetCounter_C_ExecuteUbergraph_UI_LockOn_TargetCounter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
