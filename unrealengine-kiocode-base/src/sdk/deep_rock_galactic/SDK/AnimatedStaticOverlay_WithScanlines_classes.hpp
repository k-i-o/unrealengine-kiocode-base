#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimatedStaticOverlay_WithScanlines

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AnimatedStaticOverlay_WithScanlines.AnimatedStaticOverlay_WithScanlines_C
// 0x0010 (0x0270 - 0x0260)
class UAnimatedStaticOverlay_WithScanlines_C final : public UUserWidget
{
public:
	class UImage*                                 BorderGradient;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Static;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimatedStaticOverlay_WithScanlines_C">();
	}
	static class UAnimatedStaticOverlay_WithScanlines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimatedStaticOverlay_WithScanlines_C>();
	}
};
static_assert(alignof(UAnimatedStaticOverlay_WithScanlines_C) == 0x000008, "Wrong alignment on UAnimatedStaticOverlay_WithScanlines_C");
static_assert(sizeof(UAnimatedStaticOverlay_WithScanlines_C) == 0x000270, "Wrong size on UAnimatedStaticOverlay_WithScanlines_C");
static_assert(offsetof(UAnimatedStaticOverlay_WithScanlines_C, BorderGradient) == 0x000260, "Member 'UAnimatedStaticOverlay_WithScanlines_C::BorderGradient' has a wrong offset!");
static_assert(offsetof(UAnimatedStaticOverlay_WithScanlines_C, Static) == 0x000268, "Member 'UAnimatedStaticOverlay_WithScanlines_C::Static' has a wrong offset!");

}
