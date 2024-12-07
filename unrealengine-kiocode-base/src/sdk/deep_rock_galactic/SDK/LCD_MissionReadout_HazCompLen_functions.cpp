#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LCD_MissionReadout_HazCompLen

#include "Basic.hpp"

#include "LCD_MissionReadout_HazCompLen_classes.hpp"
#include "LCD_MissionReadout_HazCompLen_parameters.hpp"


namespace SDK
{

// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustCLBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULCD_MissionReadout_HazCompLen_C::AdjustCLBar(float InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_MissionReadout_HazCompLen_C", "AdjustCLBar");

	Params::LCD_MissionReadout_HazCompLen_C_AdjustCLBar Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULCD_MissionReadout_HazCompLen_C::AdjustBar(float InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_MissionReadout_HazCompLen_C", "AdjustBar");

	Params::LCD_MissionReadout_HazCompLen_C_AdjustBar Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission*                In_Mission                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULCD_MissionReadout_HazCompLen_C::SetGeneratedMission(class UGeneratedMission* In_Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_MissionReadout_HazCompLen_C", "SetGeneratedMission");

	Params::LCD_MissionReadout_HazCompLen_C_SetGeneratedMission Parms{};

	Parms.In_Mission = In_Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULCD_MissionReadout_HazCompLen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_MissionReadout_HazCompLen_C", "Tick");

	Params::LCD_MissionReadout_HazCompLen_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGeneratedMission*                InMission                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULCD_MissionReadout_HazCompLen_C::BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_MissionReadout_HazCompLen_C", "BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature");

	Params::LCD_MissionReadout_HazCompLen_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature Parms{};

	Parms.InMission = InMission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.ExecuteUbergraph_LCD_MissionReadout_HazCompLen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULCD_MissionReadout_HazCompLen_C::ExecuteUbergraph_LCD_MissionReadout_HazCompLen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_MissionReadout_HazCompLen_C", "ExecuteUbergraph_LCD_MissionReadout_HazCompLen");

	Params::LCD_MissionReadout_HazCompLen_C_ExecuteUbergraph_LCD_MissionReadout_HazCompLen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

