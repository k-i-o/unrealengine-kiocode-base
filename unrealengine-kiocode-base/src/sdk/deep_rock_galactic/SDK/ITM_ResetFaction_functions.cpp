#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_ResetFaction

#include "Basic.hpp"

#include "ITM_ResetFaction_classes.hpp"
#include "ITM_ResetFaction_parameters.hpp"


namespace SDK
{

// Function ITM_ResetFaction.ITM_ResetFaction_C.CheckState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ResetFaction_C::CheckState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ResetFaction_C", "CheckState__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.ExecuteUbergraph_ITM_ResetFaction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ResetFaction_C::ExecuteUbergraph_ITM_ResetFaction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ResetFaction_C", "ExecuteUbergraph_ITM_ResetFaction");

	Params::ITM_ResetFaction_C_ExecuteUbergraph_ITM_ResetFaction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.OnFactionSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Changed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ResetFaction_C::OnFactionSwitch(bool Changed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ResetFaction_C", "OnFactionSwitch");

	Params::ITM_ResetFaction_C_OnFactionSwitch Parms{};

	Parms.Changed = Changed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ResetFaction_C::BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ResetFaction_C", "BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.Set Faction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction*            Faction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ResetFaction_C::Set_Faction(class UCommunityGoalFaction* Faction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ResetFaction_C", "Set Faction");

	Params::ITM_ResetFaction_C_Set_Faction Parms{};

	Parms.Faction = Faction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ResetFaction_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ResetFaction_C", "PreConstruct");

	Params::ITM_ResetFaction_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.CurrentFactionID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UITM_ResetFaction_C::CurrentFactionID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ResetFaction_C", "CurrentFactionID");

	Params::ITM_ResetFaction_C_CurrentFactionID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
