#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_AngleIndicator

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_AngleIndicator.HUD_AngleIndicator_C
// 0x0000 (0x0290 - 0x0290)
class UHUD_AngleIndicator_C final : public UAngleIndicatorWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_AngleIndicator_C">();
	}
	static class UHUD_AngleIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_AngleIndicator_C>();
	}
};
static_assert(alignof(UHUD_AngleIndicator_C) == 0x000008, "Wrong alignment on UHUD_AngleIndicator_C");
static_assert(sizeof(UHUD_AngleIndicator_C) == 0x000290, "Wrong size on UHUD_AngleIndicator_C");

}
