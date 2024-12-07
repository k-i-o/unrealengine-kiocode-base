#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Armor_Gunner

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Armor_Gunner.BP_Armor_Gunner_C
// 0x0008 (0x02B0 - 0x02A8)
class ABP_Armor_Gunner_C final : public AArmorPiece
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>& Stats) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Armor_Gunner_C">();
	}
	static class ABP_Armor_Gunner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Armor_Gunner_C>();
	}
};
static_assert(alignof(ABP_Armor_Gunner_C) == 0x000008, "Wrong alignment on ABP_Armor_Gunner_C");
static_assert(sizeof(ABP_Armor_Gunner_C) == 0x0002B0, "Wrong size on ABP_Armor_Gunner_C");
static_assert(offsetof(ABP_Armor_Gunner_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_Armor_Gunner_C::DefaultSceneRoot' has a wrong offset!");

}

