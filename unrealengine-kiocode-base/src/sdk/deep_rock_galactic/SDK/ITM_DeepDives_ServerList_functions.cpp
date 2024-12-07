#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDives_ServerList

#include "Basic.hpp"

#include "ITM_DeepDives_ServerList_classes.hpp"
#include "ITM_DeepDives_ServerList_parameters.hpp"


namespace SDK
{

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateLocked
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerList_C::UpdateLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "UpdateLocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.JoinServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult          InSession                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerList_C::JoinServer(const struct FBlueprintSessionResult& InSession)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "JoinServer");

	Params::ITM_DeepDives_ServerList_C_JoinServer Parms{};

	Parms.InSession = std::move(InSession);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.FinishUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerList_C::FinishUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "FinishUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult          ServerInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerList_C::UpdateServer(const struct FBlueprintSessionResult& ServerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "UpdateServer");

	Params::ITM_DeepDives_ServerList_C_UpdateServer Parms{};

	Parms.ServerInfo = std::move(ServerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.BeginUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerList_C::BeginUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "BeginUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_ServerList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "PreConstruct");

	Params::ITM_DeepDives_ServerList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_DeepDives_ServerList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnIsUGCAllowed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     CheckedPlayerState                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBlueprintableUserPrivileges            CheckedPrivilege                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBlueprintablePrivilegeResults          PrivilegeResult                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_ServerList_C::OnIsUGCAllowed(const class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "OnIsUGCAllowed");

	Params::ITM_DeepDives_ServerList_C_OnIsUGCAllowed Parms{};

	Parms.CheckedPlayerState = CheckedPlayerState;
	Parms.CheckedPrivilege = CheckedPrivilege;
	Parms.PrivilegeResult = PrivilegeResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.ExecuteUbergraph_ITM_DeepDives_ServerList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_ServerList_C::ExecuteUbergraph_ITM_DeepDives_ServerList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "ExecuteUbergraph_ITM_DeepDives_ServerList");

	Params::ITM_DeepDives_ServerList_C_ExecuteUbergraph_ITM_DeepDives_ServerList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnJoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult          Session                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerList_C::OnJoinServer__DelegateSignature(const struct FBlueprintSessionResult& Session)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_ServerList_C", "OnJoinServer__DelegateSignature");

	Params::ITM_DeepDives_ServerList_C_OnJoinServer__DelegateSignature Parms{};

	Parms.Session = std::move(Session);

	UObject::ProcessEvent(Func, &Parms);
}

}

