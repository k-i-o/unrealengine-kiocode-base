#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Modding_Downloads_Entry

#include "Basic.hpp"

#include "HUD_Modding_Downloads_Entry_classes.hpp"
#include "HUD_Modding_Downloads_Entry_parameters.hpp"


namespace SDK
{

// Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.ExecuteUbergraph_HUD_Modding_Downloads_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_Entry_C::ExecuteUbergraph_HUD_Modding_Downloads_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_Entry_C", "ExecuteUbergraph_HUD_Modding_Downloads_Entry");

	Params::HUD_Modding_Downloads_Entry_C_ExecuteUbergraph_HUD_Modding_Downloads_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Modding_Downloads_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_Entry_C", "PreConstruct");

	Params::HUD_Modding_Downloads_Entry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InModName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InDownloading                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InDownloaded                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTotal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_Entry_C::SetProgress(const class FString& InModName, bool InDownloading, int32 InDownloaded, int32 InTotal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_Entry_C", "SetProgress");

	Params::HUD_Modding_Downloads_Entry_C_SetProgress Parms{};

	Parms.InModName = std::move(InModName);
	Parms.InDownloading = InDownloading;
	Parms.InDownloaded = InDownloaded;
	Parms.InTotal = InTotal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetModName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Param_ModName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_Entry_C::GetModName(class FString* Param_ModName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_Entry_C", "GetModName");

	Params::HUD_Modding_Downloads_Entry_C_GetModName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ModName != nullptr)
		*Param_ModName = std::move(Parms.Param_ModName);
}


// Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Param_Progress                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_Entry_C::GetProgress(float* Param_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_Entry_C", "GetProgress");

	Params::HUD_Modding_Downloads_Entry_C_GetProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Progress != nullptr)
		*Param_Progress = Parms.Param_Progress;
}


// Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Modding_Downloads_Entry_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_Entry_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.Error
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUGCPackageError                        InErrorType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_Entry_C::Error(EUGCPackageError InErrorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_Entry_C", "Error");

	Params::HUD_Modding_Downloads_Entry_C_Error Parms{};

	Parms.InErrorType = InErrorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetIsFinished
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsFinished                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Modding_Downloads_Entry_C::GetIsFinished(bool* Param_IsFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_Entry_C", "GetIsFinished");

	Params::HUD_Modding_Downloads_Entry_C_GetIsFinished Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsFinished != nullptr)
		*Param_IsFinished = Parms.Param_IsFinished;
}

}

