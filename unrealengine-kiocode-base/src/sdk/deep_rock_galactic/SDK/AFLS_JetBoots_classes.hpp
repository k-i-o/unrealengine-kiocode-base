#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AFLS_JetBoots

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AFLS_JetBoots.AFLS_JetBoots_C
// 0x0000 (0x0048 - 0x0048)
class UAFLS_JetBoots_C final : public USoundAfflictionEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AFLS_JetBoots_C">();
	}
	static class UAFLS_JetBoots_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAFLS_JetBoots_C>();
	}
};
static_assert(alignof(UAFLS_JetBoots_C) == 0x000008, "Wrong alignment on UAFLS_JetBoots_C");
static_assert(sizeof(UAFLS_JetBoots_C) == 0x000048, "Wrong size on UAFLS_JetBoots_C");

}
