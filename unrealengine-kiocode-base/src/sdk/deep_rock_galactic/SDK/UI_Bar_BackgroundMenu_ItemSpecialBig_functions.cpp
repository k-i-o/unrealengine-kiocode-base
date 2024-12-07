#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_BackgroundMenu_ItemSpecialBig

#include "Basic.hpp"

#include "UI_Bar_BackgroundMenu_ItemSpecialBig_classes.hpp"
#include "UI_Bar_BackgroundMenu_ItemSpecialBig_parameters.hpp"


namespace SDK
{

// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_BackgroundMenu_ItemSpecialBig_C", "ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig");

	Params::UI_Bar_BackgroundMenu_ItemSpecialBig_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_BackgroundMenu_ItemSpecialBig_C", "PreConstruct");

	Params::UI_Bar_BackgroundMenu_ItemSpecialBig_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_BackgroundMenu_ItemSpecialBig_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.SetDrinkable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*              InDrinkable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::SetDrinkable(class UDrinkableDataAsset* InDrinkable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_BackgroundMenu_ItemSpecialBig_C", "SetDrinkable");

	Params::UI_Bar_BackgroundMenu_ItemSpecialBig_C_SetDrinkable Parms{};

	Parms.InDrinkable = InDrinkable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Set Drinkable shown price
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::Set_Drinkable_shown_price()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_BackgroundMenu_ItemSpecialBig_C", "Set Drinkable shown price");

	UObject::ProcessEvent(Func, nullptr);
}

}

