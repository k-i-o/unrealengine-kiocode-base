#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LIB_ToolTips

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_ToolTips_C final : public UBlueprintFunctionLibrary
{
public:
	static void CreateBasicToolTip(class UWidget* Target, const class FText& Text, const struct FVector2D& Position, const struct FVector2D& Alignment, class UObject* __WorldContext, class UBasic_ToolTip_C** ToolTipWidget);
	static void CreateBiomeToolTip(class UWidget* Target, const struct FVector2D& Position, const struct FVector2D& Alignment, class UResourceData* ResourceA, class UResourceData* ResourceB, class UObject* __WorldContext, class UBiome_ToolTip_C** ToolTipWidget);
	static void CreateToolTip(class UWidget* ToolTipTarget, class UClass* ToolTipClass, const struct FVector2D& Offset, class UObject* __WorldContext, class UUserWidget** OutToolTip);
	static void CreateInputToolTip(class UWidget* Target, const class FText& Text, const struct FVector2D& Position, const struct FVector2D& Alignment, const struct FKey& Key_Default, const struct FKey& Key_Console_Override, class UObject* __WorldContext, class UBasic_ToolTip_C** ToolTipWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LIB_ToolTips_C">();
	}
	static class ULIB_ToolTips_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULIB_ToolTips_C>();
	}
};
static_assert(alignof(ULIB_ToolTips_C) == 0x000008, "Wrong alignment on ULIB_ToolTips_C");
static_assert(sizeof(ULIB_ToolTips_C) == 0x000028, "Wrong size on ULIB_ToolTips_C");

}
