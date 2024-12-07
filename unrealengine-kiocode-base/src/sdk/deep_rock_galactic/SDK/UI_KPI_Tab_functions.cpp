#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KPI_Tab

#include "Basic.hpp"

#include "UI_KPI_Tab_classes.hpp"
#include "UI_KPI_Tab_parameters.hpp"


namespace SDK
{

// Function UI_KPI_Tab.UI_KPI_Tab_C.HandleMouseEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutHandled                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KPI_Tab_C::HandleMouseEvent(const struct FPointerEvent& InMouseEvent, bool InUp, bool* OutHandled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KPI_Tab_C", "HandleMouseEvent");

	Params::UI_KPI_Tab_C_HandleMouseEvent Parms{};

	Parms.InMouseEvent = std::move(InMouseEvent);
	Parms.InUp = InUp;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHandled != nullptr)
		*OutHandled = Parms.OutHandled;
}


// Function UI_KPI_Tab.UI_KPI_Tab_C.HandleKeyEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutHandled                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KPI_Tab_C::HandleKeyEvent(const struct FKeyEvent& InKeyEvent, bool InUp, bool* OutHandled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KPI_Tab_C", "HandleKeyEvent");

	Params::UI_KPI_Tab_C_HandleKeyEvent Parms{};

	Parms.InKeyEvent = std::move(InKeyEvent);
	Parms.InUp = InUp;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHandled != nullptr)
		*OutHandled = Parms.OutHandled;
}

}

