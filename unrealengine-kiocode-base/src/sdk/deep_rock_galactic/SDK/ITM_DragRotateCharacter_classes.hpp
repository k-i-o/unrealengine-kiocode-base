#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DragRotateCharacter

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_DragRotateCharacter.ITM_DragRotateCharacter_C
// 0x0018 (0x0278 - 0x0260)
class UITM_DragRotateCharacter_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          GrabMouse;                                         // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3812[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterSelectionSwitcher_C*          Switcher;                                          // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_DragRotateCharacter_C">();
	}
	static class UITM_DragRotateCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_DragRotateCharacter_C>();
	}
};
static_assert(alignof(UITM_DragRotateCharacter_C) == 0x000008, "Wrong alignment on UITM_DragRotateCharacter_C");
static_assert(sizeof(UITM_DragRotateCharacter_C) == 0x000278, "Wrong size on UITM_DragRotateCharacter_C");
static_assert(offsetof(UITM_DragRotateCharacter_C, Image_0) == 0x000260, "Member 'UITM_DragRotateCharacter_C::Image_0' has a wrong offset!");
static_assert(offsetof(UITM_DragRotateCharacter_C, GrabMouse) == 0x000268, "Member 'UITM_DragRotateCharacter_C::GrabMouse' has a wrong offset!");
static_assert(offsetof(UITM_DragRotateCharacter_C, Switcher) == 0x000270, "Member 'UITM_DragRotateCharacter_C::Switcher' has a wrong offset!");

}
