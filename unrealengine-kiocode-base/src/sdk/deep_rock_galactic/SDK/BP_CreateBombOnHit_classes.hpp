#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CreateBombOnHit

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CreateBombOnHit.BP_CreateBombOnHit_C
// 0x0000 (0x00C0 - 0x00C0)
class UBP_CreateBombOnHit_C final : public UWeaponHitEffectComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CreateBombOnHit_C">();
	}
	static class UBP_CreateBombOnHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CreateBombOnHit_C>();
	}
};
static_assert(alignof(UBP_CreateBombOnHit_C) == 0x000008, "Wrong alignment on UBP_CreateBombOnHit_C");
static_assert(sizeof(UBP_CreateBombOnHit_C) == 0x0000C0, "Wrong size on UBP_CreateBombOnHit_C");

}
