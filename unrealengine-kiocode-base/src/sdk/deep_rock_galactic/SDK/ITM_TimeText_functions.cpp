#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_TimeText

#include "Basic.hpp"

#include "ITM_TimeText_classes.hpp"
#include "ITM_TimeText_parameters.hpp"


namespace SDK
{

// Function ITM_TimeText.ITM_TimeText_C.ExecuteUbergraph_ITM_TimeText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_TimeText_C::ExecuteUbergraph_ITM_TimeText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TimeText_C", "ExecuteUbergraph_ITM_TimeText");

	Params::ITM_TimeText_C_ExecuteUbergraph_ITM_TimeText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TimeText.ITM_TimeText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_TimeText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TimeText_C", "PreConstruct");

	Params::ITM_TimeText_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TimeText.ITM_TimeText_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                        Timespan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowDays                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_TimeText_C::SetData(const struct FTimespan& Timespan, const bool ShowDays)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TimeText_C", "SetData");

	Params::ITM_TimeText_C_SetData Parms{};

	Parms.Timespan = std::move(Timespan);
	Parms.ShowDays = ShowDays;

	UObject::ProcessEvent(Func, &Parms);
}

}
