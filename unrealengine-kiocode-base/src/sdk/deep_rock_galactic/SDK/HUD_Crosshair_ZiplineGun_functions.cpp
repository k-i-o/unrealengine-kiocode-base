#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Crosshair_ZiplineGun

#include "Basic.hpp"

#include "HUD_Crosshair_ZiplineGun_classes.hpp"
#include "HUD_Crosshair_ZiplineGun_parameters.hpp"


namespace SDK
{

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetMinMaxAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Crosshair_ZiplineGun_C::SetMinMaxAngle(float Min, float Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crosshair_ZiplineGun_C", "SetMinMaxAngle");

	Params::HUD_Crosshair_ZiplineGun_C_SetMinMaxAngle Parms{};

	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ClearMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Crosshair_ZiplineGun_C::ClearMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crosshair_ZiplineGun_C", "ClearMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.DistanceMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Dist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Crosshair_ZiplineGun_C::DistanceMessage(float Dist, bool InRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crosshair_ZiplineGun_C", "DistanceMessage");

	Params::HUD_Crosshair_ZiplineGun_C_DistanceMessage Parms{};

	Parms.Dist = Dist;
	Parms.InRange = InRange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.FailMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Msg                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Crosshair_ZiplineGun_C::FailMessage(const class FText& Msg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crosshair_ZiplineGun_C", "FailMessage");

	Params::HUD_Crosshair_ZiplineGun_C_FailMessage Parms{};

	Parms.Msg = std::move(Msg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Crosshair_ZiplineGun_C::SetText(const class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crosshair_ZiplineGun_C", "SetText");

	Params::HUD_Crosshair_ZiplineGun_C_SetText Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Crosshair_ZiplineGun_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crosshair_ZiplineGun_C", "PreConstruct");

	Params::HUD_Crosshair_ZiplineGun_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ExecuteUbergraph_HUD_Crosshair_ZiplineGun
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Crosshair_ZiplineGun_C::ExecuteUbergraph_HUD_Crosshair_ZiplineGun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Crosshair_ZiplineGun_C", "ExecuteUbergraph_HUD_Crosshair_ZiplineGun");

	Params::HUD_Crosshair_ZiplineGun_C_ExecuteUbergraph_HUD_Crosshair_ZiplineGun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
