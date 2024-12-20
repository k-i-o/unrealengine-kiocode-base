#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTriggerZone_Indoor

#include "Basic.hpp"

#include "BP_MissionTriggerZone_Indoor_classes.hpp"
#include "BP_MissionTriggerZone_Indoor_parameters.hpp"


namespace SDK
{

// Function BP_MissionTriggerZone_Indoor.BP_MissionTriggerZone_Indoor_C.Portal_OnValidatedOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MissionTriggerZone_Indoor_C::Portal_OnValidatedOverlap__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTriggerZone_Indoor_C", "Portal_OnValidatedOverlap__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MissionTriggerZone_Indoor.BP_MissionTriggerZone_Indoor_C.Portal_OnValidatedEndOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MissionTriggerZone_Indoor_C::Portal_OnValidatedEndOverlap__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTriggerZone_Indoor_C", "Portal_OnValidatedEndOverlap__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MissionTriggerZone_Indoor.BP_MissionTriggerZone_Indoor_C.ExecuteUbergraph_BP_MissionTriggerZone_Indoor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionTriggerZone_Indoor_C::ExecuteUbergraph_BP_MissionTriggerZone_Indoor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTriggerZone_Indoor_C", "ExecuteUbergraph_BP_MissionTriggerZone_Indoor");

	Params::BP_MissionTriggerZone_Indoor_C_ExecuteUbergraph_BP_MissionTriggerZone_Indoor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissionTriggerZone_Indoor.BP_MissionTriggerZone_Indoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MissionTriggerZone_Indoor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTriggerZone_Indoor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MissionTriggerZone_Indoor.BP_MissionTriggerZone_Indoor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionTriggerZone_Indoor_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTriggerZone_Indoor_C", "ReceiveEndPlay");

	Params::BP_MissionTriggerZone_Indoor_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissionTriggerZone_Indoor.BP_MissionTriggerZone_Indoor_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionTriggerZone_Indoor_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTriggerZone_Indoor_C", "ReceiveActorBeginOverlap");

	Params::BP_MissionTriggerZone_Indoor_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissionTriggerZone_Indoor.BP_MissionTriggerZone_Indoor_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionTriggerZone_Indoor_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTriggerZone_Indoor_C", "ReceiveActorEndOverlap");

	Params::BP_MissionTriggerZone_Indoor_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

