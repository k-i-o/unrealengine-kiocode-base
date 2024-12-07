#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ICON_Rank

#include "Basic.hpp"

#include "ICON_Rank_classes.hpp"
#include "ICON_Rank_parameters.hpp"


namespace SDK
{

// Function ICON_Rank.ICON_Rank_C.ExecuteUbergraph_ICON_Rank
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UICON_Rank_C::ExecuteUbergraph_ICON_Rank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ICON_Rank_C", "ExecuteUbergraph_ICON_Rank");

	Params::ICON_Rank_C_ExecuteUbergraph_ICON_Rank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ICON_Rank.ICON_Rank_C.SetRankAndStars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stars                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UICON_Rank_C::SetRankAndStars(int32 Rank, int32 Stars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ICON_Rank_C", "SetRankAndStars");

	Params::ICON_Rank_C_SetRankAndStars Parms{};

	Parms.Rank = Rank;
	Parms.Stars = Stars;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ICON_Rank.ICON_Rank_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UICON_Rank_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ICON_Rank_C", "PreConstruct");

	Params::ICON_Rank_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ICON_Rank.ICON_Rank_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UICON_Rank_C::Update(class AFSDPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ICON_Rank_C", "Update");

	Params::ICON_Rank_C_Update Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ICON_Rank.ICON_Rank_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UICON_Rank_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ICON_Rank_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

