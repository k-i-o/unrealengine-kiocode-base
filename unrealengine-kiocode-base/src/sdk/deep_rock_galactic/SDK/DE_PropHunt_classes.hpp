#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DE_PropHunt

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DE_PropHunt.DE_PropHunt_C
// 0x0000 (0x00C8 - 0x00C8)
class UDE_PropHunt_C final : public UPropHuntDrinkEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DE_PropHunt_C">();
	}
	static class UDE_PropHunt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDE_PropHunt_C>();
	}
};
static_assert(alignof(UDE_PropHunt_C) == 0x000008, "Wrong alignment on UDE_PropHunt_C");
static_assert(sizeof(UDE_PropHunt_C) == 0x0000C8, "Wrong size on UDE_PropHunt_C");

}
