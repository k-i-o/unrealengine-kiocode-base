#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFL_Gen_Burn_Large

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AFL_Gen_Burn_Large.AFL_Gen_Burn_Large_C
// 0x0000 (0x0030 - 0x0030)
class UAFL_Gen_Burn_Large_C final : public UBurningAfflictionEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AFL_Gen_Burn_Large_C">();
	}
	static class UAFL_Gen_Burn_Large_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAFL_Gen_Burn_Large_C>();
	}
};
static_assert(alignof(UAFL_Gen_Burn_Large_C) == 0x000008, "Wrong alignment on UAFL_Gen_Burn_Large_C");
static_assert(sizeof(UAFL_Gen_Burn_Large_C) == 0x000030, "Wrong size on UAFL_Gen_Burn_Large_C");

}
