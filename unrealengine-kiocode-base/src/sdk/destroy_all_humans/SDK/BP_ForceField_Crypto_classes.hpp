#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ForceField_Crypto

#include "Basic.hpp"

#include "BP_ForceField_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ForceField_Crypto.BP_ForceField_Crypto_C
// 0x0000 (0x0990 - 0x0990)
class ABP_ForceField_Crypto_C final : public ABP_ForceField_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ForceField_Crypto_C">();
	}
	static class ABP_ForceField_Crypto_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ForceField_Crypto_C>();
	}
};
static_assert(alignof(ABP_ForceField_Crypto_C) == 0x000008, "Wrong alignment on ABP_ForceField_Crypto_C");
static_assert(sizeof(ABP_ForceField_Crypto_C) == 0x000990, "Wrong size on ABP_ForceField_Crypto_C");

}
