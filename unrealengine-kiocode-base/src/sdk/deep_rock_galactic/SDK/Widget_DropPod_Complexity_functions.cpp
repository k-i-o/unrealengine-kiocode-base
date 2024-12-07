#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Widget_DropPod_Complexity

#include "Basic.hpp"

#include "Widget_DropPod_Complexity_classes.hpp"
#include "Widget_DropPod_Complexity_parameters.hpp"


namespace SDK
{

// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.ExecuteUbergraph_Widget_DropPod_Complexity
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DropPod_Complexity_C::ExecuteUbergraph_Widget_DropPod_Complexity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_DropPod_Complexity_C", "ExecuteUbergraph_Widget_DropPod_Complexity");

	Params::Widget_DropPod_Complexity_C_ExecuteUbergraph_Widget_DropPod_Complexity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission*                OutGeneratedMission                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DropPod_Complexity_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_DropPod_Complexity_C", "OnGeneratedMissionChanged");

	Params::Widget_DropPod_Complexity_C_OnGeneratedMissionChanged Parms{};

	Parms.OutGeneratedMission = OutGeneratedMission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DropPod_Complexity_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_DropPod_Complexity_C", "Tick");

	Params::Widget_DropPod_Complexity_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DropPod_Complexity_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_DropPod_Complexity_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission*                In_Mission                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DropPod_Complexity_C::SetGeneratedMission(class UGeneratedMission* In_Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_DropPod_Complexity_C", "SetGeneratedMission");

	Params::Widget_DropPod_Complexity_C_SetGeneratedMission Parms{};

	Parms.In_Mission = In_Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_DropPod_Complexity.Widget_DropPod_Complexity_C.AdjustBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DropPod_Complexity_C::AdjustBar(float InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_DropPod_Complexity_C", "AdjustBar");

	Params::Widget_DropPod_Complexity_C_AdjustBar Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

}

