#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAIController_Civilian

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCAIController_Civilian.BP_NPCAIController_Civilian_C
// 0x0030 (0x0630 - 0x0600)
class ABP_NPCAIController_Civilian_C final : public ABFGNPCCivilianController
{
public:
	class UAIPerceptionComponent*                 AIPerception;                                      // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 TestKey;                                           // 0x0608(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCAIController_Civilian_C">();
	}
	static class ABP_NPCAIController_Civilian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCAIController_Civilian_C>();
	}
};
static_assert(alignof(ABP_NPCAIController_Civilian_C) == 0x000008, "Wrong alignment on ABP_NPCAIController_Civilian_C");
static_assert(sizeof(ABP_NPCAIController_Civilian_C) == 0x000630, "Wrong size on ABP_NPCAIController_Civilian_C");
static_assert(offsetof(ABP_NPCAIController_Civilian_C, AIPerception) == 0x000600, "Member 'ABP_NPCAIController_Civilian_C::AIPerception' has a wrong offset!");
static_assert(offsetof(ABP_NPCAIController_Civilian_C, TestKey) == 0x000608, "Member 'ABP_NPCAIController_Civilian_C::TestKey' has a wrong offset!");

}
