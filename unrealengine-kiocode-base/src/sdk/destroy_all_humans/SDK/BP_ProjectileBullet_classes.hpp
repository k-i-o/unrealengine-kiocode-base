#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileBullet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BFGCore_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectileBullet.BP_ProjectileBullet_C
// 0x0078 (0x06F0 - 0x0678)
class ABP_ProjectileBullet_C : public ABFGProjectile_Object
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               PFX_projectile_bullet_01_UFO;                      // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PFX_projectile_bullet_01_Crypto;                   // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_Bulletpass;                                  // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x06A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x06A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Audioparam_Distance_Norm;                          // 0x06AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance_For_Far_Sound;                            // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2112[0x4];                                     // 0x06B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  ThePlayer;                                         // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceForBulletpass;                             // 0x06C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Decal_Size;                                        // 0x06C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             Impacts_DataTable;                                 // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnProjectileStopped;                               // 0x06D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnProjectileStopped__DelegateSignature();
	void ExecuteUbergraph_BP_ProjectileBullet(int32 EntryPoint);
	void OnRetrieveFromPool(bool _bAutomaticallyReactivateComponents);
	void OnReturnToPool();
	void DeactivateBullet();
	void InitializeBullet();
	void OnImpact(const struct FVector& _vLocation, const struct FVector& _vDirection, const struct FVector& _vNormal, class UPhysicalMaterial* _pMaterial);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetBlackBoardDataTable(class FName Param_Name, class UDataTable* Value);
	void SetBlackBoardName(class FName Param_Name, class FName Value);
	void SetBlackBoardVector(class FName Param_Name, const struct FVector& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileBullet_C">();
	}
	static class ABP_ProjectileBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileBullet_C>();
	}
};
static_assert(alignof(ABP_ProjectileBullet_C) == 0x000008, "Wrong alignment on ABP_ProjectileBullet_C");
static_assert(sizeof(ABP_ProjectileBullet_C) == 0x0006F0, "Wrong size on ABP_ProjectileBullet_C");
static_assert(offsetof(ABP_ProjectileBullet_C, UberGraphFrame) == 0x000678, "Member 'ABP_ProjectileBullet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, PFX_projectile_bullet_01_UFO) == 0x000680, "Member 'ABP_ProjectileBullet_C::PFX_projectile_bullet_01_UFO' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, PFX_projectile_bullet_01_Crypto) == 0x000688, "Member 'ABP_ProjectileBullet_C::PFX_projectile_bullet_01_Crypto' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, Audio_Bulletpass) == 0x000690, "Member 'ABP_ProjectileBullet_C::Audio_Bulletpass' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, StaticMesh) == 0x000698, "Member 'ABP_ProjectileBullet_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, Scene) == 0x0006A0, "Member 'ABP_ProjectileBullet_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, Distance) == 0x0006A8, "Member 'ABP_ProjectileBullet_C::Distance' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, Audioparam_Distance_Norm) == 0x0006AC, "Member 'ABP_ProjectileBullet_C::Audioparam_Distance_Norm' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, Distance_For_Far_Sound) == 0x0006B0, "Member 'ABP_ProjectileBullet_C::Distance_For_Far_Sound' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, ThePlayer) == 0x0006B8, "Member 'ABP_ProjectileBullet_C::ThePlayer' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, DistanceForBulletpass) == 0x0006C0, "Member 'ABP_ProjectileBullet_C::DistanceForBulletpass' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, Decal_Size) == 0x0006C4, "Member 'ABP_ProjectileBullet_C::Decal_Size' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, Impacts_DataTable) == 0x0006D0, "Member 'ABP_ProjectileBullet_C::Impacts_DataTable' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_C, OnProjectileStopped) == 0x0006D8, "Member 'ABP_ProjectileBullet_C::OnProjectileStopped' has a wrong offset!");

}

