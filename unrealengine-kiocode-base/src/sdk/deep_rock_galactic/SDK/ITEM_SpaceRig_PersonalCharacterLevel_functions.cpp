#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITEM_SpaceRig_PersonalCharacterLevel

#include "Basic.hpp"

#include "ITEM_SpaceRig_PersonalCharacterLevel_classes.hpp"
#include "ITEM_SpaceRig_PersonalCharacterLevel_parameters.hpp"


namespace SDK
{

// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITEM_SpaceRig_PersonalCharacterLevel_C::ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_SpaceRig_PersonalCharacterLevel_C", "ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel");

	Params::ITEM_SpaceRig_PersonalCharacterLevel_C_ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState*                  Param_PlayerState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITEM_SpaceRig_PersonalCharacterLevel_C::OnCharacterStatsChanged_Event(class AFSDPlayerState* Param_PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_SpaceRig_PersonalCharacterLevel_C", "OnCharacterStatsChanged_Event");

	Params::ITEM_SpaceRig_PersonalCharacterLevel_C_OnCharacterStatsChanged_Event Parms{};

	Parms.Param_PlayerState = Param_PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITEM_SpaceRig_PersonalCharacterLevel_C::OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_SpaceRig_PersonalCharacterLevel_C", "OnPlayerCharacterSpawned");

	Params::ITEM_SpaceRig_PersonalCharacterLevel_C_OnPlayerCharacterSpawned Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITEM_SpaceRig_PersonalCharacterLevel_C::Update(class APlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_SpaceRig_PersonalCharacterLevel_C", "Update");

	Params::ITEM_SpaceRig_PersonalCharacterLevel_C_Update Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITEM_SpaceRig_PersonalCharacterLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_SpaceRig_PersonalCharacterLevel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
