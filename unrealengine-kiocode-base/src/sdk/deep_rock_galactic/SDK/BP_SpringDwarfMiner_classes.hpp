#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpringDwarfMiner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpringDwarfMiner.BP_SpringDwarfMiner_C
// 0x0068 (0x0288 - 0x0220)
class ABP_SpringDwarfMiner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_SpringDwarf_004;                                // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SpringDwarf001_StandAlone1;                     // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SpringDwarf001_Spring;                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SpringDwarf001_StandAlone;                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SpringDwarf001_Legs;                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SpringDwarf001_Torso1;                          // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder1;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SpringDwarfMiner(int32 EntryPoint);
	void GetSpringDwarf(class UStaticMeshComponent** Dwarf);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void ImpulseSpringDwarf();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpringDwarfMiner_C">();
	}
	static class ABP_SpringDwarfMiner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpringDwarfMiner_C>();
	}
};
static_assert(alignof(ABP_SpringDwarfMiner_C) == 0x000008, "Wrong alignment on ABP_SpringDwarfMiner_C");
static_assert(sizeof(ABP_SpringDwarfMiner_C) == 0x000288, "Wrong size on ABP_SpringDwarfMiner_C");
static_assert(offsetof(ABP_SpringDwarfMiner_C, UberGraphFrame) == 0x000220, "Member 'ABP_SpringDwarfMiner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, SM_SpringDwarf_004) == 0x000228, "Member 'ABP_SpringDwarfMiner_C::SM_SpringDwarf_004' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, SM_SpringDwarf001_StandAlone1) == 0x000230, "Member 'ABP_SpringDwarfMiner_C::SM_SpringDwarf001_StandAlone1' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, Sphere) == 0x000238, "Member 'ABP_SpringDwarfMiner_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, SM_SpringDwarf001_Spring) == 0x000240, "Member 'ABP_SpringDwarfMiner_C::SM_SpringDwarf001_Spring' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, SM_SpringDwarf001_StandAlone) == 0x000248, "Member 'ABP_SpringDwarfMiner_C::SM_SpringDwarf001_StandAlone' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, SM_SpringDwarf001_Legs) == 0x000250, "Member 'ABP_SpringDwarfMiner_C::SM_SpringDwarf001_Legs' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, SM_SpringDwarf001_Torso1) == 0x000258, "Member 'ABP_SpringDwarfMiner_C::SM_SpringDwarf001_Torso1' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, InstantUsable) == 0x000260, "Member 'ABP_SpringDwarfMiner_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, Capsule) == 0x000268, "Member 'ABP_SpringDwarfMiner_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, PhysicsConstraint) == 0x000270, "Member 'ABP_SpringDwarfMiner_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, Cylinder1) == 0x000278, "Member 'ABP_SpringDwarfMiner_C::Cylinder1' has a wrong offset!");
static_assert(offsetof(ABP_SpringDwarfMiner_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_SpringDwarfMiner_C::DefaultSceneRoot' has a wrong offset!");

}
