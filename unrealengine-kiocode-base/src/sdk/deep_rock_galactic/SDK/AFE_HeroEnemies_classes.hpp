#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFE_HeroEnemies

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AFE_HeroEnemies.AFE_HeroEnemies_C
// 0x0000 (0x0048 - 0x0048)
class UAFE_HeroEnemies_C final : public UAttachedParticlesAfflictionEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AFE_HeroEnemies_C">();
	}
	static class UAFE_HeroEnemies_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAFE_HeroEnemies_C>();
	}
};
static_assert(alignof(UAFE_HeroEnemies_C) == 0x000008, "Wrong alignment on UAFE_HeroEnemies_C");
static_assert(sizeof(UAFE_HeroEnemies_C) == 0x000048, "Wrong size on UAFE_HeroEnemies_C");

}
