#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DiscordSDK

#include "Basic.hpp"

#include "DiscordSDK_classes.hpp"
#include "DiscordSDK_parameters.hpp"


namespace SDK
{

// Function DiscordSDK.DiscordSDKInterface.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDiscordSDKInterface*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDiscordSDKInterface* UDiscordSDKInterface::Get()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordSDKInterface", "Get");

	Params::DiscordSDKInterface_Get Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DiscordSDK.DiscordSDKInterface.AcceptInvite
// (Native, Protected, BlueprintCallable)
// Parameters:
// class FString                           UserId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordSDKInterface::AcceptInvite(const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscordSDKInterface", "AcceptInvite");

	Params::DiscordSDKInterface_AcceptInvite Parms{};

	Parms.UserId = std::move(UserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordSDK.DiscordSDKInterface.IgnoreInvite
// (Native, Protected, BlueprintCallable)
// Parameters:
// class FString                           UserId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordSDKInterface::IgnoreInvite(const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscordSDKInterface", "IgnoreInvite");

	Params::DiscordSDKInterface_IgnoreInvite Parms{};

	Parms.UserId = std::move(UserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordSDK.DiscordSDKInterface.RejectInvite
// (Native, Protected, BlueprintCallable)
// Parameters:
// class FString                           UserId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordSDKInterface::RejectInvite(const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscordSDKInterface", "RejectInvite");

	Params::DiscordSDKInterface_RejectInvite Parms{};

	Parms.UserId = std::move(UserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

