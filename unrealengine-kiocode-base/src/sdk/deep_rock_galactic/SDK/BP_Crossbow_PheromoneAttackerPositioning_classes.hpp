#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Crossbow_PheromoneAttackerPositioning

#include "Basic.hpp"

#include "BP_PheromoneAttackerPositioning_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Crossbow_PheromoneAttackerPositioning.BP_Crossbow_PheromoneAttackerPositioning_C
// 0x0008 (0x0118 - 0x0110)
class UBP_Crossbow_PheromoneAttackerPositioning_C final : public UBP_PheromoneAttackerPositioning_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Crossbow_PheromoneAttackerPositioning_C; // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Crossbow_PheromoneAttackerPositioning(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Crossbow_PheromoneAttackerPositioning_C">();
	}
	static class UBP_Crossbow_PheromoneAttackerPositioning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Crossbow_PheromoneAttackerPositioning_C>();
	}
};
static_assert(alignof(UBP_Crossbow_PheromoneAttackerPositioning_C) == 0x000008, "Wrong alignment on UBP_Crossbow_PheromoneAttackerPositioning_C");
static_assert(sizeof(UBP_Crossbow_PheromoneAttackerPositioning_C) == 0x000118, "Wrong size on UBP_Crossbow_PheromoneAttackerPositioning_C");
static_assert(offsetof(UBP_Crossbow_PheromoneAttackerPositioning_C, UberGraphFrame_BP_Crossbow_PheromoneAttackerPositioning_C) == 0x000110, "Member 'UBP_Crossbow_PheromoneAttackerPositioning_C::UberGraphFrame_BP_Crossbow_PheromoneAttackerPositioning_C' has a wrong offset!");

}
