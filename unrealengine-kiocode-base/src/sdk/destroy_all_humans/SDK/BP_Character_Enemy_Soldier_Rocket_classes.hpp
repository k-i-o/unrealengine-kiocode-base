#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Enemy_Soldier_Rocket

#include "Basic.hpp"

#include "BP_Character_Enemy_Soldier_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_Enemy_Soldier_Rocket.BP_Character_Enemy_Soldier_Rocket_C
// 0x0000 (0x0D60 - 0x0D60)
class ABP_Character_Enemy_Soldier_Rocket_C final : public ABP_Character_Enemy_Soldier_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_Enemy_Soldier_Rocket_C">();
	}
	static class ABP_Character_Enemy_Soldier_Rocket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_Enemy_Soldier_Rocket_C>();
	}
};
static_assert(alignof(ABP_Character_Enemy_Soldier_Rocket_C) == 0x000010, "Wrong alignment on ABP_Character_Enemy_Soldier_Rocket_C");
static_assert(sizeof(ABP_Character_Enemy_Soldier_Rocket_C) == 0x000D60, "Wrong size on ABP_Character_Enemy_Soldier_Rocket_C");

}

