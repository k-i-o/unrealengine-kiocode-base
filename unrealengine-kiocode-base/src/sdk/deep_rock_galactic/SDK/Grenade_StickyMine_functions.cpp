#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_StickyMine

#include "Basic.hpp"

#include "Grenade_StickyMine_classes.hpp"
#include "Grenade_StickyMine_parameters.hpp"


namespace SDK
{

// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Dead
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::OnRep_Dead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "OnRep_Dead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Armed
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::OnRep_Armed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "OnRep_Armed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.OnRep_Triggered
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::OnRep_Triggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "OnRep_Triggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__FinishedFunc
// (BlueprintEvent)

void AGrenade_StickyMine_C::RingPulse__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "RingPulse__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.RingPulse__UpdateFunc
// (BlueprintEvent)

void AGrenade_StickyMine_C::RingPulse__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "RingPulse__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGrenade_StickyMine_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::Grenade_StickyMine_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGrenade_StickyMine_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Grenade_StickyMine_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.TriggerExplosion
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::TriggerExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "TriggerExplosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.GetArmed
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::GetArmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "GetArmed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.DoTriggerAreaPulse
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::DoTriggerAreaPulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "DoTriggerAreaPulse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_StickyMine_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	Params::Grenade_StickyMine_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.DisarmMine
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThrownGrenadeItem*               ThrownGrenadeItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_StickyMine_C::DisarmMine(class AThrownGrenadeItem* ThrownGrenadeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "DisarmMine");

	Params::Grenade_StickyMine_C_DisarmMine Parms{};

	Parms.ThrownGrenadeItem = ThrownGrenadeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.KillMine
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::KillMine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "KillMine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.ExplodeLast
// (BlueprintCallable, BlueprintEvent)

void AGrenade_StickyMine_C::ExplodeLast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "ExplodeLast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.ExecuteUbergraph_Grenade_StickyMine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenade_StickyMine_C::ExecuteUbergraph_Grenade_StickyMine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "ExecuteUbergraph_Grenade_StickyMine");

	Params::Grenade_StickyMine_C_ExecuteUbergraph_Grenade_StickyMine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grenade_StickyMine.Grenade_StickyMine_C.AddGearStateEntries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGearStatEntry>           Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGrenade_StickyMine_C::AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grenade_StickyMine_C", "AddGearStateEntries");

	Params::Grenade_StickyMine_C_AddGearStateEntries Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Stats = std::move(Stats);

	UObject::ProcessEvent(Func, &Parms);

	Stats = std::move(Parms.Stats);
}

}
