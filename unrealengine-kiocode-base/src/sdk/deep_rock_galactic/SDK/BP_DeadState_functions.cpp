#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeadState

#include "Basic.hpp"

#include "BP_DeadState_classes.hpp"
#include "BP_DeadState_parameters.hpp"


namespace SDK
{

// Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeadState_C::ExecuteUbergraph_BP_DeadState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeadState_C", "ExecuteUbergraph_BP_DeadState");

	Params::BP_DeadState_C_ExecuteUbergraph_BP_DeadState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeadState.BP_DeadState_C.SetDeathParameters
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_RespawnDelay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EffectDelay                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     Param_DeathMontage                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*                  Param_DeathEffect                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseAnimationTimeAsRespawnTime                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DeadState_C::SetDeathParameters(float Param_RespawnDelay, float EffectDelay, class UAnimMontage* Param_DeathMontage, class UParticleSystem* Param_DeathEffect, bool UseAnimationTimeAsRespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeadState_C", "SetDeathParameters");

	Params::BP_DeadState_C_SetDeathParameters Parms{};

	Parms.Param_RespawnDelay = Param_RespawnDelay;
	Parms.EffectDelay = EffectDelay;
	Parms.Param_DeathMontage = Param_DeathMontage;
	Parms.Param_DeathEffect = Param_DeathEffect;
	Parms.UseAnimationTimeAsRespawnTime = UseAnimationTimeAsRespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter
// (Event, Protected, BlueprintEvent)

void UBP_DeadState_C::ReceiveStateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeadState_C", "ReceiveStateEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeadState.BP_DeadState_C.ReceiveStateExit
// (Event, Protected, BlueprintEvent)

void UBP_DeadState_C::ReceiveStateExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeadState_C", "ReceiveStateExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_DeadState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeadState_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
