#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Armquist_Rocket_AOE

#include "Basic.hpp"

#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Armquist_Rocket_AOE.BP_Armquist_Rocket_AOE_C
// 0x0008 (0x04D8 - 0x04D0)
class ABP_Armquist_Rocket_AOE_C final : public ABFGAOE
{
public:
	class UBP_BurningGroundActorComponent_C*      BP_BurningGroundActorComponent;                    // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Armquist_Rocket_AOE_C">();
	}
	static class ABP_Armquist_Rocket_AOE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Armquist_Rocket_AOE_C>();
	}
};
static_assert(alignof(ABP_Armquist_Rocket_AOE_C) == 0x000008, "Wrong alignment on ABP_Armquist_Rocket_AOE_C");
static_assert(sizeof(ABP_Armquist_Rocket_AOE_C) == 0x0004D8, "Wrong size on ABP_Armquist_Rocket_AOE_C");
static_assert(offsetof(ABP_Armquist_Rocket_AOE_C, BP_BurningGroundActorComponent) == 0x0004D0, "Member 'ABP_Armquist_Rocket_AOE_C::BP_BurningGroundActorComponent' has a wrong offset!");

}

