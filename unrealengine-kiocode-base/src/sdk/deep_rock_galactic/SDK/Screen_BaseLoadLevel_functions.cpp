#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Screen_BaseLoadLevel

#include "Basic.hpp"

#include "Screen_BaseLoadLevel_classes.hpp"
#include "Screen_BaseLoadLevel_parameters.hpp"


namespace SDK
{

// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StartLoadSeq
// (BlueprintCallable, BlueprintEvent)

void UScreen_BaseLoadLevel_C::StartLoadSeq()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Screen_BaseLoadLevel_C", "StartLoadSeq");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StopLoader
// (BlueprintCallable, BlueprintEvent)

void UScreen_BaseLoadLevel_C::StopLoader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Screen_BaseLoadLevel_C", "StopLoader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.CharacterPossesed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreen_BaseLoadLevel_C::CharacterPossesed(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Screen_BaseLoadLevel_C", "CharacterPossesed");

	Params::Screen_BaseLoadLevel_C_CharacterPossesed Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.ExecuteUbergraph_Screen_BaseLoadLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreen_BaseLoadLevel_C::ExecuteUbergraph_Screen_BaseLoadLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Screen_BaseLoadLevel_C", "ExecuteUbergraph_Screen_BaseLoadLevel");

	Params::Screen_BaseLoadLevel_C_ExecuteUbergraph_Screen_BaseLoadLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
