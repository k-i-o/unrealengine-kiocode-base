#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Armor_medium

#include "Basic.hpp"

#include "Armor_Light_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Armor_medium.Armor_medium_C
// 0x0000 (0x0270 - 0x0270)
class AArmor_medium_C final : public AArmor_Light_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Armor_medium_C">();
	}
	static class AArmor_medium_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArmor_medium_C>();
	}
};
static_assert(alignof(AArmor_medium_C) == 0x000008, "Wrong alignment on AArmor_medium_C");
static_assert(sizeof(AArmor_medium_C) == 0x000270, "Wrong size on AArmor_medium_C");

}
