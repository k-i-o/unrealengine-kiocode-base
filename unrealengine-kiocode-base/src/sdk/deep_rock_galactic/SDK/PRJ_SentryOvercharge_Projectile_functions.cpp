#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_SentryOvercharge_Projectile

#include "Basic.hpp"

#include "PRJ_SentryOvercharge_Projectile_classes.hpp"
#include "PRJ_SentryOvercharge_Projectile_parameters.hpp"


namespace SDK
{

// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APRJ_SentryOvercharge_Projectile_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_SentryOvercharge_Projectile_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.OnImpacted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                                    PredictedImpact                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APRJ_SentryOvercharge_Projectile_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_SentryOvercharge_Projectile_C", "OnImpacted");

	Params::PRJ_SentryOvercharge_Projectile_C_OnImpacted Parms{};

	Parms.PredictedImpact = PredictedImpact;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APRJ_SentryOvercharge_Projectile_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_SentryOvercharge_Projectile_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::PRJ_SentryOvercharge_Projectile_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_SentryOvercharge_Projectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_SentryOvercharge_Projectile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.MakeBouncy
// (Event, Public, BlueprintEvent)

void APRJ_SentryOvercharge_Projectile_C::MakeBouncy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_SentryOvercharge_Projectile_C", "MakeBouncy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ExecuteUbergraph_PRJ_SentryOvercharge_Projectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APRJ_SentryOvercharge_Projectile_C::ExecuteUbergraph_PRJ_SentryOvercharge_Projectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_SentryOvercharge_Projectile_C", "ExecuteUbergraph_PRJ_SentryOvercharge_Projectile");

	Params::PRJ_SentryOvercharge_Projectile_C_ExecuteUbergraph_PRJ_SentryOvercharge_Projectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
