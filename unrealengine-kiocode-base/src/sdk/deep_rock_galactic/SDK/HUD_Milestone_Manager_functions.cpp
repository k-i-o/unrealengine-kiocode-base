#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Milestone_Manager

#include "Basic.hpp"

#include "HUD_Milestone_Manager_classes.hpp"
#include "HUD_Milestone_Manager_parameters.hpp"


namespace SDK
{

// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.ExecuteUbergraph_HUD_Milestone_Manager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Milestone_Manager_C::ExecuteUbergraph_HUD_Milestone_Manager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Milestone_Manager_C", "ExecuteUbergraph_HUD_Milestone_Manager");

	Params::HUD_Milestone_Manager_C_ExecuteUbergraph_HUD_Milestone_Manager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.OnMilestoneReached
// (BlueprintCallable, BlueprintEvent)

void UHUD_Milestone_Manager_C::OnMilestoneReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Milestone_Manager_C", "OnMilestoneReached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Milestone_Manager_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Milestone_Manager_C", "PreConstruct");

	Params::HUD_Milestone_Manager_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
