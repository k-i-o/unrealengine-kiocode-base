#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TSK_FaceTargetToCarve

#include "Basic.hpp"

#include "TSK_FaceTargetToCarve_classes.hpp"
#include "TSK_FaceTargetToCarve_parameters.hpp"


namespace SDK
{

// Function TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C.IsFacingTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Tank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTSK_FaceTargetToCarve_C::IsFacingTarget(class AActor* Tank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TSK_FaceTargetToCarve_C", "IsFacingTarget");

	Params::TSK_FaceTargetToCarve_C_IsFacingTarget Parms{};

	Parms.Tank = Tank;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTSK_FaceTargetToCarve_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TSK_FaceTargetToCarve_C", "ReceiveExecuteAI");

	Params::TSK_FaceTargetToCarve_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTSK_FaceTargetToCarve_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TSK_FaceTargetToCarve_C", "ReceiveAbortAI");

	Params::TSK_FaceTargetToCarve_C_ReceiveAbortAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C.ExecuteUbergraph_TSK_FaceTargetToCarve
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTSK_FaceTargetToCarve_C::ExecuteUbergraph_TSK_FaceTargetToCarve(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TSK_FaceTargetToCarve_C", "ExecuteUbergraph_TSK_FaceTargetToCarve");

	Params::TSK_FaceTargetToCarve_C_ExecuteUbergraph_TSK_FaceTargetToCarve Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
