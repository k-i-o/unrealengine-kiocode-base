#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_JettyBoots_Character

#include "Basic.hpp"

#include "UI_JettyBoots_Character_classes.hpp"
#include "UI_JettyBoots_Character_parameters.hpp"


namespace SDK
{

// Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.ExecuteUbergraph_UI_JettyBoots_Character
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Character_C::ExecuteUbergraph_UI_JettyBoots_Character(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Character_C", "ExecuteUbergraph_UI_JettyBoots_Character");

	Params::UI_JettyBoots_Character_C_ExecuteUbergraph_UI_JettyBoots_Character Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.OnEventActiveChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFSDEvent*                        InFsdEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Character_C::OnEventActiveChanged_Event(const class UFSDEvent* InFsdEvent, bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Character_C", "OnEventActiveChanged_Event");

	Params::UI_JettyBoots_Character_C_OnEventActiveChanged_Event Parms{};

	Parms.InFsdEvent = InFsdEvent;
	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_JettyBoots_Character_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Character_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.SetJetActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InJetActive                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutValueChanged                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutJetActive                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Character_C::SetJetActive(bool InJetActive, bool* OutValueChanged, bool* OutJetActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Character_C", "SetJetActive");

	Params::UI_JettyBoots_Character_C_SetJetActive Parms{};

	Parms.InJetActive = InJetActive;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValueChanged != nullptr)
		*OutValueChanged = Parms.OutValueChanged;

	if (OutJetActive != nullptr)
		*OutJetActive = Parms.OutJetActive;
}


// Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Set Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDead                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Character_C::Set_Dead(bool InIsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Character_C", "Set Dead");

	Params::UI_JettyBoots_Character_C_Set_Dead Parms{};

	Parms.InIsDead = InIsDead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Set Safe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSafe                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Character_C::Set_Safe(bool InIsSafe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Character_C", "Set Safe");

	Params::UI_JettyBoots_Character_C_Set_Safe Parms{};

	Parms.InIsSafe = InIsSafe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.CheckFSDEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Character_C::CheckFSDEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Character_C", "CheckFSDEvents");

	UObject::ProcessEvent(Func, nullptr);
}

}
