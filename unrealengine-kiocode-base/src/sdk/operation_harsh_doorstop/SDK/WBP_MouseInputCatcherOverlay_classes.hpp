#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MouseInputCatcherOverlay

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MouseInputCatcherOverlay.WBP_MouseInputCatcherOverlay_C
// 0x0008 (0x0238 - 0x0230)
class UWBP_MouseInputCatcherOverlay_C final : public UUserWidget
{
public:
	class UWBP_OptionsMenuItem_InputKeySelector_C* TargetIKS;                                         // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SelectKey(const struct FKey& Key);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MouseInputCatcherOverlay_C">();
	}
	static class UWBP_MouseInputCatcherOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MouseInputCatcherOverlay_C>();
	}
};
static_assert(alignof(UWBP_MouseInputCatcherOverlay_C) == 0x000008, "Wrong alignment on UWBP_MouseInputCatcherOverlay_C");
static_assert(sizeof(UWBP_MouseInputCatcherOverlay_C) == 0x000238, "Wrong size on UWBP_MouseInputCatcherOverlay_C");
static_assert(offsetof(UWBP_MouseInputCatcherOverlay_C, TargetIKS) == 0x000230, "Member 'UWBP_MouseInputCatcherOverlay_C::TargetIKS' has a wrong offset!");

}
