#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Gem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Gem.BP_Gem_C
// 0x00C8 (0x0348 - 0x0280)
class ABP_Gem_C : public AGem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTerrainDetectComponent*                TerrainDetect;                                     // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect5;                                    // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect4;                                    // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect3;                                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect2;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect1;                                    // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFirstPersonStaticMeshComponent*        FirstPersonStaticMesh;                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TerrainScannerMesh;                                // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USimpleObjectInfoComponent*             SimpleObjectInfo;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCarriableComponent*                    Carriable;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Detects;                                           // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47D0[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              DugFreeCue;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTriggerSound;                                   // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D1[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ImpactSound;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ImpactSoundParameter;                              // 0x0308(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PickupSound;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InWorldScale;                                      // 0x0318(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ThrowForce;                                        // 0x0324(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleToTerrainScanner;                           // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ExposeNeighbourhoodToTerrainScanner;               // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D2[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDAchievement*                        CollectedAchievement;                              // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleToScannerAfterDigOut;                       // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ReleaseToWorld();
	void SetPickedUp(class APlayerCharacter* Character);
	void PointCleared();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void All_PlayDugFree();
	void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
	void Throw(const struct FVector& Force);
	void ReceiveBeginPlay();
	void Receive_OnDeposited(class APlayerCharacter* FromPlayer, class AActor* ToActor);
	void Cheat_ReleaseToWorld();
	void OnAttachChanged(bool Attached);
	void UpdateAttachState(bool Attached);
	void ExecuteUbergraph_BP_Gem(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Gem_C">();
	}
	static class ABP_Gem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Gem_C>();
	}
};
static_assert(alignof(ABP_Gem_C) == 0x000008, "Wrong alignment on ABP_Gem_C");
static_assert(sizeof(ABP_Gem_C) == 0x000348, "Wrong size on ABP_Gem_C");
static_assert(offsetof(ABP_Gem_C, UberGraphFrame) == 0x000280, "Member 'ABP_Gem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, TerrainDetect) == 0x000288, "Member 'ABP_Gem_C::TerrainDetect' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, TerrainDetect5) == 0x000290, "Member 'ABP_Gem_C::TerrainDetect5' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, TerrainDetect4) == 0x000298, "Member 'ABP_Gem_C::TerrainDetect4' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, TerrainDetect3) == 0x0002A0, "Member 'ABP_Gem_C::TerrainDetect3' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, TerrainDetect2) == 0x0002A8, "Member 'ABP_Gem_C::TerrainDetect2' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, TerrainDetect1) == 0x0002B0, "Member 'ABP_Gem_C::TerrainDetect1' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, FirstPersonStaticMesh) == 0x0002B8, "Member 'ABP_Gem_C::FirstPersonStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, TerrainScannerMesh) == 0x0002C0, "Member 'ABP_Gem_C::TerrainScannerMesh' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, SimpleObjectInfo) == 0x0002C8, "Member 'ABP_Gem_C::SimpleObjectInfo' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, Carriable) == 0x0002D0, "Member 'ABP_Gem_C::Carriable' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, Box) == 0x0002D8, "Member 'ABP_Gem_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, Sphere) == 0x0002E0, "Member 'ABP_Gem_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, Detects) == 0x0002E8, "Member 'ABP_Gem_C::Detects' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, DugFreeCue) == 0x0002F0, "Member 'ABP_Gem_C::DugFreeCue' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, CanTriggerSound) == 0x0002F8, "Member 'ABP_Gem_C::CanTriggerSound' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, ImpactSound) == 0x000300, "Member 'ABP_Gem_C::ImpactSound' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, ImpactSoundParameter) == 0x000308, "Member 'ABP_Gem_C::ImpactSoundParameter' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, PickupSound) == 0x000310, "Member 'ABP_Gem_C::PickupSound' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, InWorldScale) == 0x000318, "Member 'ABP_Gem_C::InWorldScale' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, ThrowForce) == 0x000324, "Member 'ABP_Gem_C::ThrowForce' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, VisibleToTerrainScanner) == 0x000330, "Member 'ABP_Gem_C::VisibleToTerrainScanner' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, ExposeNeighbourhoodToTerrainScanner) == 0x000331, "Member 'ABP_Gem_C::ExposeNeighbourhoodToTerrainScanner' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, CollectedAchievement) == 0x000338, "Member 'ABP_Gem_C::CollectedAchievement' has a wrong offset!");
static_assert(offsetof(ABP_Gem_C, VisibleToScannerAfterDigOut) == 0x000340, "Member 'ABP_Gem_C::VisibleToScannerAfterDigOut' has a wrong offset!");

}
