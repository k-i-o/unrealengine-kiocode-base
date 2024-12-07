#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFE_PowerAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AFE_PowerAttack.AFE_PowerAttack_C
// 0x0008 (0x0030 - 0x0028)
class UAFE_PowerAttack_C final : public UAfflictionEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AFE_PowerAttack(int32 EntryPoint);
	void ReceiveEndEffect(class UPawnAfflictionComponent* Target);
	void ReceiveBeginEffect(class UPawnAfflictionComponent* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AFE_PowerAttack_C">();
	}
	static class UAFE_PowerAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAFE_PowerAttack_C>();
	}
};
static_assert(alignof(UAFE_PowerAttack_C) == 0x000008, "Wrong alignment on UAFE_PowerAttack_C");
static_assert(sizeof(UAFE_PowerAttack_C) == 0x000030, "Wrong size on UAFE_PowerAttack_C");
static_assert(offsetof(UAFE_PowerAttack_C, UberGraphFrame) == 0x000028, "Member 'UAFE_PowerAttack_C::UberGraphFrame' has a wrong offset!");

}

