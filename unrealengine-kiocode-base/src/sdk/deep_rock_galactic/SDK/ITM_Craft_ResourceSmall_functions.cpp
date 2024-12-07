#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Craft_ResourceSmall

#include "Basic.hpp"

#include "ITM_Craft_ResourceSmall_classes.hpp"
#include "ITM_Craft_ResourceSmall_parameters.hpp"


namespace SDK
{

// Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.ExecuteUbergraph_ITM_Craft_ResourceSmall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Craft_ResourceSmall_C::ExecuteUbergraph_ITM_Craft_ResourceSmall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Craft_ResourceSmall_C", "ExecuteUbergraph_ITM_Craft_ResourceSmall");

	Params::ITM_Craft_ResourceSmall_C_ExecuteUbergraph_ITM_Craft_ResourceSmall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Craft_ResourceSmall_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Craft_ResourceSmall_C", "PreConstruct");

	Params::ITM_Craft_ResourceSmall_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.SetAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Craft_ResourceSmall_C::SetAmount(float InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Craft_ResourceSmall_C", "SetAmount");

	Params::ITM_Craft_ResourceSmall_C_SetAmount Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Craft_ResourceSmall_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Craft_ResourceSmall_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

