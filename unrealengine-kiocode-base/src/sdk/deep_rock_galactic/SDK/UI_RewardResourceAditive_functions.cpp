#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RewardResourceAditive

#include "Basic.hpp"

#include "UI_RewardResourceAditive_classes.hpp"
#include "UI_RewardResourceAditive_parameters.hpp"


namespace SDK
{

// Function UI_RewardResourceAditive.UI_RewardResourceAditive_C.ExecuteUbergraph_UI_RewardResourceAditive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RewardResourceAditive_C::ExecuteUbergraph_UI_RewardResourceAditive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardResourceAditive_C", "ExecuteUbergraph_UI_RewardResourceAditive");

	Params::UI_RewardResourceAditive_C_ExecuteUbergraph_UI_RewardResourceAditive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RewardResourceAditive.UI_RewardResourceAditive_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RewardResourceAditive_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardResourceAditive_C", "PreConstruct");

	Params::UI_RewardResourceAditive_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

