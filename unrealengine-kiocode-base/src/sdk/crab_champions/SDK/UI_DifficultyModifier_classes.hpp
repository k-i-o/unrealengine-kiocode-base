#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DifficultyModifier

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_DifficultyModifier.UI_DifficultyModifier_C
// 0x0000 (0x02F8 - 0x02F8)
class UUI_DifficultyModifier_C final : public UCrabDifficultyModifierUI
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_DifficultyModifier_C">();
	}
	static class UUI_DifficultyModifier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_DifficultyModifier_C>();
	}
};
static_assert(alignof(UUI_DifficultyModifier_C) == 0x000008, "Wrong alignment on UUI_DifficultyModifier_C");
static_assert(sizeof(UUI_DifficultyModifier_C) == 0x0002F8, "Wrong size on UUI_DifficultyModifier_C");

}
