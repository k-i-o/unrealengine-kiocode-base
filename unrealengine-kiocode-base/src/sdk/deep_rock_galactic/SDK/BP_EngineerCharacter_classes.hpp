#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EngineerCharacter

#include "Basic.hpp"

#include "BP_PlayerCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EngineerCharacter.BP_EngineerCharacter_C
// 0x0000 (0x1110 - 0x1110)
class ABP_EngineerCharacter_C final : public ABP_PlayerCharacter_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EngineerCharacter_C">();
	}
	static class ABP_EngineerCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EngineerCharacter_C>();
	}
};
static_assert(alignof(ABP_EngineerCharacter_C) == 0x000010, "Wrong alignment on ABP_EngineerCharacter_C");
static_assert(sizeof(ABP_EngineerCharacter_C) == 0x001110, "Wrong size on ABP_EngineerCharacter_C");

}
