#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_LoadingSpinner

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPW_LoadingSpinner.BPW_LoadingSpinner_C
// 0x0008 (0x0248 - 0x0240)
class UBPW_LoadingSpinner_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPW_LoadingSpinner_C">();
	}
	static class UBPW_LoadingSpinner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPW_LoadingSpinner_C>();
	}
};
static_assert(alignof(UBPW_LoadingSpinner_C) == 0x000008, "Wrong alignment on UBPW_LoadingSpinner_C");
static_assert(sizeof(UBPW_LoadingSpinner_C) == 0x000248, "Wrong size on UBPW_LoadingSpinner_C");
static_assert(offsetof(UBPW_LoadingSpinner_C, Image_0) == 0x000240, "Member 'UBPW_LoadingSpinner_C::Image_0' has a wrong offset!");

}
