#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteamSockets

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class SteamSockets.SteamSocketsNetConnection
// 0x0010 (0x1BB8 - 0x1BA8)
class USteamSocketsNetConnection final : public UNetConnection
{
public:
	uint8                                         Pad_1070[0x10];                                    // 0x1BA8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamSocketsNetConnection">();
	}
	static class USteamSocketsNetConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamSocketsNetConnection>();
	}
};
static_assert(alignof(USteamSocketsNetConnection) == 0x000008, "Wrong alignment on USteamSocketsNetConnection");
static_assert(sizeof(USteamSocketsNetConnection) == 0x001BB8, "Wrong size on USteamSocketsNetConnection");

// Class SteamSockets.SteamSocketsNetDriver
// 0x0010 (0x0770 - 0x0760)
class USteamSocketsNetDriver final : public UNetDriver
{
public:
	uint8                                         Pad_1071[0x10];                                    // 0x0760(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamSocketsNetDriver">();
	}
	static class USteamSocketsNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamSocketsNetDriver>();
	}
};
static_assert(alignof(USteamSocketsNetDriver) == 0x000008, "Wrong alignment on USteamSocketsNetDriver");
static_assert(sizeof(USteamSocketsNetDriver) == 0x000770, "Wrong size on USteamSocketsNetDriver");

}
