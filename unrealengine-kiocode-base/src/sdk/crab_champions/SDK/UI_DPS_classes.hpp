#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DPS

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_DPS.UI_DPS_C
// 0x0000 (0x0278 - 0x0278)
class UUI_DPS_C final : public UCrabDamageTextUI
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_DPS_C">();
	}
	static class UUI_DPS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_DPS_C>();
	}
};
static_assert(alignof(UUI_DPS_C) == 0x000008, "Wrong alignment on UUI_DPS_C");
static_assert(sizeof(UUI_DPS_C) == 0x000278, "Wrong size on UUI_DPS_C");

}

