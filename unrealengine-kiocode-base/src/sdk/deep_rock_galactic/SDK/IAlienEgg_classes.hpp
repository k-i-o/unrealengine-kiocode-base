#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IAlienEgg

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IAlienEgg.IAlienEgg_C
// 0x0000 (0x0028 - 0x0028)
class IIAlienEgg_C final : public IInterface
{
public:
	void SetSpecialEgg();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IAlienEgg_C">();
	}
	static class IIAlienEgg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIAlienEgg_C>();
	}
};
static_assert(alignof(IIAlienEgg_C) == 0x000008, "Wrong alignment on IIAlienEgg_C");
static_assert(sizeof(IIAlienEgg_C) == 0x000028, "Wrong size on IIAlienEgg_C");

}
