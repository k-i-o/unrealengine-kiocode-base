#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_LaserPointerScanProgress

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C
// 0x0010 (0x0270 - 0x0260)
class UHUD_LaserPointerScanProgress_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           ProgressBar_59;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetProgress(float Progress);
	void ExecuteUbergraph_HUD_LaserPointerScanProgress(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_LaserPointerScanProgress_C">();
	}
	static class UHUD_LaserPointerScanProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_LaserPointerScanProgress_C>();
	}
};
static_assert(alignof(UHUD_LaserPointerScanProgress_C) == 0x000008, "Wrong alignment on UHUD_LaserPointerScanProgress_C");
static_assert(sizeof(UHUD_LaserPointerScanProgress_C) == 0x000270, "Wrong size on UHUD_LaserPointerScanProgress_C");
static_assert(offsetof(UHUD_LaserPointerScanProgress_C, UberGraphFrame) == 0x000260, "Member 'UHUD_LaserPointerScanProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_LaserPointerScanProgress_C, ProgressBar_59) == 0x000268, "Member 'UHUD_LaserPointerScanProgress_C::ProgressBar_59' has a wrong offset!");

}

