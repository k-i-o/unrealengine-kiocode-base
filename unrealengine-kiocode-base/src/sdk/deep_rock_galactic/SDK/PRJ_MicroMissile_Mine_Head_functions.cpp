#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_MicroMissile_Mine_Head

#include "Basic.hpp"

#include "PRJ_MicroMissile_Mine_Head_classes.hpp"
#include "PRJ_MicroMissile_Mine_Head_parameters.hpp"


namespace SDK
{

// Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.OnRep_Triggered
// (BlueprintCallable, BlueprintEvent)

void APRJ_MicroMissile_Mine_Head_C::OnRep_Triggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Mine_Head_C", "OnRep_Triggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APRJ_MicroMissile_Mine_Head_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Mine_Head_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APRJ_MicroMissile_Mine_Head_C::BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Mine_Head_C", "BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::PRJ_MicroMissile_Mine_Head_C_BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.TriggerExplosion
// (BlueprintCallable, BlueprintEvent)

void APRJ_MicroMissile_Mine_Head_C::TriggerExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Mine_Head_C", "TriggerExplosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHealthComponentBase*             Param_HealthComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APRJ_MicroMissile_Mine_Head_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* Param_HealthComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Mine_Head_C", "BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature");

	Params::PRJ_MicroMissile_Mine_Head_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature Parms{};

	Parms.Param_HealthComponent = Param_HealthComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.OnImpacted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                                    PredictedImpact                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APRJ_MicroMissile_Mine_Head_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Mine_Head_C", "OnImpacted");

	Params::PRJ_MicroMissile_Mine_Head_C_OnImpacted Parms{};

	Parms.PredictedImpact = PredictedImpact;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.ExecuteUbergraph_PRJ_MicroMissile_Mine_Head
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APRJ_MicroMissile_Mine_Head_C::ExecuteUbergraph_PRJ_MicroMissile_Mine_Head(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Mine_Head_C", "ExecuteUbergraph_PRJ_MicroMissile_Mine_Head");

	Params::PRJ_MicroMissile_Mine_Head_C_ExecuteUbergraph_PRJ_MicroMissile_Mine_Head Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
