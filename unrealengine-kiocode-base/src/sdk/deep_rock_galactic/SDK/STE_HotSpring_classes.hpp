#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STE_HotSpring

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STE_HotSpring.STE_HotSpring_C
// 0x0000 (0x0108 - 0x0108)
class USTE_HotSpring_C final : public UStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STE_HotSpring_C">();
	}
	static class USTE_HotSpring_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTE_HotSpring_C>();
	}
};
static_assert(alignof(USTE_HotSpring_C) == 0x000008, "Wrong alignment on USTE_HotSpring_C");
static_assert(sizeof(USTE_HotSpring_C) == 0x000108, "Wrong size on USTE_HotSpring_C");

}
