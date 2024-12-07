#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RT_HotRock

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RT_HotRock.RT_HotRock_C
// 0x0000 (0x0030 - 0x0030)
class URT_HotRock_C final : public UStatusEffectReactiveTerrain
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RT_HotRock_C">();
	}
	static class URT_HotRock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URT_HotRock_C>();
	}
};
static_assert(alignof(URT_HotRock_C) == 0x000008, "Wrong alignment on URT_HotRock_C");
static_assert(sizeof(URT_HotRock_C) == 0x000030, "Wrong size on URT_HotRock_C");

}

