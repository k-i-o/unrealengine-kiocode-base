#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OverheadManager

#include "Basic.hpp"

#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OverheadManager.BP_OverheadManager_C
// 0x0000 (0x0130 - 0x0130)
class UBP_OverheadManager_C final : public UBFGOverheadWidgetManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OverheadManager_C">();
	}
	static class UBP_OverheadManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OverheadManager_C>();
	}
};
static_assert(alignof(UBP_OverheadManager_C) == 0x000008, "Wrong alignment on UBP_OverheadManager_C");
static_assert(sizeof(UBP_OverheadManager_C) == 0x000130, "Wrong size on UBP_OverheadManager_C");

}
