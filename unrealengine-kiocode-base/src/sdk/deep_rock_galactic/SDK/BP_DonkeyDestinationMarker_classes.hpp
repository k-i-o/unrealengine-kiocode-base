#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DonkeyDestinationMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C
// 0x0030 (0x0250 - 0x0220)
class ABP_DonkeyDestinationMarker_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Donkey_DestinationMarker;                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Light02;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateAtPosition(const struct FVector& Loc);
	void HideMarker();
	void ExecuteUbergraph_BP_DonkeyDestinationMarker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DonkeyDestinationMarker_C">();
	}
	static class ABP_DonkeyDestinationMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DonkeyDestinationMarker_C>();
	}
};
static_assert(alignof(ABP_DonkeyDestinationMarker_C) == 0x000008, "Wrong alignment on ABP_DonkeyDestinationMarker_C");
static_assert(sizeof(ABP_DonkeyDestinationMarker_C) == 0x000250, "Wrong size on ABP_DonkeyDestinationMarker_C");
static_assert(offsetof(ABP_DonkeyDestinationMarker_C, UberGraphFrame) == 0x000220, "Member 'ABP_DonkeyDestinationMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DonkeyDestinationMarker_C, SM_Donkey_DestinationMarker) == 0x000228, "Member 'ABP_DonkeyDestinationMarker_C::SM_Donkey_DestinationMarker' has a wrong offset!");
static_assert(offsetof(ABP_DonkeyDestinationMarker_C, SM_Light02) == 0x000230, "Member 'ABP_DonkeyDestinationMarker_C::SM_Light02' has a wrong offset!");
static_assert(offsetof(ABP_DonkeyDestinationMarker_C, Decal) == 0x000238, "Member 'ABP_DonkeyDestinationMarker_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_DonkeyDestinationMarker_C, Cube) == 0x000240, "Member 'ABP_DonkeyDestinationMarker_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_DonkeyDestinationMarker_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_DonkeyDestinationMarker_C::DefaultSceneRoot' has a wrong offset!");

}
