#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrackMovementState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TrackMovementState.BP_TrackMovementState_C
// 0x0010 (0x02C0 - 0x02B0)
class UBP_TrackMovementState_C final : public UTrackMovementStateComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_TrackMovementState(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TrackMovementState_C">();
	}
	static class UBP_TrackMovementState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TrackMovementState_C>();
	}
};
static_assert(alignof(UBP_TrackMovementState_C) == 0x000010, "Wrong alignment on UBP_TrackMovementState_C");
static_assert(sizeof(UBP_TrackMovementState_C) == 0x0002C0, "Wrong size on UBP_TrackMovementState_C");
static_assert(offsetof(UBP_TrackMovementState_C, UberGraphFrame) == 0x0002B0, "Member 'UBP_TrackMovementState_C::UberGraphFrame' has a wrong offset!");

}

