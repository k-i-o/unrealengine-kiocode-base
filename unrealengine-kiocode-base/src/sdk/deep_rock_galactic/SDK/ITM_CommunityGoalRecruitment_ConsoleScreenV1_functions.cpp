#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CommunityGoalRecruitment_ConsoleScreenV1

#include "Basic.hpp"

#include "ITM_CommunityGoalRecruitment_ConsoleScreenV1_classes.hpp"
#include "ITM_CommunityGoalRecruitment_ConsoleScreenV1_parameters.hpp"


namespace SDK
{

// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.CheckState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::CheckState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_ConsoleScreenV1_C", "CheckState__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_ConsoleScreenV1_C", "ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1");

	Params::ITM_CommunityGoalRecruitment_ConsoleScreenV1_C_ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ResetFactionCheckState
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::ResetFactionCheckState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_ConsoleScreenV1_C", "ResetFactionCheckState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_ConsoleScreenV1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.BuildRecruitmentUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction*            Faction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::BuildRecruitmentUI(class UCommunityGoalFaction* Faction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_ConsoleScreenV1_C", "BuildRecruitmentUI");

	Params::ITM_CommunityGoalRecruitment_ConsoleScreenV1_C_BuildRecruitmentUI Parms{};

	Parms.Faction = Faction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.SetResultFactionID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_CommunityGoalResult_ConsoleScreenV1_C*ResultUI                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FactionID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_CommunityGoalRecruitment_ConsoleScreenV1_C::SetResultFactionID(class UITM_CommunityGoalResult_ConsoleScreenV1_C* ResultUI, int32 FactionID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_ConsoleScreenV1_C", "SetResultFactionID");

	Params::ITM_CommunityGoalRecruitment_ConsoleScreenV1_C_SetResultFactionID Parms{};

	Parms.ResultUI = ResultUI;
	Parms.FactionID = FactionID;

	UObject::ProcessEvent(Func, &Parms);
}

}
