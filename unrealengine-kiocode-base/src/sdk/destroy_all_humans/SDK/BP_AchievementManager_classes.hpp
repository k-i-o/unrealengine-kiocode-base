#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AchievementManager

#include "Basic.hpp"

#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AchievementManager.BP_AchievementManager_C
// 0x0000 (0x0068 - 0x0068)
class UBP_AchievementManager_C final : public UBFGAchievementManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AchievementManager_C">();
	}
	static class UBP_AchievementManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AchievementManager_C>();
	}
};
static_assert(alignof(UBP_AchievementManager_C) == 0x000008, "Wrong alignment on UBP_AchievementManager_C");
static_assert(sizeof(UBP_AchievementManager_C) == 0x000068, "Wrong size on UBP_AchievementManager_C");

}

