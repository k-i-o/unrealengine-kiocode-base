#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_Content_ProgressBar

#include "Basic.hpp"

#include "Lore_Content_ProgressBar_classes.hpp"
#include "Lore_Content_ProgressBar_parameters.hpp"


namespace SDK
{

// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.ExecuteUbergraph_Lore_Content_ProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_Content_ProgressBar_C::ExecuteUbergraph_Lore_Content_ProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Content_ProgressBar_C", "ExecuteUbergraph_Lore_Content_ProgressBar");

	Params::Lore_Content_ProgressBar_C_ExecuteUbergraph_Lore_Content_ProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_Content_ProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Content_ProgressBar_C", "Tick");

	Params::Lore_Content_ProgressBar_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULore_Content_ProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Content_ProgressBar_C", "PreConstruct");

	Params::Lore_Content_ProgressBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_Content_ProgressBar.Lore_Content_ProgressBar_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_Content_ProgressBar_C::SetProgress(int32 Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Content_ProgressBar_C", "SetProgress");

	Params::Lore_Content_ProgressBar_C_SetProgress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}

}
