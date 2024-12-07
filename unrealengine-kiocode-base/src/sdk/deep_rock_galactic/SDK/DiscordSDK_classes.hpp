#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DiscordSDK

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DiscordSDK.DiscordSDKInterface
// 0x0030 (0x0058 - 0x0028)
class UDiscordSDKInterface : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnJoinRequest;                                     // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1512[0x20];                                    // 0x0038(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UDiscordSDKInterface* Get();

	void AcceptInvite(const class FString& UserId);
	void IgnoreInvite(const class FString& UserId);
	void RejectInvite(const class FString& UserId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DiscordSDKInterface">();
	}
	static class UDiscordSDKInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiscordSDKInterface>();
	}
};
static_assert(alignof(UDiscordSDKInterface) == 0x000008, "Wrong alignment on UDiscordSDKInterface");
static_assert(sizeof(UDiscordSDKInterface) == 0x000058, "Wrong size on UDiscordSDKInterface");
static_assert(offsetof(UDiscordSDKInterface, OnJoinRequest) == 0x000028, "Member 'UDiscordSDKInterface::OnJoinRequest' has a wrong offset!");

// Class DiscordSDK.DiscordSDKInterface_Win64
// 0x0008 (0x0060 - 0x0058)
class UDiscordSDKInterface_Win64 final : public UDiscordSDKInterface
{
public:
	uint8                                         Pad_1513[0x8];                                     // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DiscordSDKInterface_Win64">();
	}
	static class UDiscordSDKInterface_Win64* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiscordSDKInterface_Win64>();
	}
};
static_assert(alignof(UDiscordSDKInterface_Win64) == 0x000008, "Wrong alignment on UDiscordSDKInterface_Win64");
static_assert(sizeof(UDiscordSDKInterface_Win64) == 0x000060, "Wrong size on UDiscordSDKInterface_Win64");

}

