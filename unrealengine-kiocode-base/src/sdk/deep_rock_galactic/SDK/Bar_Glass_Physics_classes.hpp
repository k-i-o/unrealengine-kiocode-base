#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bar_Glass_Physics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "Bar_Glass_Physics_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bar_Glass_Physics.Bar_Glass_Physics_C
// 0x0050 (0x0278 - 0x0228)
class ABar_Glass_Physics_C : public ABar_Glass_Physics_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Useable;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGravityChangedComponent*               GravityChanged;                                    // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 GlassMesh;                                         // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Collider;                                          // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Thrown;                                            // 0x0260(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_35A7[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ItemClass;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class APlayerCharacter*                       CurrentUser;                                       // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Bar_Glass_Physics(int32 EntryPoint);
	void Throw(const struct FVector& FromLocation, const struct FRotator& NewRotation, class AActor* Thrower);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void PlayKickSound();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();
	void OnRep_Thrown();
	void OnRep_Drinkable();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bar_Glass_Physics_C">();
	}
	static class ABar_Glass_Physics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABar_Glass_Physics_C>();
	}
};
static_assert(alignof(ABar_Glass_Physics_C) == 0x000008, "Wrong alignment on ABar_Glass_Physics_C");
static_assert(sizeof(ABar_Glass_Physics_C) == 0x000278, "Wrong size on ABar_Glass_Physics_C");
static_assert(offsetof(ABar_Glass_Physics_C, UberGraphFrame) == 0x000228, "Member 'ABar_Glass_Physics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, Useable) == 0x000230, "Member 'ABar_Glass_Physics_C::Useable' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, InstantUsable) == 0x000238, "Member 'ABar_Glass_Physics_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, GravityChanged) == 0x000240, "Member 'ABar_Glass_Physics_C::GravityChanged' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, Sphere) == 0x000248, "Member 'ABar_Glass_Physics_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, GlassMesh) == 0x000250, "Member 'ABar_Glass_Physics_C::GlassMesh' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, Collider) == 0x000258, "Member 'ABar_Glass_Physics_C::Collider' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, Thrown) == 0x000260, "Member 'ABar_Glass_Physics_C::Thrown' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, ItemClass) == 0x000268, "Member 'ABar_Glass_Physics_C::ItemClass' has a wrong offset!");
static_assert(offsetof(ABar_Glass_Physics_C, CurrentUser) == 0x000270, "Member 'ABar_Glass_Physics_C::CurrentUser' has a wrong offset!");

}

