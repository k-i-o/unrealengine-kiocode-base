#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDCharacterLeanHandler

#include "Basic.hpp"

#include "BP_HDCharacterLeanHandler_classes.hpp"
#include "BP_HDCharacterLeanHandler_parameters.hpp"


namespace SDK
{

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ExecuteUbergraph_BP_HDCharacterLeanHandler
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::ExecuteUbergraph_BP_HDCharacterLeanHandler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "ExecuteUbergraph_BP_HDCharacterLeanHandler");

	Params::BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::ReceiveTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "ReceiveTick");

	Params::BP_HDCharacterLeanHandler_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPMeshComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           FPPMesh                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::GetFPPMeshComp(class USkeletalMeshComponent** FPPMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "GetFPPMeshComp");

	Params::BP_HDCharacterLeanHandler_C_GetFPPMeshComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FPPMesh != nullptr)
		*FPPMesh = Parms.FPPMesh;
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPCameraComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraComponent*                 FPPCamera                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::GetFPPCameraComp(class UCameraComponent** FPPCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "GetFPPCameraComp");

	Params::BP_HDCharacterLeanHandler_C_GetFPPCameraComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FPPCamera != nullptr)
		*FPPCamera = Parms.FPPCamera;
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPSpringArmComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USpringArmComponent*              FPPSpringArm                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::GetFPPSpringArmComp(class USpringArmComponent** FPPSpringArm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "GetFPPSpringArmComp");

	Params::BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FPPSpringArm != nullptr)
		*FPPSpringArm = Parms.FPPSpringArm;
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickXOffset
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::TickXOffset(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "TickXOffset");

	Params::BP_HDCharacterLeanHandler_C_TickXOffset Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickYOffset
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::TickYOffset(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "TickYOffset");

	Params::BP_HDCharacterLeanHandler_C_TickYOffset Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickRot
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDCharacterLeanHandler_C::TickRot(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDCharacterLeanHandler_C", "TickRot");

	Params::BP_HDCharacterLeanHandler_C_TickRot Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

