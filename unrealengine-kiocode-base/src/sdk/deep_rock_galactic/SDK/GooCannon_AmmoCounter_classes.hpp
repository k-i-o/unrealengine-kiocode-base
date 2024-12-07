#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GooCannon_AmmoCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WeaponDisplay_Base_AmmoCount_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GooCannon_AmmoCounter.GooCannon_AmmoCounter_C
// 0x0040 (0x02C0 - 0x0280)
class UGooCannon_AmmoCounter_C final : public UWeaponDisplay_Base_AmmoCount_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GooCannon_AmmoCounter_C;            // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AmmoCritical;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClipCount;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TotalCount;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WarningOverlay;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ActualClipCount;                                   // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimatedClipCount;                                 // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CountHandle;                                       // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateClipCount();
	void UpdateAmmoCritical();
	void SetNumber(int32 Value, class UTextBlock* Label, int32* OutValue);
	void SetTotalCount(int32 Value);
	void Construct();
	void SetClipCount(int32 Value);
	void ExecuteUbergraph_GooCannon_AmmoCounter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooCannon_AmmoCounter_C">();
	}
	static class UGooCannon_AmmoCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGooCannon_AmmoCounter_C>();
	}
};
static_assert(alignof(UGooCannon_AmmoCounter_C) == 0x000008, "Wrong alignment on UGooCannon_AmmoCounter_C");
static_assert(sizeof(UGooCannon_AmmoCounter_C) == 0x0002C0, "Wrong size on UGooCannon_AmmoCounter_C");
static_assert(offsetof(UGooCannon_AmmoCounter_C, UberGraphFrame_GooCannon_AmmoCounter_C) == 0x000280, "Member 'UGooCannon_AmmoCounter_C::UberGraphFrame_GooCannon_AmmoCounter_C' has a wrong offset!");
static_assert(offsetof(UGooCannon_AmmoCounter_C, AmmoCritical) == 0x000288, "Member 'UGooCannon_AmmoCounter_C::AmmoCritical' has a wrong offset!");
static_assert(offsetof(UGooCannon_AmmoCounter_C, BG) == 0x000290, "Member 'UGooCannon_AmmoCounter_C::BG' has a wrong offset!");
static_assert(offsetof(UGooCannon_AmmoCounter_C, ClipCount) == 0x000298, "Member 'UGooCannon_AmmoCounter_C::ClipCount' has a wrong offset!");
static_assert(offsetof(UGooCannon_AmmoCounter_C, TotalCount) == 0x0002A0, "Member 'UGooCannon_AmmoCounter_C::TotalCount' has a wrong offset!");
static_assert(offsetof(UGooCannon_AmmoCounter_C, WarningOverlay) == 0x0002A8, "Member 'UGooCannon_AmmoCounter_C::WarningOverlay' has a wrong offset!");
static_assert(offsetof(UGooCannon_AmmoCounter_C, ActualClipCount) == 0x0002B0, "Member 'UGooCannon_AmmoCounter_C::ActualClipCount' has a wrong offset!");
static_assert(offsetof(UGooCannon_AmmoCounter_C, AnimatedClipCount) == 0x0002B4, "Member 'UGooCannon_AmmoCounter_C::AnimatedClipCount' has a wrong offset!");
static_assert(offsetof(UGooCannon_AmmoCounter_C, CountHandle) == 0x0002B8, "Member 'UGooCannon_AmmoCounter_C::CountHandle' has a wrong offset!");

}

