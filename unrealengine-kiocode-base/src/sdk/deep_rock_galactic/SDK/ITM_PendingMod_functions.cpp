#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_PendingMod

#include "Basic.hpp"

#include "ITM_PendingMod_classes.hpp"
#include "ITM_PendingMod_parameters.hpp"


namespace SDK
{

// Function ITM_PendingMod.ITM_PendingMod_C.OnActivationChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_PendingMod_C::OnActivationChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PendingMod_C", "OnActivationChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_PendingMod.ITM_PendingMod_C.ExecuteUbergraph_ITM_PendingMod
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_PendingMod_C::ExecuteUbergraph_ITM_PendingMod(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PendingMod_C", "ExecuteUbergraph_ITM_PendingMod");

	Params::ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_PendingMod.ITM_PendingMod_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_PendingMod_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PendingMod_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_PendingMod.ITM_PendingMod_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_PendingMod_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PendingMod_C", "PreConstruct");

	Params::ITM_PendingMod_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_PendingMod.ITM_PendingMod_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InModName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ENUM_ModPendingStatus                   InPendingStatus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_PendingMod_C::SetData(const class FString& InModName, ENUM_ModPendingStatus InPendingStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PendingMod_C", "SetData");

	Params::ITM_PendingMod_C_SetData Parms{};

	Parms.InModName = std::move(InModName);
	Parms.InPendingStatus = InPendingStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_PendingMod.ITM_PendingMod_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_PendingMod_C::SetColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PendingMod_C", "SetColors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_PendingMod.ITM_PendingMod_C.OnDownloadExtractProgress
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>                   ModsPendingDownload                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Downloading                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Total                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_PendingMod_C::OnDownloadExtractProgress(const class FString& Param_Name, const TArray<class FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_PendingMod_C", "OnDownloadExtractProgress");

	Params::ITM_PendingMod_C_OnDownloadExtractProgress Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.ModsPendingDownload = std::move(ModsPendingDownload);
	Parms.Downloading = Downloading;
	Parms.Progress = Progress;
	Parms.Total = Total;

	UObject::ProcessEvent(Func, &Parms);
}

}

