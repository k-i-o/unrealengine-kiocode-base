#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZipLineState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
// 0x0008 (0x0238 - 0x0230)
class UBP_ZipLineState_C final : public UZipLineStateComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ZipLineState(int32 EntryPoint);
	void ReceiveSpeedBoostDeactivated();
	void ReceiveSpeedBoostActivated();
	struct FVector GetJumpVector(const struct FVector& LookVector, const struct FVector& CurrentVelocity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ZipLineState_C">();
	}
	static class UBP_ZipLineState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ZipLineState_C>();
	}
};
static_assert(alignof(UBP_ZipLineState_C) == 0x000008, "Wrong alignment on UBP_ZipLineState_C");
static_assert(sizeof(UBP_ZipLineState_C) == 0x000238, "Wrong size on UBP_ZipLineState_C");
static_assert(offsetof(UBP_ZipLineState_C, UberGraphFrame) == 0x000230, "Member 'UBP_ZipLineState_C::UberGraphFrame' has a wrong offset!");

}
