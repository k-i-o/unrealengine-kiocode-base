#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttachedState

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AttachedState.BP_AttachedState_C
// 0x0000 (0x0130 - 0x0130)
class UBP_AttachedState_C final : public UAttachedStateComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AttachedState_C">();
	}
	static class UBP_AttachedState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AttachedState_C>();
	}
};
static_assert(alignof(UBP_AttachedState_C) == 0x000008, "Wrong alignment on UBP_AttachedState_C");
static_assert(sizeof(UBP_AttachedState_C) == 0x000130, "Wrong size on UBP_AttachedState_C");

}

