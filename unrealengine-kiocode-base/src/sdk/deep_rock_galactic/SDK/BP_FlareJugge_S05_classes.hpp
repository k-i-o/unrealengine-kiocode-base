#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlareJugge_S05

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FlareJugge_S05.BP_FlareJugge_S05_C
// 0x0010 (0x0230 - 0x0220)
class ABP_FlareJugge_S05_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 SK_ConfettiPipe_A;                                 // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FlareJugge_S05_C">();
	}
	static class ABP_FlareJugge_S05_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FlareJugge_S05_C>();
	}
};
static_assert(alignof(ABP_FlareJugge_S05_C) == 0x000008, "Wrong alignment on ABP_FlareJugge_S05_C");
static_assert(sizeof(ABP_FlareJugge_S05_C) == 0x000230, "Wrong size on ABP_FlareJugge_S05_C");
static_assert(offsetof(ABP_FlareJugge_S05_C, SK_ConfettiPipe_A) == 0x000220, "Member 'ABP_FlareJugge_S05_C::SK_ConfettiPipe_A' has a wrong offset!");
static_assert(offsetof(ABP_FlareJugge_S05_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_FlareJugge_S05_C::DefaultSceneRoot' has a wrong offset!");

}
