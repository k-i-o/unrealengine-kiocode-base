#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SeasonLogo

#include "Basic.hpp"

#include "ITM_SeasonLogo_classes.hpp"
#include "ITM_SeasonLogo_parameters.hpp"


namespace SDK
{

// Function ITM_SeasonLogo.ITM_SeasonLogo_C.ExecuteUbergraph_ITM_SeasonLogo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_SeasonLogo_C::ExecuteUbergraph_ITM_SeasonLogo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonLogo_C", "ExecuteUbergraph_ITM_SeasonLogo");

	Params::ITM_SeasonLogo_C_ExecuteUbergraph_ITM_SeasonLogo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_SeasonLogo.ITM_SeasonLogo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_SeasonLogo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonLogo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_SeasonLogo.ITM_SeasonLogo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_SeasonLogo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonLogo_C", "PreConstruct");

	Params::ITM_SeasonLogo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_SeasonLogo.ITM_SeasonLogo_C.OnWindowClosed
// (BlueprintCallable, BlueprintEvent)

void UITM_SeasonLogo_C::OnWindowClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonLogo_C", "OnWindowClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_SeasonLogo.ITM_SeasonLogo_C.OnWindowOpened
// (BlueprintCallable, BlueprintEvent)

void UITM_SeasonLogo_C::OnWindowOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonLogo_C", "OnWindowOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_SeasonLogo.ITM_SeasonLogo_C.SetCounterHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InCounterHidden                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_SeasonLogo_C::SetCounterHidden(bool InCounterHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SeasonLogo_C", "SetCounterHidden");

	Params::ITM_SeasonLogo_C_SetCounterHidden Parms{};

	Parms.InCounterHidden = InCounterHidden;

	UObject::ProcessEvent(Func, &Parms);
}

}

