#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PointOfInterest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PointOfInterest.BP_PointOfInterest_C
// 0x0028 (0x0248 - 0x0220)
class ABP_PointOfInterest_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonWidgetComponent*            FirstPersonWidget;                                 // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Icon;                                              // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Init(class UTexture2D* Texture);
	void ReceiveBeginPlay();
	void Finished_Event();
	void ExecuteUbergraph_BP_PointOfInterest(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PointOfInterest_C">();
	}
	static class ABP_PointOfInterest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PointOfInterest_C>();
	}
};
static_assert(alignof(ABP_PointOfInterest_C) == 0x000008, "Wrong alignment on ABP_PointOfInterest_C");
static_assert(sizeof(ABP_PointOfInterest_C) == 0x000248, "Wrong size on ABP_PointOfInterest_C");
static_assert(offsetof(ABP_PointOfInterest_C, UberGraphFrame) == 0x000220, "Member 'ABP_PointOfInterest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PointOfInterest_C, Sphere) == 0x000228, "Member 'ABP_PointOfInterest_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_PointOfInterest_C, FirstPersonWidget) == 0x000230, "Member 'ABP_PointOfInterest_C::FirstPersonWidget' has a wrong offset!");
static_assert(offsetof(ABP_PointOfInterest_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_PointOfInterest_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PointOfInterest_C, Icon) == 0x000240, "Member 'ABP_PointOfInterest_C::Icon' has a wrong offset!");

}

