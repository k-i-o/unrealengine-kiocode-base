#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrafficCrowdSystem

#include "Basic.hpp"

#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TrafficCrowdSystem.BP_TrafficCrowdSystem_C
// 0x0000 (0x05A0 - 0x05A0)
class UBP_TrafficCrowdSystem_C final : public UBFGTrafficCrowdManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TrafficCrowdSystem_C">();
	}
	static class UBP_TrafficCrowdSystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TrafficCrowdSystem_C>();
	}
};
static_assert(alignof(UBP_TrafficCrowdSystem_C) == 0x000008, "Wrong alignment on UBP_TrafficCrowdSystem_C");
static_assert(sizeof(UBP_TrafficCrowdSystem_C) == 0x0005A0, "Wrong size on UBP_TrafficCrowdSystem_C");

}
