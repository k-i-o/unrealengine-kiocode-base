#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TOOLTIP_Mod_Joining

#include "Basic.hpp"

#include "TOOLTIP_Mod_Joining_classes.hpp"
#include "TOOLTIP_Mod_Joining_parameters.hpp"


namespace SDK
{

// Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.ExecuteUbergraph_TOOLTIP_Mod_Joining
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTOOLTIP_Mod_Joining_C::ExecuteUbergraph_TOOLTIP_Mod_Joining(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_Mod_Joining_C", "ExecuteUbergraph_TOOLTIP_Mod_Joining");

	Params::TOOLTIP_Mod_Joining_C_ExecuteUbergraph_TOOLTIP_Mod_Joining Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.LoadThumbnail
// (BlueprintCallable, BlueprintEvent)

void UTOOLTIP_Mod_Joining_C::LoadThumbnail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_Mod_Joining_C", "LoadThumbnail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTOOLTIP_Mod_Joining_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_Mod_Joining_C", "PreConstruct");

	Params::TOOLTIP_Mod_Joining_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.FromMetaData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UModioModInfoWrapper*             InMetaData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTOOLTIP_Mod_Joining_C::FromMetaData(class UModioModInfoWrapper* InMetaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_Mod_Joining_C", "FromMetaData");

	Params::TOOLTIP_Mod_Joining_C_FromMetaData Parms{};

	Parms.InMetaData = InMetaData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InModID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InVersion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InAuthor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// EUGCApprovalStatus                      InApprovalState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InFetchThumbnail                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTOOLTIP_Mod_Joining_C::SetData(const class FString& InModID, const class FString& InName, const class FString& InVersion, const class FString& InDescription, const class FString& InAuthor, EUGCApprovalStatus InApprovalState, bool InFetchThumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_Mod_Joining_C", "SetData");

	Params::TOOLTIP_Mod_Joining_C_SetData Parms{};

	Parms.InModID = std::move(InModID);
	Parms.InName = std::move(InName);
	Parms.InVersion = std::move(InVersion);
	Parms.InDescription = std::move(InDescription);
	Parms.InAuthor = std::move(InAuthor);
	Parms.InApprovalState = InApprovalState;
	Parms.InFetchThumbnail = InFetchThumbnail;

	UObject::ProcessEvent(Func, &Parms);
}

}

