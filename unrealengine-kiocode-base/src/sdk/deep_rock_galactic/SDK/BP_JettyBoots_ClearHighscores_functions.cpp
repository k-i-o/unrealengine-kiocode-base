#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JettyBoots_ClearHighscores

#include "Basic.hpp"

#include "BP_JettyBoots_ClearHighscores_classes.hpp"
#include "BP_JettyBoots_ClearHighscores_parameters.hpp"


namespace SDK
{

// Function BP_JettyBoots_ClearHighscores.BP_JettyBoots_ClearHighscores_C.ExecuteUbergraph_BP_JettyBoots_ClearHighscores
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JettyBoots_ClearHighscores_C::ExecuteUbergraph_BP_JettyBoots_ClearHighscores(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JettyBoots_ClearHighscores_C", "ExecuteUbergraph_BP_JettyBoots_ClearHighscores");

	Params::BP_JettyBoots_ClearHighscores_C_ExecuteUbergraph_BP_JettyBoots_ClearHighscores Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JettyBoots_ClearHighscores.BP_JettyBoots_ClearHighscores_C.BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_2_GenericUsableDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_JettyBoots_ClearHighscores_C::BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_2_GenericUsableDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JettyBoots_ClearHighscores_C", "BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_2_GenericUsableDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JettyBoots_ClearHighscores.BP_JettyBoots_ClearHighscores_C.BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JettyBoots_ClearHighscores_C::BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JettyBoots_ClearHighscores_C", "BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature");

	Params::BP_JettyBoots_ClearHighscores_C_BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JettyBoots_ClearHighscores.BP_JettyBoots_ClearHighscores_C.BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JettyBoots_ClearHighscores_C::BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JettyBoots_ClearHighscores_C", "BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	Params::BP_JettyBoots_ClearHighscores_C_BndEvt__BP_JettyBoots_ClearHighscores_ClearHighScoresUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JettyBoots_ClearHighscores.BP_JettyBoots_ClearHighscores_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_JettyBoots_ClearHighscores_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JettyBoots_ClearHighscores_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JettyBoots_ClearHighscores.BP_JettyBoots_ClearHighscores_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_JettyBoots_ClearHighscores_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JettyBoots_ClearHighscores_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
