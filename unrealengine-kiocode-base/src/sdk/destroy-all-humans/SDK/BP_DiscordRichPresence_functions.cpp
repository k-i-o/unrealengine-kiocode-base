#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DiscordRichPresence

#include "Basic.hpp"

#include "BP_DiscordRichPresence_classes.hpp"
#include "BP_DiscordRichPresence_parameters.hpp"


namespace SDK
{

// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.On Level Loaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DiscordRichPresence_C::On_Level_Loaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "On Level Loaded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.ExecuteUbergraph_BP_DiscordRichPresence
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::ExecuteUbergraph_BP_DiscordRichPresence(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "ExecuteUbergraph_BP_DiscordRichPresence");

	Params::BP_DiscordRichPresence_C_ExecuteUbergraph_BP_DiscordRichPresence Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.Shutdown
// (Event, Public, BlueprintEvent)

void UBP_DiscordRichPresence_C::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "Shutdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   _fDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::Update(float _fDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "Update");

	Params::BP_DiscordRichPresence_C_Update Parms{};

	Parms._fDeltaTime = _fDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.Init
// (Event, Public, BlueprintEvent)

void UBP_DiscordRichPresence_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.OnSpectate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SpectateSecret                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::OnSpectate(const class FString& SpectateSecret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "OnSpectate");

	Params::BP_DiscordRichPresence_C_OnSpectate Parms{};

	Parms.SpectateSecret = std::move(SpectateSecret);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.OnJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           JoinSecret                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::OnJoin(const class FString& JoinSecret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "OnJoin");

	Params::BP_DiscordRichPresence_C_OnJoin Parms{};

	Parms.JoinSecret = std::move(JoinSecret);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.OnJoinRequest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordUserData                 JoinRequest                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_DiscordRichPresence_C::OnJoinRequest(const struct FDiscordUserData& JoinRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "OnJoinRequest");

	Params::BP_DiscordRichPresence_C_OnJoinRequest Parms{};

	Parms.JoinRequest = std::move(JoinRequest);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.OnConnect
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordUserData                 JoinRequest                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_DiscordRichPresence_C::OnConnect(const struct FDiscordUserData& JoinRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "OnConnect");

	Params::BP_DiscordRichPresence_C_OnConnect Parms{};

	Parms.JoinRequest = std::move(JoinRequest);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.OnDisconnect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ErrorMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::OnDisconnect(int32 ErrorCode, const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "OnDisconnect");

	Params::BP_DiscordRichPresence_C_OnDisconnect Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.SetSmallImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ImageID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ToolTip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::SetSmallImage(const class FString& ImageID, const class FString& ToolTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "SetSmallImage");

	Params::BP_DiscordRichPresence_C_SetSmallImage Parms{};

	Parms.ImageID = std::move(ImageID);
	Parms.ToolTip = std::move(ToolTip);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.SetBigImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ImageID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ToolTip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::SetBigImage(const class FString& ImageID, const class FString& ToolTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "SetBigImage");

	Params::BP_DiscordRichPresence_C_SetBigImage Parms{};

	Parms.ImageID = std::move(ImageID);
	Parms.ToolTip = std::move(ToolTip);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.SetFirstLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::SetFirstLine(const class FString& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "SetFirstLine");

	Params::BP_DiscordRichPresence_C_SetFirstLine Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DiscordRichPresence.BP_DiscordRichPresence_C.SetSecondLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DiscordRichPresence_C::SetSecondLine(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordRichPresence_C", "SetSecondLine");

	Params::BP_DiscordRichPresence_C_SetSecondLine Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}
