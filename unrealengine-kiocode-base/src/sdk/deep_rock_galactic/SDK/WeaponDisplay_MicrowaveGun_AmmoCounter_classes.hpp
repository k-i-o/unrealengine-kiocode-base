#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponDisplay_MicrowaveGun_AmmoCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WeaponDisplay_Base_AmmoCount_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponDisplay_MicrowaveGun_AmmoCounter.WeaponDisplay_MicrowaveGun_AmmoCounter_C
// 0x0070 (0x02F0 - 0x0280)
class UWeaponDisplay_MicrowaveGun_AmmoCounter_C final : public UWeaponDisplay_Base_AmmoCount_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WeaponDisplay_MicrowaveGun_AmmoCounter_C; // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Firing;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AmmoCritical;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             DATA_AmmoCount;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_88;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1L;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1U;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2L;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2U;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line3L;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line3U;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line4L;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line4U;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WarningOverlay;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UpdateAmount(int32 Value);
	void SetTotalCount(int32 Value);
	void Construct();
	void Max_Ammo_Changed(int32 Amount);
	void Total_Ammo_left_changed(int32 Amount);
	void SetClipCount(int32 Value);
	void ExecuteUbergraph_WeaponDisplay_MicrowaveGun_AmmoCounter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponDisplay_MicrowaveGun_AmmoCounter_C">();
	}
	static class UWeaponDisplay_MicrowaveGun_AmmoCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponDisplay_MicrowaveGun_AmmoCounter_C>();
	}
};
static_assert(alignof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C) == 0x000008, "Wrong alignment on UWeaponDisplay_MicrowaveGun_AmmoCounter_C");
static_assert(sizeof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C) == 0x0002F0, "Wrong size on UWeaponDisplay_MicrowaveGun_AmmoCounter_C");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, UberGraphFrame_WeaponDisplay_MicrowaveGun_AmmoCounter_C) == 0x000280, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::UberGraphFrame_WeaponDisplay_MicrowaveGun_AmmoCounter_C' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Firing) == 0x000288, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Firing' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, AmmoCritical) == 0x000290, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::AmmoCritical' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, DATA_AmmoCount) == 0x000298, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::DATA_AmmoCount' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Image_88) == 0x0002A0, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Image_88' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Line1L) == 0x0002A8, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Line1L' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Line1U) == 0x0002B0, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Line1U' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Line2L) == 0x0002B8, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Line2L' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Line2U) == 0x0002C0, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Line2U' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Line3L) == 0x0002C8, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Line3L' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Line3U) == 0x0002D0, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Line3U' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Line4L) == 0x0002D8, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Line4L' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, Line4U) == 0x0002E0, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::Line4U' has a wrong offset!");
static_assert(offsetof(UWeaponDisplay_MicrowaveGun_AmmoCounter_C, WarningOverlay) == 0x0002E8, "Member 'UWeaponDisplay_MicrowaveGun_AmmoCounter_C::WarningOverlay' has a wrong offset!");

}

