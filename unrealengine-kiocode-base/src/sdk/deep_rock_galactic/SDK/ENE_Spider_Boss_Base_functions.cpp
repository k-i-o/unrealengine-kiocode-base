#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ENE_Spider_Boss_Base

#include "Basic.hpp"

#include "ENE_Spider_Boss_Base_classes.hpp"
#include "ENE_Spider_Boss_Base_parameters.hpp"


namespace SDK
{

// Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.Check Without A Paddle Achievement
// (Public, BlueprintCallable, BlueprintEvent)

void AENE_Spider_Boss_Base_C::Check_Without_A_Paddle_Achievement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ENE_Spider_Boss_Base_C", "Check Without A Paddle Achievement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.DifficultyAsInt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Difficulty                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AENE_Spider_Boss_Base_C::DifficultyAsInt(int32* Difficulty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ENE_Spider_Boss_Base_C", "DifficultyAsInt");

	Params::ENE_Spider_Boss_Base_C_DifficultyAsInt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Difficulty != nullptr)
		*Difficulty = Parms.Difficulty;
}


// Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.OnBossFightCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void AENE_Spider_Boss_Base_C::OnBossFightCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ENE_Spider_Boss_Base_C", "OnBossFightCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.FindMostDamagedPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Designated_Decoy                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AENE_Spider_Boss_Base_C::FindMostDamagedPlayer(class APlayerCharacter** Designated_Decoy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ENE_Spider_Boss_Base_C", "FindMostDamagedPlayer");

	Params::ENE_Spider_Boss_Base_C_FindMostDamagedPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Designated_Decoy != nullptr)
		*Designated_Decoy = Parms.Designated_Decoy;
}


// Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AENE_Spider_Boss_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ENE_Spider_Boss_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.OnDamagedPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AENE_Spider_Boss_Base_C::OnDamagedPlayer(class APlayerCharacter* Player, float Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ENE_Spider_Boss_Base_C", "OnDamagedPlayer");

	Params::ENE_Spider_Boss_Base_C_OnDamagedPlayer Parms{};

	Parms.Player = Player;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.OnAllDwarvesDown
// (BlueprintCallable, BlueprintEvent)

void AENE_Spider_Boss_Base_C::OnAllDwarvesDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ENE_Spider_Boss_Base_C", "OnAllDwarvesDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.ExecuteUbergraph_ENE_Spider_Boss_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AENE_Spider_Boss_Base_C::ExecuteUbergraph_ENE_Spider_Boss_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ENE_Spider_Boss_Base_C", "ExecuteUbergraph_ENE_Spider_Boss_Base");

	Params::ENE_Spider_Boss_Base_C_ExecuteUbergraph_ENE_Spider_Boss_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

