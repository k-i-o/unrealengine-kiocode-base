#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopItem_Outfit_Abase

#include "Basic.hpp"

#include "ShopItem_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShopItem_Outfit_Abase.ShopItem_Outfit_Abase_C
// 0x0008 (0x0278 - 0x0270)
class AShopItem_Outfit_Abase_C : public AShopItem_Base_C
{
public:
	class USkeletalMesh*                          Mesh;                                              // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopItem_Outfit_Abase_C">();
	}
	static class AShopItem_Outfit_Abase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShopItem_Outfit_Abase_C>();
	}
};
static_assert(alignof(AShopItem_Outfit_Abase_C) == 0x000008, "Wrong alignment on AShopItem_Outfit_Abase_C");
static_assert(sizeof(AShopItem_Outfit_Abase_C) == 0x000278, "Wrong size on AShopItem_Outfit_Abase_C");
static_assert(offsetof(AShopItem_Outfit_Abase_C, Mesh) == 0x000270, "Member 'AShopItem_Outfit_Abase_C::Mesh' has a wrong offset!");

}
