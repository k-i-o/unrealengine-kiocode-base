#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_JettyBoots_Lives

#include "Basic.hpp"

#include "UI_JettyBoots_Lives_classes.hpp"
#include "UI_JettyBoots_Lives_parameters.hpp"


namespace SDK
{

// Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.ExecuteUbergraph_UI_JettyBoots_Lives
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Lives_C::ExecuteUbergraph_UI_JettyBoots_Lives(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Lives_C", "ExecuteUbergraph_UI_JettyBoots_Lives");

	Params::UI_JettyBoots_Lives_C_ExecuteUbergraph_UI_JettyBoots_Lives Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Lives_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Lives_C", "PreConstruct");

	Params::UI_JettyBoots_Lives_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.SetLives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLives                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Lives_C::SetLives(int32 InLives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Lives_C", "SetLives");

	Params::UI_JettyBoots_Lives_C_SetLives Parms{};

	Parms.InLives = InLives;

	UObject::ProcessEvent(Func, &Parms);
}

}
