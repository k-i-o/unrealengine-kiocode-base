#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ParalyzedState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C
// 0x0018 (0x0158 - 0x0140)
class UBP_ParalyzedState_C final : public UParalyzedStateComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                               StoredRotation;                                    // 0x0148(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Camera_Arm_Y_Rotation_;                            // 0x0154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ParalyzedState(int32 EntryPoint);
	void ReceiveStateExit();
	void ReceiveStateEnter();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ParalyzedState_C">();
	}
	static class UBP_ParalyzedState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ParalyzedState_C>();
	}
};
static_assert(alignof(UBP_ParalyzedState_C) == 0x000008, "Wrong alignment on UBP_ParalyzedState_C");
static_assert(sizeof(UBP_ParalyzedState_C) == 0x000158, "Wrong size on UBP_ParalyzedState_C");
static_assert(offsetof(UBP_ParalyzedState_C, UberGraphFrame) == 0x000140, "Member 'UBP_ParalyzedState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ParalyzedState_C, StoredRotation) == 0x000148, "Member 'UBP_ParalyzedState_C::StoredRotation' has a wrong offset!");
static_assert(offsetof(UBP_ParalyzedState_C, Camera_Arm_Y_Rotation_) == 0x000154, "Member 'UBP_ParalyzedState_C::Camera_Arm_Y_Rotation_' has a wrong offset!");

}
