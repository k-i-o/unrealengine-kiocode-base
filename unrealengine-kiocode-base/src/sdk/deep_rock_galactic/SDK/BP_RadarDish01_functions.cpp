#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RadarDish01

#include "Basic.hpp"

#include "BP_RadarDish01_classes.hpp"
#include "BP_RadarDish01_parameters.hpp"


namespace SDK
{

// Function BP_RadarDish01.BP_RadarDish01_C.SetRotationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URotatingMovementComponent*       Self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_RotationRate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadarDish01_C::SetRotationRate(class URotatingMovementComponent* Self2, float Param_RotationRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadarDish01_C", "SetRotationRate");

	Params::BP_RadarDish01_C_SetRotationRate Parms{};

	Parms.Self2 = Self2;
	Parms.Param_RotationRate = Param_RotationRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RadarDish01.BP_RadarDish01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RadarDish01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadarDish01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RadarDish01.BP_RadarDish01_C.ExecuteUbergraph_BP_RadarDish01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadarDish01_C::ExecuteUbergraph_BP_RadarDish01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadarDish01_C", "ExecuteUbergraph_BP_RadarDish01");

	Params::BP_RadarDish01_C_ExecuteUbergraph_BP_RadarDish01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

