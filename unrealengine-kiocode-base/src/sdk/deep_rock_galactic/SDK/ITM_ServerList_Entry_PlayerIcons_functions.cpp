#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_ServerList_Entry_PlayerIcons

#include "Basic.hpp"

#include "ITM_ServerList_Entry_PlayerIcons_classes.hpp"
#include "ITM_ServerList_Entry_PlayerIcons_parameters.hpp"


namespace SDK
{

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_PlayerIcons_C::ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_PlayerIcons_C", "ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons");

	Params::ITM_ServerList_Entry_PlayerIcons_C_ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ServerList_Entry_PlayerIcons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_PlayerIcons_C", "PreConstruct");

	Params::ITM_ServerList_Entry_PlayerIcons_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_ServerList_Entry_PlayerIcons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_PlayerIcons_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_NumPlayers                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayerCharacterID*>       Param_Players                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsClassLocked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ServerList_Entry_PlayerIcons_C::SetNumPlayers(int32 Param_NumPlayers, TArray<class UPlayerCharacterID*>& Param_Players, bool IsClassLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_PlayerIcons_C", "SetNumPlayers");

	Params::ITM_ServerList_Entry_PlayerIcons_C_SetNumPlayers Parms{};

	Parms.Param_NumPlayers = Param_NumPlayers;
	Parms.Param_Players = std::move(Param_Players);
	Parms.IsClassLocked = IsClassLocked;

	UObject::ProcessEvent(Func, &Parms);

	Param_Players = std::move(Parms.Param_Players);
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_NumPlayers                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   EntryNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayerCharacterID*>       Param_Players                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsClassLocked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ServerList_Entry_PlayerIcons_C::SetIndexBrush(int32 Param_NumPlayers, int32 EntryNum, class UImage* Target, TArray<class UPlayerCharacterID*>& Param_Players, bool IsClassLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_PlayerIcons_C", "SetIndexBrush");

	Params::ITM_ServerList_Entry_PlayerIcons_C_SetIndexBrush Parms{};

	Parms.Param_NumPlayers = Param_NumPlayers;
	Parms.EntryNum = EntryNum;
	Parms.Target = Target;
	Parms.Param_Players = std::move(Param_Players);
	Parms.IsClassLocked = IsClassLocked;

	UObject::ProcessEvent(Func, &Parms);

	Param_Players = std::move(Parms.Param_Players);
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTOOLTIP_ServerEntry_Team_C*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTOOLTIP_ServerEntry_Team_C* UITM_ServerList_Entry_PlayerIcons_C::GetToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_PlayerIcons_C", "GetToolTip");

	Params::ITM_ServerList_Entry_PlayerIcons_C_GetToolTip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UPlayerCharacterID*>       Param_Players                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsClassLocked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     OutColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       OutIcon                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterID*               OutPlayer                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_PlayerIcons_C::Get_Player_Details(TArray<class UPlayerCharacterID*>& Param_Players, int32 PlayerIndex, bool IsClassLocked, struct FLinearColor* OutColor, class UTexture2D** OutIcon, class UPlayerCharacterID** OutPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_PlayerIcons_C", "Get Player Details");

	Params::ITM_ServerList_Entry_PlayerIcons_C_Get_Player_Details Parms{};

	Parms.Param_Players = std::move(Param_Players);
	Parms.PlayerIndex = PlayerIndex;
	Parms.IsClassLocked = IsClassLocked;

	UObject::ProcessEvent(Func, &Parms);

	Param_Players = std::move(Parms.Param_Players);

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);

	if (OutIcon != nullptr)
		*OutIcon = Parms.OutIcon;

	if (OutPlayer != nullptr)
		*OutPlayer = Parms.OutPlayer;
}

}

