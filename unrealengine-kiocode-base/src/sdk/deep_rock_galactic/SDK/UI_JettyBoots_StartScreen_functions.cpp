#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_JettyBoots_StartScreen

#include "Basic.hpp"

#include "UI_JettyBoots_StartScreen_classes.hpp"
#include "UI_JettyBoots_StartScreen_parameters.hpp"


namespace SDK
{

// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.ExecuteUbergraph_UI_JettyBoots_StartScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_StartScreen_C::ExecuteUbergraph_UI_JettyBoots_StartScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "ExecuteUbergraph_UI_JettyBoots_StartScreen");

	Params::UI_JettyBoots_StartScreen_C_ExecuteUbergraph_UI_JettyBoots_StartScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SwitchContent
// (BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_StartScreen_C::SwitchContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "SwitchContent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.PlayBootAnim
// (BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_StartScreen_C::PlayBootAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "PlayBootAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_JettyBoots_StartScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Finished_FD22870B47131B500E9FB18111157FEE
// (BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_StartScreen_C::Finished_FD22870B47131B500E9FB18111157FEE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "Finished_FD22870B47131B500E9FB18111157FEE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Finished_501568F5450B58B30B9BA992AA66184E
// (BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_StartScreen_C::Finished_501568F5450B58B30B9BA992AA66184E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "Finished_501568F5450B58B30B9BA992AA66184E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SetHighScores
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FJettyBootsScore>         InHighScores                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InLastIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutCurrentBest                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_StartScreen_C::SetHighScores(TArray<struct FJettyBootsScore>& InHighScores, int32 InLastIndex, int32* OutCurrentBest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "SetHighScores");

	Params::UI_JettyBoots_StartScreen_C_SetHighScores Parms{};

	Parms.InHighScores = std::move(InHighScores);
	Parms.InLastIndex = InLastIndex;

	UObject::ProcessEvent(Func, &Parms);

	InHighScores = std::move(Parms.InHighScores);

	if (OutCurrentBest != nullptr)
		*OutCurrentBest = Parms.OutCurrentBest;
}


// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StartWithHighScores                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_StartScreen_C::Start(bool StartWithHighScores)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "Start");

	Params::UI_JettyBoots_StartScreen_C_Start Parms{};

	Parms.StartWithHighScores = StartWithHighScores;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SetFSDEventSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InHasSettings                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FJettyBootEventSettings          InSettings                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_JettyBoots_StartScreen_C::SetFSDEventSettings(bool InHasSettings, const struct FJettyBootEventSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_StartScreen_C", "SetFSDEventSettings");

	Params::UI_JettyBoots_StartScreen_C_SetFSDEventSettings Parms{};

	Parms.InHasSettings = InHasSettings;
	Parms.InSettings = std::move(InSettings);

	UObject::ProcessEvent(Func, &Parms);
}

}
