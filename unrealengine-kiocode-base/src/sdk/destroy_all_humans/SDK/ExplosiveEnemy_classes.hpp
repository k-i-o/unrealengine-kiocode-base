#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ExplosiveEnemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AbilitySlots_structs.hpp"
#include "MyCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ExplosiveEnemy.ExplosiveEnemy_C
// 0x0080 (0x0430 - 0x03B0)
class AExplosiveEnemy_C final : public AMyCharacter_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ExplosiveEnemy_C;                   // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      ExplosiveEnemy_FX;                                 // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      TauntedStatusParticles;                            // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExplosiveAttack_C*                     ExplosiveAttack;                                   // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URunAbility_C*                          RunAbility;                                        // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMyAbilityBP_C*                         CurrentAbility;                                    // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMyAbilityBP_C*                         Attack;                                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          MMyTurn;                                           // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MAlreadyExploded;                                  // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlreadyActed;                                      // 0x03EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25CB[0x5];                                     // 0x03EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Timer;                                             // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxTime;                                           // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Taunted;                                           // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25CC[0x3];                                     // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TauntDuration;                                     // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAlliedCharacter_C*                     TauntTarget;                                       // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TutorialActive;                                    // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spawned;                                           // 0x0411(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25CD[0x6];                                     // 0x0412(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MyMat;                                             // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DeathTimer;                                        // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasToStartDessintegrating;                         // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	int32 CheckPlayerDistance(class AActor* Player);
	void Decide(bool* FinishedAll);
	void Die();
	void Enemy_Actor_OnTick(bool* End);
	void Enemy_Actor_Start_Act(bool* FinishedAll);
	void ExecuteUbergraph_ExplosiveEnemy(int32 EntryPoint);
	void FindNearestPlayer(class AAlliedCharacter_C** NearestPlayer);
	void GetAbility(EAbilitySlots Slot, class UMyAbilityBP_C** Ability);
	void GetDeselected();
	void GetSelected();
	void HideAvailableActions();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowAvailableActions();
	void Update(bool* End);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ExplosiveEnemy_C">();
	}
	static class AExplosiveEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExplosiveEnemy_C>();
	}
};
static_assert(alignof(AExplosiveEnemy_C) == 0x000008, "Wrong alignment on AExplosiveEnemy_C");
static_assert(sizeof(AExplosiveEnemy_C) == 0x000430, "Wrong size on AExplosiveEnemy_C");
static_assert(offsetof(AExplosiveEnemy_C, UberGraphFrame_ExplosiveEnemy_C) == 0x0003B0, "Member 'AExplosiveEnemy_C::UberGraphFrame_ExplosiveEnemy_C' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, ExplosiveEnemy_FX) == 0x0003B8, "Member 'AExplosiveEnemy_C::ExplosiveEnemy_FX' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, TauntedStatusParticles) == 0x0003C0, "Member 'AExplosiveEnemy_C::TauntedStatusParticles' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, ExplosiveAttack) == 0x0003C8, "Member 'AExplosiveEnemy_C::ExplosiveAttack' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, RunAbility) == 0x0003D0, "Member 'AExplosiveEnemy_C::RunAbility' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, CurrentAbility) == 0x0003D8, "Member 'AExplosiveEnemy_C::CurrentAbility' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, Attack) == 0x0003E0, "Member 'AExplosiveEnemy_C::Attack' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, MMyTurn) == 0x0003E8, "Member 'AExplosiveEnemy_C::MMyTurn' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, MAlreadyExploded) == 0x0003E9, "Member 'AExplosiveEnemy_C::MAlreadyExploded' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, AlreadyActed) == 0x0003EA, "Member 'AExplosiveEnemy_C::AlreadyActed' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, Timer) == 0x0003F0, "Member 'AExplosiveEnemy_C::Timer' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, MaxTime) == 0x0003F8, "Member 'AExplosiveEnemy_C::MaxTime' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, Taunted) == 0x000400, "Member 'AExplosiveEnemy_C::Taunted' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, TauntDuration) == 0x000404, "Member 'AExplosiveEnemy_C::TauntDuration' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, TauntTarget) == 0x000408, "Member 'AExplosiveEnemy_C::TauntTarget' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, TutorialActive) == 0x000410, "Member 'AExplosiveEnemy_C::TutorialActive' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, Spawned) == 0x000411, "Member 'AExplosiveEnemy_C::Spawned' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, MyMat) == 0x000418, "Member 'AExplosiveEnemy_C::MyMat' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, DeathTimer) == 0x000420, "Member 'AExplosiveEnemy_C::DeathTimer' has a wrong offset!");
static_assert(offsetof(AExplosiveEnemy_C, HasToStartDessintegrating) == 0x000428, "Member 'AExplosiveEnemy_C::HasToStartDessintegrating' has a wrong offset!");

}

