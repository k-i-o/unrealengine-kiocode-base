#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeathScreen

#include "Basic.hpp"

#include "WBP_DeathScreen_classes.hpp"
#include "WBP_DeathScreen_parameters.hpp"


namespace SDK
{

// Function WBP_DeathScreen.WBP_DeathScreen_C.ExecuteUbergraph_WBP_DeathScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeathScreen_C::ExecuteUbergraph_WBP_DeathScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeathScreen_C", "ExecuteUbergraph_WBP_DeathScreen");

	Params::WBP_DeathScreen_C_ExecuteUbergraph_WBP_DeathScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeathScreen.WBP_DeathScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeathScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeathScreen_C", "PreConstruct");

	Params::WBP_DeathScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeathScreen.WBP_DeathScreen_C.UpdateDeathKeyText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_DeathScreen_C::UpdateDeathKeyText(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeathScreen_C", "UpdateDeathKeyText");

	Params::WBP_DeathScreen_C_UpdateDeathKeyText Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	Key = std::move(Parms.Key);
}

}
