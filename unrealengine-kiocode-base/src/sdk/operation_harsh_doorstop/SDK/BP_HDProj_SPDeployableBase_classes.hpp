#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDProj_SPDeployableBase

#include "Basic.hpp"

#include "HDMain_classes.hpp"
#include "DonkehFramework_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C
// 0x00A0 (0x0430 - 0x0390)
class ABP_HDProj_SPDeployableBase_C : public AHDProj_SpawnPointDeployable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       HitDetectionSphere;                                // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SpawnSphere;                                       // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ProjectileCollision;                               // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDFPOIComponent*                        POI;                                               // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlySquadMembersCanSpawn;                         // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_195A[0x3];                                     // 0x03B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PostTriggerLifeSpan;                               // 0x03BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlacementRestrictionDistance;                      // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSpawnable;                                        // 0x03C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_195B[0x3];                                     // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSpawnPointActivationChanged;                     // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FVector>                        SpawnPointLocOffsets;                              // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSpawnPointDef>                 GeneratedSpawnPoints;                              // 0x03E8(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIgnoreFriendlyFire;                               // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_195C[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Health;                                            // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisableWhenOverrun;                               // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_195D[0x3];                                     // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfEnemiesToDisable;                          // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDestroyWhenOverrun;                               // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_195E[0x3];                                     // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfEnemiesToDestroy;                          // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentNumberOfEnemies;                            // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195F[0x4];                                     // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHDSquadState*                          OwnerSquadState;                                   // 0x0418(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDestroyWhenSquadDisbands;                         // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOnlyOnePerSquad;                                  // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1960[0x2];                                     // 0x0422(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxNumberOfInstances;                              // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnemyTolerance_Radius;                             // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EnemyTolerance_MaxNumberOfChars;                   // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSpawnPointActivationChanged__DelegateSignature(class ABP_HDProj_SPDeployableBase_C* Deployable, bool bSpawnPointEnabled);
	void ExecuteUbergraph_BP_HDProj_SPDeployableBase(int32 EntryPoint);
	void MemberPreUnregisteredFromOwnerSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OverlappingPawnTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
	void BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceivePayloadActivated(const struct FHitResult& ImpactHitResult);
	void HasServerAuthority(bool* bAuthority);
	void IsEnemyChar(class ADFBaseCharacter* Char, bool* bEnemyChar);
	void IsSpawnable(bool* bSpawnPointEnabled);
	void SetIsSpawnable(bool bNewEnabled);
	void CheckForEnemyChars();
	void GenerateSpawnPointList();
	void HandleTakeDamageFromProjectile(class ADFBaseProjectile* InProjectile, float InDamage);
	void CheckEnemyOverrun();
	void InitDeployable();

	void GetSpawnPoint(bool bMeshZOffset, int32 SpawnPointIdx, struct FSpawnPointDef* SpawnPoint) const;
	void AreSpawnPointsEqual(struct FSpawnPointDef& SpawnPointOne, struct FSpawnPointDef& SpawnPointTwo, bool* bEqual) const;
	void GetActorTransformOffsetByMeshZBounds(struct FTransform* OffsetActorWorldXForm) const;
	void GetTransformOffsetBySpawnIndex(int32& SpawnIdx, const struct FTransform& Transform, struct FTransform* NewTransform) const;
	void CanPlayerSpawnHere(class AController* InPlayer, bool* bPlayerCanSpawn) const;
	int32 GetAllSpawnPointsBP(TArray<struct FSpawnPointDef>* SpawnPoints) const;
	bool FindSpawnPointBP(int32 SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint) const;
	bool CanSpawnActorFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, TSubclassOf<class AActor> SpawnActorClass) const;
	bool CanRestartPlayerFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class AController* Player, TSubclassOf<class APawn> PlayerPawnClass) const;
	bool GetSpawnPointCollisionHandlingOverrideBP(const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HDProj_SPDeployableBase_C">();
	}
	static class ABP_HDProj_SPDeployableBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HDProj_SPDeployableBase_C>();
	}
};
static_assert(alignof(ABP_HDProj_SPDeployableBase_C) == 0x000010, "Wrong alignment on ABP_HDProj_SPDeployableBase_C");
static_assert(sizeof(ABP_HDProj_SPDeployableBase_C) == 0x000430, "Wrong size on ABP_HDProj_SPDeployableBase_C");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, UberGraphFrame) == 0x000390, "Member 'ABP_HDProj_SPDeployableBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, HitDetectionSphere) == 0x000398, "Member 'ABP_HDProj_SPDeployableBase_C::HitDetectionSphere' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, SpawnSphere) == 0x0003A0, "Member 'ABP_HDProj_SPDeployableBase_C::SpawnSphere' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, ProjectileCollision) == 0x0003A8, "Member 'ABP_HDProj_SPDeployableBase_C::ProjectileCollision' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, POI) == 0x0003B0, "Member 'ABP_HDProj_SPDeployableBase_C::POI' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, bOnlySquadMembersCanSpawn) == 0x0003B8, "Member 'ABP_HDProj_SPDeployableBase_C::bOnlySquadMembersCanSpawn' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, PostTriggerLifeSpan) == 0x0003BC, "Member 'ABP_HDProj_SPDeployableBase_C::PostTriggerLifeSpan' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, PlacementRestrictionDistance) == 0x0003C0, "Member 'ABP_HDProj_SPDeployableBase_C::PlacementRestrictionDistance' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, bSpawnable) == 0x0003C4, "Member 'ABP_HDProj_SPDeployableBase_C::bSpawnable' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, OnSpawnPointActivationChanged) == 0x0003C8, "Member 'ABP_HDProj_SPDeployableBase_C::OnSpawnPointActivationChanged' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, SpawnPointLocOffsets) == 0x0003D8, "Member 'ABP_HDProj_SPDeployableBase_C::SpawnPointLocOffsets' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, GeneratedSpawnPoints) == 0x0003E8, "Member 'ABP_HDProj_SPDeployableBase_C::GeneratedSpawnPoints' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, bIgnoreFriendlyFire) == 0x0003F8, "Member 'ABP_HDProj_SPDeployableBase_C::bIgnoreFriendlyFire' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, Health) == 0x0003FC, "Member 'ABP_HDProj_SPDeployableBase_C::Health' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, bDisableWhenOverrun) == 0x000400, "Member 'ABP_HDProj_SPDeployableBase_C::bDisableWhenOverrun' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, NumberOfEnemiesToDisable) == 0x000404, "Member 'ABP_HDProj_SPDeployableBase_C::NumberOfEnemiesToDisable' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, bDestroyWhenOverrun) == 0x000408, "Member 'ABP_HDProj_SPDeployableBase_C::bDestroyWhenOverrun' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, NumberOfEnemiesToDestroy) == 0x00040C, "Member 'ABP_HDProj_SPDeployableBase_C::NumberOfEnemiesToDestroy' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, CurrentNumberOfEnemies) == 0x000410, "Member 'ABP_HDProj_SPDeployableBase_C::CurrentNumberOfEnemies' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, OwnerSquadState) == 0x000418, "Member 'ABP_HDProj_SPDeployableBase_C::OwnerSquadState' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, bDestroyWhenSquadDisbands) == 0x000420, "Member 'ABP_HDProj_SPDeployableBase_C::bDestroyWhenSquadDisbands' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, bOnlyOnePerSquad) == 0x000421, "Member 'ABP_HDProj_SPDeployableBase_C::bOnlyOnePerSquad' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, MaxNumberOfInstances) == 0x000424, "Member 'ABP_HDProj_SPDeployableBase_C::MaxNumberOfInstances' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, EnemyTolerance_Radius) == 0x000428, "Member 'ABP_HDProj_SPDeployableBase_C::EnemyTolerance_Radius' has a wrong offset!");
static_assert(offsetof(ABP_HDProj_SPDeployableBase_C, EnemyTolerance_MaxNumberOfChars) == 0x00042C, "Member 'ABP_HDProj_SPDeployableBase_C::EnemyTolerance_MaxNumberOfChars' has a wrong offset!");

}
