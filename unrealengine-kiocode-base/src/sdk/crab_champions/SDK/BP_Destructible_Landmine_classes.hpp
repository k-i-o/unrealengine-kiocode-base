#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Destructible_Landmine

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Destructible_Landmine.BP_Destructible_Landmine_C
// 0x0000 (0x0408 - 0x0408)
class ABP_Destructible_Landmine_C final : public ACrabDestructible
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Destructible_Landmine_C">();
	}
	static class ABP_Destructible_Landmine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Destructible_Landmine_C>();
	}
};
static_assert(alignof(ABP_Destructible_Landmine_C) == 0x000008, "Wrong alignment on ABP_Destructible_Landmine_C");
static_assert(sizeof(ABP_Destructible_Landmine_C) == 0x000408, "Wrong size on ABP_Destructible_Landmine_C");

}
