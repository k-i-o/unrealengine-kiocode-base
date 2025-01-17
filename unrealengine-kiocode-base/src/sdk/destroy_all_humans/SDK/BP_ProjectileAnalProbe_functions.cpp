#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileAnalProbe

#include "Basic.hpp"

#include "BP_ProjectileAnalProbe_classes.hpp"
#include "BP_ProjectileAnalProbe_parameters.hpp"


namespace SDK
{

// Function BP_ProjectileAnalProbe.BP_ProjectileAnalProbe_C.ExecuteUbergraph_BP_ProjectileAnalProbe
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileAnalProbe_C::ExecuteUbergraph_BP_ProjectileAnalProbe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileAnalProbe_C", "ExecuteUbergraph_BP_ProjectileAnalProbe");

	Params::BP_ProjectileAnalProbe_C_ExecuteUbergraph_BP_ProjectileAnalProbe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectileAnalProbe.BP_ProjectileAnalProbe_C.OnConnectedToTarget
// (Event, Public, BlueprintEvent)

void ABP_ProjectileAnalProbe_C::OnConnectedToTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileAnalProbe_C", "OnConnectedToTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileAnalProbe.BP_ProjectileAnalProbe_C.OnRetrieveFromPool
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bAutomaticallyReactivateComponents                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileAnalProbe_C::OnRetrieveFromPool(bool _bAutomaticallyReactivateComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileAnalProbe_C", "OnRetrieveFromPool");

	Params::BP_ProjectileAnalProbe_C_OnRetrieveFromPool Parms{};

	Parms._bAutomaticallyReactivateComponents = _bAutomaticallyReactivateComponents;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectileAnalProbe.BP_ProjectileAnalProbe_C.OnProjectileStartedFlying
// (Event, Public, BlueprintEvent)

void ABP_ProjectileAnalProbe_C::OnProjectileStartedFlying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileAnalProbe_C", "OnProjectileStartedFlying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileAnalProbe.BP_ProjectileAnalProbe_C.OnReturnToPool
// (Event, Public, BlueprintEvent)

void ABP_ProjectileAnalProbe_C::OnReturnToPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileAnalProbe_C", "OnReturnToPool");

	UObject::ProcessEvent(Func, nullptr);
}

}

