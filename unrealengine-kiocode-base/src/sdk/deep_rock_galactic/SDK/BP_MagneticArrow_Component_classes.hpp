#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MagneticArrow_Component

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MagneticArrow_Component.BP_MagneticArrow_Component_C
// 0x0000 (0x0108 - 0x0108)
class UBP_MagneticArrow_Component_C final : public UCrossbowProjectileMagnetic
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MagneticArrow_Component_C">();
	}
	static class UBP_MagneticArrow_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MagneticArrow_Component_C>();
	}
};
static_assert(alignof(UBP_MagneticArrow_Component_C) == 0x000008, "Wrong alignment on UBP_MagneticArrow_Component_C");
static_assert(sizeof(UBP_MagneticArrow_Component_C) == 0x000108, "Wrong size on UBP_MagneticArrow_Component_C");

}
