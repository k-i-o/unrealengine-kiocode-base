#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TSK_FindClosestPoint

#include "Basic.hpp"

#include "TSK_FindClosestPoint_classes.hpp"
#include "TSK_FindClosestPoint_parameters.hpp"


namespace SDK
{

// Function TSK_FindClosestPoint.TSK_FindClosestPoint_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTSK_FindClosestPoint_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TSK_FindClosestPoint_C", "ReceiveExecuteAI");

	Params::TSK_FindClosestPoint_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TSK_FindClosestPoint.TSK_FindClosestPoint_C.ExecuteUbergraph_TSK_FindClosestPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTSK_FindClosestPoint_C::ExecuteUbergraph_TSK_FindClosestPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TSK_FindClosestPoint_C", "ExecuteUbergraph_TSK_FindClosestPoint");

	Params::TSK_FindClosestPoint_C_ExecuteUbergraph_TSK_FindClosestPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

