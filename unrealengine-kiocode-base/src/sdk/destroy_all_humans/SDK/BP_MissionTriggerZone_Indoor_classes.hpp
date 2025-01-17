#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTriggerZone_Indoor

#include "Basic.hpp"

#include "BP_MissionTriggerZone_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTriggerZone_Indoor.BP_MissionTriggerZone_Indoor_C
// 0x0040 (0x04D0 - 0x0490)
class ABP_MissionTriggerZone_Indoor_C final : public ABP_MissionTriggerZone_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MissionTriggerZone_Indoor_C;     // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	UMulticastDelegateProperty_                   Portal_OnValidatedOverlap;                         // 0x0498(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   Portal_OnValidatedEndOverlap;                      // 0x04B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_Component_PortalAssignator_C*       GameState_PortalAssignator;                        // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Portal_OnValidatedOverlap__DelegateSignature();
	void Portal_OnValidatedEndOverlap__DelegateSignature();
	void ExecuteUbergraph_BP_MissionTriggerZone_Indoor(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTriggerZone_Indoor_C">();
	}
	static class ABP_MissionTriggerZone_Indoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTriggerZone_Indoor_C>();
	}
};
static_assert(alignof(ABP_MissionTriggerZone_Indoor_C) == 0x000008, "Wrong alignment on ABP_MissionTriggerZone_Indoor_C");
static_assert(sizeof(ABP_MissionTriggerZone_Indoor_C) == 0x0004D0, "Wrong size on ABP_MissionTriggerZone_Indoor_C");
static_assert(offsetof(ABP_MissionTriggerZone_Indoor_C, UberGraphFrame_BP_MissionTriggerZone_Indoor_C) == 0x000490, "Member 'ABP_MissionTriggerZone_Indoor_C::UberGraphFrame_BP_MissionTriggerZone_Indoor_C' has a wrong offset!");
static_assert(offsetof(ABP_MissionTriggerZone_Indoor_C, Portal_OnValidatedOverlap) == 0x000498, "Member 'ABP_MissionTriggerZone_Indoor_C::Portal_OnValidatedOverlap' has a wrong offset!");
static_assert(offsetof(ABP_MissionTriggerZone_Indoor_C, Portal_OnValidatedEndOverlap) == 0x0004B0, "Member 'ABP_MissionTriggerZone_Indoor_C::Portal_OnValidatedEndOverlap' has a wrong offset!");
static_assert(offsetof(ABP_MissionTriggerZone_Indoor_C, GameState_PortalAssignator) == 0x0004C8, "Member 'ABP_MissionTriggerZone_Indoor_C::GameState_PortalAssignator' has a wrong offset!");

}

