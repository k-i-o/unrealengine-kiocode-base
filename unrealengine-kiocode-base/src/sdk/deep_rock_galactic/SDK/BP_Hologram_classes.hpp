#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hologram

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Hologram.BP_Hologram_C
// 0x0038 (0x0258 - 0x0220)
class ABP_Hologram_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Usable_Collider;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RotationSpeed;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfMarkers;                                   // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Hologram(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Hologram_C">();
	}
	static class ABP_Hologram_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Hologram_C>();
	}
};
static_assert(alignof(ABP_Hologram_C) == 0x000008, "Wrong alignment on ABP_Hologram_C");
static_assert(sizeof(ABP_Hologram_C) == 0x000258, "Wrong size on ABP_Hologram_C");
static_assert(offsetof(ABP_Hologram_C, UberGraphFrame) == 0x000220, "Member 'ABP_Hologram_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Hologram_C, Usable_Collider) == 0x000228, "Member 'ABP_Hologram_C::Usable_Collider' has a wrong offset!");
static_assert(offsetof(ABP_Hologram_C, RotatingMovement) == 0x000230, "Member 'ABP_Hologram_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ABP_Hologram_C, TextRender) == 0x000238, "Member 'ABP_Hologram_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_Hologram_C, InstantUsable) == 0x000240, "Member 'ABP_Hologram_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_Hologram_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_Hologram_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Hologram_C, RotationSpeed) == 0x000250, "Member 'ABP_Hologram_C::RotationSpeed' has a wrong offset!");
static_assert(offsetof(ABP_Hologram_C, NumberOfMarkers) == 0x000254, "Member 'ABP_Hologram_C::NumberOfMarkers' has a wrong offset!");

}
