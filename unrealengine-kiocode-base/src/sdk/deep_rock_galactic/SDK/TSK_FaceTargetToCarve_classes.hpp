#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TSK_FaceTargetToCarve

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C
// 0x0040 (0x00E8 - 0x00A8)
class UTSK_FaceTargetToCarve_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 TargetActorKey;                                    // 0x00B0(0x0028)(Edit, BlueprintVisible)
	float                                         Angle;                                             // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Tries;                                             // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FailIfCantTurn;                                    // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D7C[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxTries;                                          // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool IsFacingTarget(class AActor* Tank);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FaceTargetToCarve(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TSK_FaceTargetToCarve_C">();
	}
	static class UTSK_FaceTargetToCarve_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTSK_FaceTargetToCarve_C>();
	}
};
static_assert(alignof(UTSK_FaceTargetToCarve_C) == 0x000008, "Wrong alignment on UTSK_FaceTargetToCarve_C");
static_assert(sizeof(UTSK_FaceTargetToCarve_C) == 0x0000E8, "Wrong size on UTSK_FaceTargetToCarve_C");
static_assert(offsetof(UTSK_FaceTargetToCarve_C, UberGraphFrame) == 0x0000A8, "Member 'UTSK_FaceTargetToCarve_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTSK_FaceTargetToCarve_C, TargetActorKey) == 0x0000B0, "Member 'UTSK_FaceTargetToCarve_C::TargetActorKey' has a wrong offset!");
static_assert(offsetof(UTSK_FaceTargetToCarve_C, Angle) == 0x0000D8, "Member 'UTSK_FaceTargetToCarve_C::Angle' has a wrong offset!");
static_assert(offsetof(UTSK_FaceTargetToCarve_C, Tries) == 0x0000DC, "Member 'UTSK_FaceTargetToCarve_C::Tries' has a wrong offset!");
static_assert(offsetof(UTSK_FaceTargetToCarve_C, FailIfCantTurn) == 0x0000E0, "Member 'UTSK_FaceTargetToCarve_C::FailIfCantTurn' has a wrong offset!");
static_assert(offsetof(UTSK_FaceTargetToCarve_C, MaxTries) == 0x0000E4, "Member 'UTSK_FaceTargetToCarve_C::MaxTries' has a wrong offset!");

}
