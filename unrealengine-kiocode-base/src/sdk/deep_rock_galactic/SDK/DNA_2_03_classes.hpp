#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DNA_2_03

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DNA_2_03.DNA_2_03_C
// 0x0000 (0x0050 - 0x0050)
class UDNA_2_03_C final : public UMissionDNA
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DNA_2_03_C">();
	}
	static class UDNA_2_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDNA_2_03_C>();
	}
};
static_assert(alignof(UDNA_2_03_C) == 0x000008, "Wrong alignment on UDNA_2_03_C");
static_assert(sizeof(UDNA_2_03_C) == 0x000050, "Wrong size on UDNA_2_03_C");

}
