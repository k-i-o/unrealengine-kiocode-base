#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_SpaceRig

#include "Basic.hpp"

#include "BP_GameState_SpaceRig_classes.hpp"
#include "BP_GameState_SpaceRig_parameters.hpp"


namespace SDK
{

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMisionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission*                Mission                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_SpaceRig_C::OnMisionSelected__DelegateSignature(class UGeneratedMission* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnMisionSelected__DelegateSignature");

	Params::BP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionCountdownChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameState_SpaceRig_C::OnMissionCountdownChanged__DelegateSignature(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnMissionCountdownChanged__DelegateSignature");

	Params::BP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostCountdownChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameState_SpaceRig_C::OnHostCountdownChanged__DelegateSignature(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnHostCountdownChanged__DelegateSignature");

	Params::BP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnCountdownCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnCountdownCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostTimerChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_SpaceRig_C::OnHostTimerChanged__DelegateSignature(float NewTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnHostTimerChanged__DelegateSignature");

	Params::BP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature Parms{};

	Parms.NewTime = NewTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionTimerChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_SpaceRig_C::OnMissionTimerChanged__DelegateSignature(float NewTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnMissionTimerChanged__DelegateSignature");

	Params::BP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature Parms{};

	Parms.NewTime = NewTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnServerListChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnServerListChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnServerListChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameState_SpaceRig_C::OnCountdownChanged__DelegateSignature(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnCountdownChanged__DelegateSignature");

	Params::BP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ExecuteUbergraph_BP_GameState_SpaceRig
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_SpaceRig_C::ExecuteUbergraph_BP_GameState_SpaceRig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "ExecuteUbergraph_BP_GameState_SpaceRig");

	Params::BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Shout_Cooldown_Started
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::Shout_Cooldown_Started()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "Shout_Cooldown_Started");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ManualRefreshServerList
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::ManualRefreshServerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "ManualRefreshServerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveGeneratedMissionReplicated
// (Event, Protected, BlueprintEvent)

void ABP_GameState_SpaceRig_C::ReceiveGeneratedMissionReplicated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "ReceiveGeneratedMissionReplicated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Search
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::Search()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "Search");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameState_SpaceRig_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.CountDownCompleted
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::CountDownCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "CountDownCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopHostTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::StopHostTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "StopHostTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartHostTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::StartHostTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "StartHostTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopMissionTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::StopMissionTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "StopMissionTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartMissionTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::StartMissionTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "StartMissionTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_SpaceRig_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "ReceiveTick");

	Params::BP_GameState_SpaceRig_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnSuccess_3EF307534AC5AC56C0D60384C554CF10
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>  Results                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_GameState_SpaceRig_C::OnSuccess_3EF307534AC5AC56C0D60384C554CF10(const TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnSuccess_3EF307534AC5AC56C0D60384C554CF10");

	Params::BP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10 Parms{};

	Parms.Results = std::move(Results);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnFailure_3EF307534AC5AC56C0D60384C554CF10
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>  Results                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_GameState_SpaceRig_C::OnFailure_3EF307534AC5AC56C0D60384C554CF10(const TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnFailure_3EF307534AC5AC56C0D60384C554CF10");

	Params::BP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10 Parms{};

	Parms.Results = std::move(Results);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRefresh_3EF307534AC5AC56C0D60384C554CF10
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>  Results                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_GameState_SpaceRig_C::OnRefresh_3EF307534AC5AC56C0D60384C554CF10(const TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnRefresh_3EF307534AC5AC56C0D60384C554CF10");

	Params::BP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10 Parms{};

	Parms.Results = std::move(Results);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionCountdown
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnRep_MissionCountdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnRep_MissionCountdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionTimerActive
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnRep_MissionTimerActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnRep_MissionTimerActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdownActive
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnRep_HostCountdownActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnRep_HostCountdownActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdown
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::OnRep_HostCountdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "OnRep_HostCountdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.HandleActiveCountdown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GameState_SpaceRig_C::HandleActiveCountdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "HandleActiveCountdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.AreDeepDiveRequirementsMet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GameState_SpaceRig_C::AreDeepDiveRequirementsMet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_SpaceRig_C", "AreDeepDiveRequirementsMet");

	Params::BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
