#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_ManualCooling_Bar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "MenuColorAndTint_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_ManualCooling_Bar.ITM_ManualCooling_Bar_C
// 0x0188 (0x03E8 - 0x0260)
class UITM_ManualCooling_Bar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPing;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         Charges_HBar;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Root_Overlay;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              BrushSize;                                         // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Spacing;                                           // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2A[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Filled;                                            // 0x0290(0x0088)(Edit, BlueprintVisible)
	struct FMenuColorAndTint                      FilledColor;                                       // 0x0318(0x0014)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2B[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Spent;                                             // 0x0330(0x0088)(Edit, BlueprintVisible)
	struct FMenuColorAndTint                      SpentColor;                                        // 0x03B8(0x0014)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PingProgress;                                      // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class AAmmoDrivenWeapon*                      Item;                                              // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanAnimate;                                        // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Initialize();
	void SetItem(class AAmmoDrivenWeapon* InItem);
	void SetPingProgress(float Value);
	void OnAmmoChanged();
	void SetCharges(int32 InMax, int32 InCount, bool InAnimate);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_ManualCooling_Bar(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_ManualCooling_Bar_C">();
	}
	static class UITM_ManualCooling_Bar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_ManualCooling_Bar_C>();
	}
};
static_assert(alignof(UITM_ManualCooling_Bar_C) == 0x000008, "Wrong alignment on UITM_ManualCooling_Bar_C");
static_assert(sizeof(UITM_ManualCooling_Bar_C) == 0x0003E8, "Wrong size on UITM_ManualCooling_Bar_C");
static_assert(offsetof(UITM_ManualCooling_Bar_C, UberGraphFrame) == 0x000260, "Member 'UITM_ManualCooling_Bar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, AnimPing) == 0x000268, "Member 'UITM_ManualCooling_Bar_C::AnimPing' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, Charges_HBar) == 0x000270, "Member 'UITM_ManualCooling_Bar_C::Charges_HBar' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, Root_Overlay) == 0x000278, "Member 'UITM_ManualCooling_Bar_C::Root_Overlay' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, BrushSize) == 0x000280, "Member 'UITM_ManualCooling_Bar_C::BrushSize' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, Spacing) == 0x000288, "Member 'UITM_ManualCooling_Bar_C::Spacing' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, Filled) == 0x000290, "Member 'UITM_ManualCooling_Bar_C::Filled' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, FilledColor) == 0x000318, "Member 'UITM_ManualCooling_Bar_C::FilledColor' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, Spent) == 0x000330, "Member 'UITM_ManualCooling_Bar_C::Spent' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, SpentColor) == 0x0003B8, "Member 'UITM_ManualCooling_Bar_C::SpentColor' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, Max) == 0x0003CC, "Member 'UITM_ManualCooling_Bar_C::Max' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, Count) == 0x0003D0, "Member 'UITM_ManualCooling_Bar_C::Count' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, PingProgress) == 0x0003D4, "Member 'UITM_ManualCooling_Bar_C::PingProgress' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, Item) == 0x0003D8, "Member 'UITM_ManualCooling_Bar_C::Item' has a wrong offset!");
static_assert(offsetof(UITM_ManualCooling_Bar_C, CanAnimate) == 0x0003E0, "Member 'UITM_ManualCooling_Bar_C::CanAnimate' has a wrong offset!");

}

