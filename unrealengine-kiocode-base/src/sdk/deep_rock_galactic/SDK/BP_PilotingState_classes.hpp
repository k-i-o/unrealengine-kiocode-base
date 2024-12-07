#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PilotingState

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PilotingState.BP_PilotingState_C
// 0x0000 (0x0120 - 0x0120)
class UBP_PilotingState_C final : public UPilotingStateComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PilotingState_C">();
	}
	static class UBP_PilotingState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PilotingState_C>();
	}
};
static_assert(alignof(UBP_PilotingState_C) == 0x000008, "Wrong alignment on UBP_PilotingState_C");
static_assert(sizeof(UBP_PilotingState_C) == 0x000120, "Wrong size on UBP_PilotingState_C");

}

