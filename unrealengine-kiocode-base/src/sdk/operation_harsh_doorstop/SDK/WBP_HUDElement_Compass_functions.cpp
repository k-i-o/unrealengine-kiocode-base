#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUDElement_Compass

#include "Basic.hpp"

#include "WBP_HUDElement_Compass_classes.hpp"
#include "WBP_HUDElement_Compass_parameters.hpp"


namespace SDK
{

// Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.ExecuteUbergraph_WBP_HUDElement_Compass
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_Compass_C::ExecuteUbergraph_WBP_HUDElement_Compass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_Compass_C", "ExecuteUbergraph_WBP_HUDElement_Compass");

	Params::WBP_HUDElement_Compass_C_ExecuteUbergraph_WBP_HUDElement_Compass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HUDElement_Compass_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_Compass_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUDElement_Compass_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_Compass_C", "PreConstruct");

	Params::WBP_HUDElement_Compass_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_Compass_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_Compass_C", "Tick");

	Params::WBP_HUDElement_Compass_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.UpdateDirection
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_Compass_C::UpdateDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_Compass_C", "UpdateDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.SetWidgetCanvasSlotSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        NewLayoutSize                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_Compass_C::SetWidgetCanvasSlotSize(class UWidget* Widget, const struct FVector2D& NewLayoutSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_Compass_C", "SetWidgetCanvasSlotSize");

	Params::WBP_HUDElement_Compass_C_SetWidgetCanvasSlotSize Parms{};

	Parms.Widget = Widget;
	Parms.NewLayoutSize = std::move(NewLayoutSize);

	UObject::ProcessEvent(Func, &Parms);
}

}

