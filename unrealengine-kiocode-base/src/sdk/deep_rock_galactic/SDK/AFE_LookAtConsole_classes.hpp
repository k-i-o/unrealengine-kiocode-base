#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFE_LookAtConsole

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AFE_LookAtConsole.AFE_LookAtConsole_C
// 0x0000 (0x0050 - 0x0050)
class UAFE_LookAtConsole_C final : public UPlayerCharacterMontageAfflictionEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AFE_LookAtConsole_C">();
	}
	static class UAFE_LookAtConsole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAFE_LookAtConsole_C>();
	}
};
static_assert(alignof(UAFE_LookAtConsole_C) == 0x000008, "Wrong alignment on UAFE_LookAtConsole_C");
static_assert(sizeof(UAFE_LookAtConsole_C) == 0x000050, "Wrong size on UAFE_LookAtConsole_C");

}

