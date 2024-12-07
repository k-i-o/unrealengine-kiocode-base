#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HealthBar

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HealthBar.UI_HealthBar_C
// 0x0048 (0x03A0 - 0x0358)
class UUI_HealthBar_C final : public UCrabHealthBarUI
{
public:
	class UImage*                                 Image;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_130;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HealthBar_C">();
	}
	static class UUI_HealthBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HealthBar_C>();
	}
};
static_assert(alignof(UUI_HealthBar_C) == 0x000008, "Wrong alignment on UUI_HealthBar_C");
static_assert(sizeof(UUI_HealthBar_C) == 0x0003A0, "Wrong size on UUI_HealthBar_C");
static_assert(offsetof(UUI_HealthBar_C, Image) == 0x000358, "Member 'UUI_HealthBar_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Image_1) == 0x000360, "Member 'UUI_HealthBar_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Image_2) == 0x000368, "Member 'UUI_HealthBar_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Image_3) == 0x000370, "Member 'UUI_HealthBar_C::Image_3' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Image_5) == 0x000378, "Member 'UUI_HealthBar_C::Image_5' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Image_6) == 0x000380, "Member 'UUI_HealthBar_C::Image_6' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Image_7) == 0x000388, "Member 'UUI_HealthBar_C::Image_7' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Image_130) == 0x000390, "Member 'UUI_HealthBar_C::Image_130' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Text) == 0x000398, "Member 'UUI_HealthBar_C::Text' has a wrong offset!");

}

