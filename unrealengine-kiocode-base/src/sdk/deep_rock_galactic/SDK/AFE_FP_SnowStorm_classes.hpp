#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFE_FP_SnowStorm

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AFE_FP_SnowStorm.AFE_FP_SnowStorm_C
// 0x0000 (0x0048 - 0x0048)
class UAFE_FP_SnowStorm_C final : public UAttachedParticlesAfflictionEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AFE_FP_SnowStorm_C">();
	}
	static class UAFE_FP_SnowStorm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAFE_FP_SnowStorm_C>();
	}
};
static_assert(alignof(UAFE_FP_SnowStorm_C) == 0x000008, "Wrong alignment on UAFE_FP_SnowStorm_C");
static_assert(sizeof(UAFE_FP_SnowStorm_C) == 0x000048, "Wrong size on UAFE_FP_SnowStorm_C");

}

