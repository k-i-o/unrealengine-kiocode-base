#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExplosiveBoil

#include "Basic.hpp"

#include "BP_ExplosiveBoil_classes.hpp"
#include "BP_ExplosiveBoil_parameters.hpp"


namespace SDK
{

// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.CopyGlobalWeakpointModSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosiveBoil_C::CopyGlobalWeakpointModSettings(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "CopyGlobalWeakpointModSettings");

	Params::BP_ExplosiveBoil_C_CopyGlobalWeakpointModSettings Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.Grow__FinishedFunc
// (BlueprintEvent)

void ABP_ExplosiveBoil_C::Grow__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "Grow__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.Grow__UpdateFunc
// (BlueprintEvent)

void ABP_ExplosiveBoil_C::Grow__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "Grow__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExplosiveBoil_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.OnDestroyed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosiveBoil_C::OnDestroyed_Event(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "OnDestroyed_Event");

	Params::BP_ExplosiveBoil_C_OnDestroyed_Event Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.OnDeath_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase*             HealthComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosiveBoil_C::OnDeath_Event(class UHealthComponentBase* HealthComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "OnDeath_Event");

	Params::BP_ExplosiveBoil_C_OnDeath_Event Parms{};

	Parms.HealthComponent = HealthComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHealthComponentBase*             HealthComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosiveBoil_C::BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature");

	Params::BP_ExplosiveBoil_C_BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature Parms{};

	Parms.HealthComponent = HealthComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Param_Damage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageData                      DamageData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                                    AnyHealthLost                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplosiveBoil_C::BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Param_Damage, const struct FDamageData& DamageData, bool AnyHealthLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature");

	Params::BP_ExplosiveBoil_C_BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature Parms{};

	Parms.Param_Damage = Param_Damage;
	Parms.DamageData = std::move(DamageData);
	Parms.AnyHealthLost = AnyHealthLost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.ExecuteUbergraph_BP_ExplosiveBoil
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosiveBoil_C::ExecuteUbergraph_BP_ExplosiveBoil(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosiveBoil_C", "ExecuteUbergraph_BP_ExplosiveBoil");

	Params::BP_ExplosiveBoil_C_ExecuteUbergraph_BP_ExplosiveBoil Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

