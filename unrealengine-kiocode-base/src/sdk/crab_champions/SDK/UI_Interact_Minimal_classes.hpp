#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Interact_Minimal

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Interact_Minimal.UI_Interact_Minimal_C
// 0x0000 (0x0358 - 0x0358)
class UUI_Interact_Minimal_C final : public UCrabInteractUI
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Interact_Minimal_C">();
	}
	static class UUI_Interact_Minimal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Interact_Minimal_C>();
	}
};
static_assert(alignof(UUI_Interact_Minimal_C) == 0x000008, "Wrong alignment on UUI_Interact_Minimal_C");
static_assert(sizeof(UUI_Interact_Minimal_C) == 0x000358, "Wrong size on UUI_Interact_Minimal_C");

}
