#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bulkhead01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bulkhead01.BP_Bulkhead01_C
// 0x0080 (0x02A0 - 0x0220)
class ABP_Bulkhead01_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight1;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          SideCollider1;                                     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          SideCollider;                                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Collider;                                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh_Door;                                         // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TriggerBox;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Driver_Movement_137D39154F4F54A9387D6EB46EC05709;  // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Driver__Direction_137D39154F4F54A9387D6EB46EC05709; // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44FA[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Driver;                                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Open_Time;                                         // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44FB[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerCharacter*>               Players;                                           // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsOpen;                                            // 0x0290(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_44FC[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeSinceLastSwap;                                 // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinDoorTime;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoorCanOpen;                                       // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Bulkhead01(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void Close();
	void Open();
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Driver__UpdateFunc();
	void Driver__FinishedFunc();
	void OnRep_IsOpen();
	void HasPlayersNearby(bool* AnyPlayers);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bulkhead01_C">();
	}
	static class ABP_Bulkhead01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bulkhead01_C>();
	}
};
static_assert(alignof(ABP_Bulkhead01_C) == 0x000008, "Wrong alignment on ABP_Bulkhead01_C");
static_assert(sizeof(ABP_Bulkhead01_C) == 0x0002A0, "Wrong size on ABP_Bulkhead01_C");
static_assert(offsetof(ABP_Bulkhead01_C, UberGraphFrame) == 0x000220, "Member 'ABP_Bulkhead01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, PointLight1) == 0x000228, "Member 'ABP_Bulkhead01_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, PointLight) == 0x000230, "Member 'ABP_Bulkhead01_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, SideCollider1) == 0x000238, "Member 'ABP_Bulkhead01_C::SideCollider1' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, SideCollider) == 0x000240, "Member 'ABP_Bulkhead01_C::SideCollider' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, Collider) == 0x000248, "Member 'ABP_Bulkhead01_C::Collider' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, Mesh_Door) == 0x000250, "Member 'ABP_Bulkhead01_C::Mesh_Door' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, TriggerBox) == 0x000258, "Member 'ABP_Bulkhead01_C::TriggerBox' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, SharedRoot) == 0x000260, "Member 'ABP_Bulkhead01_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, Driver_Movement_137D39154F4F54A9387D6EB46EC05709) == 0x000268, "Member 'ABP_Bulkhead01_C::Driver_Movement_137D39154F4F54A9387D6EB46EC05709' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, Driver__Direction_137D39154F4F54A9387D6EB46EC05709) == 0x00026C, "Member 'ABP_Bulkhead01_C::Driver__Direction_137D39154F4F54A9387D6EB46EC05709' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, Driver) == 0x000270, "Member 'ABP_Bulkhead01_C::Driver' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, Open_Time) == 0x000278, "Member 'ABP_Bulkhead01_C::Open_Time' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, Players) == 0x000280, "Member 'ABP_Bulkhead01_C::Players' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, IsOpen) == 0x000290, "Member 'ABP_Bulkhead01_C::IsOpen' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, TimeSinceLastSwap) == 0x000294, "Member 'ABP_Bulkhead01_C::TimeSinceLastSwap' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, MinDoorTime) == 0x000298, "Member 'ABP_Bulkhead01_C::MinDoorTime' has a wrong offset!");
static_assert(offsetof(ABP_Bulkhead01_C, DoorCanOpen) == 0x00029C, "Member 'ABP_Bulkhead01_C::DoorCanOpen' has a wrong offset!");

}
