#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_RetirementRewards

#include "Basic.hpp"

#include "WND_RetirementRewards_classes.hpp"
#include "WND_RetirementRewards_parameters.hpp"


namespace SDK
{

// Function WND_RetirementRewards.WND_RetirementRewards_C.GetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FClaimableRewardView             OutData                                                (Parm, OutParm, ContainsInstancedReference)

void UWND_RetirementRewards_C::GetData(struct FClaimableRewardView* OutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_RetirementRewards_C", "GetData");

	Params::WND_RetirementRewards_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);
}

}

