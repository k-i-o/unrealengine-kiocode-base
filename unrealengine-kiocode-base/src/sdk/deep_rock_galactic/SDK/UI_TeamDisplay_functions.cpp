#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TeamDisplay

#include "Basic.hpp"

#include "UI_TeamDisplay_classes.hpp"
#include "UI_TeamDisplay_parameters.hpp"


namespace SDK
{

// Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TeamDisplay_C::ExecuteUbergraph_UI_TeamDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "ExecuteUbergraph_UI_TeamDisplay");

	Params::UI_TeamDisplay_C_ExecuteUbergraph_UI_TeamDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TeamDisplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnSessionLeaderChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     PlayerState                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TeamDisplay_C::OnSessionLeaderChanged(const class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "OnSessionLeaderChanged");

	Params::UI_TeamDisplay_C_OnSessionLeaderChanged Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TeamDisplay_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "OnPlayerLeave_Event");

	Params::UI_TeamDisplay_C_OnPlayerLeave_Event Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TeamDisplay_C::OnPlayerJoined_Event(class AFSDPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "OnPlayerJoined_Event");

	Params::UI_TeamDisplay_C_OnPlayerJoined_Event Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::UpdateFriendInviteVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "UpdateFriendInviteVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TeamDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "PreConstruct");

	Params::UI_TeamDisplay_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::Setup_Invite_Friends()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "Setup Invite Friends");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::OnLastWindowClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "OnLastWindowClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::OnFirstWindowOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "OnFirstWindowOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TeamDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_TeamDisplay_C::UpdateIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "UpdateIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AFSDPlayerState*>          OutTeamMembers                                         (Parm, OutParm)

void UUI_TeamDisplay_C::GetTeam(TArray<class AFSDPlayerState*>* OutTeamMembers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "GetTeam");

	Params::UI_TeamDisplay_C_GetTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutTeamMembers != nullptr)
		*OutTeamMembers = std::move(Parms.OutTeamMembers);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.GetParents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Names1                                                 (Parm, OutParm)

void UUI_TeamDisplay_C::GetParents(TArray<class FString>* Names1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamDisplay_C", "GetParents");

	Params::UI_TeamDisplay_C_GetParents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Names1 != nullptr)
		*Names1 = std::move(Parms.Names1);
}

}

