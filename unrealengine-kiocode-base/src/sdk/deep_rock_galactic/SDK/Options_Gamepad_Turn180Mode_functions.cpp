#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Gamepad_Turn180Mode

#include "Basic.hpp"

#include "Options_Gamepad_Turn180Mode_classes.hpp"
#include "Options_Gamepad_Turn180Mode_parameters.hpp"


namespace SDK
{

// Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.ExecuteUbergraph_Options_Gamepad_Turn180Mode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_Gamepad_Turn180Mode_C::ExecuteUbergraph_Options_Gamepad_Turn180Mode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Gamepad_Turn180Mode_C", "ExecuteUbergraph_Options_Gamepad_Turn180Mode");

	Params::Options_Gamepad_Turn180Mode_C_ExecuteUbergraph_Options_Gamepad_Turn180Mode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_Gamepad_Turn180Mode_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Gamepad_Turn180Mode_C", "PreConstruct");

	Params::Options_Gamepad_Turn180Mode_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptions_Gamepad_Turn180Mode_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Gamepad_Turn180Mode_C", "BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptions_Gamepad_Turn180Mode_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Gamepad_Turn180Mode_C", "BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.OnRefresh
// (BlueprintCallable, BlueprintEvent)

void UOptions_Gamepad_Turn180Mode_C::OnRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Gamepad_Turn180Mode_C", "OnRefresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Gamepad_Turn180Mode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Gamepad_Turn180Mode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.SetMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETurn180Mode                            InMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_Gamepad_Turn180Mode_C::SetMode(ETurn180Mode InMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Gamepad_Turn180Mode_C", "SetMode");

	Params::Options_Gamepad_Turn180Mode_C_SetMode Parms{};

	Parms.InMode = InMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_Gamepad_Turn180Mode_C::Next(bool Forward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Gamepad_Turn180Mode_C", "Next");

	Params::Options_Gamepad_Turn180Mode_C_Next Parms{};

	Parms.Forward = Forward;

	UObject::ProcessEvent(Func, &Parms);
}

}
