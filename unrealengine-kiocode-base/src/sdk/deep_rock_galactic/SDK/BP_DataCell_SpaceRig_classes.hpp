#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataCell_SpaceRig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Gem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DataCell_SpaceRig.BP_DataCell_SpaceRig_C
// 0x0038 (0x0380 - 0x0348)
class ABP_DataCell_SpaceRig_C final : public ABP_Gem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DataCell_SpaceRig_C;             // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOutlineComponent*                      Outline;                                           // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLightLarge;                                   // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Idle_Cue;                                          // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          PickedUp;                                          // 0x0378(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Receive_OnDeposited(class APlayerCharacter* FromPlayer, class AActor* ToActor);
	void UpdateAttachState(bool Attached);
	void BndEvt__BP_DataCell_Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	void BndEvt__BP_DataCell_Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
	void ExecuteUbergraph_BP_DataCell_SpaceRig(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DataCell_SpaceRig_C">();
	}
	static class ABP_DataCell_SpaceRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DataCell_SpaceRig_C>();
	}
};
static_assert(alignof(ABP_DataCell_SpaceRig_C) == 0x000008, "Wrong alignment on ABP_DataCell_SpaceRig_C");
static_assert(sizeof(ABP_DataCell_SpaceRig_C) == 0x000380, "Wrong size on ABP_DataCell_SpaceRig_C");
static_assert(offsetof(ABP_DataCell_SpaceRig_C, UberGraphFrame_BP_DataCell_SpaceRig_C) == 0x000348, "Member 'ABP_DataCell_SpaceRig_C::UberGraphFrame_BP_DataCell_SpaceRig_C' has a wrong offset!");
static_assert(offsetof(ABP_DataCell_SpaceRig_C, Outline) == 0x000350, "Member 'ABP_DataCell_SpaceRig_C::Outline' has a wrong offset!");
static_assert(offsetof(ABP_DataCell_SpaceRig_C, Niagara) == 0x000358, "Member 'ABP_DataCell_SpaceRig_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_DataCell_SpaceRig_C, PointLightLarge) == 0x000360, "Member 'ABP_DataCell_SpaceRig_C::PointLightLarge' has a wrong offset!");
static_assert(offsetof(ABP_DataCell_SpaceRig_C, Idle_Cue) == 0x000368, "Member 'ABP_DataCell_SpaceRig_C::Idle_Cue' has a wrong offset!");
static_assert(offsetof(ABP_DataCell_SpaceRig_C, PointLight) == 0x000370, "Member 'ABP_DataCell_SpaceRig_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_DataCell_SpaceRig_C, PickedUp) == 0x000378, "Member 'ABP_DataCell_SpaceRig_C::PickedUp' has a wrong offset!");

}
