#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SimpleAngleIndicator

#include "Basic.hpp"

#include "UI_SimpleAngleIndicator_classes.hpp"
#include "UI_SimpleAngleIndicator_parameters.hpp"


namespace SDK
{

// Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.SetAngle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AngleDegrees                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SimpleAngleIndicator_C::SetAngle(float AngleDegrees)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SimpleAngleIndicator_C", "SetAngle");

	Params::UI_SimpleAngleIndicator_C_SetAngle Parms{};

	Parms.AngleDegrees = AngleDegrees;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SimpleAngleIndicator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SimpleAngleIndicator_C", "PreConstruct");

	Params::UI_SimpleAngleIndicator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SimpleAngleIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SimpleAngleIndicator_C", "Tick");

	Params::UI_SimpleAngleIndicator_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SimpleAngleIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SimpleAngleIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.ExecuteUbergraph_UI_SimpleAngleIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SimpleAngleIndicator_C::ExecuteUbergraph_UI_SimpleAngleIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SimpleAngleIndicator_C", "ExecuteUbergraph_UI_SimpleAngleIndicator");

	Params::UI_SimpleAngleIndicator_C_ExecuteUbergraph_UI_SimpleAngleIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

