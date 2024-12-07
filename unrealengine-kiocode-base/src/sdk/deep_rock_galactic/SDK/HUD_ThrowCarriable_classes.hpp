#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_ThrowCarriable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_ThrowCarriable.HUD_ThrowCarriable_C
// 0x0028 (0x02A8 - 0x0280)
class UHUD_ThrowCarriable_C final : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           HoldingProgressL;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           HoldingProgressR;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       Invalidation;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HUD_ThrowCarriable(int32 EntryPoint);
	void OnThrowCarriableProgress_Event(float Progress, float TimeToCancel, bool IsDone);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_ThrowCarriable_C">();
	}
	static class UHUD_ThrowCarriable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_ThrowCarriable_C>();
	}
};
static_assert(alignof(UHUD_ThrowCarriable_C) == 0x000008, "Wrong alignment on UHUD_ThrowCarriable_C");
static_assert(sizeof(UHUD_ThrowCarriable_C) == 0x0002A8, "Wrong size on UHUD_ThrowCarriable_C");
static_assert(offsetof(UHUD_ThrowCarriable_C, UberGraphFrame) == 0x000280, "Member 'UHUD_ThrowCarriable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_ThrowCarriable_C, HoldingProgressL) == 0x000288, "Member 'UHUD_ThrowCarriable_C::HoldingProgressL' has a wrong offset!");
static_assert(offsetof(UHUD_ThrowCarriable_C, HoldingProgressR) == 0x000290, "Member 'UHUD_ThrowCarriable_C::HoldingProgressR' has a wrong offset!");
static_assert(offsetof(UHUD_ThrowCarriable_C, HorizontalBox_0) == 0x000298, "Member 'UHUD_ThrowCarriable_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UHUD_ThrowCarriable_C, Invalidation) == 0x0002A0, "Member 'UHUD_ThrowCarriable_C::Invalidation' has a wrong offset!");

}

