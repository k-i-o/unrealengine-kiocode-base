#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TruckerBalls

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TruckerBalls.BP_TruckerBalls_C
// 0x0030 (0x0250 - 0x0220)
class ABP_TruckerBalls_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SK_Dice1;                                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Dice;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TruckerBalls(int32 EntryPoint);
	void Move_ALL(bool SelectFirst);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TruckerBalls_C">();
	}
	static class ABP_TruckerBalls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TruckerBalls_C>();
	}
};
static_assert(alignof(ABP_TruckerBalls_C) == 0x000008, "Wrong alignment on ABP_TruckerBalls_C");
static_assert(sizeof(ABP_TruckerBalls_C) == 0x000250, "Wrong size on ABP_TruckerBalls_C");
static_assert(offsetof(ABP_TruckerBalls_C, UberGraphFrame) == 0x000220, "Member 'ABP_TruckerBalls_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TruckerBalls_C, SK_Dice1) == 0x000228, "Member 'ABP_TruckerBalls_C::SK_Dice1' has a wrong offset!");
static_assert(offsetof(ABP_TruckerBalls_C, SK_Dice) == 0x000230, "Member 'ABP_TruckerBalls_C::SK_Dice' has a wrong offset!");
static_assert(offsetof(ABP_TruckerBalls_C, InstantUsable) == 0x000238, "Member 'ABP_TruckerBalls_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_TruckerBalls_C, Capsule) == 0x000240, "Member 'ABP_TruckerBalls_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_TruckerBalls_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_TruckerBalls_C::DefaultSceneRoot' has a wrong offset!");

}
