#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Modding_Downloads

#include "Basic.hpp"

#include "HUD_Modding_Downloads_classes.hpp"
#include "HUD_Modding_Downloads_parameters.hpp"


namespace SDK
{

// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.ExecuteUbergraph_HUD_Modding_Downloads
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_C::ExecuteUbergraph_HUD_Modding_Downloads(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "ExecuteUbergraph_HUD_Modding_Downloads");

	Params::HUD_Modding_Downloads_C_ExecuteUbergraph_HUD_Modding_Downloads Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnDownloadFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ModName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ModId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_C::OnDownloadFinished(const class FString& ModName, const class FString& ModId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "OnDownloadFinished");

	Params::HUD_Modding_Downloads_C_OnDownloadFinished Parms{};

	Parms.ModName = std::move(ModName);
	Parms.ModId = std::move(ModId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Simulate
// (BlueprintCallable, BlueprintEvent)

void UHUD_Modding_Downloads_C::Simulate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "Simulate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Modding_Downloads_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.HideFromHUD
// (BlueprintCallable, BlueprintEvent)

void UHUD_Modding_Downloads_C::HideFromHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "HideFromHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Modding_Downloads_C::OnAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "OnAnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnDownloadProgress
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>                   ModsPendingDownload                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Param_Downloading                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Total                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_C::OnDownloadProgress(const class FString& Param_Name, const TArray<class FString>& ModsPendingDownload, bool Param_Downloading, int32 Progress, int32 Total)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "OnDownloadProgress");

	Params::HUD_Modding_Downloads_C_OnDownloadProgress Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.ModsPendingDownload = std::move(ModsPendingDownload);
	Parms.Param_Downloading = Param_Downloading;
	Parms.Progress = Progress;
	Parms.Total = Total;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDesignTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Modding_Downloads_C::PreConstruct(bool Param_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "PreConstruct");

	Params::HUD_Modding_Downloads_C_PreConstruct Parms{};

	Parms.Param_IsDesignTime = Param_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnErrorInstalling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ModName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// EUGCPackageError                        ErrorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_C::OnErrorInstalling(const class FString& ModName, EUGCPackageError ErrorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "OnErrorInstalling");

	Params::HUD_Modding_Downloads_C_OnErrorInstalling Parms{};

	Parms.ModName = std::move(ModName);
	Parms.ErrorType = ErrorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Modding_Downloads_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.SetDownloadProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>                   ModsPendingDownload                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Param_Downloading                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Total                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_C::SetDownloadProgress(const class FString& Param_Name, const TArray<class FString>& ModsPendingDownload, bool Param_Downloading, int32 Progress, int32 Total)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "SetDownloadProgress");

	Params::HUD_Modding_Downloads_C_SetDownloadProgress Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.ModsPendingDownload = std::move(ModsPendingDownload);
	Parms.Param_Downloading = Param_Downloading;
	Parms.Progress = Progress;
	Parms.Total = Total;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.GetEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InModName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UHUD_Modding_Downloads_Entry_C*   OutEntry                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UHUD_Modding_Downloads_C::GetEntry(const class FString& InModName, class UHUD_Modding_Downloads_Entry_C** OutEntry, class FString* OutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "GetEntry");

	Params::HUD_Modding_Downloads_C_GetEntry Parms{};

	Parms.InModName = std::move(InModName);

	UObject::ProcessEvent(Func, &Parms);

	if (OutEntry != nullptr)
		*OutEntry = Parms.OutEntry;

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.SetOpen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsOpen                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Modding_Downloads_C::SetOpen(bool InIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "SetOpen");

	Params::HUD_Modding_Downloads_C_SetOpen Parms{};

	Parms.InIsOpen = InIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.ShowFailedToInstall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, EUGCPackageError>   InFailed                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Modding_Downloads_C::ShowFailedToInstall(const TMap<class FString, EUGCPackageError>& InFailed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Modding_Downloads_C", "ShowFailedToInstall");

	Params::HUD_Modding_Downloads_C_ShowFailedToInstall Parms{};

	Parms.InFailed = std::move(InFailed);

	UObject::ProcessEvent(Func, &Parms);
}

}
