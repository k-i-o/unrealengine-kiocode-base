#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Enemy_BossAnt

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Enemy_BossAnt.BP_Enemy_BossAnt_C
// 0x0000 (0x09B0 - 0x09B0)
class ABP_Enemy_BossAnt_C final : public ACrabBossC
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Enemy_BossAnt_C">();
	}
	static class ABP_Enemy_BossAnt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Enemy_BossAnt_C>();
	}
};
static_assert(alignof(ABP_Enemy_BossAnt_C) == 0x000010, "Wrong alignment on ABP_Enemy_BossAnt_C");
static_assert(sizeof(ABP_Enemy_BossAnt_C) == 0x0009B0, "Wrong size on ABP_Enemy_BossAnt_C");

}

