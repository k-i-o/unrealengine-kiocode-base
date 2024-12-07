#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonitorPanel

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MonitorPanel.BP_MonitorPanel_C
// 0x0018 (0x0238 - 0x0220)
class ABP_MonitorPanel_C final : public AActor
{
public:
	class UWidgetComponent*                       Widget;                                            // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonitorPanel_C">();
	}
	static class ABP_MonitorPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonitorPanel_C>();
	}
};
static_assert(alignof(ABP_MonitorPanel_C) == 0x000008, "Wrong alignment on ABP_MonitorPanel_C");
static_assert(sizeof(ABP_MonitorPanel_C) == 0x000238, "Wrong size on ABP_MonitorPanel_C");
static_assert(offsetof(ABP_MonitorPanel_C, Widget) == 0x000220, "Member 'ABP_MonitorPanel_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_MonitorPanel_C, StaticMesh) == 0x000228, "Member 'ABP_MonitorPanel_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MonitorPanel_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_MonitorPanel_C::DefaultSceneRoot' has a wrong offset!");

}

