#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sandblasted_MapWidget

#include "Basic.hpp"

#include "ITM_MisSel_BiomeBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Sandblasted_MapWidget.Sandblasted_MapWidget_C
// 0x0010 (0x0270 - 0x0260)
class USandblasted_MapWidget_C final : public UITM_MisSel_BiomeBase_C
{
public:
	class UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;               // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void GetBasePanel(class UCanvasPanel** Panel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sandblasted_MapWidget_C">();
	}
	static class USandblasted_MapWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USandblasted_MapWidget_C>();
	}
};
static_assert(alignof(USandblasted_MapWidget_C) == 0x000008, "Wrong alignment on USandblasted_MapWidget_C");
static_assert(sizeof(USandblasted_MapWidget_C) == 0x000270, "Wrong size on USandblasted_MapWidget_C");
static_assert(offsetof(USandblasted_MapWidget_C, AnimatedStaticOverlay_WithScanlines) == 0x000260, "Member 'USandblasted_MapWidget_C::AnimatedStaticOverlay_WithScanlines' has a wrong offset!");
static_assert(offsetof(USandblasted_MapWidget_C, CanvasPanel_0) == 0x000268, "Member 'USandblasted_MapWidget_C::CanvasPanel_0' has a wrong offset!");

}
