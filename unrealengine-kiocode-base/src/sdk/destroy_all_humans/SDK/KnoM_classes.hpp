#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnoM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass knoM.knoM_C
// 0x0028 (0x0340 - 0x0318)
class AKnoM_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          HasToPlaySpawn;                                    // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasToPlayDie;                                      // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2390[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainCharacter_C*                       MainChar;                                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_knoM(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"knoM_C">();
	}
	static class AKnoM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKnoM_C>();
	}
};
static_assert(alignof(AKnoM_C) == 0x000008, "Wrong alignment on AKnoM_C");
static_assert(sizeof(AKnoM_C) == 0x000340, "Wrong size on AKnoM_C");
static_assert(offsetof(AKnoM_C, UberGraphFrame) == 0x000318, "Member 'AKnoM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AKnoM_C, SkeletalMesh) == 0x000320, "Member 'AKnoM_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AKnoM_C, DefaultSceneRoot) == 0x000328, "Member 'AKnoM_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AKnoM_C, HasToPlaySpawn) == 0x000330, "Member 'AKnoM_C::HasToPlaySpawn' has a wrong offset!");
static_assert(offsetof(AKnoM_C, HasToPlayDie) == 0x000331, "Member 'AKnoM_C::HasToPlayDie' has a wrong offset!");
static_assert(offsetof(AKnoM_C, MainChar) == 0x000338, "Member 'AKnoM_C::MainChar' has a wrong offset!");

}

