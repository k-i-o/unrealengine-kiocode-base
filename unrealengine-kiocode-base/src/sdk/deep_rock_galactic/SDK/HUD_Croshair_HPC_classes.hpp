#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Croshair_HPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_Croshair_HPC.HUD_Croshair_HPC_C
// 0x00C0 (0x0320 - 0x0260)
class UHUD_Croshair_HPC_C final : public UCrosshairWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BoostFadeIn;                                       // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ready;                                             // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DotFade;                                           // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             BoostText;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_Bottom;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_In_B;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_In_L;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_In_R;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_In_T;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_Left;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_Right;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CH_Top;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot;                                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_1;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_3;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_4;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_5;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_out;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ReadyText;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         OpacityHigh;                                       // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E7[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       Character;                                         // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_Low;                                       // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E8[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAmmoDrivenWeapon*                      Weapon;                                            // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetData(class AItem* Item);
	void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool IsAtRest);
	void OnClipCountChanged(int32 Amount);
	void OnBoosterActived(bool IsActive);
	void ExecuteUbergraph_HUD_Croshair_HPC(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_Croshair_HPC_C">();
	}
	static class UHUD_Croshair_HPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_Croshair_HPC_C>();
	}
};
static_assert(alignof(UHUD_Croshair_HPC_C) == 0x000008, "Wrong alignment on UHUD_Croshair_HPC_C");
static_assert(sizeof(UHUD_Croshair_HPC_C) == 0x000320, "Wrong size on UHUD_Croshair_HPC_C");
static_assert(offsetof(UHUD_Croshair_HPC_C, UberGraphFrame) == 0x000260, "Member 'UHUD_Croshair_HPC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, BoostFadeIn) == 0x000268, "Member 'UHUD_Croshair_HPC_C::BoostFadeIn' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Ready) == 0x000270, "Member 'UHUD_Croshair_HPC_C::Ready' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, DotFade) == 0x000278, "Member 'UHUD_Croshair_HPC_C::DotFade' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, BoostText) == 0x000280, "Member 'UHUD_Croshair_HPC_C::BoostText' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, CH_Bottom) == 0x000288, "Member 'UHUD_Croshair_HPC_C::CH_Bottom' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, CH_In_B) == 0x000290, "Member 'UHUD_Croshair_HPC_C::CH_In_B' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, CH_In_L) == 0x000298, "Member 'UHUD_Croshair_HPC_C::CH_In_L' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, CH_In_R) == 0x0002A0, "Member 'UHUD_Croshair_HPC_C::CH_In_R' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, CH_In_T) == 0x0002A8, "Member 'UHUD_Croshair_HPC_C::CH_In_T' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, CH_Left) == 0x0002B0, "Member 'UHUD_Croshair_HPC_C::CH_Left' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, CH_Right) == 0x0002B8, "Member 'UHUD_Croshair_HPC_C::CH_Right' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, CH_Top) == 0x0002C0, "Member 'UHUD_Croshair_HPC_C::CH_Top' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Dot) == 0x0002C8, "Member 'UHUD_Croshair_HPC_C::Dot' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Dot_1) == 0x0002D0, "Member 'UHUD_Croshair_HPC_C::Dot_1' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Dot_3) == 0x0002D8, "Member 'UHUD_Croshair_HPC_C::Dot_3' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Dot_4) == 0x0002E0, "Member 'UHUD_Croshair_HPC_C::Dot_4' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Dot_5) == 0x0002E8, "Member 'UHUD_Croshair_HPC_C::Dot_5' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Dot_out) == 0x0002F0, "Member 'UHUD_Croshair_HPC_C::Dot_out' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, ReadyText) == 0x0002F8, "Member 'UHUD_Croshair_HPC_C::ReadyText' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, OpacityHigh) == 0x000300, "Member 'UHUD_Croshair_HPC_C::OpacityHigh' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Character) == 0x000308, "Member 'UHUD_Croshair_HPC_C::Character' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Opacity_Low) == 0x000310, "Member 'UHUD_Croshair_HPC_C::Opacity_Low' has a wrong offset!");
static_assert(offsetof(UHUD_Croshair_HPC_C, Weapon) == 0x000318, "Member 'UHUD_Croshair_HPC_C::Weapon' has a wrong offset!");

}
