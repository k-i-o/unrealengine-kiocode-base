#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDKitPickupBase

#include "Basic.hpp"

#include "HDMain_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HDKitPickupBase.BP_HDKitPickupBase_C
// 0x0008 (0x0280 - 0x0278)
class ABP_HDKitPickupBase_C final : public AHDBasePickup_Kit
{
public:
	class USphereComponent*                       InteractSphere;                                    // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HDKitPickupBase_C">();
	}
	static class ABP_HDKitPickupBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HDKitPickupBase_C>();
	}
};
static_assert(alignof(ABP_HDKitPickupBase_C) == 0x000008, "Wrong alignment on ABP_HDKitPickupBase_C");
static_assert(sizeof(ABP_HDKitPickupBase_C) == 0x000280, "Wrong size on ABP_HDKitPickupBase_C");
static_assert(offsetof(ABP_HDKitPickupBase_C, InteractSphere) == 0x000278, "Member 'ABP_HDKitPickupBase_C::InteractSphere' has a wrong offset!");

}
