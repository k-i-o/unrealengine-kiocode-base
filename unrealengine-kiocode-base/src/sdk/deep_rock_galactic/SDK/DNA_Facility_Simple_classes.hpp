#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DNA_Facility_Simple

#include "Basic.hpp"

#include "DNA_Facility_DNA_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DNA_Facility_Simple.DNA_Facility_Simple_C
// 0x0000 (0x0060 - 0x0060)
class UDNA_Facility_Simple_C final : public UDNA_Facility_DNA_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DNA_Facility_Simple_C">();
	}
	static class UDNA_Facility_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDNA_Facility_Simple_C>();
	}
};
static_assert(alignof(UDNA_Facility_Simple_C) == 0x000008, "Wrong alignment on UDNA_Facility_Simple_C");
static_assert(sizeof(UDNA_Facility_Simple_C) == 0x000060, "Wrong size on UDNA_Facility_Simple_C");

}
