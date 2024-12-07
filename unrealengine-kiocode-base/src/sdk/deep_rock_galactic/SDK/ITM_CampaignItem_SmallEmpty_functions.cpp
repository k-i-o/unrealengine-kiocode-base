#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CampaignItem_SmallEmpty

#include "Basic.hpp"

#include "ITM_CampaignItem_SmallEmpty_classes.hpp"
#include "ITM_CampaignItem_SmallEmpty_parameters.hpp"


namespace SDK
{

// Function ITM_CampaignItem_SmallEmpty.ITM_CampaignItem_SmallEmpty_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CampaignItem_SmallEmpty_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CampaignItem_SmallEmpty_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_CampaignItem_SmallEmpty.ITM_CampaignItem_SmallEmpty_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_CampaignItem_SmallEmpty_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CampaignItem_SmallEmpty_C", "PreConstruct");

	Params::ITM_CampaignItem_SmallEmpty_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_CampaignItem_SmallEmpty.ITM_CampaignItem_SmallEmpty_C.ExecuteUbergraph_ITM_CampaignItem_SmallEmpty
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_CampaignItem_SmallEmpty_C::ExecuteUbergraph_ITM_CampaignItem_SmallEmpty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CampaignItem_SmallEmpty_C", "ExecuteUbergraph_ITM_CampaignItem_SmallEmpty");

	Params::ITM_CampaignItem_SmallEmpty_C_ExecuteUbergraph_ITM_CampaignItem_SmallEmpty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

