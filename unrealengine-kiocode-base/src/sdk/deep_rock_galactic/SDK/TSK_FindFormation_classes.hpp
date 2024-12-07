#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TSK_FindFormation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TSK_FindFormation.TSK_FindFormation_C
// 0x0008 (0x00B0 - 0x00A8)
class UTSK_FindFormation_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindFormation(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TSK_FindFormation_C">();
	}
	static class UTSK_FindFormation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTSK_FindFormation_C>();
	}
};
static_assert(alignof(UTSK_FindFormation_C) == 0x000008, "Wrong alignment on UTSK_FindFormation_C");
static_assert(sizeof(UTSK_FindFormation_C) == 0x0000B0, "Wrong size on UTSK_FindFormation_C");
static_assert(offsetof(UTSK_FindFormation_C, UberGraphFrame) == 0x0000A8, "Member 'UTSK_FindFormation_C::UberGraphFrame' has a wrong offset!");

}

