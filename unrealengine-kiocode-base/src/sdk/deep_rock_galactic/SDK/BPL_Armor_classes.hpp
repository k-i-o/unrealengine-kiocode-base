#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Armor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_Armor.BPL_Armor_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_Armor_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddBaseArmorStats(class AFSDPlayerState* Player, TArray<struct FGearStatEntry>& Stats, class UClass* ArmorClass, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_Armor_C">();
	}
	static class UBPL_Armor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_Armor_C>();
	}
};
static_assert(alignof(UBPL_Armor_C) == 0x000008, "Wrong alignment on UBPL_Armor_C");
static_assert(sizeof(UBPL_Armor_C) == 0x000028, "Wrong size on UBPL_Armor_C");

}

