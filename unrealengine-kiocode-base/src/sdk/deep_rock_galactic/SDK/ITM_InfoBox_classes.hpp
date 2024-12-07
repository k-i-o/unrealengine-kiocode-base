#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_InfoBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ENU_TextCase_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_InfoBox.ITM_InfoBox_C
// 0x0068 (0x02C8 - 0x0260)
class UITM_InfoBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ItemDesc_Hover;                                    // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ItemDesc_Click;                                    // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBlurBackground_C*                      BlurBackground;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BTN_Info;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_GearDesc;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InfoOverlay;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemDescHolder;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBOX_ButtonGFX;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02A8(0x0018)(Edit, BlueprintVisible)
	ENU_TextCase                                  Text_Case;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SetOpen(bool IsOpen);
	void SetText(const class FText& InText, ENU_TextCase InText_Case);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_InfoBox(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_InfoBox_C">();
	}
	static class UITM_InfoBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_InfoBox_C>();
	}
};
static_assert(alignof(UITM_InfoBox_C) == 0x000008, "Wrong alignment on UITM_InfoBox_C");
static_assert(sizeof(UITM_InfoBox_C) == 0x0002C8, "Wrong size on UITM_InfoBox_C");
static_assert(offsetof(UITM_InfoBox_C, UberGraphFrame) == 0x000260, "Member 'UITM_InfoBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, ItemDesc_Hover) == 0x000268, "Member 'UITM_InfoBox_C::ItemDesc_Hover' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, ItemDesc_Click) == 0x000270, "Member 'UITM_InfoBox_C::ItemDesc_Click' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, BlurBackground) == 0x000278, "Member 'UITM_InfoBox_C::BlurBackground' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, BTN_Info) == 0x000280, "Member 'UITM_InfoBox_C::BTN_Info' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, DATA_GearDesc) == 0x000288, "Member 'UITM_InfoBox_C::DATA_GearDesc' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, InfoOverlay) == 0x000290, "Member 'UITM_InfoBox_C::InfoOverlay' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, ItemDescHolder) == 0x000298, "Member 'UITM_InfoBox_C::ItemDescHolder' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, SBOX_ButtonGFX) == 0x0002A0, "Member 'UITM_InfoBox_C::SBOX_ButtonGFX' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, Text) == 0x0002A8, "Member 'UITM_InfoBox_C::Text' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, Text_Case) == 0x0002C0, "Member 'UITM_InfoBox_C::Text_Case' has a wrong offset!");
static_assert(offsetof(UITM_InfoBox_C, Open) == 0x0002C1, "Member 'UITM_InfoBox_C::Open' has a wrong offset!");

}

