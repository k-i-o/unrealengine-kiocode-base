#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeepScan_DrillevatorLocationSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeepScan_DrillevatorLocationSelector.BP_DeepScan_DrillevatorLocationSelector_C
// 0x0060 (0x0280 - 0x0220)
class ABP_DeepScan_DrillevatorLocationSelector_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpawnActorWithDebrisPosComponent*      SpawnActorWithDebrisPos;                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDrillevatorLocationSelected;                     // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                         Pad_333B[0x8];                                     // 0x0248(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Location;                                          // 0x0250(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnDrillevatorLocationSelected__DelegateSignature(const struct FTransform& Param_Location);
	void ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector(int32 EntryPoint);
	void FindDrillevatorLocation(TSubclassOf<class AActor> SpawnedActorClass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeepScan_DrillevatorLocationSelector_C">();
	}
	static class ABP_DeepScan_DrillevatorLocationSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeepScan_DrillevatorLocationSelector_C>();
	}
};
static_assert(alignof(ABP_DeepScan_DrillevatorLocationSelector_C) == 0x000010, "Wrong alignment on ABP_DeepScan_DrillevatorLocationSelector_C");
static_assert(sizeof(ABP_DeepScan_DrillevatorLocationSelector_C) == 0x000280, "Wrong size on ABP_DeepScan_DrillevatorLocationSelector_C");
static_assert(offsetof(ABP_DeepScan_DrillevatorLocationSelector_C, UberGraphFrame) == 0x000220, "Member 'ABP_DeepScan_DrillevatorLocationSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeepScan_DrillevatorLocationSelector_C, SpawnActorWithDebrisPos) == 0x000228, "Member 'ABP_DeepScan_DrillevatorLocationSelector_C::SpawnActorWithDebrisPos' has a wrong offset!");
static_assert(offsetof(ABP_DeepScan_DrillevatorLocationSelector_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_DeepScan_DrillevatorLocationSelector_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DeepScan_DrillevatorLocationSelector_C, OnDrillevatorLocationSelected) == 0x000238, "Member 'ABP_DeepScan_DrillevatorLocationSelector_C::OnDrillevatorLocationSelected' has a wrong offset!");
static_assert(offsetof(ABP_DeepScan_DrillevatorLocationSelector_C, Location) == 0x000250, "Member 'ABP_DeepScan_DrillevatorLocationSelector_C::Location' has a wrong offset!");

}

