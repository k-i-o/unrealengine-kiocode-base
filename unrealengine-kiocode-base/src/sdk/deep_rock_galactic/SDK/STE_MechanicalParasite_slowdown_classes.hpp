#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STE_MechanicalParasite_slowdown

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STE_MechanicalParasite_slowdown.STE_MechanicalParasite_slowdown_C
// 0x0000 (0x0108 - 0x0108)
class USTE_MechanicalParasite_slowdown_C final : public UStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STE_MechanicalParasite_slowdown_C">();
	}
	static class USTE_MechanicalParasite_slowdown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTE_MechanicalParasite_slowdown_C>();
	}
};
static_assert(alignof(USTE_MechanicalParasite_slowdown_C) == 0x000008, "Wrong alignment on USTE_MechanicalParasite_slowdown_C");
static_assert(sizeof(USTE_MechanicalParasite_slowdown_C) == 0x000108, "Wrong size on USTE_MechanicalParasite_slowdown_C");

}

