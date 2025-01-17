#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopItem_Weapon_base

#include "Basic.hpp"

#include "ShopItem_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShopItem_Weapon_base.ShopItem_Weapon_base_C
// 0x0028 (0x0298 - 0x0270)
class AShopItem_Weapon_base_C : public AShopItem_Base_C
{
public:
	class UClass*                                 GunBP;                                             // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         AvailableAttachments;                              // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         DefaultAttachments;                                // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopItem_Weapon_base_C">();
	}
	static class AShopItem_Weapon_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShopItem_Weapon_base_C>();
	}
};
static_assert(alignof(AShopItem_Weapon_base_C) == 0x000008, "Wrong alignment on AShopItem_Weapon_base_C");
static_assert(sizeof(AShopItem_Weapon_base_C) == 0x000298, "Wrong size on AShopItem_Weapon_base_C");
static_assert(offsetof(AShopItem_Weapon_base_C, GunBP) == 0x000270, "Member 'AShopItem_Weapon_base_C::GunBP' has a wrong offset!");
static_assert(offsetof(AShopItem_Weapon_base_C, AvailableAttachments) == 0x000278, "Member 'AShopItem_Weapon_base_C::AvailableAttachments' has a wrong offset!");
static_assert(offsetof(AShopItem_Weapon_base_C, DefaultAttachments) == 0x000288, "Member 'AShopItem_Weapon_base_C::DefaultAttachments' has a wrong offset!");

}

