#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_CrosNew_EngSMG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_CrosNew_EngSMG.HUD_CrosNew_EngSMG_C
// 0x0050 (0x02B0 - 0x0260)
class UHUD_CrosNew_EngSMG_C final : public UCrosshairWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DotFade;                                           // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CH_Bottom;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_Left;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_Right;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_Top;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         OpacityHigh;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5415[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       Character;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_Low;                                       // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MagicSpreadMultiplier;                             // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetData(class AItem* Item);
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool IsAtRest);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_HUD_CrosNew_EngSMG(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_CrosNew_EngSMG_C">();
	}
	static class UHUD_CrosNew_EngSMG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_CrosNew_EngSMG_C>();
	}
};
static_assert(alignof(UHUD_CrosNew_EngSMG_C) == 0x000008, "Wrong alignment on UHUD_CrosNew_EngSMG_C");
static_assert(sizeof(UHUD_CrosNew_EngSMG_C) == 0x0002B0, "Wrong size on UHUD_CrosNew_EngSMG_C");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, UberGraphFrame) == 0x000260, "Member 'UHUD_CrosNew_EngSMG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, DotFade) == 0x000268, "Member 'UHUD_CrosNew_EngSMG_C::DotFade' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, CH_Bottom) == 0x000270, "Member 'UHUD_CrosNew_EngSMG_C::CH_Bottom' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, CH_Left) == 0x000278, "Member 'UHUD_CrosNew_EngSMG_C::CH_Left' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, CH_Right) == 0x000280, "Member 'UHUD_CrosNew_EngSMG_C::CH_Right' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, CH_Top) == 0x000288, "Member 'UHUD_CrosNew_EngSMG_C::CH_Top' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, Dot) == 0x000290, "Member 'UHUD_CrosNew_EngSMG_C::Dot' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, OpacityHigh) == 0x000298, "Member 'UHUD_CrosNew_EngSMG_C::OpacityHigh' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, Character) == 0x0002A0, "Member 'UHUD_CrosNew_EngSMG_C::Character' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, Opacity_Low) == 0x0002A8, "Member 'UHUD_CrosNew_EngSMG_C::Opacity_Low' has a wrong offset!");
static_assert(offsetof(UHUD_CrosNew_EngSMG_C, MagicSpreadMultiplier) == 0x0002AC, "Member 'UHUD_CrosNew_EngSMG_C::MagicSpreadMultiplier' has a wrong offset!");

}
