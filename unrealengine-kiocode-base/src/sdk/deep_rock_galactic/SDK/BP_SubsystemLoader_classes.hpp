#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SubsystemLoader

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SubsystemLoader.BP_SubsystemLoader_C
// 0x0000 (0x0038 - 0x0038)
class UBP_SubsystemLoader_C final : public USubsystemLoader
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SubsystemLoader_C">();
	}
	static class UBP_SubsystemLoader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SubsystemLoader_C>();
	}
};
static_assert(alignof(UBP_SubsystemLoader_C) == 0x000008, "Wrong alignment on UBP_SubsystemLoader_C");
static_assert(sizeof(UBP_SubsystemLoader_C) == 0x000038, "Wrong size on UBP_SubsystemLoader_C");

}

