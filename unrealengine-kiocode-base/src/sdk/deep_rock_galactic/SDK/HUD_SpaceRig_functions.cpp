#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_SpaceRig

#include "Basic.hpp"

#include "HUD_SpaceRig_classes.hpp"
#include "HUD_SpaceRig_parameters.hpp"


namespace SDK
{

// Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_SpaceRig_C::ExecuteUbergraph_HUD_SpaceRig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_SpaceRig_C", "ExecuteUbergraph_HUD_SpaceRig");

	Params::HUD_SpaceRig_C_ExecuteUbergraph_HUD_SpaceRig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.OnTemporaryBuffChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff*                   buff                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*                 AffectedPlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_SpaceRig_C::OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_SpaceRig_C", "OnTemporaryBuffChanged");

	Params::HUD_SpaceRig_C_OnTemporaryBuffChanged Parms{};

	Parms.buff = buff;
	Parms.AffectedPlayer = AffectedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterCameraMode                    NewCameraMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterCameraMode                    OldCameraMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_SpaceRig_C::OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_SpaceRig_C", "OnCameraModeChanged_Event");

	Params::HUD_SpaceRig_C_OnCameraModeChanged_Event Parms{};

	Parms.NewCameraMode = NewCameraMode;
	Parms.OldCameraMode = OldCameraMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_0
// (BlueprintCallable, BlueprintEvent)

void UHUD_SpaceRig_C::OnCountdownCompleted_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_SpaceRig_C", "OnCountdownCompleted_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_SpaceRig_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_SpaceRig_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
