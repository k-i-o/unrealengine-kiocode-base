#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Phys_Crate_F

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Phys_Crate_F.BP_Phys_Crate_F_C
// 0x0078 (0x0298 - 0x0220)
class ABP_Phys_Crate_F_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      BarrelRiderCollission;                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGravityChangedComponent*               GravityChanged;                                    // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      UseCapsule;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshComponent0;                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTriggerSound;                                   // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44C2[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                KickSoundLocation;                                 // 0x0254(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       KickedBy;                                          // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KickedIntoHoop;                                    // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44C3[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDAchievement*                        BarrelRiderAchievement;                            // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RideBeginTime;                                     // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C4[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       CurrentRider;                                      // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ImpactSound;                                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundBase*                             KickSound;                                         // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Phys_Crate_F(int32 EntryPoint);
	void BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Play_Kick(class APlayerCharacter* Kicker);
	void Destroy();
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnRep_KickSoundLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Phys_Crate_F_C">();
	}
	static class ABP_Phys_Crate_F_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Phys_Crate_F_C>();
	}
};
static_assert(alignof(ABP_Phys_Crate_F_C) == 0x000008, "Wrong alignment on ABP_Phys_Crate_F_C");
static_assert(sizeof(ABP_Phys_Crate_F_C) == 0x000298, "Wrong size on ABP_Phys_Crate_F_C");
static_assert(offsetof(ABP_Phys_Crate_F_C, UberGraphFrame) == 0x000220, "Member 'ABP_Phys_Crate_F_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, BarrelRiderCollission) == 0x000228, "Member 'ABP_Phys_Crate_F_C::BarrelRiderCollission' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, GravityChanged) == 0x000230, "Member 'ABP_Phys_Crate_F_C::GravityChanged' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, InstantUsable) == 0x000238, "Member 'ABP_Phys_Crate_F_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, UseCapsule) == 0x000240, "Member 'ABP_Phys_Crate_F_C::UseCapsule' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, StaticMeshComponent0) == 0x000248, "Member 'ABP_Phys_Crate_F_C::StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, CanTriggerSound) == 0x000250, "Member 'ABP_Phys_Crate_F_C::CanTriggerSound' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, KickSoundLocation) == 0x000254, "Member 'ABP_Phys_Crate_F_C::KickSoundLocation' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, KickedBy) == 0x000260, "Member 'ABP_Phys_Crate_F_C::KickedBy' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, KickedIntoHoop) == 0x000268, "Member 'ABP_Phys_Crate_F_C::KickedIntoHoop' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, BarrelRiderAchievement) == 0x000270, "Member 'ABP_Phys_Crate_F_C::BarrelRiderAchievement' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, RideBeginTime) == 0x000278, "Member 'ABP_Phys_Crate_F_C::RideBeginTime' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, CurrentRider) == 0x000280, "Member 'ABP_Phys_Crate_F_C::CurrentRider' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, ImpactSound) == 0x000288, "Member 'ABP_Phys_Crate_F_C::ImpactSound' has a wrong offset!");
static_assert(offsetof(ABP_Phys_Crate_F_C, KickSound) == 0x000290, "Member 'ABP_Phys_Crate_F_C::KickSound' has a wrong offset!");

}
