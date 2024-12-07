#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Grenade_Axe_Stuck

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C
// 0x0058 (0x0290 - 0x0238)
class ABP_Grenade_Axe_Stuck_C final : public AFSDPhysicsActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USimpleObjectInfoComponent*             SimpleObjectInfo;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Blade;                                             // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Handle;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          WorldCollision;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HandGrenade_M_Thrown2;                          // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AThrownGrenadeItem*                     AxeGrenadeItem;                                    // 0x0278(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynamic_Material;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StandOnMe;                                         // 0x0288(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          SimulateAxePhysics;                                // 0x0289(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void OnRep_SimulateAxePhysics();
	void OnRep_StandOnMe();
	void OnRep_AxeGrenadeItem();
	void UserConstructionScript();
	void PickUpAxe(class AThrownGrenadeItem* ThrownGrenadeItem);
	void Detach_Axe();
	void Attach(class AActor* ParentActor, class USceneComponent* Param_ParentComponent, class FName ParentSocketName, bool CanRetrieve);
	void OnDestroyed_Event(class AActor* DestroyedActor);
	void OnDeath_Event(class UHealthComponentBase* HealthComponent);
	void GoPhysical(bool PassThrough, bool CanRetrieve);
	void MakeStandable(bool CanRetrieve);
	void SetRetrieval(bool CanRetrieve);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
	void ExecuteUbergraph_BP_Grenade_Axe_Stuck(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Grenade_Axe_Stuck_C">();
	}
	static class ABP_Grenade_Axe_Stuck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Grenade_Axe_Stuck_C>();
	}
};
static_assert(alignof(ABP_Grenade_Axe_Stuck_C) == 0x000008, "Wrong alignment on ABP_Grenade_Axe_Stuck_C");
static_assert(sizeof(ABP_Grenade_Axe_Stuck_C) == 0x000290, "Wrong size on ABP_Grenade_Axe_Stuck_C");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, UberGraphFrame) == 0x000238, "Member 'ABP_Grenade_Axe_Stuck_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, SimpleObjectInfo) == 0x000240, "Member 'ABP_Grenade_Axe_Stuck_C::SimpleObjectInfo' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, InstantUsable) == 0x000248, "Member 'ABP_Grenade_Axe_Stuck_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, Blade) == 0x000250, "Member 'ABP_Grenade_Axe_Stuck_C::Blade' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, Handle) == 0x000258, "Member 'ABP_Grenade_Axe_Stuck_C::Handle' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, WorldCollision) == 0x000260, "Member 'ABP_Grenade_Axe_Stuck_C::WorldCollision' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, Sphere) == 0x000268, "Member 'ABP_Grenade_Axe_Stuck_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, SM_HandGrenade_M_Thrown2) == 0x000270, "Member 'ABP_Grenade_Axe_Stuck_C::SM_HandGrenade_M_Thrown2' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, AxeGrenadeItem) == 0x000278, "Member 'ABP_Grenade_Axe_Stuck_C::AxeGrenadeItem' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, Dynamic_Material) == 0x000280, "Member 'ABP_Grenade_Axe_Stuck_C::Dynamic_Material' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, StandOnMe) == 0x000288, "Member 'ABP_Grenade_Axe_Stuck_C::StandOnMe' has a wrong offset!");
static_assert(offsetof(ABP_Grenade_Axe_Stuck_C, SimulateAxePhysics) == 0x000289, "Member 'ABP_Grenade_Axe_Stuck_C::SimulateAxePhysics' has a wrong offset!");

}

