#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CompleteMissionScreen_DorettaHead

#include "Basic.hpp"

#include "BP_CompleteMissionScreen_DorettaHead_classes.hpp"
#include "BP_CompleteMissionScreen_DorettaHead_parameters.hpp"


namespace SDK
{

// Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CompleteMissionScreen_DorettaHead_C::ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompleteMissionScreen_DorettaHead_C", "ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead");

	Params::BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.StartPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharselectionCameraLocation            SelectionLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CompleteMissionScreen_DorettaHead_C::StartPlay(ECharselectionCameraLocation SelectionLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompleteMissionScreen_DorettaHead_C", "StartPlay");

	Params::BP_CompleteMissionScreen_DorettaHead_C_StartPlay Parms{};

	Parms.SelectionLocation = SelectionLocation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CompleteMissionScreen_DorettaHead_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CompleteMissionScreen_DorettaHead_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
