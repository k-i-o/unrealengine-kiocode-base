#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MedbaySign

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MedbaySign.BP_MedbaySign_C
// 0x0018 (0x0238 - 0x0220)
class ABP_MedbaySign_C final : public AActor
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MedbaySign;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MedbaySign_C">();
	}
	static class ABP_MedbaySign_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MedbaySign_C>();
	}
};
static_assert(alignof(ABP_MedbaySign_C) == 0x000008, "Wrong alignment on ABP_MedbaySign_C");
static_assert(sizeof(ABP_MedbaySign_C) == 0x000238, "Wrong size on ABP_MedbaySign_C");
static_assert(offsetof(ABP_MedbaySign_C, PointLight) == 0x000220, "Member 'ABP_MedbaySign_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_MedbaySign_C, MedbaySign) == 0x000228, "Member 'ABP_MedbaySign_C::MedbaySign' has a wrong offset!");
static_assert(offsetof(ABP_MedbaySign_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_MedbaySign_C::DefaultSceneRoot' has a wrong offset!");

}

