#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Window_CutCorner

#include "Basic.hpp"

#include "Basic_Window_CutCorner_classes.hpp"
#include "Basic_Window_CutCorner_parameters.hpp"


namespace SDK
{

// Function Basic_Window_CutCorner.Basic_Window_CutCorner_C.ExecuteUbergraph_Basic_Window_CutCorner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_Window_CutCorner_C::ExecuteUbergraph_Basic_Window_CutCorner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_Window_CutCorner_C", "ExecuteUbergraph_Basic_Window_CutCorner");

	Params::Basic_Window_CutCorner_C_ExecuteUbergraph_Basic_Window_CutCorner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_Window_CutCorner.Basic_Window_CutCorner_C.SetColorbarColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ENUM_MenuColors                         Colorbar_Tint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_Window_CutCorner_C::SetColorbarColor(ENUM_MenuColors Colorbar_Tint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_Window_CutCorner_C", "SetColorbarColor");

	Params::Basic_Window_CutCorner_C_SetColorbarColor Parms{};

	Parms.Colorbar_Tint = Colorbar_Tint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_Window_CutCorner.Basic_Window_CutCorner_C.SetBackgroundTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_Window_CutCorner_C::SetBackgroundTint(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_Window_CutCorner_C", "SetBackgroundTint");

	Params::Basic_Window_CutCorner_C_SetBackgroundTint Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_Window_CutCorner.Basic_Window_CutCorner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_Window_CutCorner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_Window_CutCorner_C", "PreConstruct");

	Params::Basic_Window_CutCorner_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
