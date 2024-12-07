#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LockOn_Counter_Entry

#include "Basic.hpp"

#include "UI_LockOn_Counter_Entry_classes.hpp"
#include "UI_LockOn_Counter_Entry_parameters.hpp"


namespace SDK
{

// Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewIsOn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewIsLimit                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LockOn_Counter_Entry_C::SetState(bool NewIsOn, bool NewIsLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LockOn_Counter_Entry_C", "SetState");

	Params::UI_LockOn_Counter_Entry_C_SetState Parms{};

	Parms.NewIsOn = NewIsOn;
	Parms.NewIsLimit = NewIsLimit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LockOn_Counter_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LockOn_Counter_Entry_C", "PreConstruct");

	Params::UI_LockOn_Counter_Entry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.ExecuteUbergraph_UI_LockOn_Counter_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LockOn_Counter_Entry_C::ExecuteUbergraph_UI_LockOn_Counter_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LockOn_Counter_Entry_C", "ExecuteUbergraph_UI_LockOn_Counter_Entry");

	Params::UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

