#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DropPod_Rig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DropPod_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DropPod_Rig.BP_DropPod_Rig_C
// 0x00C0 (0x08F0 - 0x0830)
class ABP_DropPod_Rig_C final : public ABP_DropPod_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DropPod_Rig_C;                   // 0x0830(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Thruster;                                // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Thruster;                               // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ThrusterPlasma;                                    // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      ATeamAchievementCollider4;                         // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      ATeamAchievementCollider3;                         // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      ATeamAchievementCollider2;                         // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      ATeamAchievementCollider1;                         // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box1;                                              // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioLower;                                        // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_0;                                           // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        DroppodLaunch;                                     // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          DwarfChecker_0;                                    // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLeaveSpacerig;                                   // 0x08A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class APlayerCharacter*>               PlayersInside;                                     // 0x08B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UAudioComponent*                        PlayLeftAudioOnOpenDoor;                           // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        PlayRightAudioOnOpenDoor;                          // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SpaceRigDrillIdle;                                 // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OldCountdownValue;                                 // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount_of_barrels_in_seats;                        // 0x08E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDAchievement*                        ATeamAchievement;                                  // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	int32 ActivePlayerCount();
	void ReceiveBeginPlay();
	void OnMissionSelected(class UGeneratedMission* Mission);
	void OnAllDwavesInsidePod(bool AllInside);
	void OnHostInsidePod(bool IsInside);
	void OnCountdownCompleted();
	void OnHostTimerChanged(float NewTime);
	void BndEvt__ATeamAchievementCollider1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ATeamAchievementCollider2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ATeamAchievementCollider3_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ATeamAchievementCollider4_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Check_for_ATeamAchievement();
	void OnCharacterEnter(class APlayerCharacter* Character);
	void OnCharacterExit(class APlayerCharacter* Character);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_DropPod_Rig(int32 EntryPoint);
	void OnLeaveSpacerig__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DropPod_Rig_C">();
	}
	static class ABP_DropPod_Rig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DropPod_Rig_C>();
	}
};
static_assert(alignof(ABP_DropPod_Rig_C) == 0x000010, "Wrong alignment on ABP_DropPod_Rig_C");
static_assert(sizeof(ABP_DropPod_Rig_C) == 0x0008F0, "Wrong size on ABP_DropPod_Rig_C");
static_assert(offsetof(ABP_DropPod_Rig_C, UberGraphFrame_BP_DropPod_Rig_C) == 0x000830, "Member 'ABP_DropPod_Rig_C::UberGraphFrame_BP_DropPod_Rig_C' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, ParticleSystem) == 0x000838, "Member 'ABP_DropPod_Rig_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, Sphere) == 0x000840, "Member 'ABP_DropPod_Rig_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, SpotLight_Thruster) == 0x000848, "Member 'ABP_DropPod_Rig_C::SpotLight_Thruster' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, PointLight_Thruster) == 0x000850, "Member 'ABP_DropPod_Rig_C::PointLight_Thruster' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, ThrusterPlasma) == 0x000858, "Member 'ABP_DropPod_Rig_C::ThrusterPlasma' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, ATeamAchievementCollider4) == 0x000860, "Member 'ABP_DropPod_Rig_C::ATeamAchievementCollider4' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, ATeamAchievementCollider3) == 0x000868, "Member 'ABP_DropPod_Rig_C::ATeamAchievementCollider3' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, ATeamAchievementCollider2) == 0x000870, "Member 'ABP_DropPod_Rig_C::ATeamAchievementCollider2' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, ATeamAchievementCollider1) == 0x000878, "Member 'ABP_DropPod_Rig_C::ATeamAchievementCollider1' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, Box1) == 0x000880, "Member 'ABP_DropPod_Rig_C::Box1' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, AudioLower) == 0x000888, "Member 'ABP_DropPod_Rig_C::AudioLower' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, Audio_0) == 0x000890, "Member 'ABP_DropPod_Rig_C::Audio_0' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, DroppodLaunch) == 0x000898, "Member 'ABP_DropPod_Rig_C::DroppodLaunch' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, DwarfChecker_0) == 0x0008A0, "Member 'ABP_DropPod_Rig_C::DwarfChecker_0' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, OnLeaveSpacerig) == 0x0008A8, "Member 'ABP_DropPod_Rig_C::OnLeaveSpacerig' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, PlayersInside) == 0x0008B8, "Member 'ABP_DropPod_Rig_C::PlayersInside' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, PlayLeftAudioOnOpenDoor) == 0x0008C8, "Member 'ABP_DropPod_Rig_C::PlayLeftAudioOnOpenDoor' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, PlayRightAudioOnOpenDoor) == 0x0008D0, "Member 'ABP_DropPod_Rig_C::PlayRightAudioOnOpenDoor' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, SpaceRigDrillIdle) == 0x0008D8, "Member 'ABP_DropPod_Rig_C::SpaceRigDrillIdle' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, OldCountdownValue) == 0x0008E0, "Member 'ABP_DropPod_Rig_C::OldCountdownValue' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, Amount_of_barrels_in_seats) == 0x0008E4, "Member 'ABP_DropPod_Rig_C::Amount_of_barrels_in_seats' has a wrong offset!");
static_assert(offsetof(ABP_DropPod_Rig_C, ATeamAchievement) == 0x0008E8, "Member 'ABP_DropPod_Rig_C::ATeamAchievement' has a wrong offset!");

}

