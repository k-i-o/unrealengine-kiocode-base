#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_AbyssBarSignenu

#include "Basic.hpp"

#include "UI_Bar_AbyssBarSignenu_classes.hpp"
#include "UI_Bar_AbyssBarSignenu_parameters.hpp"


namespace SDK
{

// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.OnRoundSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpaceRigBar*                     Bar                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDrinkableDataAsset*              RequestedDrink                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_AbyssBarSignenu_C::OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_AbyssBarSignenu_C", "OnRoundSelected__DelegateSignature");

	Params::UI_Bar_AbyssBarSignenu_C_OnRoundSelected__DelegateSignature Parms{};

	Parms.Bar = Bar;
	Parms.RequestedDrink = RequestedDrink;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.ExecuteUbergraph_UI_Bar_AbyssBarSignenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_AbyssBarSignenu_C::ExecuteUbergraph_UI_Bar_AbyssBarSignenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_AbyssBarSignenu_C", "ExecuteUbergraph_UI_Bar_AbyssBarSignenu");

	Params::UI_Bar_AbyssBarSignenu_C_ExecuteUbergraph_UI_Bar_AbyssBarSignenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Bar_AbyssBarSignenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_AbyssBarSignenu_C", "PreConstruct");

	Params::UI_Bar_AbyssBarSignenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

