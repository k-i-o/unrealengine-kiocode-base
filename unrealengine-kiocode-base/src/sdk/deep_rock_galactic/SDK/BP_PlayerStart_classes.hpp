#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerStart

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerStart.BP_PlayerStart_C
// 0x0008 (0x0238 - 0x0230)
class ABP_PlayerStart_C final : public AFSDPlayerStart
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerStart_C">();
	}
	static class ABP_PlayerStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerStart_C>();
	}
};
static_assert(alignof(ABP_PlayerStart_C) == 0x000008, "Wrong alignment on ABP_PlayerStart_C");
static_assert(sizeof(ABP_PlayerStart_C) == 0x000238, "Wrong size on ABP_PlayerStart_C");
static_assert(offsetof(ABP_PlayerStart_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_PlayerStart_C::DefaultSceneRoot' has a wrong offset!");

}

