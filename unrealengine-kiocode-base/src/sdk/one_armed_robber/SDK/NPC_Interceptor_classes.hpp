#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Interceptor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "NPCBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_Interceptor.NPC_Interceptor_C
// 0x0030 (0x0570 - 0x0540)
class ANPC_Interceptor_C final : public ANPCBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_Interceptor_C;                  // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USteamStatComponent_C*                  SteamStatComponent;                                // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        TrapPlacementLocation;                             // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Chr_Attach_Hat_07;                              // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HomeLocation;                                      // 0x0560(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlacingTrap_;                                      // 0x056C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MovingHome_;                                       // 0x056D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_NPC_Interceptor(int32 EntryPoint);
	void OnDeathStats(class AActor* Player);
	void ReceiveBeginPlay();
	void MoveHome();
	void MoveToPlayer();
	void PlaceTrap();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void OnSuccess_39ACF7D943E338583662F38997A19C97(EPathFollowingResult MovementResult);
	void OnFail_39ACF7D943E338583662F38997A19C97(EPathFollowingResult MovementResult);
	void OnSuccess_2587FC5248E52D8493EEB981357C5499(EPathFollowingResult MovementResult);
	void OnFail_2587FC5248E52D8493EEB981357C5499(EPathFollowingResult MovementResult);
	void CheckCanPlaceTrap(bool* CanPlace_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Interceptor_C">();
	}
	static class ANPC_Interceptor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Interceptor_C>();
	}
};
static_assert(alignof(ANPC_Interceptor_C) == 0x000010, "Wrong alignment on ANPC_Interceptor_C");
static_assert(sizeof(ANPC_Interceptor_C) == 0x000570, "Wrong size on ANPC_Interceptor_C");
static_assert(offsetof(ANPC_Interceptor_C, UberGraphFrame_NPC_Interceptor_C) == 0x000540, "Member 'ANPC_Interceptor_C::UberGraphFrame_NPC_Interceptor_C' has a wrong offset!");
static_assert(offsetof(ANPC_Interceptor_C, SteamStatComponent) == 0x000548, "Member 'ANPC_Interceptor_C::SteamStatComponent' has a wrong offset!");
static_assert(offsetof(ANPC_Interceptor_C, TrapPlacementLocation) == 0x000550, "Member 'ANPC_Interceptor_C::TrapPlacementLocation' has a wrong offset!");
static_assert(offsetof(ANPC_Interceptor_C, SM_Chr_Attach_Hat_07) == 0x000558, "Member 'ANPC_Interceptor_C::SM_Chr_Attach_Hat_07' has a wrong offset!");
static_assert(offsetof(ANPC_Interceptor_C, HomeLocation) == 0x000560, "Member 'ANPC_Interceptor_C::HomeLocation' has a wrong offset!");
static_assert(offsetof(ANPC_Interceptor_C, PlacingTrap_) == 0x00056C, "Member 'ANPC_Interceptor_C::PlacingTrap_' has a wrong offset!");
static_assert(offsetof(ANPC_Interceptor_C, MovingHome_) == 0x00056D, "Member 'ANPC_Interceptor_C::MovingHome_' has a wrong offset!");

}
