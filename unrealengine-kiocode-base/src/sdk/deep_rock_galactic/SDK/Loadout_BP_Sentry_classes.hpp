#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Loadout_BP_Sentry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Loadout_BP_Sentry.Loadout_BP_Sentry_C
// 0x0018 (0x03B8 - 0x03A0)
class ALoadout_BP_Sentry_C final : public ALoadoutItemProxy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_Loadout_BP_Sentry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Loadout_BP_Sentry_C">();
	}
	static class ALoadout_BP_Sentry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALoadout_BP_Sentry_C>();
	}
};
static_assert(alignof(ALoadout_BP_Sentry_C) == 0x000008, "Wrong alignment on ALoadout_BP_Sentry_C");
static_assert(sizeof(ALoadout_BP_Sentry_C) == 0x0003B8, "Wrong size on ALoadout_BP_Sentry_C");
static_assert(offsetof(ALoadout_BP_Sentry_C, UberGraphFrame) == 0x0003A0, "Member 'ALoadout_BP_Sentry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALoadout_BP_Sentry_C, SkeletalMesh) == 0x0003A8, "Member 'ALoadout_BP_Sentry_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ALoadout_BP_Sentry_C, DefaultSceneRoot) == 0x0003B0, "Member 'ALoadout_BP_Sentry_C::DefaultSceneRoot' has a wrong offset!");

}

