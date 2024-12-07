#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Coilgun_Trailsegment_Base

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Coilgun_Trailsegment_Base.BP_Coilgun_Trailsegment_Base_C
// 0x0008 (0x0238 - 0x0230)
class ABP_Coilgun_Trailsegment_Base_C : public ACoilGunTrailSegment
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Coilgun_Trailsegment_Base_C">();
	}
	static class ABP_Coilgun_Trailsegment_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Coilgun_Trailsegment_Base_C>();
	}
};
static_assert(alignof(ABP_Coilgun_Trailsegment_Base_C) == 0x000008, "Wrong alignment on ABP_Coilgun_Trailsegment_Base_C");
static_assert(sizeof(ABP_Coilgun_Trailsegment_Base_C) == 0x000238, "Wrong size on ABP_Coilgun_Trailsegment_Base_C");
static_assert(offsetof(ABP_Coilgun_Trailsegment_Base_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_Coilgun_Trailsegment_Base_C::DefaultSceneRoot' has a wrong offset!");

}

