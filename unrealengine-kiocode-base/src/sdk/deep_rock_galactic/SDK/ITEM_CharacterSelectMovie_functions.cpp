#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITEM_CharacterSelectMovie

#include "Basic.hpp"

#include "ITEM_CharacterSelectMovie_classes.hpp"
#include "ITEM_CharacterSelectMovie_parameters.hpp"


namespace SDK
{

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITEM_CharacterSelectMovie_C::ExecuteUbergraph_ITEM_CharacterSelectMovie(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_CharacterSelectMovie_C", "ExecuteUbergraph_ITEM_CharacterSelectMovie");

	Params::ITEM_CharacterSelectMovie_C_ExecuteUbergraph_ITEM_CharacterSelectMovie Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.BuildCharacterSelectionMovie
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UITEM_CharacterSelectMovie_C::BuildCharacterSelectionMovie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_CharacterSelectMovie_C", "BuildCharacterSelectionMovie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer
// (BlueprintCallable, BlueprintEvent)

void UITEM_CharacterSelectMovie_C::InitPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_CharacterSelectMovie_C", "InitPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITEM_CharacterSelectMovie_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_CharacterSelectMovie_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID*               Param_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITEM_CharacterSelectMovie_C::SetVideo(class UPlayerCharacterID* Param_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_CharacterSelectMovie_C", "SetVideo");

	Params::ITEM_CharacterSelectMovie_C_SetVideo Parms{};

	Parms.Param_Character = Param_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse
// (Public, BlueprintCallable, BlueprintEvent)

void UITEM_CharacterSelectMovie_C::Collapse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITEM_CharacterSelectMovie_C", "Collapse");

	UObject::ProcessEvent(Func, nullptr);
}

}
