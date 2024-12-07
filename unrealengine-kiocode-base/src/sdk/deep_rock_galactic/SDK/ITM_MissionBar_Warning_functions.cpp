#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MissionBar_Warning

#include "Basic.hpp"

#include "ITM_MissionBar_Warning_classes.hpp"
#include "ITM_MissionBar_Warning_parameters.hpp"


namespace SDK
{

// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.ExecuteUbergraph_ITM_MissionBar_Warning
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MissionBar_Warning_C::ExecuteUbergraph_ITM_MissionBar_Warning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MissionBar_Warning_C", "ExecuteUbergraph_ITM_MissionBar_Warning");

	Params::ITM_MissionBar_Warning_C_ExecuteUbergraph_ITM_MissionBar_Warning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetMutator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionMutator*                  Mutator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MissionBar_Warning_C::SetMutator(class UMissionMutator* Mutator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MissionBar_Warning_C", "SetMutator");

	Params::ITM_MissionBar_Warning_C_SetMutator Parms{};

	Parms.Mutator = Mutator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionWarning*                  Warning                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MissionBar_Warning_C::SetWarning(class UMissionWarning* Warning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MissionBar_Warning_C", "SetWarning");

	Params::ITM_MissionBar_Warning_C_SetWarning Parms{};

	Parms.Warning = Warning;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_MissionBar_Warning_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MissionBar_Warning_C", "PreConstruct");

	Params::ITM_MissionBar_Warning_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Update
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ENUM_MenuColors                         Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MissionBar_Warning_C::Update(const class FText& Title, class UTexture2D* Icon, ENUM_MenuColors Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MissionBar_Warning_C", "Update");

	Params::ITM_MissionBar_Warning_C_Update Parms{};

	Parms.Title = std::move(Title);
	Parms.Icon = Icon;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);
}

}

