#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bosco_FoamGlob

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PRJ_Foam_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bosco_FoamGlob.BP_Bosco_FoamGlob_C
// 0x0008 (0x0370 - 0x0368)
class ABP_Bosco_FoamGlob_C final : public APRJ_Foam_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Bosco_FoamGlob_C;                // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Bosco_FoamGlob(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bosco_FoamGlob_C">();
	}
	static class ABP_Bosco_FoamGlob_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bosco_FoamGlob_C>();
	}
};
static_assert(alignof(ABP_Bosco_FoamGlob_C) == 0x000008, "Wrong alignment on ABP_Bosco_FoamGlob_C");
static_assert(sizeof(ABP_Bosco_FoamGlob_C) == 0x000370, "Wrong size on ABP_Bosco_FoamGlob_C");
static_assert(offsetof(ABP_Bosco_FoamGlob_C, UberGraphFrame_BP_Bosco_FoamGlob_C) == 0x000368, "Member 'ABP_Bosco_FoamGlob_C::UberGraphFrame_BP_Bosco_FoamGlob_C' has a wrong offset!");

}
