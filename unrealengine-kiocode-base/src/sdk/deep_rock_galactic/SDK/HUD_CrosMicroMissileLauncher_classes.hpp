#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_CrosMicroMissileLauncher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C
// 0x00E8 (0x0348 - 0x0260)
class UHUD_CrosMicroMissileLauncher_C final : public UCrosshairWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DotFade;                                           // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow_Bottom;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_Left;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_Right;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_Top;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_HL;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_HR;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_LeftBottom;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_LeftTop;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_RightBottom;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_RightTop;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_VB;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_VT;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M1;                                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M2;                                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M3;                                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M4;                                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M5;                                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M6;                                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M7;                                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M8;                                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M9;                                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Opacity_High;                                      // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3570[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       Character;                                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_Low;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3571[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           BuckShotCheckTimer;                                // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         MissileCounters;                                   // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void SetData(class AItem* Item);
	void Construct();
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool IsAtRest);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void StartCharging();
	void EndCharge();
	void ToggleBuckShotCrosshair(float Spread);
	void CheckBuckShot();
	void ExecuteUbergraph_HUD_CrosMicroMissileLauncher(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_CrosMicroMissileLauncher_C">();
	}
	static class UHUD_CrosMicroMissileLauncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_CrosMicroMissileLauncher_C>();
	}
};
static_assert(alignof(UHUD_CrosMicroMissileLauncher_C) == 0x000008, "Wrong alignment on UHUD_CrosMicroMissileLauncher_C");
static_assert(sizeof(UHUD_CrosMicroMissileLauncher_C) == 0x000348, "Wrong size on UHUD_CrosMicroMissileLauncher_C");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, UberGraphFrame) == 0x000260, "Member 'UHUD_CrosMicroMissileLauncher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, DotFade) == 0x000268, "Member 'UHUD_CrosMicroMissileLauncher_C::DotFade' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, Arrow_Bottom) == 0x000270, "Member 'UHUD_CrosMicroMissileLauncher_C::Arrow_Bottom' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, Arrow_Left) == 0x000278, "Member 'UHUD_CrosMicroMissileLauncher_C::Arrow_Left' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, Arrow_Right) == 0x000280, "Member 'UHUD_CrosMicroMissileLauncher_C::Arrow_Right' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, Arrow_Top) == 0x000288, "Member 'UHUD_CrosMicroMissileLauncher_C::Arrow_Top' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, CH_HL) == 0x000290, "Member 'UHUD_CrosMicroMissileLauncher_C::CH_HL' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, CH_HR) == 0x000298, "Member 'UHUD_CrosMicroMissileLauncher_C::CH_HR' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, CH_LeftBottom) == 0x0002A0, "Member 'UHUD_CrosMicroMissileLauncher_C::CH_LeftBottom' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, CH_LeftTop) == 0x0002A8, "Member 'UHUD_CrosMicroMissileLauncher_C::CH_LeftTop' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, CH_RightBottom) == 0x0002B0, "Member 'UHUD_CrosMicroMissileLauncher_C::CH_RightBottom' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, CH_RightTop) == 0x0002B8, "Member 'UHUD_CrosMicroMissileLauncher_C::CH_RightTop' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, CH_VB) == 0x0002C0, "Member 'UHUD_CrosMicroMissileLauncher_C::CH_VB' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, CH_VT) == 0x0002C8, "Member 'UHUD_CrosMicroMissileLauncher_C::CH_VT' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M1) == 0x0002D0, "Member 'UHUD_CrosMicroMissileLauncher_C::M1' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M2) == 0x0002D8, "Member 'UHUD_CrosMicroMissileLauncher_C::M2' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M3) == 0x0002E0, "Member 'UHUD_CrosMicroMissileLauncher_C::M3' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M4) == 0x0002E8, "Member 'UHUD_CrosMicroMissileLauncher_C::M4' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M5) == 0x0002F0, "Member 'UHUD_CrosMicroMissileLauncher_C::M5' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M6) == 0x0002F8, "Member 'UHUD_CrosMicroMissileLauncher_C::M6' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M7) == 0x000300, "Member 'UHUD_CrosMicroMissileLauncher_C::M7' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M8) == 0x000308, "Member 'UHUD_CrosMicroMissileLauncher_C::M8' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, M9) == 0x000310, "Member 'UHUD_CrosMicroMissileLauncher_C::M9' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, Opacity_High) == 0x000318, "Member 'UHUD_CrosMicroMissileLauncher_C::Opacity_High' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, Character) == 0x000320, "Member 'UHUD_CrosMicroMissileLauncher_C::Character' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, Opacity_Low) == 0x000328, "Member 'UHUD_CrosMicroMissileLauncher_C::Opacity_Low' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, BuckShotCheckTimer) == 0x000330, "Member 'UHUD_CrosMicroMissileLauncher_C::BuckShotCheckTimer' has a wrong offset!");
static_assert(offsetof(UHUD_CrosMicroMissileLauncher_C, MissileCounters) == 0x000338, "Member 'UHUD_CrosMicroMissileLauncher_C::MissileCounters' has a wrong offset!");

}

