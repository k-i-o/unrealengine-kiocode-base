#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Community_Console_ClaimReward

#include "Basic.hpp"

#include "ITM_Community_Console_ClaimReward_classes.hpp"
#include "ITM_Community_Console_ClaimReward_parameters.hpp"


namespace SDK
{

// Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.ExecuteUbergraph_ITM_Community_Console_ClaimReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Community_Console_ClaimReward_C::ExecuteUbergraph_ITM_Community_Console_ClaimReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Community_Console_ClaimReward_C", "ExecuteUbergraph_ITM_Community_Console_ClaimReward");

	Params::ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Community_Console_ClaimReward_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Community_Console_ClaimReward_C", "PreConstruct");

	Params::ITM_Community_Console_ClaimReward_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
