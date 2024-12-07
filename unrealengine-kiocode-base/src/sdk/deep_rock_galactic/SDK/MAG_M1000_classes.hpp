#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MAG_M1000

#include "Basic.hpp"

#include "MAG_BaseClass_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MAG_M1000.MAG_M1000_C
// 0x0000 (0x0260 - 0x0260)
class AMAG_M1000_C final : public AMAG_BaseClass_C
{
public:
	bool OnSpawnRelease_Released();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MAG_M1000_C">();
	}
	static class AMAG_M1000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMAG_M1000_C>();
	}
};
static_assert(alignof(AMAG_M1000_C) == 0x000008, "Wrong alignment on AMAG_M1000_C");
static_assert(sizeof(AMAG_M1000_C) == 0x000260, "Wrong size on AMAG_M1000_C");

}

