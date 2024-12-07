#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DragRotateCharacterShowroom

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C
// 0x0018 (0x0278 - 0x0260)
class UITM_DragRotateCharacterShowroom_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          GrabMouse;                                         // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ITM_DragRotateCharacterShowroom(int32 EntryPoint);
	void OnShowCharacterSelectorRotate(float Pitch, float Yaw);
	void Construct();
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_DragRotateCharacterShowroom_C">();
	}
	static class UITM_DragRotateCharacterShowroom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_DragRotateCharacterShowroom_C>();
	}
};
static_assert(alignof(UITM_DragRotateCharacterShowroom_C) == 0x000008, "Wrong alignment on UITM_DragRotateCharacterShowroom_C");
static_assert(sizeof(UITM_DragRotateCharacterShowroom_C) == 0x000278, "Wrong size on UITM_DragRotateCharacterShowroom_C");
static_assert(offsetof(UITM_DragRotateCharacterShowroom_C, UberGraphFrame) == 0x000260, "Member 'UITM_DragRotateCharacterShowroom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_DragRotateCharacterShowroom_C, Image_0) == 0x000268, "Member 'UITM_DragRotateCharacterShowroom_C::Image_0' has a wrong offset!");
static_assert(offsetof(UITM_DragRotateCharacterShowroom_C, GrabMouse) == 0x000270, "Member 'UITM_DragRotateCharacterShowroom_C::GrabMouse' has a wrong offset!");

}

