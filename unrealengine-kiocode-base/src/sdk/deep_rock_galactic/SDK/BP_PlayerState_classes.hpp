#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// 0x0038 (0x04F0 - 0x04B8)
class ABP_PlayerState_C : public AFSDPlayerState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerResourceComponent*               PlayerResource;                                    // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          LateJoinFinished;                                  // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TestDropThing;                                     // 0x04D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_343E[0x6];                                     // 0x04D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 PodSpawnClass;                                     // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PodBeacnClass;                                     // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TestLateJoin;                                      // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerState(int32 EntryPoint);
	void RespawnPlayer();
	void TestLatjoin();
	void CharacterSelected();
	void LogState();
	void ReceiveBeginPlay();
	void OnLateJoinFinished();
	void OnLoaded_97A4F0694E71C770F24EA6A654B14857(TSubclassOf<class UObject> Loaded);
	void OnLoaded_E2B28351414D5B2A20966496F0955946(TSubclassOf<class UObject> Loaded);
	void SpawnPlayerDirectly(class AController* Player);
	void SpawnPlayerInPod(class AFSDPlayerController* Player);
	void GetRessuplySpawnClass(class UClass** Param_PodSpawnClass);
	void GetRessupyBeaconClass(class UClass** Param_PodSpawnClass);
	TArray<struct FCreditsReward> GetDeepDiveCreditsReward(int32 StagesCompleted, int32 GoldCollected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerState_C">();
	}
	static class ABP_PlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerState_C>();
	}
};
static_assert(alignof(ABP_PlayerState_C) == 0x000008, "Wrong alignment on ABP_PlayerState_C");
static_assert(sizeof(ABP_PlayerState_C) == 0x0004F0, "Wrong size on ABP_PlayerState_C");
static_assert(offsetof(ABP_PlayerState_C, UberGraphFrame) == 0x0004B8, "Member 'ABP_PlayerState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, PlayerResource) == 0x0004C0, "Member 'ABP_PlayerState_C::PlayerResource' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, DefaultSceneRoot) == 0x0004C8, "Member 'ABP_PlayerState_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, LateJoinFinished) == 0x0004D0, "Member 'ABP_PlayerState_C::LateJoinFinished' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, TestDropThing) == 0x0004D1, "Member 'ABP_PlayerState_C::TestDropThing' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, PodSpawnClass) == 0x0004D8, "Member 'ABP_PlayerState_C::PodSpawnClass' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, PodBeacnClass) == 0x0004E0, "Member 'ABP_PlayerState_C::PodBeacnClass' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, TestLateJoin) == 0x0004E8, "Member 'ABP_PlayerState_C::TestLateJoin' has a wrong offset!");

}
