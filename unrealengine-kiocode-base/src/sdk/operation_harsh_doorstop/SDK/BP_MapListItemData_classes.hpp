#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapListItemData

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "FMapInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapListItemData.BP_MapListItemData_C
// 0x0048 (0x0070 - 0x0028)
class UBP_MapListItemData_C final : public UObject
{
public:
	struct FFMapInfo                              MapInfo;                                           // 0x0028(0x0048)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapListItemData_C">();
	}
	static class UBP_MapListItemData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapListItemData_C>();
	}
};
static_assert(alignof(UBP_MapListItemData_C) == 0x000008, "Wrong alignment on UBP_MapListItemData_C");
static_assert(sizeof(UBP_MapListItemData_C) == 0x000070, "Wrong size on UBP_MapListItemData_C");
static_assert(offsetof(UBP_MapListItemData_C, MapInfo) == 0x000028, "Member 'UBP_MapListItemData_C::MapInfo' has a wrong offset!");

}
