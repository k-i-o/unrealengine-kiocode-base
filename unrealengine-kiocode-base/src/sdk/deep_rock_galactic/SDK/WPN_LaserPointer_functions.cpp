#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_LaserPointer

#include "Basic.hpp"

#include "WPN_LaserPointer_classes.hpp"
#include "WPN_LaserPointer_parameters.hpp"


namespace SDK
{

// Function WPN_LaserPointer.WPN_LaserPointer_C.SetLaserBeamMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LaserPointer_C::SetLaserBeamMaterial(class APlayerCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "SetLaserBeamMaterial");

	Params::WPN_LaserPointer_C_SetLaserBeamMaterial Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.SetBeamVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_LaserPointer_C::SetBeamVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "SetBeamVisibility");

	Params::WPN_LaserPointer_C_SetBeamVisibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                         Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Can_Place                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_LaserPointer_C::CanPlacePOI(const struct FVector& Location, class UTexture* Icon, bool* Can_Place)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "CanPlacePOI");

	Params::WPN_LaserPointer_C_CanPlacePOI Parms{};

	Parms.Location = std::move(Location);
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

	if (Can_Place != nullptr)
		*Can_Place = Parms.Can_Place;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor
// (Private, BlueprintCallable, BlueprintEvent)

void AWPN_LaserPointer_C::UpdateBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "UpdateBackgroundColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LaserPointer_C::SetBackgroundColor(const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "SetBackgroundColor");

	Params::WPN_LaserPointer_C_SetBackgroundColor Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWPN_LaserPointer_C::Adjust_Beam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "Adjust Beam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       PointTransform                                         (Parm, OutParm, IsPlainOldData, NoDestructor)

void AWPN_LaserPointer_C::GetPointTransform(struct FTransform* PointTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "GetPointTransform");

	Params::WPN_LaserPointer_C_GetPointTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PointTransform != nullptr)
		*PointTransform = std::move(Parms.PointTransform);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_LaserPointer_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_LaserPointer_C::RecieveUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "RecieveUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       TargetIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LaserPointer_C::OnPointOfInterest(class AActor* TargetActor, const struct FVector& TargetLocation, class UTexture2D* TargetIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "OnPointOfInterest");

	Params::WPN_LaserPointer_C_OnPointOfInterest Parms{};

	Parms.TargetActor = TargetActor;
	Parms.TargetLocation = std::move(TargetLocation);
	Parms.TargetIcon = TargetIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_LaserPointer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 ItemOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LaserPointer_C::AddedToInventory(class APlayerCharacter* ItemOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "AddedToInventory");

	Params::WPN_LaserPointer_C_AddedToInventory Parms{};

	Parms.ItemOwner = ItemOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnScanComplete
// (BlueprintCallable, BlueprintEvent)

void AWPN_LaserPointer_C::OnScanComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "OnScanComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ELaserPointerTargetType                 TypeOfTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LaserPointer_C::OnMarkerPlaced_Event(const struct FVector& Location, const class FText& Param_Name, const struct FLinearColor& Color, class AActor* Target, ELaserPointerTargetType TypeOfTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "OnMarkerPlaced_Event");

	Params::WPN_LaserPointer_C_OnMarkerPlaced_Event Parms{};

	Parms.Location = std::move(Location);
	Parms.Param_Name = std::move(Param_Name);
	Parms.Color = std::move(Color);
	Parms.Target = Target;
	Parms.TypeOfTarget = TypeOfTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ToggleLaserVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    AVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWPN_LaserPointer_C::ToggleLaserVisible(bool AVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "ToggleLaserVisible");

	Params::WPN_LaserPointer_C_ToggleLaserVisible Parms{};

	Parms.AVisible = AVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_LaserPointer_C::RecieveEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "RecieveEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LaserPointer_C::OnPOIDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "OnPOIDestroyed");

	Params::WPN_LaserPointer_C_OnPOIDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LaserPointer_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "ReceiveTick");

	Params::WPN_LaserPointer_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWPN_LaserPointer_C::ExecuteUbergraph_WPN_LaserPointer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPN_LaserPointer_C", "ExecuteUbergraph_WPN_LaserPointer");

	Params::WPN_LaserPointer_C_ExecuteUbergraph_WPN_LaserPointer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
