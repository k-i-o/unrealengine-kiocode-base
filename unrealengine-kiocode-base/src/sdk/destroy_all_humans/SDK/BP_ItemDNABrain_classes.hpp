#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemDNABrain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ItemPickup_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ItemDNABrain.BP_ItemDNABrain_C
// 0x0010 (0x0500 - 0x04F0)
class ABP_ItemDNABrain_C final : public ABP_ItemPickup_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ItemDNABrain_C;                  // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ItemDNABrain(int32 EntryPoint);
	void OnRetrieveFromPool(bool _bAutomaticallyReactivateComponents);
	void ReceiveBeginPlay();
	void OnCollected(class AActor* PCollectedBy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemDNABrain_C">();
	}
	static class ABP_ItemDNABrain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ItemDNABrain_C>();
	}
};
static_assert(alignof(ABP_ItemDNABrain_C) == 0x000008, "Wrong alignment on ABP_ItemDNABrain_C");
static_assert(sizeof(ABP_ItemDNABrain_C) == 0x000500, "Wrong size on ABP_ItemDNABrain_C");
static_assert(offsetof(ABP_ItemDNABrain_C, UberGraphFrame_BP_ItemDNABrain_C) == 0x0004F0, "Member 'ABP_ItemDNABrain_C::UberGraphFrame_BP_ItemDNABrain_C' has a wrong offset!");
static_assert(offsetof(ABP_ItemDNABrain_C, SkeletalMesh) == 0x0004F8, "Member 'ABP_ItemDNABrain_C::SkeletalMesh' has a wrong offset!");

}

