#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LureTarget_HealthReadout

#include "Basic.hpp"

#include "LureTarget_HealthReadout_classes.hpp"
#include "LureTarget_HealthReadout_parameters.hpp"


namespace SDK
{

// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ULureTarget_HealthReadout_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LureTarget_HealthReadout_C", "SetText");

	Params::LureTarget_HealthReadout_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULureTarget_HealthReadout_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LureTarget_HealthReadout_C", "PreConstruct");

	Params::LureTarget_HealthReadout_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.ExecuteUbergraph_LureTarget_HealthReadout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULureTarget_HealthReadout_C::ExecuteUbergraph_LureTarget_HealthReadout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LureTarget_HealthReadout_C", "ExecuteUbergraph_LureTarget_HealthReadout");

	Params::LureTarget_HealthReadout_C_ExecuteUbergraph_LureTarget_HealthReadout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
