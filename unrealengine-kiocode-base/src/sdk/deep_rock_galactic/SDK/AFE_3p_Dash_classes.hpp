#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFE_3p_Dash

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AFE_3p_Dash.AFE_3p_Dash_C
// 0x0000 (0x0048 - 0x0048)
class UAFE_3p_Dash_C final : public UAttachedParticlesAfflictionEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AFE_3p_Dash_C">();
	}
	static class UAFE_3p_Dash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAFE_3p_Dash_C>();
	}
};
static_assert(alignof(UAFE_3p_Dash_C) == 0x000008, "Wrong alignment on UAFE_3p_Dash_C");
static_assert(sizeof(UAFE_3p_Dash_C) == 0x000048, "Wrong size on UAFE_3p_Dash_C");

}
