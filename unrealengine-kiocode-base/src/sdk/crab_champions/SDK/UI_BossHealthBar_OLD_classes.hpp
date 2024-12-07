#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BossHealthBar_OLD

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BossHealthBar_OLD.UI_BossHealthBar_OLD_C
// 0x0030 (0x0388 - 0x0358)
class UUI_BossHealthBar_OLD_C final : public UCrabHealthBarUI
{
public:
	class UImage*                                 DummyImageToMaintainHeightWhenCollapsed;           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_130;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BossHealthBar_OLD_C">();
	}
	static class UUI_BossHealthBar_OLD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BossHealthBar_OLD_C>();
	}
};
static_assert(alignof(UUI_BossHealthBar_OLD_C) == 0x000008, "Wrong alignment on UUI_BossHealthBar_OLD_C");
static_assert(sizeof(UUI_BossHealthBar_OLD_C) == 0x000388, "Wrong size on UUI_BossHealthBar_OLD_C");
static_assert(offsetof(UUI_BossHealthBar_OLD_C, DummyImageToMaintainHeightWhenCollapsed) == 0x000358, "Member 'UUI_BossHealthBar_OLD_C::DummyImageToMaintainHeightWhenCollapsed' has a wrong offset!");
static_assert(offsetof(UUI_BossHealthBar_OLD_C, Image) == 0x000360, "Member 'UUI_BossHealthBar_OLD_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_BossHealthBar_OLD_C, Image_1) == 0x000368, "Member 'UUI_BossHealthBar_OLD_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_BossHealthBar_OLD_C, Image_2) == 0x000370, "Member 'UUI_BossHealthBar_OLD_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_BossHealthBar_OLD_C, Image_8) == 0x000378, "Member 'UUI_BossHealthBar_OLD_C::Image_8' has a wrong offset!");
static_assert(offsetof(UUI_BossHealthBar_OLD_C, Image_130) == 0x000380, "Member 'UUI_BossHealthBar_OLD_C::Image_130' has a wrong offset!");

}

