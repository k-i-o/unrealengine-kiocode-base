#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrozenState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C
// 0x0008 (0x02B8 - 0x02B0)
class UBP_FrozenState_C final : public UFrozenStateComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_FrozenState(int32 EntryPoint);
	void ReceiveOnDefrosting();
	void ReceiveStateExit();
	void ReceiveStateEnter();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrozenState_C">();
	}
	static class UBP_FrozenState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FrozenState_C>();
	}
};
static_assert(alignof(UBP_FrozenState_C) == 0x000008, "Wrong alignment on UBP_FrozenState_C");
static_assert(sizeof(UBP_FrozenState_C) == 0x0002B8, "Wrong size on UBP_FrozenState_C");
static_assert(offsetof(UBP_FrozenState_C, UberGraphFrame) == 0x0002B0, "Member 'UBP_FrozenState_C::UberGraphFrame' has a wrong offset!");

}

