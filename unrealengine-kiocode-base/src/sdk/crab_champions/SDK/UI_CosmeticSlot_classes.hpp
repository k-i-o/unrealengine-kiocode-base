#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CosmeticSlot

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CosmeticSlot.UI_CosmeticSlot_C
// 0x0010 (0x0340 - 0x0330)
class UUI_CosmeticSlot_C final : public UCrabCosmeticSlotUI
{
public:
	class UImage*                                 Image_133;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_190;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CosmeticSlot_C">();
	}
	static class UUI_CosmeticSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CosmeticSlot_C>();
	}
};
static_assert(alignof(UUI_CosmeticSlot_C) == 0x000008, "Wrong alignment on UUI_CosmeticSlot_C");
static_assert(sizeof(UUI_CosmeticSlot_C) == 0x000340, "Wrong size on UUI_CosmeticSlot_C");
static_assert(offsetof(UUI_CosmeticSlot_C, Image_133) == 0x000330, "Member 'UUI_CosmeticSlot_C::Image_133' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticSlot_C, Image_190) == 0x000338, "Member 'UUI_CosmeticSlot_C::Image_190' has a wrong offset!");

}

