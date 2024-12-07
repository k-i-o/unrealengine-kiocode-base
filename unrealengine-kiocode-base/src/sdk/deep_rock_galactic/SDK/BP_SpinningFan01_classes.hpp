#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpinningFan01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpinningFan01.BP_SpinningFan01_C
// 0x0018 (0x0248 - 0x0230)
class ABP_SpinningFan01_C final : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetSpeed(float Param_Speed);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpinningFan01(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpinningFan01_C">();
	}
	static class ABP_SpinningFan01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpinningFan01_C>();
	}
};
static_assert(alignof(ABP_SpinningFan01_C) == 0x000008, "Wrong alignment on ABP_SpinningFan01_C");
static_assert(sizeof(ABP_SpinningFan01_C) == 0x000248, "Wrong size on ABP_SpinningFan01_C");
static_assert(offsetof(ABP_SpinningFan01_C, UberGraphFrame) == 0x000230, "Member 'ABP_SpinningFan01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SpinningFan01_C, RotatingMovement) == 0x000238, "Member 'ABP_SpinningFan01_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ABP_SpinningFan01_C, Speed) == 0x000240, "Member 'ABP_SpinningFan01_C::Speed' has a wrong offset!");

}

