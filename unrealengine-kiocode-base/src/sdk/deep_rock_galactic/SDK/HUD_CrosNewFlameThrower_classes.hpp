#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_CrosNewFlameThrower

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_CrosNewFlameThrower.HUD_CrosNewFlameThrower_C
// 0x0068 (0x02C8 - 0x0260)
class UHUD_CrosNewFlameThrower_C final : public UCrosshairWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DotFade;                                           // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CH_ArrowLeft;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_ArrowRight;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_LeftBottom;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_LeftTop;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_RightTop;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot;                                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RangeIndicator;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Opacity_High;                                      // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E89[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       Character;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_Low;                                       // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HUD_CrosNewFlameThrower(int32 EntryPoint);
	void ShowRangeMarker();
	void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void PreConstruct(bool IsDesignTime);
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool IsAtRest);
	void Construct();
	void SetData(class AItem* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_CrosNewFlameThrower_C">();
	}
	static class UHUD_CrosNewFlameThrower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_CrosNewFlameThrower_C>();
	}
};
static_assert(alignof(UHUD_CrosNewFlameThrower_C) == 0x000008, "Wrong alignment on UHUD_CrosNewFlameThrower_C");
static_assert(sizeof(UHUD_CrosNewFlameThrower_C) == 0x0002C8, "Wrong size on UHUD_CrosNewFlameThrower_C");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, UberGraphFrame) == 0x000260, "Member 'UHUD_CrosNewFlameThrower_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, DotFade) == 0x000268, "Member 'UHUD_CrosNewFlameThrower_C::DotFade' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, CH_ArrowLeft) == 0x000270, "Member 'UHUD_CrosNewFlameThrower_C::CH_ArrowLeft' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, CH_ArrowRight) == 0x000278, "Member 'UHUD_CrosNewFlameThrower_C::CH_ArrowRight' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, CH_LeftBottom) == 0x000280, "Member 'UHUD_CrosNewFlameThrower_C::CH_LeftBottom' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, CH_LeftTop) == 0x000288, "Member 'UHUD_CrosNewFlameThrower_C::CH_LeftTop' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, CH_RightTop) == 0x000290, "Member 'UHUD_CrosNewFlameThrower_C::CH_RightTop' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, Dot) == 0x000298, "Member 'UHUD_CrosNewFlameThrower_C::Dot' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, Image_1) == 0x0002A0, "Member 'UHUD_CrosNewFlameThrower_C::Image_1' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, RangeIndicator) == 0x0002A8, "Member 'UHUD_CrosNewFlameThrower_C::RangeIndicator' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, Opacity_High) == 0x0002B0, "Member 'UHUD_CrosNewFlameThrower_C::Opacity_High' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, Character) == 0x0002B8, "Member 'UHUD_CrosNewFlameThrower_C::Character' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNewFlameThrower_C, Opacity_Low) == 0x0002C0, "Member 'UHUD_CrosNewFlameThrower_C::Opacity_Low' has a wrong offset!");

}
