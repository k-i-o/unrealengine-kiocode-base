#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DiscordSDK

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct DiscordSDK.DiscordUserDataSDK
// 0x0040 (0x0040 - 0x0000)
struct FDiscordUserDataSDK final
{
public:
	class FString                                 UserId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Username;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Discriminator;                                     // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Avatar;                                            // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDiscordUserDataSDK) == 0x000008, "Wrong alignment on FDiscordUserDataSDK");
static_assert(sizeof(FDiscordUserDataSDK) == 0x000040, "Wrong size on FDiscordUserDataSDK");
static_assert(offsetof(FDiscordUserDataSDK, UserId) == 0x000000, "Member 'FDiscordUserDataSDK::UserId' has a wrong offset!");
static_assert(offsetof(FDiscordUserDataSDK, Username) == 0x000010, "Member 'FDiscordUserDataSDK::Username' has a wrong offset!");
static_assert(offsetof(FDiscordUserDataSDK, Discriminator) == 0x000020, "Member 'FDiscordUserDataSDK::Discriminator' has a wrong offset!");
static_assert(offsetof(FDiscordUserDataSDK, Avatar) == 0x000030, "Member 'FDiscordUserDataSDK::Avatar' has a wrong offset!");

}
