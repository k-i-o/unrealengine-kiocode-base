#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_DrinkCostPrice

#include "Basic.hpp"

#include "UI_Bar_DrinkCostPrice_classes.hpp"
#include "UI_Bar_DrinkCostPrice_parameters.hpp"


namespace SDK
{

// Function UI_Bar_DrinkCostPrice.UI_Bar_DrinkCostPrice_C.ExecuteUbergraph_UI_Bar_DrinkCostPrice
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_DrinkCostPrice_C::ExecuteUbergraph_UI_Bar_DrinkCostPrice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_DrinkCostPrice_C", "ExecuteUbergraph_UI_Bar_DrinkCostPrice");

	Params::UI_Bar_DrinkCostPrice_C_ExecuteUbergraph_UI_Bar_DrinkCostPrice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_DrinkCostPrice.UI_Bar_DrinkCostPrice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_DrinkCostPrice_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_DrinkCostPrice_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_DrinkCostPrice.UI_Bar_DrinkCostPrice_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Bar_DrinkCostPrice_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_DrinkCostPrice_C", "PreConstruct");

	Params::UI_Bar_DrinkCostPrice_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
