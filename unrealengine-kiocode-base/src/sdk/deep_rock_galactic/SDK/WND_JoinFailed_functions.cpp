#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_JoinFailed

#include "Basic.hpp"

#include "WND_JoinFailed_classes.hpp"
#include "WND_JoinFailed_parameters.hpp"


namespace SDK
{

// Function WND_JoinFailed.WND_JoinFailed_C.ExecuteUbergraph_WND_JoinFailed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_JoinFailed_C::ExecuteUbergraph_WND_JoinFailed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_JoinFailed_C", "ExecuteUbergraph_WND_JoinFailed");

	Params::WND_JoinFailed_C_ExecuteUbergraph_WND_JoinFailed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_JoinFailed.WND_JoinFailed_C.OnShown
// (Event, Protected, BlueprintEvent)

void UWND_JoinFailed_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_JoinFailed_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_JoinFailed.WND_JoinFailed_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UWND_JoinFailed_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_JoinFailed_C", "Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_JoinFailed.WND_JoinFailed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWND_JoinFailed_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_JoinFailed_C", "PreConstruct");

	Params::WND_JoinFailed_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_JoinFailed.WND_JoinFailed_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_JoinFailed_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_JoinFailed_C", "BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_JoinFailed.WND_JoinFailed_C.OnSuccess_EF9B242446B45E709293BAB20166BCB2
// (BlueprintCallable, BlueprintEvent)

void UWND_JoinFailed_C::OnSuccess_EF9B242446B45E709293BAB20166BCB2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_JoinFailed_C", "OnSuccess_EF9B242446B45E709293BAB20166BCB2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_JoinFailed.WND_JoinFailed_C.OnFailure_EF9B242446B45E709293BAB20166BCB2
// (BlueprintCallable, BlueprintEvent)

void UWND_JoinFailed_C::OnFailure_EF9B242446B45E709293BAB20166BCB2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_JoinFailed_C", "OnFailure_EF9B242446B45E709293BAB20166BCB2");

	UObject::ProcessEvent(Func, nullptr);
}

}

