#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_StickyMine

#include "Basic.hpp"

#include "ITM_Grenade_Base_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Grenade_StickyMine.Grenade_StickyMine_C
// 0x00C8 (0x0428 - 0x0360)
class AGrenade_StickyMine_C final : public AITM_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Grenade_StickyMine_C;               // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       UseSphere;                                         // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USingleUsableComponent*                 SingleUsable;                                      // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SM_MineGround;                                     // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TriggerAreaDisplay;                                // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExplosionComponent*                    Explosion;                                         // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RingPulse_Scale_1486413F4ABF9550B6797DBA3F0A55DB;  // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RingPulse__Direction_1486413F4ABF9550B6797DBA3F0A55DB; // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_516C[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RingPulse;                                         // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Triggered;                                         // 0x03B0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_516D[0x3];                                     // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ArmingDelay;                                       // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Armed;                                             // 0x03B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_516E[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              ExplosionSound;                                    // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        ExplosionParticles;                                // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               TriggerAreaDynamicMat;                             // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TriggerAreaColor;                                  // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Exploded;                                          // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_516F[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Not_Blinking_Dynamic_Material;                     // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxExplosions;                                     // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionCount;                                    // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Over;                                              // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5170[0x7];                                     // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               GrenadeLightsDynamicMat;                           // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TriggeredLightsColour;                             // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LifespanAfterFirstTrigger;                         // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dead;                                              // 0x0424(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void OnRep_Dead();
	void OnRep_Armed();
	void OnRep_Triggered();
	void UserConstructionScript();
	void RingPulse__FinishedFunc();
	void RingPulse__UpdateFunc();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void TriggerExplosion();
	void GetArmed();
	void DoTriggerAreaPulse();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void DisarmMine(class AThrownGrenadeItem* ThrownGrenadeItem);
	void KillMine();
	void ExplodeLast();
	void ExecuteUbergraph_Grenade_StickyMine(int32 EntryPoint);

	void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Grenade_StickyMine_C">();
	}
	static class AGrenade_StickyMine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGrenade_StickyMine_C>();
	}
};
static_assert(alignof(AGrenade_StickyMine_C) == 0x000008, "Wrong alignment on AGrenade_StickyMine_C");
static_assert(sizeof(AGrenade_StickyMine_C) == 0x000428, "Wrong size on AGrenade_StickyMine_C");
static_assert(offsetof(AGrenade_StickyMine_C, UberGraphFrame_Grenade_StickyMine_C) == 0x000360, "Member 'AGrenade_StickyMine_C::UberGraphFrame_Grenade_StickyMine_C' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, UseSphere) == 0x000368, "Member 'AGrenade_StickyMine_C::UseSphere' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, SingleUsable) == 0x000370, "Member 'AGrenade_StickyMine_C::SingleUsable' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, SM_MineGround) == 0x000378, "Member 'AGrenade_StickyMine_C::SM_MineGround' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, TriggerAreaDisplay) == 0x000380, "Member 'AGrenade_StickyMine_C::TriggerAreaDisplay' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Explosion) == 0x000388, "Member 'AGrenade_StickyMine_C::Explosion' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Damage) == 0x000390, "Member 'AGrenade_StickyMine_C::Damage' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Sphere) == 0x000398, "Member 'AGrenade_StickyMine_C::Sphere' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, RingPulse_Scale_1486413F4ABF9550B6797DBA3F0A55DB) == 0x0003A0, "Member 'AGrenade_StickyMine_C::RingPulse_Scale_1486413F4ABF9550B6797DBA3F0A55DB' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, RingPulse__Direction_1486413F4ABF9550B6797DBA3F0A55DB) == 0x0003A4, "Member 'AGrenade_StickyMine_C::RingPulse__Direction_1486413F4ABF9550B6797DBA3F0A55DB' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, RingPulse) == 0x0003A8, "Member 'AGrenade_StickyMine_C::RingPulse' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Triggered) == 0x0003B0, "Member 'AGrenade_StickyMine_C::Triggered' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, ArmingDelay) == 0x0003B4, "Member 'AGrenade_StickyMine_C::ArmingDelay' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Armed) == 0x0003B8, "Member 'AGrenade_StickyMine_C::Armed' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, ExplosionSound) == 0x0003C0, "Member 'AGrenade_StickyMine_C::ExplosionSound' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, ExplosionParticles) == 0x0003C8, "Member 'AGrenade_StickyMine_C::ExplosionParticles' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, TriggerAreaDynamicMat) == 0x0003D0, "Member 'AGrenade_StickyMine_C::TriggerAreaDynamicMat' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, TriggerAreaColor) == 0x0003D8, "Member 'AGrenade_StickyMine_C::TriggerAreaColor' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Exploded) == 0x0003E8, "Member 'AGrenade_StickyMine_C::Exploded' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Not_Blinking_Dynamic_Material) == 0x0003F0, "Member 'AGrenade_StickyMine_C::Not_Blinking_Dynamic_Material' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, MaxExplosions) == 0x0003F8, "Member 'AGrenade_StickyMine_C::MaxExplosions' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, ExplosionCount) == 0x0003FC, "Member 'AGrenade_StickyMine_C::ExplosionCount' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Over) == 0x000400, "Member 'AGrenade_StickyMine_C::Over' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, GrenadeLightsDynamicMat) == 0x000408, "Member 'AGrenade_StickyMine_C::GrenadeLightsDynamicMat' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, TriggeredLightsColour) == 0x000410, "Member 'AGrenade_StickyMine_C::TriggeredLightsColour' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, LifespanAfterFirstTrigger) == 0x000420, "Member 'AGrenade_StickyMine_C::LifespanAfterFirstTrigger' has a wrong offset!");
static_assert(offsetof(AGrenade_StickyMine_C, Dead) == 0x000424, "Member 'AGrenade_StickyMine_C::Dead' has a wrong offset!");

}

