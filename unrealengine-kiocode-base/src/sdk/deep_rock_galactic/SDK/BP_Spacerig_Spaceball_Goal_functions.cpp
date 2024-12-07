#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Spacerig_Spaceball_Goal

#include "Basic.hpp"

#include "BP_Spacerig_Spaceball_Goal_classes.hpp"
#include "BP_Spacerig_Spaceball_Goal_parameters.hpp"


namespace SDK
{

// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ExecuteUbergraph_BP_Spacerig_Spaceball_Goal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Spacerig_Spaceball_Goal_C::ExecuteUbergraph_BP_Spacerig_Spaceball_Goal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "ExecuteUbergraph_BP_Spacerig_Spaceball_Goal");

	Params::BP_Spacerig_Spaceball_Goal_C_ExecuteUbergraph_BP_Spacerig_Spaceball_Goal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.Countdown Completed
// (BlueprintCallable, BlueprintEvent)

void ABP_Spacerig_Spaceball_Goal_C::Countdown_Completed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "Countdown Completed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Spacerig_Spaceball_Goal_C::BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Spacerig_Spaceball_Goal_C_BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.Throw
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                          Force                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Spacerig_Spaceball_Goal_C::Throw(const struct FVector& Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "Throw");

	Params::BP_Spacerig_Spaceball_Goal_C_Throw Parms{};

	Parms.Force = std::move(Force);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.SetGoalVisible
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Spacerig_Spaceball_Goal_C::SetGoalVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "SetGoalVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Spacerig_Spaceball_Goal_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "ReceiveTick");

	Params::BP_Spacerig_Spaceball_Goal_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");

	Params::BP_Spacerig_Spaceball_Goal_C_BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Spacerig_Spaceball_Goal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature
// (BlueprintEvent)

void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
// (BlueprintEvent)

void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature");

	Params::BP_Spacerig_Spaceball_Goal_C_BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature Parms{};

	Parms.CanUse = CanUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	Params::BP_Spacerig_Spaceball_Goal_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.OnRep_GoalsScored
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Spacerig_Spaceball_Goal_C::OnRep_GoalsScored()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "OnRep_GoalsScored");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.HandlePopUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Spacerig_Spaceball_Goal_C::HandlePopUp(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "HandlePopUp");

	Params::BP_Spacerig_Spaceball_Goal_C_HandlePopUp Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.OnRep_GoalClosedTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_Spacerig_Spaceball_Goal_C::OnRep_GoalClosedTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Spacerig_Spaceball_Goal_C", "OnRep_GoalClosedTimer");

	UObject::ProcessEvent(Func, nullptr);
}

}

