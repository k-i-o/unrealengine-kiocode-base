#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ToggleSleevelessIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C
// 0x0068 (0x02C8 - 0x0260)
class UUI_ToggleSleevelessIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimNotAvailable;                                  // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHover;                                         // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimActivate;                                      // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Background;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                FrameBorder;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      NoVariantAvailable;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SelectionBorder;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ShuffleOverlay;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sizer;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      WithoutSleeveIcon_1;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      WithSleeveIcon;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Dimension;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSleevesDesired;                                  // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSleevelessAvailable;                             // 0x02C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void PreConstruct(bool IsDesignTime);
	void PlayActivateAnimation();
	void SetHovered(bool Param_IsHovered);
	void OnSleevelessDesireChanged(bool DesireSleeveless);
	void OnSleevelessAvailabilityChanged(bool IsAvailable);
	void ExecuteUbergraph_UI_ToggleSleevelessIcon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ToggleSleevelessIcon_C">();
	}
	static class UUI_ToggleSleevelessIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ToggleSleevelessIcon_C>();
	}
};
static_assert(alignof(UUI_ToggleSleevelessIcon_C) == 0x000008, "Wrong alignment on UUI_ToggleSleevelessIcon_C");
static_assert(sizeof(UUI_ToggleSleevelessIcon_C) == 0x0002C8, "Wrong size on UUI_ToggleSleevelessIcon_C");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, UberGraphFrame) == 0x000260, "Member 'UUI_ToggleSleevelessIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, AnimNotAvailable) == 0x000268, "Member 'UUI_ToggleSleevelessIcon_C::AnimNotAvailable' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, AnimHover) == 0x000270, "Member 'UUI_ToggleSleevelessIcon_C::AnimHover' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, AnimActivate) == 0x000278, "Member 'UUI_ToggleSleevelessIcon_C::AnimActivate' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, Background) == 0x000280, "Member 'UUI_ToggleSleevelessIcon_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, FrameBorder) == 0x000288, "Member 'UUI_ToggleSleevelessIcon_C::FrameBorder' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, NoVariantAvailable) == 0x000290, "Member 'UUI_ToggleSleevelessIcon_C::NoVariantAvailable' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, SelectionBorder) == 0x000298, "Member 'UUI_ToggleSleevelessIcon_C::SelectionBorder' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, ShuffleOverlay) == 0x0002A0, "Member 'UUI_ToggleSleevelessIcon_C::ShuffleOverlay' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, Sizer) == 0x0002A8, "Member 'UUI_ToggleSleevelessIcon_C::Sizer' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, WithoutSleeveIcon_1) == 0x0002B0, "Member 'UUI_ToggleSleevelessIcon_C::WithoutSleeveIcon_1' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, WithSleeveIcon) == 0x0002B8, "Member 'UUI_ToggleSleevelessIcon_C::WithSleeveIcon' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, Dimension) == 0x0002C0, "Member 'UUI_ToggleSleevelessIcon_C::Dimension' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, IsSleevesDesired) == 0x0002C4, "Member 'UUI_ToggleSleevelessIcon_C::IsSleevesDesired' has a wrong offset!");
static_assert(offsetof(UUI_ToggleSleevelessIcon_C, IsSleevelessAvailable) == 0x0002C5, "Member 'UUI_ToggleSleevelessIcon_C::IsSleevelessAvailable' has a wrong offset!");

}

