#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PheromoneAttackerPositioning

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C
// 0x0008 (0x0110 - 0x0108)
class UBP_PheromoneAttackerPositioning_C : public UEnemyAttackerPositioningComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0108(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void OnHit_Event_0(float Damage, const struct FDamageData& DamageData, bool AnyHealthLost);
	void ExecuteUbergraph_BP_PheromoneAttackerPositioning(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PheromoneAttackerPositioning_C">();
	}
	static class UBP_PheromoneAttackerPositioning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PheromoneAttackerPositioning_C>();
	}
};
static_assert(alignof(UBP_PheromoneAttackerPositioning_C) == 0x000008, "Wrong alignment on UBP_PheromoneAttackerPositioning_C");
static_assert(sizeof(UBP_PheromoneAttackerPositioning_C) == 0x000110, "Wrong size on UBP_PheromoneAttackerPositioning_C");
static_assert(offsetof(UBP_PheromoneAttackerPositioning_C, UberGraphFrame) == 0x000108, "Member 'UBP_PheromoneAttackerPositioning_C::UberGraphFrame' has a wrong offset!");

}
