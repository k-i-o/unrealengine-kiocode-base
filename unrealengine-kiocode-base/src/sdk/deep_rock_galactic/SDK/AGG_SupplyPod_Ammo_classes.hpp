#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AGG_SupplyPod_Ammo

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AGG_SupplyPod_Ammo.AGG_SupplyPod_Ammo_C
// 0x0000 (0x02C0 - 0x02C0)
class UAGG_SupplyPod_Ammo_C final : public UItemPlacerAggregator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AGG_SupplyPod_Ammo_C">();
	}
	static class UAGG_SupplyPod_Ammo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGG_SupplyPod_Ammo_C>();
	}
};
static_assert(alignof(UAGG_SupplyPod_Ammo_C) == 0x000010, "Wrong alignment on UAGG_SupplyPod_Ammo_C");
static_assert(sizeof(UAGG_SupplyPod_Ammo_C) == 0x0002C0, "Wrong size on UAGG_SupplyPod_Ammo_C");

}
