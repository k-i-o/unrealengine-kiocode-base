#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GuardPhone

#include "Basic.hpp"

#include "GuardPhone_classes.hpp"
#include "GuardPhone_parameters.hpp"


namespace SDK
{

// Function GuardPhone.GuardPhone_C.ExecuteUbergraph_GuardPhone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGuardPhone_C::ExecuteUbergraph_GuardPhone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "ExecuteUbergraph_GuardPhone");

	Params::GuardPhone_C_ExecuteUbergraph_GuardPhone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuardPhone.GuardPhone_C.AlertGuardMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGuardPhone_C::AlertGuardMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "AlertGuardMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuardPhone.GuardPhone_C.BndEvt__GuardPhone_AlertComponent_K2Node_ComponentBoundEvent_1_OnAlarmtriggered__DelegateSignature
// (BlueprintEvent)

void AGuardPhone_C::BndEvt__GuardPhone_AlertComponent_K2Node_ComponentBoundEvent_1_OnAlarmtriggered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "BndEvt__GuardPhone_AlertComponent_K2Node_ComponentBoundEvent_1_OnAlarmtriggered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuardPhone.GuardPhone_C.CountdownText
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AGuardPhone_C::CountdownText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "CountdownText");

	Params::GuardPhone_C_CountdownText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuardPhone.GuardPhone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGuardPhone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuardPhone.GuardPhone_C.StopPhoneAlert
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AGuardPhone_C::StopPhoneAlert()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "StopPhoneAlert");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuardPhone.GuardPhone_C.StopAlertMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGuardPhone_C::StopAlertMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "StopAlertMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuardPhone.GuardPhone_C.StartPhoneAlert
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AGuardPhone_C::StartPhoneAlert()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "StartPhoneAlert");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuardPhone.GuardPhone_C.StartAlertHighlight
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGuardPhone_C::StartAlertHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "StartAlertHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuardPhone.GuardPhone_C.BndEvt__GuardPhone_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Pickuplocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         PickupRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGuardPhone_C::BndEvt__GuardPhone_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature(class AActor* Player, const struct FVector& Pickuplocation, const struct FRotator& PickupRotation, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "BndEvt__GuardPhone_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature");

	Params::GuardPhone_C_BndEvt__GuardPhone_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature Parms{};

	Parms.Player = Player;
	Parms.Pickuplocation = std::move(Pickuplocation);
	Parms.PickupRotation = std::move(PickupRotation);
	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuardPhone.GuardPhone_C.AlertGuards
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AGuardPhone_C::AlertGuards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuardPhone_C", "AlertGuards");

	UObject::ProcessEvent(Func, nullptr);
}

}
