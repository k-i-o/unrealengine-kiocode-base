#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skysphere_HoxxesStars

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Skysphere_HoxxesStars.BP_Skysphere_HoxxesStars_C
// 0x0008 (0x0228 - 0x0220)
class ABP_Skysphere_HoxxesStars_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMeshComponent0;                              // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skysphere_HoxxesStars_C">();
	}
	static class ABP_Skysphere_HoxxesStars_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skysphere_HoxxesStars_C>();
	}
};
static_assert(alignof(ABP_Skysphere_HoxxesStars_C) == 0x000008, "Wrong alignment on ABP_Skysphere_HoxxesStars_C");
static_assert(sizeof(ABP_Skysphere_HoxxesStars_C) == 0x000228, "Wrong size on ABP_Skysphere_HoxxesStars_C");
static_assert(offsetof(ABP_Skysphere_HoxxesStars_C, StaticMeshComponent0) == 0x000220, "Member 'ABP_Skysphere_HoxxesStars_C::StaticMeshComponent0' has a wrong offset!");

}

