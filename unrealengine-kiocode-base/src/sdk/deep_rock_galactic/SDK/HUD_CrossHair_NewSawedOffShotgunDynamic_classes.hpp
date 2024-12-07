#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_CrossHair_NewSawedOffShotgunDynamic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C
// 0x0070 (0x02D0 - 0x0260)
class UHUD_CrossHair_NewSawedOffShotgunDynamic_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 LeftBracket;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             LeftCH;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightBracket;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             RightCH;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ShapedShellsCrosshair;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shell1A;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shell1B;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shell2A;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shell2B;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Opacity_High;                                      // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_530C[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       Character;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_Low;                                       // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_Very_Low;                                  // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccurate;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Construct();
	void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool IsAtRest);
	void OnClipCountChanged(int32 Amount);
	void SetData(class AAmmoDrivenWeapon* Weapon);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_CrossHair_NewSawedOffShotgunDynamic_C">();
	}
	static class UHUD_CrossHair_NewSawedOffShotgunDynamic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_CrossHair_NewSawedOffShotgunDynamic_C>();
	}
};
static_assert(alignof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C) == 0x000008, "Wrong alignment on UHUD_CrossHair_NewSawedOffShotgunDynamic_C");
static_assert(sizeof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C) == 0x0002D0, "Wrong size on UHUD_CrossHair_NewSawedOffShotgunDynamic_C");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, UberGraphFrame) == 0x000260, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, LeftBracket) == 0x000268, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::LeftBracket' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, LeftCH) == 0x000270, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::LeftCH' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, RightBracket) == 0x000278, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::RightBracket' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, RightCH) == 0x000280, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::RightCH' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, ShapedShellsCrosshair) == 0x000288, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::ShapedShellsCrosshair' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, Shell1A) == 0x000290, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Shell1A' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, Shell1B) == 0x000298, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Shell1B' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, Shell2A) == 0x0002A0, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Shell2A' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, Shell2B) == 0x0002A8, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Shell2B' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, Opacity_High) == 0x0002B0, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Opacity_High' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, Character) == 0x0002B8, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Character' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, Opacity_Low) == 0x0002C0, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Opacity_Low' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, Opacity_Very_Low) == 0x0002C4, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Opacity_Very_Low' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_NewSawedOffShotgunDynamic_C, IsAccurate) == 0x0002C8, "Member 'UHUD_CrossHair_NewSawedOffShotgunDynamic_C::IsAccurate' has a wrong offset!");

}

