#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Filter_ServerGameType

#include "Basic.hpp"

#include "Filter_ServerGameType_classes.hpp"
#include "Filter_ServerGameType_parameters.hpp"


namespace SDK
{

// Function Filter_ServerGameType.Filter_ServerGameType_C.VerifyOnlyModded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameType                               LastClicked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_ServerGameType_C::VerifyOnlyModded(EGameType LastClicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "VerifyOnlyModded");

	Params::Filter_ServerGameType_C_VerifyOnlyModded Parms{};

	Parms.LastClicked = LastClicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.VerifyRules
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilter_ServerGameType_C::VerifyRules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "VerifyRules");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.IsSandBoxMode
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    SandboxMode                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilter_ServerGameType_C::IsSandBoxMode(bool* SandboxMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "IsSandBoxMode");

	Params::Filter_ServerGameType_C_IsSandBoxMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SandboxMode != nullptr)
		*SandboxMode = Parms.SandboxMode;
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.CreateEntries
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilter_ServerGameType_C::CreateEntries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "CreateEntries");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilter_ServerGameType_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.GetSelectedGameTypes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EGameType>                       GameTypes                                              (Parm, OutParm)

void UFilter_ServerGameType_C::GetSelectedGameTypes(TArray<EGameType>* GameTypes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "GetSelectedGameTypes");

	Params::Filter_ServerGameType_C_GetSelectedGameTypes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GameTypes != nullptr)
		*GameTypes = std::move(Parms.GameTypes);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Open                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilter_ServerGameType_C::OpenMenu(bool Open)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "OpenMenu");

	Params::Filter_ServerGameType_C_OpenMenu Parms{};

	Parms.Open = Open;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.UpdateSubheader
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilter_ServerGameType_C::UpdateSubheader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "UpdateSubheader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilter_ServerGameType_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "PreConstruct");

	Params::Filter_ServerGameType_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.OnGameTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EGameType                               Gametype                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_ServerGameType_C::OnGameTypeChanged(bool IsChecked, EGameType Gametype)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "OnGameTypeChanged");

	Params::Filter_ServerGameType_C_OnGameTypeChanged Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Gametype = Gametype;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFilter_ServerGameType_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilter_ServerGameType_C::BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	Params::Filter_ServerGameType_C_BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.ExecuteUbergraph_Filter_ServerGameType
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_ServerGameType_C::ExecuteUbergraph_Filter_ServerGameType(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "ExecuteUbergraph_Filter_ServerGameType");

	Params::Filter_ServerGameType_C_ExecuteUbergraph_Filter_ServerGameType Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ServerGameType.Filter_ServerGameType_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFilter_ServerGameType_C::OnSelectionChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ServerGameType_C", "OnSelectionChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

