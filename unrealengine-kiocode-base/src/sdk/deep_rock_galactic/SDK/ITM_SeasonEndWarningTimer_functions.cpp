#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SeasonEndWarningTimer

#include "Basic.hpp"

#include "ITM_SeasonEndWarningTimer_classes.hpp"
#include "ITM_SeasonEndWarningTimer_parameters.hpp"


namespace SDK
{

// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.ExecuteUbergraph_ITM_SeasonEndWarningTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_SeasonEndWarningTimer_C::ExecuteUbergraph_ITM_SeasonEndWarningTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "ExecuteUbergraph_ITM_SeasonEndWarningTimer");

	Params::ITM_SeasonEndWarningTimer_C_ExecuteUbergraph_ITM_SeasonEndWarningTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_SeasonEndWarningTimer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "PreConstruct");

	Params::ITM_SeasonEndWarningTimer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.Stop Monitoring
// (BlueprintCallable, BlueprintEvent)

void UITM_SeasonEndWarningTimer_C::Stop_Monitoring()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "Stop Monitoring");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.Begin Monitoring
// (BlueprintCallable, BlueprintEvent)

void UITM_SeasonEndWarningTimer_C::Begin_Monitoring()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "Begin Monitoring");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_SeasonEndWarningTimer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_SeasonEndWarningTimer_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.OnCheckForUpdateComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUpdatePending                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_SeasonEndWarningTimer_C::OnCheckForUpdateComplete(bool IsUpdatePending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "OnCheckForUpdateComplete");

	Params::ITM_SeasonEndWarningTimer_C_OnCheckForUpdateComplete Parms{};

	Parms.IsUpdatePending = IsUpdatePending;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.SetPreviewState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_SeasonEndWarningTimer_C::SetPreviewState(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "SetPreviewState");

	Params::ITM_SeasonEndWarningTimer_C_SetPreviewState Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.Int2Text
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)

void UITM_SeasonEndWarningTimer_C::Int2Text(int32 InValue, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "Int2Text");

	Params::ITM_SeasonEndWarningTimer_C_Int2Text Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.On Request Season End Complete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        EndTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ValidExpireTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_SeasonEndWarningTimer_C::On_Request_Season_End_Complete(const struct FDateTime& EndTime, bool ValidExpireTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "On Request Season End Complete");

	Params::ITM_SeasonEndWarningTimer_C_On_Request_Season_End_Complete Parms{};

	Parms.EndTime = std::move(EndTime);
	Parms.ValidExpireTime = ValidExpireTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_SeasonEndWarningTimer.ITM_SeasonEndWarningTimer_C.GetFormattedDateString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                        Remaining_Time                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Remaining_time_Text                                    (Parm, OutParm)

void UITM_SeasonEndWarningTimer_C::GetFormattedDateString(const struct FTimespan& Remaining_Time, class FText* Remaining_time_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonEndWarningTimer_C", "GetFormattedDateString");

	Params::ITM_SeasonEndWarningTimer_C_GetFormattedDateString Parms{};

	Parms.Remaining_Time = std::move(Remaining_Time);

	UObject::ProcessEvent(Func, &Parms);

	if (Remaining_time_Text != nullptr)
		*Remaining_time_Text = std::move(Parms.Remaining_time_Text);
}

}
