#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ENE_Spider_Tank_Boss

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ENE_Spider_Boss_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C
// 0x0168 (0x06D8 - 0x0570)
class AENE_Spider_Tank_Boss_C final : public AENE_Spider_Boss_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ENE_Spider_Tank_Boss_C;             // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWeakpointGlowComponent*                WeakpointGlow;                                     // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeleeAttackComponent*                  CarveAttack;                                       // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Boss_AoEAttack_C*                   SlamAttackk;                                       // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeleeAttackComponent*                  MeleeAttack;                                       // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileAttackComponent*             EggProjectile;                                     // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileAttackComponent*             Fireball;                                          // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlignEnemyComponent*                   AlignEnemy;                                        // 0x05B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEnemyTemperatureReplicatorComponent*   EnemyTemperatureReplicator;                        // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHealthDamageTracker*                   HealthDamageTracker;                               // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDestructibleSubHealthComponent*        DestructibleSubHealth;                             // 0x05C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Armor_Back_TankBoss;                               // 0x05D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Light_BackBody;                                    // 0x05D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F; // 0x05E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F; // 0x05E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA2[0x3];                                     // 0x05E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Butt_FadeOut;                                      // 0x05E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF; // 0x05F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF; // 0x05F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA3[0x3];                                     // 0x05F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x05F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensityCache;                               // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TankArmorIntact;                                   // 0x0604(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_4FA4[0x3];                                     // 0x0605(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               ArmorBackDynamicMaterial;                          // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitGlow;                                           // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA5[0x4];                                     // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnArmorDestroyed;                                  // 0x0618(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          FaceTargetWhenStationary;                          // 0x0628(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_4FA6[0x3];                                     // 0x0629(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseGlowFrequency;                                 // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseGlowStrength;                                  // 0x0630(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA7[0x4];                                     // 0x0634(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDAchievement*                        DreadnaughtAchievement;                            // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class APlayerCharacter*, float>          PlayerToDamageMap;                                 // 0x0640(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UFSDAchievement*                        DesignatedDecoyAchievement;                        // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDAchievement*                        PestControlAchievement;                            // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDAchievement*                        JustAnotherBugHuntAchievement;                     // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynamic_Material;                                  // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Butt_Initial_Color;                                // 0x06B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Butt_Final_Color;                                  // 0x06C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           RegrowShieldTimer;                                 // 0x06D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CheckIfOnlyOnePlayerAlive();
	void TrySelectDeathAnimation(bool WasWeakpoint, int32* AnimationIndex, bool* HasSelectedAnimation);
	bool ShouldExplode(TArray<class UDamageTag*>& Param_Tags);
	void Set_achievement_from_server_to_all(class UFSDAchievement* Achievement_to_set, float Progress);
	void CheckForPlayersAliveWithNoAmmo();
	void OnRep_FaceTargetWhenStationary();
	float GetEnemyDamageResistance();
	void OnRep_TankArmorIntact();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Butt_FadeOut__FinishedFunc();
	void Butt_FadeOut__UpdateFunc();
	void OnRagdoll();
	void RegrowShield();
	void RegrowShieldFX();
	void PlayAnimatedDeath(int32 AnimationIndex);
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
	void OnDeathBase();
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* SubHealth);
	void CheckForLastPlayerStanding();
	void OnFrozen(class AActor* Source);
	void OnUnFrozen();
	void ReceiveBeginPlay();
	void FractureArmor(const struct FVector& HitPoint);
	void PlayEnragedAnimation();
	void WaitForHit();
	void ExecuteUbergraph_ENE_Spider_Tank_Boss(int32 EntryPoint);
	void OnArmorDestroyed__DelegateSignature(float EnrageDuration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ENE_Spider_Tank_Boss_C">();
	}
	static class AENE_Spider_Tank_Boss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AENE_Spider_Tank_Boss_C>();
	}
};
static_assert(alignof(AENE_Spider_Tank_Boss_C) == 0x000008, "Wrong alignment on AENE_Spider_Tank_Boss_C");
static_assert(sizeof(AENE_Spider_Tank_Boss_C) == 0x0006D8, "Wrong size on AENE_Spider_Tank_Boss_C");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, UberGraphFrame_ENE_Spider_Tank_Boss_C) == 0x000570, "Member 'AENE_Spider_Tank_Boss_C::UberGraphFrame_ENE_Spider_Tank_Boss_C' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, WeakpointGlow) == 0x000578, "Member 'AENE_Spider_Tank_Boss_C::WeakpointGlow' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Capsule) == 0x000580, "Member 'AENE_Spider_Tank_Boss_C::Capsule' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, CarveAttack) == 0x000588, "Member 'AENE_Spider_Tank_Boss_C::CarveAttack' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, SlamAttackk) == 0x000590, "Member 'AENE_Spider_Tank_Boss_C::SlamAttackk' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, MeleeAttack) == 0x000598, "Member 'AENE_Spider_Tank_Boss_C::MeleeAttack' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, EggProjectile) == 0x0005A0, "Member 'AENE_Spider_Tank_Boss_C::EggProjectile' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Fireball) == 0x0005A8, "Member 'AENE_Spider_Tank_Boss_C::Fireball' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, AlignEnemy) == 0x0005B0, "Member 'AENE_Spider_Tank_Boss_C::AlignEnemy' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, EnemyTemperatureReplicator) == 0x0005B8, "Member 'AENE_Spider_Tank_Boss_C::EnemyTemperatureReplicator' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, HealthDamageTracker) == 0x0005C0, "Member 'AENE_Spider_Tank_Boss_C::HealthDamageTracker' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, DestructibleSubHealth) == 0x0005C8, "Member 'AENE_Spider_Tank_Boss_C::DestructibleSubHealth' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Armor_Back_TankBoss) == 0x0005D0, "Member 'AENE_Spider_Tank_Boss_C::Armor_Back_TankBoss' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Light_BackBody) == 0x0005D8, "Member 'AENE_Spider_Tank_Boss_C::Light_BackBody' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F) == 0x0005E0, "Member 'AENE_Spider_Tank_Boss_C::Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F) == 0x0005E4, "Member 'AENE_Spider_Tank_Boss_C::Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Butt_FadeOut) == 0x0005E8, "Member 'AENE_Spider_Tank_Boss_C::Butt_FadeOut' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF) == 0x0005F0, "Member 'AENE_Spider_Tank_Boss_C::Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF) == 0x0005F4, "Member 'AENE_Spider_Tank_Boss_C::Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Timeline_0) == 0x0005F8, "Member 'AENE_Spider_Tank_Boss_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, LightIntensityCache) == 0x000600, "Member 'AENE_Spider_Tank_Boss_C::LightIntensityCache' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, TankArmorIntact) == 0x000604, "Member 'AENE_Spider_Tank_Boss_C::TankArmorIntact' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, ArmorBackDynamicMaterial) == 0x000608, "Member 'AENE_Spider_Tank_Boss_C::ArmorBackDynamicMaterial' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, HitGlow) == 0x000610, "Member 'AENE_Spider_Tank_Boss_C::HitGlow' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, OnArmorDestroyed) == 0x000618, "Member 'AENE_Spider_Tank_Boss_C::OnArmorDestroyed' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, FaceTargetWhenStationary) == 0x000628, "Member 'AENE_Spider_Tank_Boss_C::FaceTargetWhenStationary' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, BaseGlowFrequency) == 0x00062C, "Member 'AENE_Spider_Tank_Boss_C::BaseGlowFrequency' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, BaseGlowStrength) == 0x000630, "Member 'AENE_Spider_Tank_Boss_C::BaseGlowStrength' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, DreadnaughtAchievement) == 0x000638, "Member 'AENE_Spider_Tank_Boss_C::DreadnaughtAchievement' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, PlayerToDamageMap) == 0x000640, "Member 'AENE_Spider_Tank_Boss_C::PlayerToDamageMap' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, DesignatedDecoyAchievement) == 0x000690, "Member 'AENE_Spider_Tank_Boss_C::DesignatedDecoyAchievement' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, PestControlAchievement) == 0x000698, "Member 'AENE_Spider_Tank_Boss_C::PestControlAchievement' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, JustAnotherBugHuntAchievement) == 0x0006A0, "Member 'AENE_Spider_Tank_Boss_C::JustAnotherBugHuntAchievement' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Dynamic_Material) == 0x0006A8, "Member 'AENE_Spider_Tank_Boss_C::Dynamic_Material' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Butt_Initial_Color) == 0x0006B0, "Member 'AENE_Spider_Tank_Boss_C::Butt_Initial_Color' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, Butt_Final_Color) == 0x0006C0, "Member 'AENE_Spider_Tank_Boss_C::Butt_Final_Color' has a wrong offset!");
static_assert(offsetof(AENE_Spider_Tank_Boss_C, RegrowShieldTimer) == 0x0006D0, "Member 'AENE_Spider_Tank_Boss_C::RegrowShieldTimer' has a wrong offset!");

}
