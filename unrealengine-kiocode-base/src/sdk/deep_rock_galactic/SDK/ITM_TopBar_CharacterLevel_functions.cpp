#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_TopBar_CharacterLevel

#include "Basic.hpp"

#include "ITM_TopBar_CharacterLevel_classes.hpp"
#include "ITM_TopBar_CharacterLevel_parameters.hpp"


namespace SDK
{

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.ExecuteUbergraph_ITM_TopBar_CharacterLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_TopBar_CharacterLevel_C::ExecuteUbergraph_ITM_TopBar_CharacterLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_CharacterLevel_C", "ExecuteUbergraph_ITM_TopBar_CharacterLevel");

	Params::ITM_TopBar_CharacterLevel_C_ExecuteUbergraph_ITM_TopBar_CharacterLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_TopBar_CharacterLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_CharacterLevel_C", "PreConstruct");

	Params::ITM_TopBar_CharacterLevel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnCharacterStatsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_TopBar_CharacterLevel_C::OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_CharacterLevel_C", "OnCharacterStatsChanged_Event");

	Params::ITM_TopBar_CharacterLevel_C_OnCharacterStatsChanged_Event Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnPlayerCharacterSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_TopBar_CharacterLevel_C::OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_CharacterLevel_C", "OnPlayerCharacterSpawned");

	Params::ITM_TopBar_CharacterLevel_C_OnPlayerCharacterSpawned Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_TopBar_CharacterLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_CharacterLevel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.SetCharacterLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CharacterLevel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_TopBar_CharacterLevel_C::SetCharacterLevel(int32 Param_CharacterLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_CharacterLevel_C", "SetCharacterLevel");

	Params::ITM_TopBar_CharacterLevel_C_SetCharacterLevel Parms{};

	Parms.Param_CharacterLevel = Param_CharacterLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.FromPlayerState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_TopBar_CharacterLevel_C::FromPlayerState(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_CharacterLevel_C", "FromPlayerState");

	Params::ITM_TopBar_CharacterLevel_C_FromPlayerState Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

}
