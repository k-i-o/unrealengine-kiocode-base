#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFE_TP_ShieldLink

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AFE_TP_ShieldLink.AFE_TP_ShieldLink_C
// 0x0000 (0x0028 - 0x0028)
class UAFE_TP_ShieldLink_C final : public UShieldLinkedAfflictionEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AFE_TP_ShieldLink_C">();
	}
	static class UAFE_TP_ShieldLink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAFE_TP_ShieldLink_C>();
	}
};
static_assert(alignof(UAFE_TP_ShieldLink_C) == 0x000008, "Wrong alignment on UAFE_TP_ShieldLink_C");
static_assert(sizeof(UAFE_TP_ShieldLink_C) == 0x000028, "Wrong size on UAFE_TP_ShieldLink_C");

}

