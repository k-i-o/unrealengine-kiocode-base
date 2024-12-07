#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TreasureRoom_DeepScan_Basier

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TreasureRoom_DeepScan_Basier.BP_TreasureRoom_DeepScan_Basier_C
// 0x0010 (0x0230 - 0x0220)
class ABP_TreasureRoom_DeepScan_Basier_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ShellRadius;                                       // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetDroppodLandingZoneLocation(struct FVector* Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TreasureRoom_DeepScan_Basier_C">();
	}
	static class ABP_TreasureRoom_DeepScan_Basier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TreasureRoom_DeepScan_Basier_C>();
	}
};
static_assert(alignof(ABP_TreasureRoom_DeepScan_Basier_C) == 0x000008, "Wrong alignment on ABP_TreasureRoom_DeepScan_Basier_C");
static_assert(sizeof(ABP_TreasureRoom_DeepScan_Basier_C) == 0x000230, "Wrong size on ABP_TreasureRoom_DeepScan_Basier_C");
static_assert(offsetof(ABP_TreasureRoom_DeepScan_Basier_C, DefaultSceneRoot) == 0x000220, "Member 'ABP_TreasureRoom_DeepScan_Basier_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TreasureRoom_DeepScan_Basier_C, ShellRadius) == 0x000228, "Member 'ABP_TreasureRoom_DeepScan_Basier_C::ShellRadius' has a wrong offset!");

}

