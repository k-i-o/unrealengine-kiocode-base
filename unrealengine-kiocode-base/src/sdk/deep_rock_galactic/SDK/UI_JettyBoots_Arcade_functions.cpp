#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_JettyBoots_Arcade

#include "Basic.hpp"

#include "UI_JettyBoots_Arcade_classes.hpp"
#include "UI_JettyBoots_Arcade_parameters.hpp"


namespace SDK
{

// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnGameEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJettyBootsScore                 InScore                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InOnHighScoreList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InIHighScoreIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*                 InPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::OnGameEnded__DelegateSignature(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32 InIHighScoreIndex, class APlayerCharacter* InPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "OnGameEnded__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_OnGameEnded__DelegateSignature Parms{};

	Parms.InScore = std::move(InScore);
	Parms.InOnHighScoreList = InOnHighScoreList;
	Parms.InIHighScoreIndex = InIHighScoreIndex;
	Parms.InPlayer = InPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnReplayRecorded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJettyBootsReplay                InReplay                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUI_JettyBoots_Arcade_C::OnReplayRecorded__DelegateSignature(const struct FJettyBootsReplay& InReplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "OnReplayRecorded__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_OnReplayRecorded__DelegateSignature Parms{};

	Parms.InReplay = std::move(InReplay);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnGameOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJettyBootsScore                 InScore                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InOnHighScoreList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InHighScoreIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*                 InPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::OnGameOver__DelegateSignature(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32 InHighScoreIndex, class APlayerCharacter* InPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "OnGameOver__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_OnGameOver__DelegateSignature Parms{};

	Parms.InScore = std::move(InScore);
	Parms.InOnHighScoreList = InOnHighScoreList;
	Parms.InHighScoreIndex = InHighScoreIndex;
	Parms.InPlayer = InPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnRestartingLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 InPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::OnRestartingLevel__DelegateSignature(class APlayerCharacter* InPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "OnRestartingLevel__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_OnRestartingLevel__DelegateSignature Parms{};

	Parms.InPlayer = InPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnLevelCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 InPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::OnLevelCompleted__DelegateSignature(class APlayerCharacter* InPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "OnLevelCompleted__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_OnLevelCompleted__DelegateSignature Parms{};

	Parms.InPlayer = InPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.ExecuteUbergraph_UI_JettyBoots_Arcade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::ExecuteUbergraph_UI_JettyBoots_Arcade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "ExecuteUbergraph_UI_JettyBoots_Arcade");

	Params::UI_JettyBoots_Arcade_C_ExecuteUbergraph_UI_JettyBoots_Arcade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Arcade_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "PreConstruct");

	Params::UI_JettyBoots_Arcade_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GameOverAudio
// (BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Arcade_C::GameOverAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "GameOverAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Setup FSD Events
// (BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Arcade_C::Setup_FSD_Events()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Setup FSD Events");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_JettyBoots_Arcade_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutPoints                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature(int32 OutPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature Parms{};

	Parms.OutPoints = OutPoints;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature
// (BlueprintEvent)

void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ENUM_JettyBoots_GameState               InGameState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature(ENUM_JettyBoots_GameState InGameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature Parms{};

	Parms.InGameState = InGameState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ENUM_JettyBoots_GameState               InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ENUM_JettyBoots_GameState               InPreviousState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature(ENUM_JettyBoots_GameState InState, ENUM_JettyBoots_GameState InPreviousState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature Parms{};

	Parms.InState = InState;
	Parms.InPreviousState = InPreviousState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   InLevelSeed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InCharacterPosition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ENUM_JettyBoots_GameState               InGameState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature(int32 InLevelSeed, const struct FVector2D& InCharacterPosition, ENUM_JettyBoots_GameState InGameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature");

	Params::UI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature Parms{};

	Parms.InLevelSeed = InLevelSeed;
	Parms.InCharacterPosition = std::move(InCharacterPosition);
	Parms.InGameState = InGameState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Tick");

	Params::UI_JettyBoots_Arcade_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.SetAudioSceneComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Param_Audio_Scene_Component                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::SetAudioSceneComponent(class USceneComponent* Param_Audio_Scene_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "SetAudioSceneComponent");

	Params::UI_JettyBoots_Arcade_C_SetAudioSceneComponent Parms{};

	Parms.Param_Audio_Scene_Component = Param_Audio_Scene_Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display State
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLives                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::Display_State(int32 InLevel, int32 InScore, int32 InLives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Display State");

	Params::UI_JettyBoots_Arcade_C_Display_State Parms{};

	Parms.InLevel = InLevel;
	Parms.InScore = InScore;
	Parms.InLives = InLives;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display HighScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InHighscore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::Display_HighScore(int32 InHighscore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Display HighScore");

	Params::UI_JettyBoots_Arcade_C_Display_HighScore Parms{};

	Parms.InHighscore = InHighscore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Score
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::Display_Score(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Display Score");

	Params::UI_JettyBoots_Arcade_C_Display_Score Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Lives
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutGameOver                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Arcade_C::Display_Lives(int32 InValue, bool* OutGameOver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Display Lives");

	Params::UI_JettyBoots_Arcade_C_Display_Lives Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutGameOver != nullptr)
		*OutGameOver = Parms.OutGameOver;
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Level
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::Display_Level(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Display Level");

	Params::UI_JettyBoots_Arcade_C_Display_Level Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.SetHighScores
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FJettyBootsScore>         InHighScores                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InLastIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::SetHighScores(TArray<struct FJettyBootsScore>& InHighScores, int32 InLastIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "SetHighScores");

	Params::UI_JettyBoots_Arcade_C_SetHighScores Parms{};

	Parms.InHighScores = std::move(InHighScores);
	Parms.InLastIndex = InLastIndex;

	UObject::ProcessEvent(Func, &Parms);

	InHighScores = std::move(Parms.InHighScores);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StartGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 InUser                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AJettyBootsArcadeActor*           InArcade                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::StartGame(class APlayerCharacter* InUser, class AJettyBootsArcadeActor* InArcade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "StartGame");

	Params::UI_JettyBoots_Arcade_C_StartGame Parms{};

	Parms.InUser = InUser;
	Parms.InArcade = InArcade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GetUserName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::GetUserName(class FString* OutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "GetUserName");

	Params::UI_JettyBoots_Arcade_C_GetUserName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StopGame
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Arcade_C::StopGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "StopGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.ReplayGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJettyBootsReplay                InReplay                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUI_JettyBoots_Arcade_C::ReplayGame(const struct FJettyBootsReplay& InReplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "ReplayGame");

	Params::UI_JettyBoots_Arcade_C_ReplayGame Parms{};

	Parms.InReplay = std::move(InReplay);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.UpdateMusic
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENUM_JettyBoots_GameState               InGameState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ENUM_JettyBoots_GameState               OutGameState                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::UpdateMusic(ENUM_JettyBoots_GameState InGameState, ENUM_JettyBoots_GameState* OutGameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "UpdateMusic");

	Params::UI_JettyBoots_Arcade_C_UpdateMusic Parms{};

	Parms.InGameState = InGameState;

	UObject::ProcessEvent(Func, &Parms);

	if (OutGameState != nullptr)
		*OutGameState = Parms.OutGameState;
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GetScoreStatus
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InNewScore                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutOnList                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Arcade_C::GetScoreStatus(int32 InNewScore, bool* OutOnList, int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "GetScoreStatus");

	Params::UI_JettyBoots_Arcade_C_GetScoreStatus Parms{};

	Parms.InNewScore = InNewScore;

	UObject::ProcessEvent(Func, &Parms);

	if (OutOnList != nullptr)
		*OutOnList = Parms.OutOnList;

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StartNextLevel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Arcade_C::StartNextLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "StartNextLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Check FSDEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Arcade_C::Check_FSDEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "Check FSDEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.IsJumpPressed
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    OutPressed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Arcade_C::IsJumpPressed(bool* OutPressed) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Arcade_C", "IsJumpPressed");

	Params::UI_JettyBoots_Arcade_C_IsJumpPressed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPressed != nullptr)
		*OutPressed = Parms.OutPressed;
}

}
