#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CommunityGoalRecruitment

#include "Basic.hpp"

#include "ITM_CommunityGoalRecruitment_classes.hpp"
#include "ITM_CommunityGoalRecruitment_parameters.hpp"


namespace SDK
{

// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.CheckState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalRecruitment_C::CheckState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_C", "CheckState__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_CommunityGoalRecruitment_C::ExecuteUbergraph_ITM_CommunityGoalRecruitment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_C", "ExecuteUbergraph_ITM_CommunityGoalRecruitment");

	Params::ITM_CommunityGoalRecruitment_C_ExecuteUbergraph_ITM_CommunityGoalRecruitment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ResetFactionCheckState
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalRecruitment_C::ResetFactionCheckState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_C", "ResetFactionCheckState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CommunityGoalRecruitment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Seconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_CommunityGoalRecruitment_C::SetTime(float Seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_C", "SetTime");

	Params::ITM_CommunityGoalRecruitment_C_SetTime Parms{};

	Parms.Seconds = Seconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.BuildRecruitmentUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction*            Faction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_CommunityGoalRecruitment_C::BuildRecruitmentUI(class UCommunityGoalFaction* Faction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_C", "BuildRecruitmentUI");

	Params::ITM_CommunityGoalRecruitment_C_BuildRecruitmentUI Parms{};

	Parms.Faction = Faction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_CommunityGoalResult_C*       ResultUI                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FactionID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_CommunityGoalRecruitment_C::SetResult(class UITM_CommunityGoalResult_C* ResultUI, int32 FactionID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_CommunityGoalRecruitment_C", "SetResult");

	Params::ITM_CommunityGoalRecruitment_C_SetResult Parms{};

	Parms.ResultUI = ResultUI;
	Parms.FactionID = FactionID;

	UObject::ProcessEvent(Func, &Parms);
}

}

