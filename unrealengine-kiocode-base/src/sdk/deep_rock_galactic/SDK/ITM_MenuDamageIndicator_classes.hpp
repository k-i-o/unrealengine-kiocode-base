#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MenuDamageIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C
// 0x0020 (0x0280 - 0x0260)
class UITM_MenuDamageIndicator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DamageTaken;                                       // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Damage;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            Menu;                                              // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITM_MenuDamageIndicator(int32 EntryPoint);
	void SetMenu(class UUserWidget* EscapeMenu);
	void OnAnimFinished();
	void OnHit(float Damage, const struct FDamageData& DamageData, bool AnyHealthLost);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MenuDamageIndicator_C">();
	}
	static class UITM_MenuDamageIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MenuDamageIndicator_C>();
	}
};
static_assert(alignof(UITM_MenuDamageIndicator_C) == 0x000008, "Wrong alignment on UITM_MenuDamageIndicator_C");
static_assert(sizeof(UITM_MenuDamageIndicator_C) == 0x000280, "Wrong size on UITM_MenuDamageIndicator_C");
static_assert(offsetof(UITM_MenuDamageIndicator_C, UberGraphFrame) == 0x000260, "Member 'UITM_MenuDamageIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_MenuDamageIndicator_C, DamageTaken) == 0x000268, "Member 'UITM_MenuDamageIndicator_C::DamageTaken' has a wrong offset!");
static_assert(offsetof(UITM_MenuDamageIndicator_C, Image_Damage) == 0x000270, "Member 'UITM_MenuDamageIndicator_C::Image_Damage' has a wrong offset!");
static_assert(offsetof(UITM_MenuDamageIndicator_C, Menu) == 0x000278, "Member 'UITM_MenuDamageIndicator_C::Menu' has a wrong offset!");

}
