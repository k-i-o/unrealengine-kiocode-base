#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RangedEnemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AbilitySlots_structs.hpp"
#include "MyCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RangedEnemy.RangedEnemy_C
// 0x0080 (0x0430 - 0x03B0)
class ARangedEnemy_C final : public AMyCharacter_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_RangedEnemy_C;                      // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ProjectileLaunchPoint;                             // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      TauntedStatusParticles;                            // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStandardAttack_C*                      StandardAttack;                                    // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URunAbility_C*                          RunAbility;                                        // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMyAbilityBP_C*                         CurrentAbility;                                    // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMyAbilityBP_C*                         Attack;                                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          MMyTurn;                                           // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlreadyActed;                                      // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24AF[0x6];                                     // 0x03EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Time;                                              // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxTime;                                           // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Taunted;                                           // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24B0[0x3];                                     // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TauntDuration;                                     // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAlliedCharacter_C*                     TauntTarget;                                       // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TutorialActive;                                    // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spawned;                                           // 0x0411(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24B1[0x6];                                     // 0x0412(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MyMat;                                             // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DeathTimer;                                        // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasToStartDessintegrating;                         // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	int32 CheckPlayerDistance(class AActor* Player);
	void Decide(bool* FinishedAll);
	void Die();
	void Enemy_Actor_OnTick(bool* End);
	void Enemy_Actor_Start_Act(bool* FinishedAll);
	void ExecuteUbergraph_RangedEnemy(int32 EntryPoint);
	void FindNearestPlayer(class AAlliedCharacter_C** NearestPlayer);
	void GetAbility(EAbilitySlots Slot, class UMyAbilityBP_C** Ability);
	void GetDeselected();
	void GetSelected();
	void HideAvailableActions();
	void LaunchProjectile();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowAvailableActions();
	void Update(bool* End);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RangedEnemy_C">();
	}
	static class ARangedEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARangedEnemy_C>();
	}
};
static_assert(alignof(ARangedEnemy_C) == 0x000008, "Wrong alignment on ARangedEnemy_C");
static_assert(sizeof(ARangedEnemy_C) == 0x000430, "Wrong size on ARangedEnemy_C");
static_assert(offsetof(ARangedEnemy_C, UberGraphFrame_RangedEnemy_C) == 0x0003B0, "Member 'ARangedEnemy_C::UberGraphFrame_RangedEnemy_C' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, ProjectileLaunchPoint) == 0x0003B8, "Member 'ARangedEnemy_C::ProjectileLaunchPoint' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, TauntedStatusParticles) == 0x0003C0, "Member 'ARangedEnemy_C::TauntedStatusParticles' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, StandardAttack) == 0x0003C8, "Member 'ARangedEnemy_C::StandardAttack' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, RunAbility) == 0x0003D0, "Member 'ARangedEnemy_C::RunAbility' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, CurrentAbility) == 0x0003D8, "Member 'ARangedEnemy_C::CurrentAbility' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, Attack) == 0x0003E0, "Member 'ARangedEnemy_C::Attack' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, MMyTurn) == 0x0003E8, "Member 'ARangedEnemy_C::MMyTurn' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, AlreadyActed) == 0x0003E9, "Member 'ARangedEnemy_C::AlreadyActed' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, Time) == 0x0003F0, "Member 'ARangedEnemy_C::Time' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, MaxTime) == 0x0003F8, "Member 'ARangedEnemy_C::MaxTime' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, Taunted) == 0x000400, "Member 'ARangedEnemy_C::Taunted' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, TauntDuration) == 0x000404, "Member 'ARangedEnemy_C::TauntDuration' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, TauntTarget) == 0x000408, "Member 'ARangedEnemy_C::TauntTarget' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, TutorialActive) == 0x000410, "Member 'ARangedEnemy_C::TutorialActive' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, Spawned) == 0x000411, "Member 'ARangedEnemy_C::Spawned' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, MyMat) == 0x000418, "Member 'ARangedEnemy_C::MyMat' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, DeathTimer) == 0x000420, "Member 'ARangedEnemy_C::DeathTimer' has a wrong offset!");
static_assert(offsetof(ARangedEnemy_C, HasToStartDessintegrating) == 0x000428, "Member 'ARangedEnemy_C::HasToStartDessintegrating' has a wrong offset!");

}
