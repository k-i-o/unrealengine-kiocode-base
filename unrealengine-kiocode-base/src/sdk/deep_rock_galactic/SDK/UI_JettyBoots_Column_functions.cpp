#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_JettyBoots_Column

#include "Basic.hpp"

#include "UI_JettyBoots_Column_classes.hpp"
#include "UI_JettyBoots_Column_parameters.hpp"


namespace SDK
{

// Function UI_JettyBoots_Column.UI_JettyBoots_Column_C.ExecuteUbergraph_UI_JettyBoots_Column
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Column_C::ExecuteUbergraph_UI_JettyBoots_Column(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Column_C", "ExecuteUbergraph_UI_JettyBoots_Column");

	Params::UI_JettyBoots_Column_C_ExecuteUbergraph_UI_JettyBoots_Column Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Column.UI_JettyBoots_Column_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Column_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Column_C", "PreConstruct");

	Params::UI_JettyBoots_Column_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Column.UI_JettyBoots_Column_C.SetHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Column_C::SetHeight(int32 InHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Column_C", "SetHeight");

	Params::UI_JettyBoots_Column_C_SetHeight Parms{};

	Parms.InHeight = InHeight;

	UObject::ProcessEvent(Func, &Parms);
}

}

