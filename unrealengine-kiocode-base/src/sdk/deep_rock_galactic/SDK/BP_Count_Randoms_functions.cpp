#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Count_Randoms

#include "Basic.hpp"

#include "BP_Count_Randoms_classes.hpp"
#include "BP_Count_Randoms_parameters.hpp"


namespace SDK
{

// Function BP_Count_Randoms.BP_Count_Randoms_C.ExecuteUbergraph_BP_Count_Randoms
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Count_Randoms_C::ExecuteUbergraph_BP_Count_Randoms(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Count_Randoms_C", "ExecuteUbergraph_BP_Count_Randoms");

	Params::BP_Count_Randoms_C_ExecuteUbergraph_BP_Count_Randoms Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Count_Randoms.BP_Count_Randoms_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Count_Randoms_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Count_Randoms_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Count_Randoms.BP_Count_Randoms_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Count_Randoms_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Count_Randoms_C", "ReceiveTick");

	Params::BP_Count_Randoms_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
