#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PatchNotes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PatchNotes.UI_PatchNotes_C
// 0x00B8 (0x0318 - 0x0260)
class UUI_PatchNotes_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_SmallWindowWithHeader_Redesign_C* Basic_Menu_SmallWindowWithHeader;                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ScrollBarBox_C*                  Basic_ScrollBarBox;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         PatchTextBlock;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ScrollArrow_C*                   ScrollArrow_Left;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ScrollArrow_C*                   ScrollArrow_Right;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PatchNoteIndex;                                    // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F6[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           PatchNoteHeaders_Steam;                            // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           PatchNotes_Steam;                                  // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           PatchNoteHeaders_Xbox;                             // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           PatchNotes_Xbox;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           Headers;                                           // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           Notes;                                             // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           PatchNoteHeaders_Sony;                             // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           PatchNotes_Sony;                                   // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UI_PatchNotes(int32 EntryPoint);
	void BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void UpdatePatchNotes();
	TArray<class FText> SelectByPlatform(TArray<class FText>& Default, TArray<class FText>& Xbox, TArray<class FText>& Sony);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PatchNotes_C">();
	}
	static class UUI_PatchNotes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PatchNotes_C>();
	}
};
static_assert(alignof(UUI_PatchNotes_C) == 0x000008, "Wrong alignment on UUI_PatchNotes_C");
static_assert(sizeof(UUI_PatchNotes_C) == 0x000318, "Wrong size on UUI_PatchNotes_C");
static_assert(offsetof(UUI_PatchNotes_C, UberGraphFrame) == 0x000260, "Member 'UUI_PatchNotes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, Basic_Menu_SmallWindowWithHeader) == 0x000268, "Member 'UUI_PatchNotes_C::Basic_Menu_SmallWindowWithHeader' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, Basic_ScrollBarBox) == 0x000270, "Member 'UUI_PatchNotes_C::Basic_ScrollBarBox' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, PatchTextBlock) == 0x000278, "Member 'UUI_PatchNotes_C::PatchTextBlock' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, ScrollArrow_Left) == 0x000280, "Member 'UUI_PatchNotes_C::ScrollArrow_Left' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, ScrollArrow_Right) == 0x000288, "Member 'UUI_PatchNotes_C::ScrollArrow_Right' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, PatchNoteIndex) == 0x000290, "Member 'UUI_PatchNotes_C::PatchNoteIndex' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, PatchNoteHeaders_Steam) == 0x000298, "Member 'UUI_PatchNotes_C::PatchNoteHeaders_Steam' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, PatchNotes_Steam) == 0x0002A8, "Member 'UUI_PatchNotes_C::PatchNotes_Steam' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, PatchNoteHeaders_Xbox) == 0x0002B8, "Member 'UUI_PatchNotes_C::PatchNoteHeaders_Xbox' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, PatchNotes_Xbox) == 0x0002C8, "Member 'UUI_PatchNotes_C::PatchNotes_Xbox' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, Headers) == 0x0002D8, "Member 'UUI_PatchNotes_C::Headers' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, Notes) == 0x0002E8, "Member 'UUI_PatchNotes_C::Notes' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, PatchNoteHeaders_Sony) == 0x0002F8, "Member 'UUI_PatchNotes_C::PatchNoteHeaders_Sony' has a wrong offset!");
static_assert(offsetof(UUI_PatchNotes_C, PatchNotes_Sony) == 0x000308, "Member 'UUI_PatchNotes_C::PatchNotes_Sony' has a wrong offset!");

}

