#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Phys_Barrel_Hoop

#include "Basic.hpp"

#include "BP_Phys_Barrel01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Phys_Barrel_Hoop.BP_Phys_Barrel_Hoop_C
// 0x0000 (0x02A0 - 0x02A0)
class ABP_Phys_Barrel_Hoop_C final : public ABP_Phys_Barrel01_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Phys_Barrel_Hoop_C">();
	}
	static class ABP_Phys_Barrel_Hoop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Phys_Barrel_Hoop_C>();
	}
};
static_assert(alignof(ABP_Phys_Barrel_Hoop_C) == 0x000008, "Wrong alignment on ABP_Phys_Barrel_Hoop_C");
static_assert(sizeof(ABP_Phys_Barrel_Hoop_C) == 0x0002A0, "Wrong size on ABP_Phys_Barrel_Hoop_C");

}
