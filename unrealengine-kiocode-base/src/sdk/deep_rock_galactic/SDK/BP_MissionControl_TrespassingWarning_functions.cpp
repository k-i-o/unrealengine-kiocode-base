#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionControl_TrespassingWarning

#include "Basic.hpp"

#include "BP_MissionControl_TrespassingWarning_classes.hpp"
#include "BP_MissionControl_TrespassingWarning_parameters.hpp"


namespace SDK
{

// Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionControl_TrespassingWarning_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionControl_TrespassingWarning_C", "ReceiveActorBeginOverlap");

	Params::BP_MissionControl_TrespassingWarning_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ExecuteUbergraph_BP_MissionControl_TrespassingWarning
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionControl_TrespassingWarning_C::ExecuteUbergraph_BP_MissionControl_TrespassingWarning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionControl_TrespassingWarning_C", "ExecuteUbergraph_BP_MissionControl_TrespassingWarning");

	Params::BP_MissionControl_TrespassingWarning_C_ExecuteUbergraph_BP_MissionControl_TrespassingWarning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
