#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhotographyState

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PhotographyState.BP_PhotographyState_C
// 0x0000 (0x0100 - 0x0100)
class UBP_PhotographyState_C final : public UPhotographyStateComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhotographyState_C">();
	}
	static class UBP_PhotographyState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PhotographyState_C>();
	}
};
static_assert(alignof(UBP_PhotographyState_C) == 0x000008, "Wrong alignment on UBP_PhotographyState_C");
static_assert(sizeof(UBP_PhotographyState_C) == 0x000100, "Wrong size on UBP_PhotographyState_C");

}
