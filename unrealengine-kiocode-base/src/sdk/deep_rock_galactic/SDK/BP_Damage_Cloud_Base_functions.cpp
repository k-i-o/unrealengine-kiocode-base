#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Damage_Cloud_Base

#include "Basic.hpp"

#include "BP_Damage_Cloud_Base_classes.hpp"
#include "BP_Damage_Cloud_Base_parameters.hpp"


namespace SDK
{

// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.UpdateSphereRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InSphereRadius                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Damage_Cloud_Base_C::UpdateSphereRadius(float InSphereRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Damage_Cloud_Base_C", "UpdateSphereRadius");

	Params::BP_Damage_Cloud_Base_C_UpdateSphereRadius Parms{};

	Parms.InSphereRadius = InSphereRadius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Damage_Cloud_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Damage_Cloud_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__FinishedFunc
// (BlueprintEvent)

void ABP_Damage_Cloud_Base_C::TriggerGrowth__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Damage_Cloud_Base_C", "TriggerGrowth__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__UpdateFunc
// (BlueprintEvent)

void ABP_Damage_Cloud_Base_C::TriggerGrowth__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Damage_Cloud_Base_C", "TriggerGrowth__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Damage_Cloud_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Damage_Cloud_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ExecuteUbergraph_BP_Damage_Cloud_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Damage_Cloud_Base_C::ExecuteUbergraph_BP_Damage_Cloud_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Damage_Cloud_Base_C", "ExecuteUbergraph_BP_Damage_Cloud_Base");

	Params::BP_Damage_Cloud_Base_C_ExecuteUbergraph_BP_Damage_Cloud_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

