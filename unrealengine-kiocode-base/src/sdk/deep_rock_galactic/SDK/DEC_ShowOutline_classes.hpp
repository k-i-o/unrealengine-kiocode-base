#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DEC_ShowOutline

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DEC_ShowOutline.DEC_ShowOutline_C
// 0x0010 (0x00B0 - 0x00A0)
class UDEC_ShowOutline_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOutlineComponent*                      Outline;                                           // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult);
	void ExecuteUbergraph_DEC_ShowOutline(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DEC_ShowOutline_C">();
	}
	static class UDEC_ShowOutline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDEC_ShowOutline_C>();
	}
};
static_assert(alignof(UDEC_ShowOutline_C) == 0x000008, "Wrong alignment on UDEC_ShowOutline_C");
static_assert(sizeof(UDEC_ShowOutline_C) == 0x0000B0, "Wrong size on UDEC_ShowOutline_C");
static_assert(offsetof(UDEC_ShowOutline_C, UberGraphFrame) == 0x0000A0, "Member 'UDEC_ShowOutline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDEC_ShowOutline_C, Outline) == 0x0000A8, "Member 'UDEC_ShowOutline_C::Outline' has a wrong offset!");

}
