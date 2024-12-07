#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_InfoBox

#include "Basic.hpp"

#include "Lore_InfoBox_classes.hpp"
#include "Lore_InfoBox_parameters.hpp"


namespace SDK
{

// Function Lore_InfoBox.Lore_InfoBox_C.ExecuteUbergraph_Lore_InfoBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_InfoBox_C::ExecuteUbergraph_Lore_InfoBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_InfoBox_C", "ExecuteUbergraph_Lore_InfoBox");

	Params::Lore_InfoBox_C_ExecuteUbergraph_Lore_InfoBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_InfoBox.Lore_InfoBox_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_InfoBox_C::SetColor(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_InfoBox_C", "SetColor");

	Params::Lore_InfoBox_C_SetColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_InfoBox.Lore_InfoBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULore_InfoBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_InfoBox_C", "PreConstruct");

	Params::Lore_InfoBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_InfoBox.Lore_InfoBox_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FObjectiveMissionIcon            Param_Icon                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FText                             Param_GrayText                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_InfoBox_C::SetData(const class FText& Param_Text, const struct FObjectiveMissionIcon& Param_Icon, const class FText& Param_GrayText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_InfoBox_C", "SetData");

	Params::Lore_InfoBox_C_SetData Parms{};

	Parms.Param_Text = std::move(Param_Text);
	Parms.Param_Icon = std::move(Param_Icon);
	Parms.Param_GrayText = std::move(Param_GrayText);

	UObject::ProcessEvent(Func, &Parms);
}

}

