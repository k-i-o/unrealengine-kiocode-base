#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Civilian_Male_Base

#include "Basic.hpp"

#include "BP_Character_Civilian_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_Civilian_Male_Base.BP_Character_Civilian_Male_Base_C
// 0x0000 (0x0CF0 - 0x0CF0)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_Character_Civilian_Male_Base_C : public ABP_Character_Civilian_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_Civilian_Male_Base_C">();
	}
	static class ABP_Character_Civilian_Male_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_Civilian_Male_Base_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_Character_Civilian_Male_Base_C) == 0x000010, "Wrong alignment on ABP_Character_Civilian_Male_Base_C");
static_assert(sizeof(ABP_Character_Civilian_Male_Base_C) == 0x000CF0, "Wrong size on ABP_Character_Civilian_Male_Base_C");

}

