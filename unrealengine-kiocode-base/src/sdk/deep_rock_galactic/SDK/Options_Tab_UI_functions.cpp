#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Tab_UI

#include "Basic.hpp"

#include "Options_Tab_UI_classes.hpp"
#include "Options_Tab_UI_parameters.hpp"


namespace SDK
{

// Function Options_Tab_UI.Options_Tab_UI_C.SettingsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Tab_UI_C::SettingsChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Tab_UI_C", "SettingsChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Tab_UI.Options_Tab_UI_C.ExecuteUbergraph_Options_Tab_UI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_Tab_UI_C::ExecuteUbergraph_Options_Tab_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Tab_UI_C", "ExecuteUbergraph_Options_Tab_UI");

	Params::Options_Tab_UI_C_ExecuteUbergraph_Options_Tab_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Tab_UI.Options_Tab_UI_C.OnIsUserGeneratedContentAllowed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     CheckedPlayerState                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBlueprintableUserPrivileges            CheckedPrivilege                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBlueprintablePrivilegeResults          PrivilegeResult                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_Tab_UI_C::OnIsUserGeneratedContentAllowed(const class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Tab_UI_C", "OnIsUserGeneratedContentAllowed");

	Params::Options_Tab_UI_C_OnIsUserGeneratedContentAllowed Parms{};

	Parms.CheckedPlayerState = CheckedPlayerState;
	Parms.CheckedPrivilege = CheckedPrivilege;
	Parms.PrivilegeResult = PrivilegeResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Tab_UI.Options_Tab_UI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_Tab_UI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Tab_UI_C", "PreConstruct");

	Params::Options_Tab_UI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Tab_UI.Options_Tab_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Tab_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Tab_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
