#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UFOManager

#include "Basic.hpp"

#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UFOManager.BP_UFOManager_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_UFOManager_C final : public UBFGUFOManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UFOManager_C">();
	}
	static class UBP_UFOManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UFOManager_C>();
	}
};
static_assert(alignof(UBP_UFOManager_C) == 0x000008, "Wrong alignment on UBP_UFOManager_C");
static_assert(sizeof(UBP_UFOManager_C) == 0x0000A0, "Wrong size on UBP_UFOManager_C");

}
