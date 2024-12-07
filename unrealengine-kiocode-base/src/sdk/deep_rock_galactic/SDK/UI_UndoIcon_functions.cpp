#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_UndoIcon

#include "Basic.hpp"

#include "UI_UndoIcon_classes.hpp"
#include "UI_UndoIcon_parameters.hpp"


namespace SDK
{

// Function UI_UndoIcon.UI_UndoIcon_C.ExecuteUbergraph_UI_UndoIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UndoIcon_C::ExecuteUbergraph_UI_UndoIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_UndoIcon_C", "ExecuteUbergraph_UI_UndoIcon");

	Params::UI_UndoIcon_C_ExecuteUbergraph_UI_UndoIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_UndoIcon.UI_UndoIcon_C.SetHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UndoIcon_C::SetHovered(bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_UndoIcon_C", "SetHovered");

	Params::UI_UndoIcon_C_SetHovered Parms{};

	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_UndoIcon.UI_UndoIcon_C.PlayActivateAnimation
// (BlueprintCallable, BlueprintEvent)

void UUI_UndoIcon_C::PlayActivateAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_UndoIcon_C", "PlayActivateAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_UndoIcon.UI_UndoIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UndoIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_UndoIcon_C", "PreConstruct");

	Params::UI_UndoIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

